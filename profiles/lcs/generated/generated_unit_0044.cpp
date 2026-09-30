#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0044[4092] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 5, 6, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 19, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0,
    22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 0,
    0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0,
    0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 56, 57, 0, 58, 0, 0, 0, 0, 59,
    0, 60, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 0,
    72, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 79, 0, 80, 0, 0, 81, 0, 0, 82, 0,
    0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 93,
    0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0,
    103, 0, 104, 0, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0, 0, 109, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 113,
    0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0,
    0, 136, 0, 137, 138, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 145, 146, 0, 147, 0, 148, 0, 0, 149, 0, 150, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 154, 0, 155, 0, 0, 156, 0, 157, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    166, 0, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0,
    0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 180,
    0, 181, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 186,
    0, 187, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 201, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 207, 0,
    208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 212, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0,
    217, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0,
    227, 0, 228, 0, 229, 0, 0, 0, 230, 0, 231, 0, 0, 232, 233, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 243, 0, 244,
    245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 250, 0, 251, 0, 252, 0, 0, 253, 0,
    0, 254, 0, 255, 0, 0, 0, 256, 0, 257, 0, 258, 0, 0, 0, 259, 0, 260, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 264,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 270, 0, 0, 271, 0, 272, 0, 0, 273, 0, 274, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 277,
    0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 281, 0, 282, 283, 0, 284, 0, 0, 0, 285, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 299, 0, 300, 0, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0,
    0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 0, 309, 0, 310, 0, 0, 311, 0, 312, 0, 313, 0, 314, 315, 0, 0, 316, 0,
    0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 321, 322, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 325,
    0, 326, 327, 0, 0, 328, 0, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0,
    0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 339, 0, 0, 340, 341, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 350, 0,
    0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0,
    0, 358, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    369, 0, 0, 370, 0, 371, 0, 372, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 378, 0,
    0, 379, 0, 380, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0,
    0, 387, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0,
    0, 0, 395, 396, 0, 0, 0, 0, 397, 398, 0, 0, 399, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 404, 0, 0, 0, 0,
    405, 0, 0, 0, 406, 0, 407, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0,
    0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 421, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 426,
    0, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 433, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0,
    0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0,
    0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0,
    457, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0,
    0, 468, 0, 0, 0, 469, 0, 470, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0,
    475, 0, 476, 0, 477, 0, 0, 478, 0, 479, 0, 0, 0, 480, 0, 0, 0, 481, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 491, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 496, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 503, 0, 0, 504, 0, 505, 0, 0, 506, 0, 507, 0, 508, 0, 509, 0, 0, 0,
    0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0,
    0, 517, 0, 518, 0, 519, 0, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 527, 0, 528, 0, 529, 0, 530, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 535, 0, 536, 0, 0, 0, 537, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0,
    546, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 0, 551, 0, 0, 0, 552, 0, 553, 0, 554, 0, 0,
    555, 0, 556, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 558, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 561, 562, 0, 563, 0, 0, 0,
    564, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 568, 0, 569, 0, 570, 0, 0, 571, 0, 0, 572, 0, 573, 0,
    574, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 582,
    0, 0, 583, 0, 0, 584, 0, 0, 585, 0, 586, 0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0,
    0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0,
    598, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 604, 0, 0, 605, 0, 606, 0, 0, 607, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0,
    611, 0, 612, 0, 0, 613, 614, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 618, 0, 619, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    622, 0, 0, 0, 0, 0, 623, 624, 0, 0, 0, 0, 0, 625, 626, 0, 0, 0, 0, 0, 627, 628, 0, 0, 0, 0, 0, 629, 630, 0, 0, 0,
    0, 0, 631, 632, 0, 0, 0, 0, 0, 633, 634, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 647, 648, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 651,
};
void recomp_unit_0044_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088B4000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0044[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B4000;
    case 2u: goto L_088B4018;
    case 3u: goto L_088B4028;
    case 4u: goto L_088B4030;
    case 5u: goto L_088B403C;
    case 6u: goto L_088B4040;
    case 7u: goto L_088B4048;
    case 8u: goto L_088B4064;
    case 9u: goto L_088B4080;
    case 10u: goto L_088B4094;
    case 11u: goto L_088B40C0;
    case 12u: goto L_088B4114;
    case 13u: goto L_088B4128;
    case 14u: goto L_088B413C;
    case 15u: goto L_088B415C;
    case 16u: goto L_088B4178;
    case 17u: goto L_088B41B4;
    case 18u: goto L_088B41C4;
    case 19u: goto L_088B41C8;
    case 20u: goto L_088B41D4;
    case 21u: goto L_088B41E4;
    case 22u: goto L_088B4200;
    case 23u: goto L_088B4224;
    case 24u: goto L_088B4238;
    case 25u: goto L_088B4240;
    case 26u: goto L_088B4258;
    case 27u: goto L_088B4268;
    case 28u: goto L_088B4280;
    case 29u: goto L_088B42A0;
    case 30u: goto L_088B42BC;
    case 31u: goto L_088B42C4;
    case 32u: goto L_088B42CC;
    case 33u: goto L_088B42DC;
    case 34u: goto L_088B42E4;
    case 35u: goto L_088B42F0;
    case 36u: goto L_088B430C;
    case 37u: goto L_088B431C;
    case 38u: goto L_088B4330;
    case 39u: goto L_088B4338;
    case 40u: goto L_088B434C;
    case 41u: goto L_088B4364;
    case 42u: goto L_088B438C;
    case 43u: goto L_088B4398;
    case 44u: goto L_088B43B0;
    case 45u: goto L_088B43BC;
    case 46u: goto L_088B43D4;
    case 47u: goto L_088B43E0;
    case 48u: goto L_088B43F4;
    case 49u: goto L_088B4408;
    case 50u: goto L_088B4418;
    case 51u: goto L_088B4428;
    case 52u: goto L_088B4430;
    case 53u: goto L_088B4438;
    case 54u: goto L_088B4444;
    case 55u: goto L_088B4454;
    case 56u: goto L_088B445C;
    case 57u: goto L_088B4460;
    case 58u: goto L_088B4468;
    case 59u: goto L_088B447C;
    case 60u: goto L_088B4484;
    case 61u: goto L_088B4498;
    case 62u: goto L_088B44A0;
    case 63u: goto L_088B44A8;
    case 64u: goto L_088B44B4;
    case 65u: goto L_088B44C0;
    case 66u: goto L_088B44C8;
    case 67u: goto L_088B44D0;
    case 68u: goto L_088B44D8;
    case 69u: goto L_088B44E0;
    case 70u: goto L_088B44EC;
    case 71u: goto L_088B44F4;
    case 72u: goto L_088B4500;
    case 73u: goto L_088B450C;
    case 74u: goto L_088B4524;
    case 75u: goto L_088B452C;
    case 76u: goto L_088B4538;
    case 77u: goto L_088B4540;
    case 78u: goto L_088B454C;
    case 79u: goto L_088B4558;
    case 80u: goto L_088B4560;
    case 81u: goto L_088B456C;
    case 82u: goto L_088B4578;
    case 83u: goto L_088B4584;
    case 84u: goto L_088B4590;
    case 85u: goto L_088B459C;
    case 86u: goto L_088B45A8;
    case 87u: goto L_088B45B4;
    case 88u: goto L_088B45C0;
    case 89u: goto L_088B45CC;
    case 90u: goto L_088B45D8;
    case 91u: goto L_088B45E4;
    case 92u: goto L_088B45F0;
    case 93u: goto L_088B45FC;
    case 94u: goto L_088B4604;
    case 95u: goto L_088B460C;
    case 96u: goto L_088B4614;
    case 97u: goto L_088B462C;
    case 98u: goto L_088B4634;
    case 99u: goto L_088B463C;
    case 100u: goto L_088B4658;
    case 101u: goto L_088B4660;
    case 102u: goto L_088B4674;
    case 103u: goto L_088B4680;
    case 104u: goto L_088B4688;
    case 105u: goto L_088B4694;
    case 106u: goto L_088B46A8;
    case 107u: goto L_088B46B0;
    case 108u: goto L_088B46B8;
    case 109u: goto L_088B46C4;
    case 110u: goto L_088B46CC;
    case 111u: goto L_088B46D8;
    case 112u: goto L_088B46F4;
    case 113u: goto L_088B46FC;
    case 114u: goto L_088B4704;
    case 115u: goto L_088B4714;
    case 116u: goto L_088B472C;
    case 117u: goto L_088B4750;
    case 118u: goto L_088B4758;
    case 119u: goto L_088B4790;
    case 120u: goto L_088B4798;
    case 121u: goto L_088B47A4;
    case 122u: goto L_088B4800;
    case 123u: goto L_088B4814;
    case 124u: goto L_088B481C;
    case 125u: goto L_088B482C;
    case 126u: goto L_088B4838;
    case 127u: goto L_088B4840;
    case 128u: goto L_088B4864;
    case 129u: goto L_088B48B4;
    case 130u: goto L_088B48BC;
    case 131u: goto L_088B48C0;
    case 132u: goto L_088B48C8;
    case 133u: goto L_088B48D0;
    case 134u: goto L_088B4904;
    case 135u: goto L_088B496C;
    case 136u: goto L_088B4984;
    case 137u: goto L_088B498C;
    case 138u: goto L_088B4990;
    case 139u: goto L_088B4998;
    case 140u: goto L_088B49A4;
    case 141u: goto L_088B49AC;
    case 142u: goto L_088B49C0;
    case 143u: goto L_088B4A0C;
    case 144u: goto L_088B4A88;
    case 145u: goto L_088B4A90;
    case 146u: goto L_088B4A94;
    case 147u: goto L_088B4A9C;
    case 148u: goto L_088B4AA4;
    case 149u: goto L_088B4AB0;
    case 150u: goto L_088B4AB8;
    case 151u: goto L_088B4ABC;
    case 152u: goto L_088B4AC4;
    case 153u: goto L_088B4ACC;
    case 154u: goto L_088B4B0C;
    case 155u: goto L_088B4B14;
    case 156u: goto L_088B4B20;
    case 157u: goto L_088B4B28;
    case 158u: goto L_088B4B2C;
    case 159u: goto L_088B4B34;
    case 160u: goto L_088B4B3C;
    case 161u: goto L_088B4B44;
    case 162u: goto L_088B4B4C;
    case 163u: goto L_088B4C38;
    case 164u: goto L_088B4C68;
    case 165u: goto L_088B5354;
    case 166u: goto L_088B5380;
    case 167u: goto L_088B5390;
    case 168u: goto L_088B539C;
    case 169u: goto L_088B53A4;
    case 170u: goto L_088B53D0;
    case 171u: goto L_088B53E0;
    case 172u: goto L_088B53EC;
    case 173u: goto L_088B53F4;
    case 174u: goto L_088B540C;
    case 175u: goto L_088B54A0;
    case 176u: goto L_088B54CC;
    case 177u: goto L_088B54D8;
    case 178u: goto L_088B54E0;
    case 179u: goto L_088B54F4;
    case 180u: goto L_088B54FC;
    case 181u: goto L_088B5504;
    case 182u: goto L_088B5508;
    case 183u: goto L_088B5510;
    case 184u: goto L_088B5558;
    case 185u: goto L_088B5568;
    case 186u: goto L_088B557C;
    case 187u: goto L_088B5584;
    case 188u: goto L_088B558C;
    case 189u: goto L_088B5594;
    case 190u: goto L_088B55D4;
    case 191u: goto L_088B55DC;
    case 192u: goto L_088B55E4;
    case 193u: goto L_088B55EC;
    case 194u: goto L_088B560C;
    case 195u: goto L_088B5614;
    case 196u: goto L_088B561C;
    case 197u: goto L_088B562C;
    case 198u: goto L_088B563C;
    case 199u: goto L_088B5664;
    case 200u: goto L_088B566C;
    case 201u: goto L_088B5674;
    case 202u: goto L_088B5688;
    case 203u: goto L_088B56C4;
    case 204u: goto L_088B56D4;
    case 205u: goto L_088B56E0;
    case 206u: goto L_088B56F0;
    case 207u: goto L_088B56F8;
    case 208u: goto L_088B5700;
    case 209u: goto L_088B5714;
    case 210u: goto L_088B5750;
    case 211u: goto L_088B5758;
    case 212u: goto L_088B575C;
    case 213u: goto L_088B5798;
    case 214u: goto L_088B57C0;
    case 215u: goto L_088B57E8;
    case 216u: goto L_088B57F8;
    case 217u: goto L_088B5800;
    case 218u: goto L_088B5808;
    case 219u: goto L_088B5814;
    case 220u: goto L_088B5828;
    case 221u: goto L_088B5830;
    case 222u: goto L_088B5840;
    case 223u: goto L_088B5854;
    case 224u: goto L_088B585C;
    case 225u: goto L_088B5868;
    case 226u: goto L_088B5874;
    case 227u: goto L_088B5880;
    case 228u: goto L_088B5888;
    case 229u: goto L_088B5890;
    case 230u: goto L_088B58A0;
    case 231u: goto L_088B58A8;
    case 232u: goto L_088B58B4;
    case 233u: goto L_088B58B8;
    case 234u: goto L_088B58C4;
    case 235u: goto L_088B58DC;
    case 236u: goto L_088B5910;
    case 237u: goto L_088B591C;
    case 238u: goto L_088B5928;
    case 239u: goto L_088B5934;
    case 240u: goto L_088B594C;
    case 241u: goto L_088B5954;
    case 242u: goto L_088B596C;
    case 243u: goto L_088B5974;
    case 244u: goto L_088B597C;
    case 245u: goto L_088B5980;
    case 246u: goto L_088B598C;
    case 247u: goto L_088B59AC;
    case 248u: goto L_088B59C4;
    case 249u: goto L_088B59D4;
    case 250u: goto L_088B59DC;
    case 251u: goto L_088B59E4;
    case 252u: goto L_088B59EC;
    case 253u: goto L_088B59F8;
    case 254u: goto L_088B5A04;
    case 255u: goto L_088B5A0C;
    case 256u: goto L_088B5A1C;
    case 257u: goto L_088B5A24;
    case 258u: goto L_088B5A2C;
    case 259u: goto L_088B5A3C;
    case 260u: goto L_088B5A44;
    case 261u: goto L_088B5A4C;
    case 262u: goto L_088B5A5C;
    case 263u: goto L_088B5A74;
    case 264u: goto L_088B5A7C;
    case 265u: goto L_088B5AA4;
    case 266u: goto L_088B5AB0;
    case 267u: goto L_088B5AC4;
    case 268u: goto L_088B5ACC;
    case 269u: goto L_088B5B0C;
    case 270u: goto L_088B5B14;
    case 271u: goto L_088B5B20;
    case 272u: goto L_088B5B28;
    case 273u: goto L_088B5B34;
    case 274u: goto L_088B5B3C;
    case 275u: goto L_088B5B40;
    case 276u: goto L_088B5B74;
    case 277u: goto L_088B5B7C;
    case 278u: goto L_088B5B9C;
    case 279u: goto L_088B5BBC;
    case 280u: goto L_088B5BC4;
    case 281u: goto L_088B5BD0;
    case 282u: goto L_088B5BD8;
    case 283u: goto L_088B5BDC;
    case 284u: goto L_088B5BE4;
    case 285u: goto L_088B5BF4;
    case 286u: goto L_088B5C10;
    case 287u: goto L_088B5C24;
    case 288u: goto L_088B5C2C;
    case 289u: goto L_088B5C34;
    case 290u: goto L_088B5C58;
    case 291u: goto L_088B5C68;
    case 292u: goto L_088B5C80;
    case 293u: goto L_088B5C88;
    case 294u: goto L_088B5CB0;
    case 295u: goto L_088B5CD4;
    case 296u: goto L_088B5D04;
    case 297u: goto L_088B5D20;
    case 298u: goto L_088B5D28;
    case 299u: goto L_088B5D30;
    case 300u: goto L_088B5D38;
    case 301u: goto L_088B5D44;
    case 302u: goto L_088B5D4C;
    case 303u: goto L_088B5D60;
    case 304u: goto L_088B5D6C;
    case 305u: goto L_088B5D84;
    case 306u: goto L_088B5D94;
    case 307u: goto L_088B5DA4;
    case 308u: goto L_088B5DAC;
    case 309u: goto L_088B5DBC;
    case 310u: goto L_088B5DC4;
    case 311u: goto L_088B5DD0;
    case 312u: goto L_088B5DD8;
    case 313u: goto L_088B5DE0;
    case 314u: goto L_088B5DE8;
    case 315u: goto L_088B5DEC;
    case 316u: goto L_088B5DF8;
    case 317u: goto L_088B5E0C;
    case 318u: goto L_088B5E18;
    case 319u: goto L_088B5E30;
    case 320u: goto L_088B5E40;
    case 321u: goto L_088B5E4C;
    case 322u: goto L_088B5E50;
    case 323u: goto L_088B5E5C;
    case 324u: goto L_088B5E74;
    case 325u: goto L_088B5E7C;
    case 326u: goto L_088B5E84;
    case 327u: goto L_088B5E88;
    case 328u: goto L_088B5E94;
    case 329u: goto L_088B5EA0;
    case 330u: goto L_088B5EA8;
    case 331u: goto L_088B5EB0;
    case 332u: goto L_088B5EB8;
    case 333u: goto L_088B5EC0;
    case 334u: goto L_088B5EC4;
    case 335u: goto L_088B5ECC;
    case 336u: goto L_088B5EEC;
    case 337u: goto L_088B5F0C;
    case 338u: goto L_088B5F28;
    case 339u: goto L_088B5F2C;
    case 340u: goto L_088B5F38;
    case 341u: goto L_088B5F3C;
    case 342u: goto L_088B5F50;
    case 343u: goto L_088B5F58;
    case 344u: goto L_088B5F74;
    case 345u: goto L_088B5FA4;
    case 346u: goto L_088B5FB4;
    case 347u: goto L_088B5FC4;
    case 348u: goto L_088B5FD8;
    case 349u: goto L_088B5FEC;
    case 350u: goto L_088B5FF8;
    case 351u: goto L_088B6004;
    case 352u: goto L_088B6030;
    case 353u: goto L_088B603C;
    case 354u: goto L_088B6044;
    case 355u: goto L_088B6054;
    case 356u: goto L_088B606C;
    case 357u: goto L_088B6074;
    case 358u: goto L_088B6084;
    case 359u: goto L_088B6088;
    case 360u: goto L_088B60A0;
    case 361u: goto L_088B60B4;
    case 362u: goto L_088B60D4;
    case 363u: goto L_088B60F0;
    case 364u: goto L_088B60F8;
    case 365u: goto L_088B6124;
    case 366u: goto L_088B6130;
    case 367u: goto L_088B614C;
    case 368u: goto L_088B6154;
    case 369u: goto L_088B6180;
    case 370u: goto L_088B618C;
    case 371u: goto L_088B6194;
    case 372u: goto L_088B619C;
    case 373u: goto L_088B61A4;
    case 374u: goto L_088B61AC;
    case 375u: goto L_088B61C8;
    case 376u: goto L_088B61D8;
    case 377u: goto L_088B61E4;
    case 378u: goto L_088B61F8;
    case 379u: goto L_088B6204;
    case 380u: goto L_088B620C;
    case 381u: goto L_088B6210;
    case 382u: goto L_088B6224;
    case 383u: goto L_088B6264;
    case 384u: goto L_088B6340;
    case 385u: goto L_088B6358;
    case 386u: goto L_088B6360;
    case 387u: goto L_088B6384;
    case 388u: goto L_088B638C;
    case 389u: goto L_088B63A0;
    case 390u: goto L_088B63B0;
    case 391u: goto L_088B63C0;
    case 392u: goto L_088B63C8;
    case 393u: goto L_088B63E0;
    case 394u: goto L_088B63F0;
    case 395u: goto L_088B6408;
    case 396u: goto L_088B640C;
    case 397u: goto L_088B6420;
    case 398u: goto L_088B6424;
    case 399u: goto L_088B6430;
    case 400u: goto L_088B6438;
    case 401u: goto L_088B6440;
    case 402u: goto L_088B645C;
    case 403u: goto L_088B6468;
    case 404u: goto L_088B646C;
    case 405u: goto L_088B6480;
    case 406u: goto L_088B6490;
    case 407u: goto L_088B6498;
    case 408u: goto L_088B64A0;
    case 409u: goto L_088B64B0;
    case 410u: goto L_088B64BC;
    case 411u: goto L_088B64C4;
    case 412u: goto L_088B64EC;
    case 413u: goto L_088B64F4;
    case 414u: goto L_088B6508;
    case 415u: goto L_088B6510;
    case 416u: goto L_088B652C;
    case 417u: goto L_088B6534;
    case 418u: goto L_088B653C;
    case 419u: goto L_088B655C;
    case 420u: goto L_088B6564;
    case 421u: goto L_088B658C;
    case 422u: goto L_088B6594;
    case 423u: goto L_088B65A0;
    case 424u: goto L_088B65CC;
    case 425u: goto L_088B65EC;
    case 426u: goto L_088B65FC;
    case 427u: goto L_088B6608;
    case 428u: goto L_088B6610;
    case 429u: goto L_088B6618;
    case 430u: goto L_088B6620;
    case 431u: goto L_088B6628;
    case 432u: goto L_088B6630;
    case 433u: goto L_088B6634;
    case 434u: goto L_088B6644;
    case 435u: goto L_088B6654;
    case 436u: goto L_088B6678;
    case 437u: goto L_088B6684;
    case 438u: goto L_088B6690;
    case 439u: goto L_088B669C;
    case 440u: goto L_088B66A8;
    case 441u: goto L_088B66B4;
    case 442u: goto L_088B6718;
    case 443u: goto L_088B6734;
    case 444u: goto L_088B6748;
    case 445u: goto L_088B6774;
    case 446u: goto L_088B67A0;
    case 447u: goto L_088B67A8;
    case 448u: goto L_088B67B0;
    case 449u: goto L_088B67C0;
    case 450u: goto L_088B67E8;
    case 451u: goto L_088B67F8;
    case 452u: goto L_088B6810;
    case 453u: goto L_088B682C;
    case 454u: goto L_088B6830;
    case 455u: goto L_088B686C;
    case 456u: goto L_088B6878;
    case 457u: goto L_088B6880;
    case 458u: goto L_088B689C;
    case 459u: goto L_088B68A4;
    case 460u: goto L_088B68D8;
    case 461u: goto L_088B6980;
    case 462u: goto L_088B698C;
    case 463u: goto L_088B6A20;
    case 464u: goto L_088B6A28;
    case 465u: goto L_088B6A44;
    case 466u: goto L_088B6A4C;
    case 467u: goto L_088B6A78;
    case 468u: goto L_088B6A84;
    case 469u: goto L_088B6A94;
    case 470u: goto L_088B6A9C;
    case 471u: goto L_088B6AA0;
    case 472u: goto L_088B6AA8;
    case 473u: goto L_088B6AE0;
    case 474u: goto L_088B6AF0;
    case 475u: goto L_088B6B00;
    case 476u: goto L_088B6B08;
    case 477u: goto L_088B6B10;
    case 478u: goto L_088B6B1C;
    case 479u: goto L_088B6B24;
    case 480u: goto L_088B6B34;
    case 481u: goto L_088B6B44;
    case 482u: goto L_088B6B4C;
    case 483u: goto L_088B6B5C;
    case 484u: goto L_088B6B6C;
    case 485u: goto L_088B6B98;
    case 486u: goto L_088B6BB4;
    case 487u: goto L_088B6BDC;
    case 488u: goto L_088B6BF0;
    case 489u: goto L_088B6C1C;
    case 490u: goto L_088B6C24;
    case 491u: goto L_088B6C2C;
    case 492u: goto L_088B6C38;
    case 493u: goto L_088B6C40;
    case 494u: goto L_088B6C64;
    case 495u: goto L_088B6C70;
    case 496u: goto L_088B6C74;
    case 497u: goto L_088B6C9C;
    case 498u: goto L_088B6CCC;
    case 499u: goto L_088B6CD8;
    case 500u: goto L_088B6D08;
    case 501u: goto L_088B6D28;
    case 502u: goto L_088B6D30;
    case 503u: goto L_088B6D38;
    case 504u: goto L_088B6D44;
    case 505u: goto L_088B6D4C;
    case 506u: goto L_088B6D58;
    case 507u: goto L_088B6D60;
    case 508u: goto L_088B6D68;
    case 509u: goto L_088B6D70;
    case 510u: goto L_088B6D88;
    case 511u: goto L_088B6D98;
    case 512u: goto L_088B6DB0;
    case 513u: goto L_088B6DB8;
    case 514u: goto L_088B6DC0;
    case 515u: goto L_088B6DDC;
    case 516u: goto L_088B6DEC;
    case 517u: goto L_088B6E04;
    case 518u: goto L_088B6E0C;
    case 519u: goto L_088B6E14;
    case 520u: goto L_088B6E24;
    case 521u: goto L_088B6E30;
    case 522u: goto L_088B6E3C;
    case 523u: goto L_088B6E64;
    case 524u: goto L_088B6E78;
    case 525u: goto L_088B6EA4;
    case 526u: goto L_088B6EAC;
    case 527u: goto L_088B6EB8;
    case 528u: goto L_088B6EC0;
    case 529u: goto L_088B6EC8;
    case 530u: goto L_088B6ED0;
    case 531u: goto L_088B6ED4;
    case 532u: goto L_088B6EF8;
    case 533u: goto L_088B6F8C;
    case 534u: goto L_088B6FD0;
    case 535u: goto L_088B6FD8;
    case 536u: goto L_088B6FE0;
    case 537u: goto L_088B6FF0;
    case 538u: goto L_088B701C;
    case 539u: goto L_088B7034;
    case 540u: goto L_088B703C;
    case 541u: goto L_088B7054;
    case 542u: goto L_088B705C;
    case 543u: goto L_088B706C;
    case 544u: goto L_088B7770;
    case 545u: goto L_088B7778;
    case 546u: goto L_088B7780;
    case 547u: goto L_088B778C;
    case 548u: goto L_088B7798;
    case 549u: goto L_088B77C0;
    case 550u: goto L_088B77C8;
    case 551u: goto L_088B77D4;
    case 552u: goto L_088B77E4;
    case 553u: goto L_088B77EC;
    case 554u: goto L_088B77F4;
    case 555u: goto L_088B7800;
    case 556u: goto L_088B7808;
    case 557u: goto L_088B7818;
    case 558u: goto L_088B7838;
    case 559u: goto L_088B7840;
    case 560u: goto L_088B7848;
    case 561u: goto L_088B7864;
    case 562u: goto L_088B7868;
    case 563u: goto L_088B7870;
    case 564u: goto L_088B7880;
    case 565u: goto L_088B7888;
    case 566u: goto L_088B78A8;
    case 567u: goto L_088B78B0;
    case 568u: goto L_088B78C8;
    case 569u: goto L_088B78D0;
    case 570u: goto L_088B78D8;
    case 571u: goto L_088B78E4;
    case 572u: goto L_088B78F0;
    case 573u: goto L_088B78F8;
    case 574u: goto L_088B7900;
    case 575u: goto L_088B7910;
    case 576u: goto L_088B7920;
    case 577u: goto L_088B7938;
    case 578u: goto L_088B7948;
    case 579u: goto L_088B795C;
    case 580u: goto L_088B7968;
    case 581u: goto L_088B7974;
    case 582u: goto L_088B797C;
    case 583u: goto L_088B7988;
    case 584u: goto L_088B7994;
    case 585u: goto L_088B79A0;
    case 586u: goto L_088B79A8;
    case 587u: goto L_088B79B4;
    case 588u: goto L_088B79BC;
    case 589u: goto L_088B79D8;
    case 590u: goto L_088B79EC;
    case 591u: goto L_088B7A70;
    case 592u: goto L_088B7A90;
    case 593u: goto L_088B7AA8;
    case 594u: goto L_088B7AB4;
    case 595u: goto L_088B7ABC;
    case 596u: goto L_088B7AD0;
    case 597u: goto L_088B7AEC;
    case 598u: goto L_088B7B00;
    case 599u: goto L_088B7B08;
    case 600u: goto L_088B7B1C;
    case 601u: goto L_088B7B34;
    case 602u: goto L_088B7B4C;
    case 603u: goto L_088B7B54;
    case 604u: goto L_088B7B88;
    case 605u: goto L_088B7B94;
    case 606u: goto L_088B7B9C;
    case 607u: goto L_088B7BA8;
    case 608u: goto L_088B7BB0;
    case 609u: goto L_088B7BC4;
    case 610u: goto L_088B7BE8;
    case 611u: goto L_088B7C00;
    case 612u: goto L_088B7C08;
    case 613u: goto L_088B7C14;
    case 614u: goto L_088B7C18;
    case 615u: goto L_088B7C24;
    case 616u: goto L_088B7C50;
    case 617u: goto L_088B7C58;
    case 618u: goto L_088B7C60;
    case 619u: goto L_088B7C68;
    case 620u: goto L_088B7C98;
    case 621u: goto L_088B7CA0;
    case 622u: goto L_088B7D00;
    case 623u: goto L_088B7D18;
    case 624u: goto L_088B7D1C;
    case 625u: goto L_088B7D34;
    case 626u: goto L_088B7D38;
    case 627u: goto L_088B7D50;
    case 628u: goto L_088B7D54;
    case 629u: goto L_088B7D6C;
    case 630u: goto L_088B7D70;
    case 631u: goto L_088B7D88;
    case 632u: goto L_088B7D8C;
    case 633u: goto L_088B7DA4;
    case 634u: goto L_088B7DA8;
    case 635u: goto L_088B7DBC;
    case 636u: goto L_088B7DC4;
    case 637u: goto L_088B7E18;
    case 638u: goto L_088B7E34;
    case 639u: goto L_088B7E50;
    case 640u: goto L_088B7ED0;
    case 641u: goto L_088B7ED8;
    case 642u: goto L_088B7F10;
    case 643u: goto L_088B7F1C;
    case 644u: goto L_088B7F38;
    case 645u: goto L_088B7F44;
    case 646u: goto L_088B7FA8;
    case 647u: goto L_088B7FAC;
    case 648u: goto L_088B7FB0;
    case 649u: goto L_088B7FB4;
    case 650u: goto L_088B7FDC;
    case 651u: goto L_088B7FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B4000:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4030;
      }
      goto L_088B4018;
    }
L_088B4018:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B4028u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 263u, 0x0886522Cu>(ctx, &aot_mem) && ctx.pc == 0x088B4028u) goto L_088B4028;
    return;
L_088B4028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088B4040;
      }
      goto L_088B4030;
    }
L_088B4030:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088B403Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 253u, 0x08865188u>(ctx, &aot_mem) && ctx.pc == 0x088B403Cu) goto L_088B403C;
    return;
L_088B403C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088B4040;
L_088B4040:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4080;
      }
      goto L_088B4048;
    }
L_088B4048:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088B4080;
      }
      goto L_088B4064;
    }
L_088B4064:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088B4080u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 652u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x088B4080u) goto L_088B4080;
    return;
L_088B4080:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 882u, 0x088B3FF8u>(ctx, &aot_mem); return;
      }
      goto L_088B4094;
    }
L_088B4094:
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
L_088B40C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B4114u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_088B4178;
L_088B4114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088B415C;
      }
      goto L_088B4128;
    }
L_088B4128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088B413Cu);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 646u, 0x08A92EB4u>(ctx, &aot_mem) && ctx.pc == 0x088B413Cu) goto L_088B413C;
    return;
L_088B413C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088B4128;
      }
      goto L_088B415C;
    }
L_088B415C:
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
L_088B4178:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x088B41B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 697u, 0x08AA3448u>(ctx, &aot_mem) && ctx.pc == 0x088B41B4u) goto L_088B41B4;
    return;
L_088B41B4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088B41E4;
      }
      goto L_088B41C4;
    }
L_088B41C4:
    ctx.gpr[18] = (0u | 0u);
    goto L_088B41C8;
L_088B41C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x088B41D4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 648u, 0x08A92F14u>(ctx, &aot_mem) && ctx.pc == 0x088B41D4u) goto L_088B41D4;
    return;
L_088B41D4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088B41C8;
      }
      goto L_088B41E4;
    }
L_088B41E4:
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
L_088B4200:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4268;
      }
      goto L_088B4224;
    }
L_088B4224:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088B4258;
      }
      goto L_088B4238;
    }
L_088B4238:
    ctx.gpr[31] = (0x088B4240u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 649u, 0x08A92F34u>(ctx, &aot_mem) && ctx.pc == 0x088B4240u) goto L_088B4240;
    return;
L_088B4240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088B4238;
      }
      goto L_088B4258;
    }
L_088B4258:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x088B4268u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088B4268u) goto L_088B4268;
    return;
L_088B4268:
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
L_088B4280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[12])) && ctx.fpr[12] == ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B42C4;
      }
      goto L_088B42A0;
    }
L_088B42A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088B42CC;
      }
      goto L_088B42BC;
    }
L_088B42BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B430C;
      }
      goto L_088B42C4;
    }
L_088B42C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B434C;
      }
      goto L_088B42CC;
    }
L_088B42CC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_088B42DC;
L_088B42DC:
    if (ctx.gpr[5] != 0u) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
        goto L_088B42F0;
    }
    goto L_088B42E4;
L_088B42E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088B430C;
      }
      goto L_088B42F0;
    }
L_088B42F0:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B42DC;
      }
      goto L_088B430C;
    }
L_088B430C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088B434C;
      }
      goto L_088B431C;
    }
L_088B431C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4338;
      }
      goto L_088B4330;
    }
L_088B4330:
    ctx.gpr[31] = (0x088B4338u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 656u, 0x08A92FF0u>(ctx, &aot_mem) && ctx.pc == 0x088B4338u) goto L_088B4338;
    return;
L_088B4338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_088B431C;
      }
      goto L_088B434C;
    }
L_088B434C:
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
L_088B4364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x088B438Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_088B4280;
L_088B438C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4398:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B43B0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B43BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    ctx.gpr[31] = (0x088B43D4u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088B4280;
L_088B43D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B43E0:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B43F4:
    ctx.gpr[7] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4408:
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 192 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4430;
      }
      goto L_088B4418;
    }
L_088B4418:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4454;
      }
      goto L_088B4428;
    }
L_088B4428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4438;
      }
      goto L_088B4430;
    }
L_088B4430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B4460;
      }
      goto L_088B4438;
    }
L_088B4438:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088B445C;
      }
      goto L_088B4444;
    }
L_088B4444:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088B4438;
      }
      goto L_088B4454;
    }
L_088B4454:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B4460;
      }
      goto L_088B445C;
    }
L_088B445C:
    ctx.gpr[2] = (ctx.gpr[7] & 65535u);
    goto L_088B4460;
L_088B4460:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4468:
    ctx.gpr[2] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B44A0;
      }
      goto L_088B447C;
    }
L_088B447C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B44A8;
      }
      goto L_088B4484;
    }
L_088B4484:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17256));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-256)));
    goto L_088B4498;
L_088B4498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4634;
      }
      goto L_088B44A0;
    }
L_088B44A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4634;
      }
      goto L_088B44A8;
    }
L_088B44A8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8216 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8251 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B44EC;
      }
      goto L_088B44B4;
    }
L_088B44B4:
    ctx.gpr[4] = (0u | 732u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 710u);
      if (branch_taken) {
          goto L_088B45C0;
      }
      goto L_088B44C0;
    }
L_088B44C0:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 376u);
      if (branch_taken) {
          goto L_088B4584;
      }
      goto L_088B44C8;
    }
L_088B44C8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 339u);
      if (branch_taken) {
          goto L_088B45E4;
      }
      goto L_088B44D0;
    }
L_088B44D0:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 338u);
      if (branch_taken) {
          goto L_088B45D8;
      }
      goto L_088B44D8;
    }
L_088B44D8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B45F0;
      }
      goto L_088B44E0;
    }
L_088B44E0:
    ctx.gpr[2] = (0u | 140u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B44EC;
    }
L_088B44EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8365 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B4538;
      }
      goto L_088B44F4;
    }
L_088B44F4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8249 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8250 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B4524;
      }
      goto L_088B4500;
    }
L_088B4500:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8223 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-8216));
      if (branch_taken) {
          goto L_088B45F0;
      }
      goto L_088B450C;
    }
L_088B450C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(8128)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4524:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B45CC;
      }
      goto L_088B452C;
    }
L_088B452C:
    ctx.gpr[2] = (0u | 139u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B4538;
    }
L_088B4538:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 8482u);
      if (branch_taken) {
          goto L_088B4558;
      }
      goto L_088B4540;
    }
L_088B4540:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8364 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B45F0;
      }
      goto L_088B454C;
    }
L_088B454C:
    ctx.gpr[2] = (0u | 128u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B4558;
    }
L_088B4558:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B45F0;
      }
      goto L_088B4560;
    }
L_088B4560:
    ctx.gpr[2] = (0u | 153u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B456C;
    }
L_088B456C:
    ctx.gpr[2] = (0u | 130u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B4578;
    }
L_088B4578:
    ctx.gpr[2] = (0u | 132u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B4584;
    }
L_088B4584:
    ctx.gpr[2] = (0u | 136u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B4590;
    }
L_088B4590:
    ctx.gpr[2] = (0u | 145u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B459C;
    }
L_088B459C:
    ctx.gpr[2] = (0u | 146u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B45A8;
    }
L_088B45A8:
    ctx.gpr[2] = (0u | 147u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B45B4;
    }
L_088B45B4:
    ctx.gpr[2] = (0u | 148u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B45C0;
    }
L_088B45C0:
    ctx.gpr[2] = (0u | 152u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B45CC;
    }
L_088B45CC:
    ctx.gpr[2] = (0u | 155u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B45D8;
    }
L_088B45D8:
    ctx.gpr[2] = (0u | 156u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B45E4;
    }
L_088B45E4:
    ctx.gpr[2] = (0u | 159u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B45F0;
    }
L_088B45F0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4604;
      }
      goto L_088B45FC;
    }
L_088B45FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 192 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B460C;
      }
      goto L_088B4604;
    }
L_088B4604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B4634;
      }
      goto L_088B460C;
    }
L_088B460C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B462C;
      }
      goto L_088B4614;
    }
L_088B4614:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17128));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-256)));
      if (branch_taken) {
          goto L_088B4498;
      }
      goto L_088B462C;
    }
L_088B462C:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    goto L_088B4634;
L_088B4634:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B463C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < 128 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4680;
      }
      goto L_088B4658;
    }
L_088B4658:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B4688;
      }
      goto L_088B4660;
    }
L_088B4660:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[31] = (0x088B4674u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17256));
    goto L_088B4408;
L_088B4674:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
      if (branch_taken) {
          goto L_088B46CC;
      }
      goto L_088B4680;
    }
L_088B4680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B46CC;
      }
      goto L_088B4688;
    }
L_088B4688:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 192 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B46B8;
      }
      goto L_088B4694;
    }
L_088B4694:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x088B46A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17128));
    goto L_088B4408;
L_088B46A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B46C4;
      }
      goto L_088B46B0;
    }
L_088B46B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B46CC;
      }
      goto L_088B46B8;
    }
L_088B46B8:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
      if (branch_taken) {
          goto L_088B46CC;
      }
      goto L_088B46C4;
    }
L_088B46C4:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(128));
    ctx.gpr[2] = (ctx.gpr[2] & 65535u);
    goto L_088B46CC;
L_088B46CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B46D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19544)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B46FC;
      }
      goto L_088B46F4;
    }
L_088B46F4:
    ctx.gpr[31] = (0x088B46FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 132u, 0x08B0092Cu>(ctx, &aot_mem) && ctx.pc == 0x088B46FCu) goto L_088B46FC;
    return;
L_088B46FC:
    ctx.gpr[31] = (0x088B4704u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-19544)));
    goto L_088B47A4;
L_088B4704:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4714:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x088B472Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 127u, 0x08B008CCu>(ctx, &aot_mem) && ctx.pc == 0x088B472Cu) goto L_088B472C;
    return;
L_088B472C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088B4790;
      }
      goto L_088B4750;
    }
L_088B4750:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_088B4758;
L_088B4758:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
        goto L_088B4758;
    }
    goto L_088B4790;
L_088B4790:
    ctx.gpr[31] = (0x088B4798u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 127u, 0x08B008CCu>(ctx, &aot_mem) && ctx.pc == 0x088B4798u) goto L_088B4798;
    return;
L_088B4798:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B47A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[5] = (0u | 65535u);
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[18] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B4814;
      }
      goto L_088B4800;
    }
L_088B4800:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B482C;
      }
      goto L_088B4814;
    }
L_088B4814:
    ctx.gpr[31] = (0x088B481Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x088B481Cu) goto L_088B481C;
    return;
L_088B481C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_088B482C;
L_088B482C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.gpr[31] = (0x088B4838u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B4C68;
L_088B4838:
    ctx.gpr[31] = (0x088B4840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 222u, 0x08AA98E0u>(ctx, &aot_mem) && ctx.pc == 0x088B4840u) goto L_088B4840;
    return;
L_088B4840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (5888u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(21108), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088B4864u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 388u, 0x0890EB70u>(ctx, &aot_mem) && ctx.pc == 0x088B4864u) goto L_088B4864;
    return;
L_088B4864:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (18944u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[6] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (19200u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B48C0;
      }
      goto L_088B48B4;
    }
L_088B48B4:
    ctx.gpr[31] = (0x088B48BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x088B48BCu) goto L_088B48BC;
    return;
L_088B48BC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20156)));
    goto L_088B48C0;
L_088B48C0:
    ctx.gpr[31] = (0x088B48C8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 67u, 0x08950490u>(ctx, &aot_mem) && ctx.pc == 0x088B48C8u) goto L_088B48C8;
    return;
L_088B48C8:
    ctx.gpr[31] = (0x088B48D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 79u, 0x0883C5B0u>(ctx, &aot_mem) && ctx.pc == 0x088B48D0u) goto L_088B48D0;
    return;
L_088B48D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (8960u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x088B4904u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 407u, 0x08A7F278u>(ctx, &aot_mem) && ctx.pc == 0x088B4904u) goto L_088B4904;
    return;
L_088B4904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (9216u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (56576u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (56578u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(514));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_088B49C0;
      }
      goto L_088B496C;
    }
L_088B496C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_088B498C;
    }
    goto L_088B4984;
L_088B4984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088B4990;
      }
      goto L_088B498C;
    }
L_088B498C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_088B4990;
L_088B4990:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B49AC;
      }
      goto L_088B4998;
    }
L_088B4998:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088B49AC;
      }
      goto L_088B49A4;
    }
L_088B49A4:
    ctx.gpr[31] = (0x088B49ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 606u, 0x08A52C68u>(ctx, &aot_mem) && ctx.pc == 0x088B49ACu) goto L_088B49AC;
    return;
L_088B49AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1760));
      if (branch_taken) {
          goto L_088B496C;
      }
      goto L_088B49C0;
    }
L_088B49C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (8960u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (56576u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-253));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (56576u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088B4A0Cu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 8u, 0x08910114u>(ctx, &aot_mem) && ctx.pc == 0x088B4A0Cu) goto L_088B4A0C;
    return;
L_088B4A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (56576u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (56578u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(514));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (9216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7764), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (5888u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(21108), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4A94;
      }
      goto L_088B4A88;
    }
L_088B4A88:
    ctx.gpr[31] = (0x088B4A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x088B4A90u) goto L_088B4A90;
    return;
L_088B4A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20156)));
    goto L_088B4A94;
L_088B4A94:
    ctx.gpr[31] = (0x088B4A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 99u, 0x08950804u>(ctx, &aot_mem) && ctx.pc == 0x088B4A9Cu) goto L_088B4A9C;
    return;
L_088B4A9C:
    ctx.gpr[31] = (0x088B4AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 224u, 0x08AA9918u>(ctx, &aot_mem) && ctx.pc == 0x088B4AA4u) goto L_088B4AA4;
    return;
L_088B4AA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4ABC;
      }
      goto L_088B4AB0;
    }
L_088B4AB0:
    ctx.gpr[31] = (0x088B4AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x088B4AB8u) goto L_088B4AB8;
    return;
L_088B4AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20156)));
    goto L_088B4ABC;
L_088B4ABC:
    ctx.gpr[31] = (0x088B4AC4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 50u, 0x08954344u>(ctx, &aot_mem) && ctx.pc == 0x088B4AC4u) goto L_088B4AC4;
    return;
L_088B4AC4:
    ctx.gpr[31] = (0x088B4ACCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B4C68;
L_088B4ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (51200u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (5888u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(21108), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088B4B0Cu);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 227u, 0x08AA9968u>(ctx, &aot_mem) && ctx.pc == 0x088B4B0Cu) goto L_088B4B0C;
    return;
L_088B4B0C:
    ctx.gpr[31] = (0x088B4B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 578u, 0x089FBB54u>(ctx, &aot_mem) && ctx.pc == 0x088B4B14u) goto L_088B4B14;
    return;
L_088B4B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B4B2C;
      }
      goto L_088B4B20;
    }
L_088B4B20:
    ctx.gpr[31] = (0x088B4B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x088B4B28u) goto L_088B4B28;
    return;
L_088B4B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20156)));
    goto L_088B4B2C;
L_088B4B2C:
    ctx.gpr[31] = (0x088B4B34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 50u, 0x08954344u>(ctx, &aot_mem) && ctx.pc == 0x088B4B34u) goto L_088B4B34;
    return;
L_088B4B34:
    ctx.gpr[31] = (0x088B4B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 246u, 0x08AA9AE8u>(ctx, &aot_mem) && ctx.pc == 0x088B4B3Cu) goto L_088B4B3C;
    return;
L_088B4B3C:
    ctx.gpr[31] = (0x088B4B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 258u, 0x08AA9BD4u>(ctx, &aot_mem) && ctx.pc == 0x088B4B44u) goto L_088B4B44;
    return;
L_088B4B44:
    ctx.gpr[31] = (0x088B4B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 276u, 0x08AA9D78u>(ctx, &aot_mem) && ctx.pc == 0x088B4B4Cu) goto L_088B4B4C;
    return;
L_088B4B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (51440u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (18432u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (18688u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (22016u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (22272u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (23808u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (21504u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x088B4C38u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    goto L_088B4C68;
L_088B4C38:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B4C68:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (7168u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (21248u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (21504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (22016u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (22528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (22528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (22272u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (57088u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (57600u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (8448u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (56319u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2054));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (8704u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (56832u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (8960u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (59136u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (9216u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (39680u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (7424u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (20480u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (9472u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (23552u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (23808u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (23296u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (24320u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[6]);
    ctx.gpr[6] = (25344u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[6]);
    ctx.gpr[6] = (25600u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (25856u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (24576u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[6]);
    ctx.gpr[6] = (26112u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[6]);
    ctx.gpr[6] = (26368u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[6]);
    ctx.gpr[6] = (26624u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (24832u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[6]);
    ctx.gpr[6] = (26880u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[6]);
    ctx.gpr[6] = (27136u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[6]);
    ctx.gpr[6] = (27392u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (25088u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[6]);
    ctx.gpr[6] = (27648u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[6]);
    ctx.gpr[6] = (27904u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[6]);
    ctx.gpr[6] = (28160u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (6144u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (6400u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (6656u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (6912u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (5888u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (24064u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (7680u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (51456u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (49408u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (50944u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (51440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (50688u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(263));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (8192u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[7]);
    ctx.gpr[7] = (18944u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[7]);
    ctx.gpr[7] = (19200u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[7]);
    ctx.gpr[7] = (18432u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[7]);
    ctx.gpr[7] = (18688u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (7936u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(19096), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9492));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B5380u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x088B5380u) goto L_088B5380;
    return;
L_088B5380:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088B53A4;
      }
      goto L_088B5390;
    }
L_088B5390:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[31] = (0x088B539Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x088B539Cu) goto L_088B539C;
    return;
L_088B539C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_088B53A4;
L_088B53A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[31] = (0x088B53D0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x088B53D0u) goto L_088B53D0;
    return;
L_088B53D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088B53F4;
      }
      goto L_088B53E0;
    }
L_088B53E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[31] = (0x088B53ECu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x088B53ECu) goto L_088B53EC;
    return;
L_088B53EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_088B53F4;
L_088B53F4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B540C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17516)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17512)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17540)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(17520), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(17528), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(17524), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(17532), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(17536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(17544), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B54A0:
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
L_088B54CC:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5504;
      }
      goto L_088B54D8;
    }
L_088B54D8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B54F4;
      }
      goto L_088B54E0;
    }
L_088B54E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B54FC;
      }
      goto L_088B54F4;
    }
L_088B54F4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    goto L_088B54FC;
L_088B54FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B5508;
      }
      goto L_088B5504;
    }
L_088B5504:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B5508;
L_088B5508:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5510:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17636)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B558C;
      }
      goto L_088B5558;
    }
L_088B5558:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17588)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5584;
      }
      goto L_088B5568;
    }
L_088B5568:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[22] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(21952)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_088B5594;
      }
      goto L_088B557C;
    }
L_088B557C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5750;
      }
      goto L_088B5584;
    }
L_088B5584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B575C;
      }
      goto L_088B558C;
    }
L_088B558C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B575C;
      }
      goto L_088B5594;
    }
L_088B5594:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (13702u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14269u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[19] = (2225u << 16u);
    ctx.gpr[4] = (20224u << 16u);
    ctx.gpr[21] = (0u | 32768u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(15808));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8168));
    ctx.gpr[20] = (2230u << 16u);
    goto L_088B55D4;
L_088B55D4:
    ctx.gpr[31] = (0x088B55DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_088B61AC;
L_088B55DC:
    ctx.gpr[31] = (0x088B55E4u);
    // nop
    goto L_088B6224;
L_088B55E4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_088B55EC;
L_088B55EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 10u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088B560Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 46u, 0x08AF8508u>(ctx, &aot_mem) && ctx.pc == 0x088B560Cu) goto L_088B560C;
    return;
L_088B560C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B561C;
      }
      goto L_088B5614;
    }
L_088B5614:
    ctx.gpr[31] = (0x088B561Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x088B561Cu) goto L_088B561C;
    return;
L_088B561C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1024));
      if (branch_taken) {
          goto L_088B55EC;
      }
      goto L_088B562C;
    }
L_088B562C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17636)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B566C;
      }
      goto L_088B563C;
    }
L_088B563C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 10u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088B5664u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 716u, 0x08AF73ECu>(ctx, &aot_mem) && ctx.pc == 0x088B5664u) goto L_088B5664;
    return;
L_088B5664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B56F8;
      }
      goto L_088B566C;
    }
L_088B566C:
    ctx.gpr[31] = (0x088B5674u);
    // nop
    ctx.pc = 0x08B0BBC4u;
    return;
L_088B5674:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x088B5688u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_088B5688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-6884)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B56F8;
      }
      goto L_088B56C4;
    }
L_088B56C4:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_088B56E0;
    }
    goto L_088B56D4;
L_088B56D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088B56F0;
      }
      goto L_088B56E0;
    }
L_088B56E0:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088B56F0;
L_088B56F0:
    ctx.gpr[31] = (0x088B56F8u);
    // nop
    ctx.pc = 0x08B0BBF4u;
    return;
L_088B56F8:
    ctx.gpr[31] = (0x088B5700u);
    // nop
    ctx.pc = 0x08B0BBC4u;
    return;
L_088B5700:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088B5714u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.pc = 0x08B0BAECu;
    return;
L_088B5714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(21952)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-6884), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B55D4;
      }
      goto L_088B5750;
    }
L_088B5750:
    ctx.gpr[31] = (0x088B5758u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BBA4u;
    return;
L_088B5758:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B575C;
L_088B575C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_088B5798:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B57C0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (0u | 100u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B57E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_088B5808;
      }
      goto L_088B57F8;
    }
L_088B57F8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5808;
      }
      goto L_088B5800;
    }
L_088B5800:
    ctx.gpr[31] = (0x088B5808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088B5808u) goto L_088B5808;
    return;
L_088B5808:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5814:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B5828u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_088B5840;
L_088B5828:
    ctx.gpr[31] = (0x088B5830u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088B58C4;
L_088B5830:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5840:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B5854u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8204));
    goto L_088B54A0;
L_088B5854:
    ctx.gpr[31] = (0x088B585Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 687u, 0x08AF720Cu>(ctx, &aot_mem) && ctx.pc == 0x088B585Cu) goto L_088B585C;
    return;
L_088B585C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5890;
      }
      goto L_088B5868;
    }
L_088B5868:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B5874u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8268));
    goto L_088B54A0;
L_088B5874:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088B5880u);
    ctx.gpr[5] = (0u | 768u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 710u, 0x08AF737Cu>(ctx, &aot_mem) && ctx.pc == 0x088B5880u) goto L_088B5880;
    return;
L_088B5880:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B58A8;
      }
      goto L_088B5888;
    }
L_088B5888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B58B4;
      }
      goto L_088B5890;
    }
L_088B5890:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B58A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8232));
    goto L_088B54A0;
L_088B58A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B58B8;
      }
      goto L_088B58A8;
    }
L_088B58A8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B58B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8296));
    goto L_088B54A0;
L_088B58B4:
    ctx.gpr[2] = (0u | 1u);
    goto L_088B58B8;
L_088B58B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B58C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17588)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5974;
      }
      goto L_088B58DC;
    }
L_088B58DC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(21952), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16616)));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8336));
    ctx.gpr[31] = (0x088B5910u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21776));
    ctx.pc = 0x08B0BB64u;
    return;
L_088B5910:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088B5954;
      }
      goto L_088B591C;
    }
L_088B591C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B5928u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BB1Cu;
    return;
L_088B5928:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B597C;
      }
      goto L_088B5934;
    }
L_088B5934:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7608));
    ctx.gpr[31] = (0x088B594Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8388));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 537u, 0x0884362Cu>(ctx, &aot_mem) && ctx.pc == 0x088B594Cu) goto L_088B594C;
    return;
L_088B594C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5980;
      }
      goto L_088B5954;
    }
L_088B5954:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7608));
    ctx.gpr[31] = (0x088B596Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8352));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 537u, 0x0884362Cu>(ctx, &aot_mem) && ctx.pc == 0x088B596Cu) goto L_088B596C;
    return;
L_088B596C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5980;
      }
      goto L_088B5974;
    }
L_088B5974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5980;
      }
      goto L_088B597C;
    }
L_088B597C:
    ctx.gpr[2] = (0u | 1u);
    goto L_088B5980;
L_088B5980:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B598C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(17588)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B5A44;
      }
      goto L_088B59AC;
    }
L_088B59AC:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7608));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B59C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8204));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 537u, 0x0884362Cu>(ctx, &aot_mem) && ctx.pc == 0x088B59C4u) goto L_088B59C4;
    return;
L_088B59C4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B59D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8424));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 537u, 0x0884362Cu>(ctx, &aot_mem) && ctx.pc == 0x088B59D4u) goto L_088B59D4;
    return;
L_088B59D4:
    ctx.gpr[31] = (0x088B59DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 104u, 0x08AF8964u>(ctx, &aot_mem) && ctx.pc == 0x088B59DCu) goto L_088B59DC;
    return;
L_088B59DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5A2C;
      }
      goto L_088B59E4;
    }
L_088B59E4:
    ctx.gpr[31] = (0x088B59ECu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 101u, 0x08AF8928u>(ctx, &aot_mem) && ctx.pc == 0x088B59ECu) goto L_088B59EC;
    return;
L_088B59EC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088B59F8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 93u, 0x08AF8890u>(ctx, &aot_mem) && ctx.pc == 0x088B59F8u) goto L_088B59F8;
    return;
L_088B59F8:
    ctx.gpr[4] = (0u | 4096u);
    ctx.gpr[31] = (0x088B5A04u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 97u, 0x08AF88DCu>(ctx, &aot_mem) && ctx.pc == 0x088B5A04u) goto L_088B5A04;
    return;
L_088B5A04:
    ctx.gpr[31] = (0x088B5A0Cu);
    // nop
    ctx.pc = 0x08B0BABCu;
    return;
L_088B5A0C:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088B5A1Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 473u, 0x088432ACu>(ctx, &aot_mem) && ctx.pc == 0x088B5A1Cu) goto L_088B5A1C;
    return;
L_088B5A1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5A4C;
      }
      goto L_088B5A24;
    }
L_088B5A24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5AB0;
      }
      goto L_088B5A2C;
    }
L_088B5A2C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088B5A3Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8448));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 537u, 0x0884362Cu>(ctx, &aot_mem) && ctx.pc == 0x088B5A3Cu) goto L_088B5A3C;
    return;
L_088B5A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5AB0;
      }
      goto L_088B5A44;
    }
L_088B5A44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B5AB0;
      }
      goto L_088B5A4C;
    }
L_088B5A4C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14400));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_088B5A5C;
L_088B5A5C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B5A5C;
      }
      goto L_088B5A74;
    }
L_088B5A74:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B5A7C;
L_088B5A7C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(304), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(400), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(496), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(592), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B5A7C;
      }
      goto L_088B5AA4;
    }
L_088B5AA4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17589), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (0u | 1u);
    goto L_088B5AB0;
L_088B5AB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5AC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5ACC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17592)));
    ctx.gpr[19] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10640));
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_088B5B14;
      }
      goto L_088B5B0C;
    }
L_088B5B0C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17592), ctx.gpr[5]);
    goto L_088B5B14;
L_088B5B14:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B5B20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 267u, 0x08A6D2D4u>(ctx, &aot_mem) && ctx.pc == 0x088B5B20u) goto L_088B5B20;
    return;
L_088B5B20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B5B40;
      }
      goto L_088B5B28;
    }
L_088B5B28:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088B5B34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 267u, 0x08A6D2D4u>(ctx, &aot_mem) && ctx.pc == 0x088B5B34u) goto L_088B5B34;
    return;
L_088B5B34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5B7C;
      }
      goto L_088B5B3C;
    }
L_088B5B3C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088B5B40;
L_088B5B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17632)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17624)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17620)));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17588)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088B5B74;
    }
    goto L_088B5B74;
L_088B5B74:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17632), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088B5BDC;
      }
      goto L_088B5B7C;
    }
L_088B5B7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17632)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17628)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17644)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x088B5B9Cu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17640)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088B5B9Cu) goto L_088B5B9C;
    return;
L_088B5B9C:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17588)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B5BBCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x088B5BBCu) goto L_088B5BBC;
    return;
L_088B5BBC:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
        goto L_088B5BD0;
    }
    goto L_088B5BC4;
L_088B5BC4:
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088B5BD0;
L_088B5BD0:
    ctx.gpr[31] = (0x088B5BD8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x088B5BD8u) goto L_088B5BD8;
    return;
L_088B5BD8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(17632), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088B5BDC;
L_088B5BDC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5C2C;
      }
      goto L_088B5BE4;
    }
L_088B5BE4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17589)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5C10;
      }
      goto L_088B5BF4;
    }
L_088B5BF4:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 86u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14400));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(15088));
      if (branch_taken) {
          goto L_088B5C34;
      }
      goto L_088B5C10;
    }
L_088B5C10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7608));
    ctx.gpr[31] = (0x088B5C24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8472));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 537u, 0x0884362Cu>(ctx, &aot_mem) && ctx.pc == 0x088B5C24u) goto L_088B5C24;
    return;
L_088B5C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5CB0;
      }
      goto L_088B5C2C;
    }
L_088B5C2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5CB0;
      }
      goto L_088B5C34;
    }
L_088B5C34:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088B5C34;
      }
      goto L_088B5C58;
    }
L_088B5C58:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17589), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    goto L_088B5C68;
L_088B5C68:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B5C68;
      }
      goto L_088B5C80;
    }
L_088B5C80:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B5C88;
L_088B5C88:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(304), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(400), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(496), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(592), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088B5C88;
      }
      goto L_088B5CB0;
    }
L_088B5CB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5CD4:
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (ctx.gpr[9] & 255u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(14400));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(208), ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(304), ctx.gpr[7]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5D04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6888)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5D28;
      }
      goto L_088B5D20;
    }
L_088B5D20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5D38;
      }
      goto L_088B5D28;
    }
L_088B5D28:
    ctx.gpr[31] = (0x088B5D30u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 502u, 0x08843444u>(ctx, &aot_mem) && ctx.pc == 0x088B5D30u) goto L_088B5D30;
    return;
L_088B5D30:
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
    goto L_088B5D38;
L_088B5D38:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5D44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5D4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B5D60u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 475u, 0x088432C8u>(ctx, &aot_mem) && ctx.pc == 0x088B5D60u) goto L_088B5D60;
    return;
L_088B5D60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5D6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6888)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B5DD0;
      }
      goto L_088B5D84;
    }
L_088B5D84:
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-2824)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5DBC;
      }
      goto L_088B5D94;
    }
L_088B5D94:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2824));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(848)));
    if (static_cast<std::int32_t>(ctx.gpr[5]) > 0) {
    ctx.gpr[6] = (0u | 2u);
        goto L_088B5DD8;
    }
    goto L_088B5DA4;
L_088B5DA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_088B5DBC;
      }
      goto L_088B5DAC;
    }
L_088B5DAC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(846)));
    ctx.gpr[6] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088B5DE8;
      }
      goto L_088B5DBC;
    }
L_088B5DBC:
    ctx.gpr[31] = (0x088B5DC4u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 492u, 0x08843388u>(ctx, &aot_mem) && ctx.pc == 0x088B5DC4u) goto L_088B5DC4;
    return;
L_088B5DC4:
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
      if (branch_taken) {
          goto L_088B5DEC;
      }
      goto L_088B5DD0;
    }
L_088B5DD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5DEC;
      }
      goto L_088B5DD8;
    }
L_088B5DD8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088B5DBC;
      }
      goto L_088B5DE0;
    }
L_088B5DE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B5DEC;
      }
      goto L_088B5DE8;
    }
L_088B5DE8:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B5DEC;
L_088B5DEC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5DF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B5E0Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 42u, 0x08844544u>(ctx, &aot_mem) && ctx.pc == 0x088B5E0Cu) goto L_088B5E0C;
    return;
L_088B5E0C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5E18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088B5E4C;
      }
      goto L_088B5E30;
    }
L_088B5E30:
    ctx.gpr[6] = (0u | 300u);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[31] = (0x088B5E40u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(17592), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 492u, 0x08843388u>(ctx, &aot_mem) && ctx.pc == 0x088B5E40u) goto L_088B5E40;
    return;
L_088B5E40:
    ctx.gpr[2] = (ctx.gpr[2] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
      if (branch_taken) {
          goto L_088B5E50;
      }
      goto L_088B5E4C;
    }
L_088B5E4C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B5E50;
L_088B5E50:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5E5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088B5E84;
      }
      goto L_088B5E74;
    }
L_088B5E74:
    ctx.gpr[31] = (0x088B5E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 42u, 0x08844544u>(ctx, &aot_mem) && ctx.pc == 0x088B5E7Cu) goto L_088B5E7C;
    return;
L_088B5E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B5E88;
      }
      goto L_088B5E84;
    }
L_088B5E84:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B5E88;
L_088B5E88:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5E94:
    ctx.gpr[4] = (0u | 254u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_088B5EB8;
      }
      goto L_088B5EA0;
    }
L_088B5EA0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 256u);
      if (branch_taken) {
          goto L_088B5EB8;
      }
      goto L_088B5EA8;
    }
L_088B5EA8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 257u);
      if (branch_taken) {
          goto L_088B5EB8;
      }
      goto L_088B5EB0;
    }
L_088B5EB0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B5EC0;
      }
      goto L_088B5EB8;
    }
L_088B5EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B5EC4;
      }
      goto L_088B5EC0;
    }
L_088B5EC0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B5EC4;
L_088B5EC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5ECC:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3824)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5EEC:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3824)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B5F0C:
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(14400));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_088B5F2C;
      }
      goto L_088B5F28;
    }
L_088B5F28:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    goto L_088B5F2C;
L_088B5F2C:
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B5F3C;
      }
      goto L_088B5F38;
    }
L_088B5F38:
    ctx.gpr[6] = (0u | 127u);
    goto L_088B5F3C;
L_088B5F3C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (0u | 21u);
    ctx.gpr[6] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    ctx.gpr[8] = (0u | 22u);
      if (branch_taken) {
          goto L_088B5F58;
      }
      goto L_088B5F50;
    }
L_088B5F50:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088B5FB4;
      }
      goto L_088B5F58;
    }
L_088B5F58:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(6859)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 127u);
        goto L_088B5FA4;
    }
    goto L_088B5F74;
L_088B5F74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (0u | 21336u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 64u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(496), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(592), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B603C;
      }
      goto L_088B5FA4;
    }
L_088B5FA4:
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(592), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B603C;
      }
      goto L_088B5FB4;
    }
L_088B5FB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(112)));
    ctx.gpr[8] = (0u | 3u);
    if (ctx.gpr[5] != ctx.gpr[8]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
        goto L_088B5FD8;
    }
    goto L_088B5FC4;
L_088B5FC4:
    ctx.gpr[4] = (0u | 168u);
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(592), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B603C;
      }
      goto L_088B5FD8;
    }
L_088B5FD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(208)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 21336u);
      if (branch_taken) {
          goto L_088B6030;
      }
      goto L_088B5FEC;
    }
L_088B5FEC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088B6004;
      }
      goto L_088B5FF8;
    }
L_088B5FF8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088B6004;
L_088B6004:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17632)));
    ctx.gpr[4] = (18086u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 45056u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(592), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B603C;
      }
      goto L_088B6030;
    }
L_088B6030:
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(592), ctx.gpr[4]);
    goto L_088B603C;
L_088B603C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6044:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(127) ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (0u | 127u);
        goto L_088B6054;
    }
    goto L_088B6054;
L_088B6054:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(14400));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(496), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B606C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6074:
    ctx.gpr[4] = (0u | 44000u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6088;
      }
      goto L_088B6084;
    }
L_088B6084:
    ctx.gpr[6] = (0u | 44000u);
    goto L_088B6088;
L_088B6088:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(400), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B60A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B60B4u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 88u, 0x08AF8854u>(ctx, &aot_mem) && ctx.pc == 0x088B60B4u) goto L_088B60B4;
    return;
L_088B60B4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] << (ctx.gpr[16] & 31u));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B60D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B60F0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_088B54CC;
L_088B60F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6124;
      }
      goto L_088B60F8;
    }
L_088B60F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[7] << (ctx.gpr[6] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088B6124;
L_088B6124:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6130:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B614Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_088B54CC;
L_088B614C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6180;
      }
      goto L_088B6154;
    }
L_088B6154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[7] << (ctx.gpr[6] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_088B6180;
L_088B6180:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B618C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6194:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B619C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B61A4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B61AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B6210;
      }
      goto L_088B61C8;
    }
L_088B61C8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088B61D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8552));
    goto L_088B54A0;
L_088B61D8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B620C;
      }
      goto L_088B61E4;
    }
L_088B61E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21008));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B6204;
      }
      goto L_088B61F8;
    }
L_088B61F8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x088B6204u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x088B6204u) goto L_088B6204;
    return;
L_088B6204:
    ctx.gpr[31] = (0x088B620Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088B620Cu) goto L_088B620C;
    return;
L_088B620C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_088B6210;
L_088B6210:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6224:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17589)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B68A4;
      }
      goto L_088B6264;
    }
L_088B6264:
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(15088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21916));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6168));
    ctx.gpr[4] = (2241u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8564));
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1920));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7600));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8704));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8760));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8808));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[6] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8824));
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8904));
    ctx.gpr[7] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(592));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8940));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[23] = (2269u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-6200));
    goto L_088B6340;
L_088B6340:
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 24 ? 1u : 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088B6360;
      }
      goto L_088B6358;
    }
L_088B6358:
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(-24));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_088B6360;
L_088B6360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[19] << (ctx.gpr[6] & 31u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B638C;
      }
      goto L_088B6384;
    }
L_088B6384:
    ctx.gpr[31] = (0x088B638Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 69u, 0x08AF869Cu>(ctx, &aot_mem) && ctx.pc == 0x088B638Cu) goto L_088B638C;
    return;
L_088B638C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088B6644;
      }
      goto L_088B63A0;
    }
L_088B63A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088B6644;
      }
      goto L_088B63B0;
    }
L_088B63B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[31] = (0x088B63C0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 501u, 0x08843428u>(ctx, &aot_mem) && ctx.pc == 0x088B63C0u) goto L_088B63C0;
    return;
L_088B63C0:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088B63E0;
      }
      goto L_088B63C8;
    }
L_088B63C8:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088B6880;
      }
      goto L_088B63E0;
    }
L_088B63E0:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B6594;
      }
      goto L_088B63F0;
    }
L_088B63F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088B640C;
      }
      goto L_088B6408;
    }
L_088B6408:
    ctx.gpr[16] = (0u | 0u);
    goto L_088B640C;
L_088B640C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6424;
      }
      goto L_088B6420;
    }
L_088B6420:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_088B6424;
L_088B6424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6440;
      }
      goto L_088B6430;
    }
L_088B6430:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B64EC;
      }
      goto L_088B6438;
    }
L_088B6438:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088B64EC;
      }
      goto L_088B6440;
    }
L_088B6440:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3828)));
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(3852)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_088B645C;
L_088B645C:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088B646C;
      }
      goto L_088B6468;
    }
L_088B6468:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
    goto L_088B646C;
L_088B646C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_088B6490;
      }
      goto L_088B6480;
    }
L_088B6480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088B64B0;
      }
      goto L_088B6490;
    }
L_088B6490:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_088B64A0;
      }
      goto L_088B6498;
    }
L_088B6498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_088B64B0;
      }
      goto L_088B64A0;
    }
L_088B64A0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088B645C;
      }
      goto L_088B64B0;
    }
L_088B64B0:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B64C4;
      }
      goto L_088B64BC;
    }
L_088B64BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B6880;
      }
      goto L_088B64C4;
    }
L_088B64C4:
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3824)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-64));
      if (branch_taken) {
          goto L_088B658C;
      }
      goto L_088B64EC;
    }
L_088B64EC:
    ctx.gpr[31] = (0x088B64F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    goto L_088B54A0;
L_088B64F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088B6510;
      }
      goto L_088B6508;
    }
L_088B6508:
    ctx.gpr[7] = (0u | 47104u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    goto L_088B6510;
L_088B6510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[10]) < 5662 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B653C;
      }
      goto L_088B652C;
    }
L_088B652C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5661 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B653C;
      }
      goto L_088B6534;
    }
L_088B6534:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B6564;
      }
      goto L_088B653C;
    }
L_088B653C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17589), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B655Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8584));
    goto L_088B54A0;
L_088B655C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B68A4;
      }
      goto L_088B6564;
    }
L_088B6564:
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3824)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-64));
    goto L_088B658C;
L_088B658C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088B65CC;
      }
      goto L_088B6594;
    }
L_088B6594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088B65A0u);
    ctx.gpr[5] = (ctx.gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 533u, 0x088435A0u>(ctx, &aot_mem) && ctx.pc == 0x088B65A0u) goto L_088B65A0;
    return;
L_088B65A0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3824)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-64));
    goto L_088B65CC;
L_088B65CC:
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    ctx.gpr[7] = (ctx.gpr[11] | 0u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088B65ECu);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    goto L_088B5798;
L_088B65EC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_088B6630;
      }
      goto L_088B65FC;
    }
L_088B65FC:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 236u);
      if (branch_taken) {
          goto L_088B6630;
      }
      goto L_088B6608;
    }
L_088B6608:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_088B6630;
      }
      goto L_088B6610;
    }
L_088B6610:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 221u);
      if (branch_taken) {
          goto L_088B6630;
      }
      goto L_088B6618;
    }
L_088B6618:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 222u);
      if (branch_taken) {
          goto L_088B6630;
      }
      goto L_088B6620;
    }
L_088B6620:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 13u);
      if (branch_taken) {
          goto L_088B6630;
      }
      goto L_088B6628;
    }
L_088B6628:
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B6634;
      }
      goto L_088B6630;
    }
L_088B6630:
    ctx.gpr[7] = (0u | 0u);
    goto L_088B6634;
L_088B6634:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088B6644u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 80u, 0x08AF878Cu>(ctx, &aot_mem) && ctx.pc == 0x088B6644u) goto L_088B6644;
    return;
L_088B6644:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(400)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B669C;
      }
      goto L_088B6654;
    }
L_088B6654:
    ctx.gpr[5] = (ctx.gpr[6] << 12u);
    ctx.gpr[4] = (0u | 44000u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (ctx.lo);
    ctx.gpr[31] = (0x088B6678u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_088B5798;
L_088B6678:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088B6684u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 76u, 0x08AF873Cu>(ctx, &aot_mem) && ctx.pc == 0x088B6684u) goto L_088B6684;
    return;
L_088B6684:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4097 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B669C;
      }
      goto L_088B6690;
    }
L_088B6690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x088B669Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088B5798;
L_088B669C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(592)));
    if (ctx.gpr[8] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_088B6830;
    }
    goto L_088B66A8;
L_088B66A8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(496)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    ctx.gpr[9] = (0u | 127u);
      if (branch_taken) {
          goto L_088B682C;
      }
      goto L_088B66B4;
    }
L_088B66B4:
    ctx.gpr[4] = (ctx.gpr[9] - ctx.gpr[7]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3864)));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[11] | 0u);
    ctx.gpr[18] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (ctx.lo);
    ctx.gpr[31] = (0x088B6718u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    goto L_088B5798;
L_088B6718:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[9] = (ctx.gpr[18] << 1u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3864)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
        goto L_088B6734;
    }
    goto L_088B6734;
L_088B6734:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[16] << 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
        goto L_088B6748;
    }
    goto L_088B6748;
L_088B6748:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 4096u);
    ctx.gpr[19] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[19] = (0u | 4096u);
        goto L_088B6774;
    }
    goto L_088B6774;
L_088B6774:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (0u | 4096u);
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 4096u);
        goto L_088B67A0;
    }
    goto L_088B67A0;
L_088B67A0:
    ctx.gpr[31] = (0x088B67A8u);
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 104u, 0x088BC5C4u>(ctx, &aot_mem) && ctx.pc == 0x088B67A8u) goto L_088B67A8;
    return;
L_088B67A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B67E8;
      }
      goto L_088B67B0;
    }
L_088B67B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(305)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B67E8;
      }
      goto L_088B67C0;
    }
L_088B67C0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088B67E8;
L_088B67E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B67F8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_088B5798;
L_088B67F8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088B6810u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 72u, 0x08AF86D8u>(ctx, &aot_mem) && ctx.pc == 0x088B6810u) goto L_088B6810;
    return;
L_088B6810:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[31] = (0x088B682Cu);
    ctx.gpr[9] = (4096u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 84u, 0x08AF87E8u>(ctx, &aot_mem) && ctx.pc == 0x088B682Cu) goto L_088B682C;
    return;
L_088B682C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_088B6830;
L_088B6830:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6880;
      }
      goto L_088B686C;
    }
L_088B686C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088B6878u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_088B5798;
L_088B6878:
    ctx.gpr[31] = (0x088B6880u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 66u, 0x08AF8660u>(ctx, &aot_mem) && ctx.pc == 0x088B6880u) goto L_088B6880;
    return;
L_088B6880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B6340;
      }
      goto L_088B689C;
    }
L_088B689C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17589), static_cast<std::uint8_t>(0u));
    goto L_088B68A4;
L_088B68A4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B68D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17556)));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[4] = (16014u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(17552)));
    ctx.gpr[5] = (ctx.gpr[4] | 14571u);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(17580)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[17] = ctx.fpr[20] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17560), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[16] / ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(17568), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(17564), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (15744u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(17572), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(17576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B6980u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(17584), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_088B57C0;
L_088B6980:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x088B698Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17648));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x088B698Cu) goto L_088B698C;
    return;
L_088B698C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17620)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17600)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(17596)));
    ctx.gpr[7] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(17604), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[5] = (16704u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(17612), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(17624), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (16268u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(17608), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(17616), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(17628), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6A20:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088B6A28;
L_088B6A28:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(144), 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 82 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(148));
      if (branch_taken) {
          goto L_088B6A28;
      }
      goto L_088B6A44;
    }
L_088B6A44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6A4C:
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
L_088B6A78:
    ctx.gpr[5] = (0u | 209u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2002), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6A84:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2002)));
    ctx.gpr[5] = (0u | 103u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B6A9C;
      }
      goto L_088B6A94;
    }
L_088B6A94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B6AA0;
      }
      goto L_088B6A9C;
    }
L_088B6A9C:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B6AA0;
L_088B6AA0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6AA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B6AF0;
      }
      goto L_088B6AE0;
    }
L_088B6AE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1826))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B6B08;
      }
      goto L_088B6AF0;
    }
L_088B6AF0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29194)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6B10;
      }
      goto L_088B6B00;
    }
L_088B6B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6B24;
      }
      goto L_088B6B08;
    }
L_088B6B08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6C74;
      }
      goto L_088B6B10;
    }
L_088B6B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6B24;
      }
      goto L_088B6B1C;
    }
L_088B6B1C:
    ctx.gpr[4] = (0u | 108u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2002), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088B6B24;
L_088B6B24:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2002)));
    ctx.gpr[5] = (0u | 209u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B6C74;
      }
      goto L_088B6B34;
    }
L_088B6B34:
    ctx.gpr[21] = (2230u << 16u);
    ctx.gpr[5] = (0u | 103u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7868)));
      if (branch_taken) {
          goto L_088B6B4C;
      }
      goto L_088B6B44;
    }
L_088B6B44:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1996), ctx.gpr[5]);
    goto L_088B6B4C;
L_088B6B4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1996)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6C74;
      }
      goto L_088B6B5C;
    }
L_088B6B5C:
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-103));
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(56) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (0u | 209u);
      if (branch_taken) {
          goto L_088B6C70;
      }
      goto L_088B6B6C;
    }
L_088B6B6C:
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(17708));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2452)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6C70;
      }
      goto L_088B6B98;
    }
L_088B6B98:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x088B6BB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088B6BB4u) goto L_088B6BB4;
    return;
L_088B6BB4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2002)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1992), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2472)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2468)));
    ctx.gpr[31] = (0x088B6BDCu);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088B6BDCu) goto L_088B6BDC;
    return;
L_088B6BDC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B6BF0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088B6BF0u) goto L_088B6BF0;
    return;
L_088B6BF0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1996), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2002)));
    ctx.gpr[5] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B6C38;
      }
      goto L_088B6C1C;
    }
L_088B6C1C:
    ctx.gpr[31] = (0x088B6C24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088B6C24u) goto L_088B6C24;
    return;
L_088B6C24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2002)));
      if (branch_taken) {
          goto L_088B6C38;
      }
      goto L_088B6C2C;
    }
L_088B6C2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1996)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1996), ctx.gpr[5]);
    goto L_088B6C38;
L_088B6C38:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6C64;
      }
      goto L_088B6C40;
    }
L_088B6C40:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2456)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2452), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2002)));
    goto L_088B6C64;
L_088B6C64:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2000), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2002), static_cast<std::uint16_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_088B6C74;
      }
      goto L_088B6C70;
    }
L_088B6C70:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2002), static_cast<std::uint16_t>(ctx.gpr[17]));
    goto L_088B6C74;
L_088B6C74:
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
L_088B6C9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (static_cast<std::int32_t>(ctx.gpr[19]) < 103 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B6D38;
      }
      goto L_088B6CCC;
    }
L_088B6CCC:
    ctx.gpr[17] = (static_cast<std::int32_t>(ctx.gpr[19]) < 159 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088B6D38;
      }
      goto L_088B6CD8;
    }
L_088B6CD8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B6D30;
      }
      goto L_088B6D08;
    }
L_088B6D08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (16339u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B6D4C;
      }
      goto L_088B6D28;
    }
L_088B6D28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6D70;
      }
      goto L_088B6D30;
    }
L_088B6D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6ED4;
      }
      goto L_088B6D38;
    }
L_088B6D38:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B6D44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8968));
    goto L_088B6A4C;
L_088B6D44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6ED4;
      }
      goto L_088B6D4C;
    }
L_088B6D4C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 104 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 107 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B6D68;
      }
      goto L_088B6D58;
    }
L_088B6D58:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6D68;
      }
      goto L_088B6D60;
    }
L_088B6D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6E14;
      }
      goto L_088B6D68;
    }
L_088B6D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6ED4;
      }
      goto L_088B6D70;
    }
L_088B6D70:
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B6DC0;
      }
      goto L_088B6D88;
    }
L_088B6D88:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-103));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6DB8;
      }
      goto L_088B6D98;
    }
L_088B6D98:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(9024)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6E14;
      }
      goto L_088B6DB8;
    }
L_088B6DB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6ED4;
      }
      goto L_088B6DC0;
    }
L_088B6DC0:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B6E14;
      }
      goto L_088B6DDC;
    }
L_088B6DDC:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-103));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(44) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6E0C;
      }
      goto L_088B6DEC;
    }
L_088B6DEC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(9184)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6E04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6E14;
      }
      goto L_088B6E0C;
    }
L_088B6E0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6ED4;
      }
      goto L_088B6E14;
    }
L_088B6E14:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2002)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6ED4;
      }
      goto L_088B6E24;
    }
L_088B6E24:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2000)));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088B6EA4;
      }
      goto L_088B6E30;
    }
L_088B6E30:
    ctx.gpr[4] = (0u | 103u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
      if (branch_taken) {
          goto L_088B6EA4;
      }
      goto L_088B6E3C;
    }
L_088B6E3C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17708));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1992)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2464)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2460)));
    ctx.gpr[31] = (0x088B6E64u);
    ctx.gpr[21] = (ctx.gpr[6] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088B6E64u) goto L_088B6E64;
    return;
L_088B6E64:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088B6E78u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088B6E78u) goto L_088B6E78;
    return;
L_088B6E78:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B6EC0;
      }
      goto L_088B6EA4;
    }
L_088B6EA4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6EC8;
      }
      goto L_088B6EAC;
    }
L_088B6EAC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088B6EB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8992));
    goto L_088B6A4C;
L_088B6EB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6ED4;
      }
      goto L_088B6EC0;
    }
L_088B6EC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6ED4;
      }
      goto L_088B6EC8;
    }
L_088B6EC8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B6EAC;
      }
      goto L_088B6ED0;
    }
L_088B6ED0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2002), static_cast<std::uint16_t>(ctx.gpr[19]));
    goto L_088B6ED4;
L_088B6ED4:
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
L_088B6EF8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17676)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17672)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17700)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(17680), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2227u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(17688), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(17684), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(17692), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(17696), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(17704), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6F8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22016));
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(19100), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(68));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B6FD0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0B8D4u;
    return;
L_088B6FD0:
    ctx.gpr[31] = (0x088B6FD8u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0B8E4u;
    return;
L_088B6FD8:
    ctx.gpr[31] = (0x088B6FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 646u, 0x08867E00u>(ctx, &aot_mem) && ctx.pc == 0x088B6FE0u) goto L_088B6FE0;
    return;
L_088B6FE0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B6FF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-26208));
      if (branch_taken) {
          goto L_088B703C;
      }
      goto L_088B701C;
    }
L_088B701C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 512u);
    ctx.gpr[7] = (0u | 320u);
    ctx.gpr[31] = (0x088B7034u);
    ctx.gpr[8] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 712u, 0x08AB3F64u>(ctx, &aot_mem) && ctx.pc == 0x088B7034u) goto L_088B7034;
    return;
L_088B7034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7054;
      }
      goto L_088B703C;
    }
L_088B703C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 480u);
    ctx.gpr[7] = (0u | 272u);
    ctx.gpr[31] = (0x088B7054u);
    ctx.gpr[8] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 712u, 0x08AB3F64u>(ctx, &aot_mem) && ctx.pc == 0x088B7054u) goto L_088B7054;
    return;
L_088B7054:
    ctx.gpr[31] = (0x088B705Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 542u, 0x08AB2F78u>(ctx, &aot_mem) && ctx.pc == 0x088B705Cu) goto L_088B705C;
    return;
L_088B705C:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4912));
    ctx.gpr[31] = (0x088B706Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 417u, 0x08A7F6C8u>(ctx, &aot_mem) && ctx.pc == 0x088B706Cu) goto L_088B706C;
    return;
L_088B706C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (7168u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (21248u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (21504u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (22016u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (22528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (22272u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (57088u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (57344u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (57600u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (8448u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (56319u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2054));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (8704u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (56832u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (8960u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (9216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (50943u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60160u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (18303u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 62720u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] >> 8u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (17408u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (18176u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (54784u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (55041u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (39680u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (7424u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (20480u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (9472u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (7936u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(19096), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (23552u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (23808u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (16672u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (23296u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (24320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (25344u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (25600u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (25856u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (24576u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (26112u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (26368u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (26624u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (24832u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (26880u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (27136u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (27392u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (25088u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (27648u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (27904u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    ctx.gpr[5] = (28160u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (6144u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (6400u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (6656u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (6912u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (5888u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (24064u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (7680u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (51456u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (49408u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (50944u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (51440u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (50688u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(263));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[8] = (0u | 65280u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x088B7770u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 407u, 0x08A7F278u>(ctx, &aot_mem) && ctx.pc == 0x088B7770u) goto L_088B7770;
    return;
L_088B7770:
    ctx.gpr[31] = (0x088B7778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 561u, 0x08AB327Cu>(ctx, &aot_mem) && ctx.pc == 0x088B7778u) goto L_088B7778;
    return;
L_088B7778:
    ctx.gpr[31] = (0x088B7780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 628u, 0x08AB3850u>(ctx, &aot_mem) && ctx.pc == 0x088B7780u) goto L_088B7780;
    return;
L_088B7780:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x088B778Cu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x088B778Cu) goto L_088B778C;
    return;
L_088B778C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088B77C0;
      }
      goto L_088B7798;
    }
L_088B7798:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9476));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9460));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2197u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7876));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_088B77C0;
L_088B77C0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088B77D4;
      }
      goto L_088B77C8;
    }
L_088B77C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088B77D4;
L_088B77D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088B7818;
      }
      goto L_088B77E4;
    }
L_088B77E4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088B7808;
      }
      goto L_088B77EC;
    }
L_088B77EC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088B7800;
      }
      goto L_088B77F4;
    }
L_088B77F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_088B7800;
L_088B7800:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    goto L_088B7808;
L_088B7808:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(297)));
      if (branch_taken) {
          goto L_088B7840;
      }
      goto L_088B7818;
    }
L_088B7818:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(300));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x088B7838u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 139u, 0x08B0098Cu>(ctx, &aot_mem) && ctx.pc == 0x088B7838u) goto L_088B7838;
    return;
L_088B7838:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(297)));
    goto L_088B7840;
L_088B7840:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7868;
      }
      goto L_088B7848;
    }
L_088B7848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088B7864u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088B7864u) goto L_088B7864;
    return;
L_088B7864:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_088B7868;
L_088B7868:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7888;
      }
      goto L_088B7870;
    }
L_088B7870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7888;
      }
      goto L_088B7880;
    }
L_088B7880:
    ctx.gpr[31] = (0x088B7888u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x088B7888u) goto L_088B7888;
    return;
L_088B7888:
    ctx.gpr[2] = (0u | 1u);
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
L_088B78A8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B78B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088B78D8;
      }
      goto L_088B78C8;
    }
L_088B78C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_088B78F0;
      }
      goto L_088B78D0;
    }
L_088B78D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B7900;
      }
      goto L_088B78D8;
    }
L_088B78D8:
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088B78D0;
      }
      goto L_088B78E4;
    }
L_088B78E4:
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19096)));
      if (branch_taken) {
          goto L_088B7900;
      }
      goto L_088B78F0;
    }
L_088B78F0:
    ctx.gpr[31] = (0x088B78F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 388u, 0x0894E2D8u>(ctx, &aot_mem) && ctx.pc == 0x088B78F8u) goto L_088B78F8;
    return;
L_088B78F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (0u | 1u);
    goto L_088B7900;
L_088B7900:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7910:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B79B4;
      }
      goto L_088B7920;
    }
L_088B7920:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(9368)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7938:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088B79B4;
      }
      goto L_088B7948;
    }
L_088B7948:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B79B4;
      }
      goto L_088B795C;
    }
L_088B795C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B79B4;
      }
      goto L_088B7968;
    }
L_088B7968:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B79B4;
      }
      goto L_088B7974;
    }
L_088B7974:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088B79B4;
      }
      goto L_088B797C;
    }
L_088B797C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B79B4;
      }
      goto L_088B7988;
    }
L_088B7988:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B79B4;
      }
      goto L_088B7994;
    }
L_088B7994:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B79B4;
      }
      goto L_088B79A0;
    }
L_088B79A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_088B79B4;
      }
      goto L_088B79A8;
    }
L_088B79A8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B79B4;
      }
      goto L_088B79B4;
    }
L_088B79B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B79BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19104)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088B79D8u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    goto L_088B7910;
L_088B79D8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19108)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088B79ECu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_088B7910;
L_088B79EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (57088u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[9] = (256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    ctx.gpr[9] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7A70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7C14;
      }
      goto L_088B7A90;
    }
L_088B7A90:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(9408)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7AA8:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[31] = (0x088B7AB4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 420u, 0x0894E690u>(ctx, &aot_mem) && ctx.pc == 0x088B7AB4u) goto L_088B7AB4;
    return;
L_088B7AB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088B7C18;
      }
      goto L_088B7ABC;
    }
L_088B7ABC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
      if (branch_taken) {
          goto L_088B7AEC;
      }
      goto L_088B7AD0;
    }
L_088B7AD0:
    ctx.gpr[6] = (8960u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7B00;
      }
      goto L_088B7AEC;
    }
L_088B7AEC:
    ctx.gpr[6] = (8960u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    goto L_088B7B00;
L_088B7B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7C18;
      }
      goto L_088B7B08;
    }
L_088B7B08:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
      if (branch_taken) {
          goto L_088B7B34;
      }
      goto L_088B7B1C;
    }
L_088B7B1C:
    ctx.gpr[6] = (20480u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7B4C;
      }
      goto L_088B7B34;
    }
L_088B7B34:
    ctx.gpr[6] = (20480u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    goto L_088B7B4C;
L_088B7B4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7C18;
      }
      goto L_088B7B54;
    }
L_088B7B54:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (59136u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7C18;
      }
      goto L_088B7B88;
    }
L_088B7B88:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x088B7B94u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(19104), ctx.gpr[4]);
    goto L_088B79BC;
L_088B7B94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088B7C18;
      }
      goto L_088B7B9C;
    }
L_088B7B9C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x088B7BA8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(19108), ctx.gpr[4]);
    goto L_088B79BC;
L_088B7BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7B94;
      }
      goto L_088B7BB0;
    }
L_088B7BB0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (2227u << 16u);
      if (branch_taken) {
          goto L_088B7BE8;
      }
      goto L_088B7BC4;
    }
L_088B7BC4:
    ctx.gpr[7] = (7936u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(19096), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_088B7C00;
      }
      goto L_088B7BE8;
    }
L_088B7BE8:
    ctx.gpr[7] = (7936u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(19096), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    goto L_088B7C00;
L_088B7C00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7B94;
      }
      goto L_088B7C08;
    }
L_088B7C08:
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7040), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088B7B94;
      }
      goto L_088B7C14;
    }
L_088B7C14:
    ctx.gpr[2] = (0u | 0u);
    goto L_088B7C18;
L_088B7C18:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7C24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7C50:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7C58:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7C60:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7C68:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27340)));
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27344)));
    ctx.gpr[6] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7C98:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7CA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088B7DBC;
      }
      goto L_088B7D00;
    }
L_088B7D00:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B7D1C;
      }
      goto L_088B7D18;
    }
L_088B7D18:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B7D1C;
L_088B7D1C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B7D38;
      }
      goto L_088B7D34;
    }
L_088B7D34:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B7D38;
L_088B7D38:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B7D54;
      }
      goto L_088B7D50;
    }
L_088B7D50:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B7D54;
L_088B7D54:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B7D70;
      }
      goto L_088B7D6C;
    }
L_088B7D6C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B7D70;
L_088B7D70:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B7D8C;
      }
      goto L_088B7D88;
    }
L_088B7D88:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B7D8C;
L_088B7D8C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B7DA8;
      }
      goto L_088B7DA4;
    }
L_088B7DA4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088B7DA8;
L_088B7DA8:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088B7D00;
      }
      goto L_088B7DBC;
    }
L_088B7DBC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7DC4:
    ctx.gpr[8] = (54272u << 16u);
    ctx.gpr[8] = (ctx.gpr[4] | ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[5] << 10u);
    ctx.gpr[8] = (ctx.gpr[8] | ctx.gpr[9]);
    ctx.gpr[9] = (2233u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (54528u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-4912), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7E18:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    ctx.gpr[9] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[9]);
      if (branch_taken) {
          goto L_088B7ED8;
      }
      goto L_088B7E34;
    }
L_088B7E34:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<4u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<36u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<68u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_088B7E50;
L_088B7E50:
    ctx.set_vfpu_scalar_bits_ct<5u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_vfpu_scalar_bits_ct<37u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_vfpu_scalar_bits_ct<69u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 2u>(vfpu_value); }
    ctx.set_vfpu_scalar_bits_ct<6u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_vfpu_scalar_bits_ct<38u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.set_vfpu_scalar_bits_ct<70u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_vfpu_scalar_bits_ct<7u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_vfpu_scalar_bits_ct<39u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_vfpu_scalar_bits_ct<71u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 2u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<8u, 32u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<40u, 33u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<72u, 34u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<104u, 32u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<9u, 33u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<41u, 34u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<73u, 32u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<105u, 33u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<10u, 34u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<42u, 32u, 7u, 4u>();
    ctx.execute_vfpu_vdot_ct<74u, 33u, 7u, 4u>();
    ctx.execute_vfpu_vdot_ct<106u, 34u, 7u, 4u>();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.set_vfpu_scalar_bits_ct<4u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<36u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<68u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
      if (branch_taken) {
          goto L_088B7E50;
      }
      goto L_088B7ED0;
    }
L_088B7ED0:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088B7F10;
      }
      goto L_088B7ED8;
    }
L_088B7ED8:
    ctx.set_vfpu_scalar_bits_ct<4u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<36u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<68u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.execute_vfpu_vdot_ct<8u, 32u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<40u, 33u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<72u, 34u, 4u, 4u>();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-12), ctx.vfpu_scalar_bits_ct<8u>());
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8), ctx.vfpu_scalar_bits_ct<40u>());
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.vfpu_scalar_bits_ct<72u>());
      if (branch_taken) {
          goto L_088B7ED8;
      }
      goto L_088B7F10;
    }
L_088B7F10:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7F1C:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    ctx.gpr[9] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[9]);
      if (branch_taken) {
          goto L_088B7FAC;
      }
      goto L_088B7F38;
    }
L_088B7F38:
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    goto L_088B7F44;
L_088B7F44:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 2u>(vfpu_value); }
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
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<103u, 2u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<8u, 32u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<40u, 33u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<72u, 34u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<9u, 32u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<41u, 33u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<73u, 34u, 5u, 4u>();
    ctx.execute_vfpu_vdot_ct<10u, 32u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<42u, 33u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<74u, 34u, 6u, 4u>();
    ctx.execute_vfpu_vdot_ct<11u, 32u, 7u, 4u>();
    ctx.execute_vfpu_vdot_ct<43u, 33u, 7u, 4u>();
    ctx.execute_vfpu_vdot_ct<75u, 34u, 7u, 4u>();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-64);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<9u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<10u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<11u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
      if (branch_taken) {
          goto L_088B7F44;
      }
      goto L_088B7FA8;
    }
L_088B7FA8:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
      if (branch_taken) {
          goto L_088B7FDC;
      }
      goto L_088B7FB0;
    }
L_088B7FAC:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    goto L_088B7FB0;
L_088B7FB0:
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_value); }
    goto L_088B7FB4;
L_088B7FB4:
    ctx.execute_vfpu_vdot_ct<8u, 32u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<40u, 33u, 4u, 4u>();
    ctx.execute_vfpu_vdot_ct<72u, 34u, 4u, 4u>();
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_value); }
    { const bool branch_taken = ctx.gpr[9] != 0u;
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<8u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(-16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
      if (branch_taken) {
          goto L_088B7FB4;
      }
      goto L_088B7FDC;
    }
L_088B7FDC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B7FEC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19060)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.pc = 0x088B8000u; return;
}

void recomp_unit_0044(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0044_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_44(Runtime &runtime) {
    runtime.register_generated_unit(44u, 0x088B4000u, 16384u, &recomp_unit_0044, &recomp_unit_0044_entry);
    runtime.register_function(0x088B4000u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4018u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4028u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4030u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B403Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4040u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4048u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4064u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4080u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4094u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B40C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4114u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4128u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B413Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B415Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4178u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B41B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B41C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B41C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B41D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B41E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4200u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4224u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4238u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4240u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4258u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4268u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4280u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B42A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B42BCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B42C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B42CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B42DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B42E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B42F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B430Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B431Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4330u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4338u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B434Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4364u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B438Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4398u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B43B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B43BCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B43D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B43E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B43F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4408u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4418u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4428u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4430u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4438u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4444u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4454u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B445Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4460u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4468u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B447Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4484u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4498u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44D0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B44F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4500u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B450Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4524u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B452Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4538u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4540u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B454Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4558u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4560u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B456Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4578u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4584u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4590u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B459Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B45FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4604u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B460Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4614u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B462Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4634u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B463Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4658u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4660u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4674u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4680u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4688u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4694u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B46FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4704u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4714u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B472Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4750u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4758u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4790u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4798u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B47A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4800u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4814u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B481Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B482Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4838u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4840u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4864u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B48B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B48BCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B48C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B48C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B48D0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4904u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B496Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4984u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B498Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4990u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4998u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B49A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B49ACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B49C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4A0Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4A88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4A90u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4A94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4A9Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4AA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4AB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4AB8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4ABCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4AC4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4ACCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B0Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B14u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B20u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B28u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B2Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B34u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B3Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4B4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4C38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B4C68u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5354u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5380u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5390u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B539Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B53A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B53D0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B53E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B53ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B53F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B540Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B54A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B54CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B54D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B54E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B54F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B54FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5504u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5508u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5510u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5558u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5568u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B557Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5584u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B558Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5594u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B55D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B55DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B55E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B55ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B560Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5614u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B561Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B562Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B563Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5664u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B566Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5674u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5688u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B56C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B56D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B56E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B56F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B56F8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5700u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5714u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5750u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5758u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B575Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5798u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B57C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B57E8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B57F8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5800u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5808u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5814u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5828u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5830u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5840u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5854u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B585Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5868u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5874u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5880u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5888u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5890u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58B8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B58DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5910u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B591Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5928u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5934u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B594Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5954u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B596Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5974u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B597Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5980u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B598Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59ACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59DCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B59F8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A04u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A0Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A24u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A2Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A3Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A5Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A74u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5A7Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5AA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5AB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5AC4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5ACCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B0Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B14u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B20u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B28u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B34u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B3Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B40u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B74u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B7Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5B9Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BC4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BD0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BD8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BDCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BE4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5BF4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C10u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C24u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C2Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C34u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C58u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C68u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C80u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5C88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5CB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5CD4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D04u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D20u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D28u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D60u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D6Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D84u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5D94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DC4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DD0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DD8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DE0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DE8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5DF8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E0Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E18u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E40u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E50u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E5Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E74u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E7Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E84u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5E94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EA0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EA8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EB8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EC0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EC4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5ECCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5EECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F0Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F28u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F2Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F3Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F50u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F58u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5F74u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FB4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FC4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FD8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B5FF8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6004u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6030u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B603Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6044u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6054u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B606Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6074u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6084u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6088u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B60F8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6124u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6130u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B614Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6154u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6180u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B618Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6194u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B619Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61ACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B61F8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6204u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B620Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6210u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6224u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6264u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6340u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6358u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6360u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6384u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B638Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B63A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B63B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B63C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B63C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B63E0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B63F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6408u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B640Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6420u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6424u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6430u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6438u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6440u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B645Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6468u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B646Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6480u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6490u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6498u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64BCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64C4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B64F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6508u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6510u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B652Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6534u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B653Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B655Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6564u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B658Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6594u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B65A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B65CCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B65ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B65FCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6608u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6610u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6618u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6620u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6628u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6630u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6634u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6644u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6654u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6678u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6684u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6690u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B669Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B66A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B66B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6718u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6734u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6748u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6774u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B67A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B67A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B67B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B67C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B67E8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B67F8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6810u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B682Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6830u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B686Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6878u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6880u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B689Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B68A4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B68D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6980u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B698Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A20u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A28u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A78u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A84u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6A9Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6AA0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6AA8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6AE0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6AF0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B00u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B08u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B10u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B24u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B34u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B5Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B6Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6B98u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6BB4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6BDCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6BF0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C24u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C2Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C40u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C64u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C70u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C74u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6C9Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6CCCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6CD8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D08u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D28u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D58u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D60u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D68u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D70u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6D98u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DB8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DC0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DDCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6DECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E04u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E0Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E14u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E24u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E30u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E3Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E64u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6E78u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6EA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6EACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6EB8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6EC0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6EC8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6ED0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6ED4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6EF8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6F8Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6FD0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6FD8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6FE0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B6FF0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B701Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7034u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B703Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7054u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B705Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B706Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7770u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7778u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7780u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B778Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7798u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B77C0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B77C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B77D4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B77E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B77ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B77F4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7800u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7808u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7818u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7838u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7840u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7848u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7864u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7868u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7870u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7880u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7888u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78B0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78C8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78D0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78E4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78F0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B78F8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7900u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7910u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7920u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7938u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7948u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B795Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7968u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7974u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B797Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7988u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7994u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B79A0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B79A8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B79B4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B79BCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B79D8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B79ECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7A70u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7A90u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7AA8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7AB4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7ABCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7AD0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7AECu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B00u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B08u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B34u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B4Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B94u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7B9Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7BA8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7BB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7BC4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7BE8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C00u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C08u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C14u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C18u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C24u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C50u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C58u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C60u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C68u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7C98u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7CA0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D00u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D18u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D34u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D50u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D54u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D6Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D70u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D88u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7D8Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7DA4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7DA8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7DBCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7DC4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E18u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E34u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7E50u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7ED0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7ED8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7F10u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7F1Cu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7F38u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7F44u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7FA8u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7FACu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7FB0u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7FB4u, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7FDCu, &recomp_unit_0044, "recomp_unit_0044");
    runtime.register_function(0x088B7FECu, &recomp_unit_0044, "recomp_unit_0044");
}
} // namespace psprecomp
