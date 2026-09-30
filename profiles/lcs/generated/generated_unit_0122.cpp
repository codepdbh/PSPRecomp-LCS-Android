#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0122[4050] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9,
    10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 21, 0, 0, 0, 0,
    22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27,
    28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 44,
    45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51,
    0, 0, 0, 0, 0, 52, 53, 0, 0, 0, 54, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 86, 0, 87, 0, 88,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 91, 0, 92, 0, 93,
    0, 94, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 99, 100, 0, 0, 101, 0, 0, 0,
    102, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0,
    131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 0, 136, 137, 0, 0, 0, 138, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0,
    0, 153, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0,
    0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 179, 180, 0, 0,
    0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 0,
    0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 195, 196, 0, 197, 0, 0,
    198, 0, 0, 0, 0, 199, 200, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0,
    0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0,
    0, 212, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0,
    227, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232,
    0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 245, 0, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 260, 0, 261, 0, 0,
    0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 264, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0,
    0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0,
    278, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 283, 0, 284, 0, 285, 0, 286, 0, 0, 0, 0, 0,
    0, 287, 0, 0, 0, 0, 0, 288, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0,
    294, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 303, 0, 0, 304, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 308, 0,
    309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 315, 0, 0, 0,
    316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 322, 0, 0, 0,
    323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 326, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0,
    0, 0, 0, 334, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346,
    0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 355, 0, 0,
    0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0,
    0, 361, 0, 362, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0,
    0, 0, 370, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 0,
    0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 381, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 384,
    0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 0, 391, 0, 392, 0, 393, 0, 0, 0, 0,
    394, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 398, 0, 399, 0, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0,
    405, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 409, 0, 0, 410, 411, 0, 412, 0, 0, 0, 0, 413, 414, 0, 415, 0, 0, 0, 0,
    416, 417, 0, 418, 0, 0, 0, 0, 419, 420, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 425, 0, 426, 427, 0, 428, 0, 0, 0,
    0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 433, 434, 0, 435, 0, 0, 436, 0, 437, 0, 438, 0,
    439, 440, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0,
    0, 0, 445, 0, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 450, 0, 451, 452, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 453, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0,
    0, 460, 0, 461, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 472, 0, 0, 0, 473, 0, 474, 0, 475, 0, 476, 0,
    0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 480, 0, 481, 0, 0, 482, 0, 0, 0, 0,
    483, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 491, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 495, 0, 496, 0, 497, 0, 0, 0, 498, 0, 499,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 501, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 512, 0, 513, 0, 514, 0, 0, 515, 0,
    0, 0, 516, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 527, 528, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 531,
    532, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 535, 0, 536, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0,
    539, 0, 540, 0, 541, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    550, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 555, 0,
    556, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 572, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574,
    0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 577, 0, 578, 0, 579, 0, 0,
    0, 0, 580, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 585, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 589, 0, 590, 591, 0, 592, 0, 0, 593, 0, 0,
    0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 596, 0, 597, 0, 598, 0, 599, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 601, 0, 602, 0, 603, 0, 604, 0, 0, 605, 0, 606, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 609, 0, 610, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 612, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 620,
    0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 624, 0, 0, 625, 0, 0, 626, 627, 0, 0, 0, 628, 0, 0, 629, 0,
    0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 635, 0, 0, 636, 0, 637, 0, 638, 0, 0,
    639, 640, 0, 641, 0, 0, 642, 0, 0, 643, 0, 0, 644, 645, 0, 0, 0, 646, 0, 0, 647, 0, 648, 649, 0, 0, 0, 0, 0, 0, 0, 650,
    0, 0, 651, 0, 652, 653, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    660, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 663, 0, 0, 664, 0, 665, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0,
    0, 0, 673, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 676, 677, 0, 0,
    0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 681, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 686, 687, 0, 0, 0,
    0, 688, 0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 692, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0,
    0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 698, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 700, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 704,
};
void recomp_unit_0122_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089EC000u;
        entry_id = (entry_delta < 16200u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0122[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089EC000;
    case 2u: goto L_089EC0E0;
    case 3u: goto L_089EC110;
    case 4u: goto L_089EC140;
    case 5u: goto L_089EC15C;
    case 6u: goto L_089EC164;
    case 7u: goto L_089EC16C;
    case 8u: goto L_089EC174;
    case 9u: goto L_089EC17C;
    case 10u: goto L_089EC180;
    case 11u: goto L_089EC188;
    case 12u: goto L_089EC208;
    case 13u: goto L_089EC21C;
    case 14u: goto L_089EC230;
    case 15u: goto L_089EC238;
    case 16u: goto L_089EC24C;
    case 17u: goto L_089EC264;
    case 18u: goto L_089EC26C;
    case 19u: goto L_089EC2D4;
    case 20u: goto L_089EC2E8;
    case 21u: goto L_089EC2EC;
    case 22u: goto L_089EC300;
    case 23u: goto L_089EC308;
    case 24u: goto L_089EC32C;
    case 25u: goto L_089EC344;
    case 26u: goto L_089EC358;
    case 27u: goto L_089EC37C;
    case 28u: goto L_089EC380;
    case 29u: goto L_089EC398;
    case 30u: goto L_089EC3A8;
    case 31u: goto L_089EC3B8;
    case 32u: goto L_089EC3C0;
    case 33u: goto L_089EC3C8;
    case 34u: goto L_089EC458;
    case 35u: goto L_089EC468;
    case 36u: goto L_089EC470;
    case 37u: goto L_089EC484;
    case 38u: goto L_089EC498;
    case 39u: goto L_089EC4A4;
    case 40u: goto L_089EC4B8;
    case 41u: goto L_089EC4CC;
    case 42u: goto L_089EC4D8;
    case 43u: goto L_089EC4E8;
    case 44u: goto L_089EC4FC;
    case 45u: goto L_089EC500;
    case 46u: goto L_089EC508;
    case 47u: goto L_089EC53C;
    case 48u: goto L_089EC550;
    case 49u: goto L_089EC56C;
    case 50u: goto L_089EC574;
    case 51u: goto L_089EC57C;
    case 52u: goto L_089EC594;
    case 53u: goto L_089EC598;
    case 54u: goto L_089EC5A8;
    case 55u: goto L_089EC5AC;
    case 56u: goto L_089EC5C0;
    case 57u: goto L_089EC5D4;
    case 58u: goto L_089EC5E0;
    case 59u: goto L_089EC604;
    case 60u: goto L_089EC658;
    case 61u: goto L_089EC674;
    case 62u: goto L_089EC690;
    case 63u: goto L_089EC698;
    case 64u: goto L_089EC6A0;
    case 65u: goto L_089EC6C8;
    case 66u: goto L_089EC6CC;
    case 67u: goto L_089EC710;
    case 68u: goto L_089EC778;
    case 69u: goto L_089EC784;
    case 70u: goto L_089EC7D4;
    case 71u: goto L_089EC80C;
    case 72u: goto L_089EC81C;
    case 73u: goto L_089EC828;
    case 74u: goto L_089EC830;
    case 75u: goto L_089EC848;
    case 76u: goto L_089EC8B8;
    case 77u: goto L_089EC8C4;
    case 78u: goto L_089EC8D0;
    case 79u: goto L_089EC8DC;
    case 80u: goto L_089EC8E8;
    case 81u: goto L_089EC918;
    case 82u: goto L_089EC940;
    case 83u: goto L_089EC950;
    case 84u: goto L_089EC958;
    case 85u: goto L_089EC964;
    case 86u: goto L_089EC96C;
    case 87u: goto L_089EC974;
    case 88u: goto L_089EC97C;
    case 89u: goto L_089EC9B0;
    case 90u: goto L_089EC9E8;
    case 91u: goto L_089EC9EC;
    case 92u: goto L_089EC9F4;
    case 93u: goto L_089EC9FC;
    case 94u: goto L_089ECA04;
    case 95u: goto L_089ECA0C;
    case 96u: goto L_089ECA14;
    case 97u: goto L_089ECA1C;
    case 98u: goto L_089ECA50;
    case 99u: goto L_089ECA60;
    case 100u: goto L_089ECA64;
    case 101u: goto L_089ECA70;
    case 102u: goto L_089ECA80;
    case 103u: goto L_089ECA88;
    case 104u: goto L_089ECA90;
    case 105u: goto L_089ECAA8;
    case 106u: goto L_089ECB04;
    case 107u: goto L_089ECB18;
    case 108u: goto L_089ECB4C;
    case 109u: goto L_089ECBC0;
    case 110u: goto L_089ECC0C;
    case 111u: goto L_089ECC1C;
    case 112u: goto L_089ECC30;
    case 113u: goto L_089ECC3C;
    case 114u: goto L_089ECC48;
    case 115u: goto L_089ECCBC;
    case 116u: goto L_089ECCD8;
    case 117u: goto L_089ECCE4;
    case 118u: goto L_089ECCF4;
    case 119u: goto L_089ECD1C;
    case 120u: goto L_089ECD38;
    case 121u: goto L_089ECD40;
    case 122u: goto L_089ECD48;
    case 123u: goto L_089ECD64;
    case 124u: goto L_089ECD6C;
    case 125u: goto L_089ECDA8;
    case 126u: goto L_089ECE30;
    case 127u: goto L_089ECE40;
    case 128u: goto L_089ECE48;
    case 129u: goto L_089ECE60;
    case 130u: goto L_089ECE74;
    case 131u: goto L_089ECE80;
    case 132u: goto L_089ECE8C;
    case 133u: goto L_089ECEA0;
    case 134u: goto L_089ECEAC;
    case 135u: goto L_089ECEB4;
    case 136u: goto L_089ECEC8;
    case 137u: goto L_089ECECC;
    case 138u: goto L_089ECEDC;
    case 139u: goto L_089ECEE0;
    case 140u: goto L_089ECF34;
    case 141u: goto L_089ECF5C;
    case 142u: goto L_089ECF6C;
    case 143u: goto L_089ECF74;
    case 144u: goto L_089ECF9C;
    case 145u: goto L_089ECFA4;
    case 146u: goto L_089ECFBC;
    case 147u: goto L_089ECFF8;
    case 148u: goto L_089ED054;
    case 149u: goto L_089ED0B0;
    case 150u: goto L_089ED0DC;
    case 151u: goto L_089ED0EC;
    case 152u: goto L_089ED0F4;
    case 153u: goto L_089ED104;
    case 154u: goto L_089ED10C;
    case 155u: goto L_089ED124;
    case 156u: goto L_089ED12C;
    case 157u: goto L_089ED150;
    case 158u: goto L_089ED168;
    case 159u: goto L_089ED178;
    case 160u: goto L_089ED184;
    case 161u: goto L_089ED198;
    case 162u: goto L_089ED1A4;
    case 163u: goto L_089ED1AC;
    case 164u: goto L_089ED1FC;
    case 165u: goto L_089ED224;
    case 166u: goto L_089ED238;
    case 167u: goto L_089ED260;
    case 168u: goto L_089ED268;
    case 169u: goto L_089ED280;
    case 170u: goto L_089ED29C;
    case 171u: goto L_089ED2B4;
    case 172u: goto L_089ED2CC;
    case 173u: goto L_089ED2D4;
    case 174u: goto L_089ED314;
    case 175u: goto L_089ED330;
    case 176u: goto L_089ED344;
    case 177u: goto L_089ED35C;
    case 178u: goto L_089ED364;
    case 179u: goto L_089ED370;
    case 180u: goto L_089ED374;
    case 181u: goto L_089ED388;
    case 182u: goto L_089ED3A0;
    case 183u: goto L_089ED3A8;
    case 184u: goto L_089ED3B8;
    case 185u: goto L_089ED3C4;
    case 186u: goto L_089ED3D8;
    case 187u: goto L_089ED3EC;
    case 188u: goto L_089ED3F4;
    case 189u: goto L_089ED40C;
    case 190u: goto L_089ED420;
    case 191u: goto L_089ED428;
    case 192u: goto L_089ED434;
    case 193u: goto L_089ED448;
    case 194u: goto L_089ED460;
    case 195u: goto L_089ED468;
    case 196u: goto L_089ED46C;
    case 197u: goto L_089ED474;
    case 198u: goto L_089ED480;
    case 199u: goto L_089ED494;
    case 200u: goto L_089ED498;
    case 201u: goto L_089ED4B0;
    case 202u: goto L_089ED4B8;
    case 203u: goto L_089ED4C4;
    case 204u: goto L_089ED4E8;
    case 205u: goto L_089ED4F0;
    case 206u: goto L_089ED510;
    case 207u: goto L_089ED568;
    case 208u: goto L_089ED5C8;
    case 209u: goto L_089ED5D0;
    case 210u: goto L_089ED664;
    case 211u: goto L_089ED66C;
    case 212u: goto L_089ED684;
    case 213u: goto L_089ED694;
    case 214u: goto L_089ED69C;
    case 215u: goto L_089ED6B4;
    case 216u: goto L_089ED6C4;
    case 217u: goto L_089ED6CC;
    case 218u: goto L_089ED730;
    case 219u: goto L_089ED73C;
    case 220u: goto L_089ED754;
    case 221u: goto L_089ED75C;
    case 222u: goto L_089ED770;
    case 223u: goto L_089ED800;
    case 224u: goto L_089ED81C;
    case 225u: goto L_089ED82C;
    case 226u: goto L_089ED85C;
    case 227u: goto L_089ED880;
    case 228u: goto L_089ED888;
    case 229u: goto L_089ED898;
    case 230u: goto L_089ED8AC;
    case 231u: goto L_089ED8D0;
    case 232u: goto L_089ED8FC;
    case 233u: goto L_089ED910;
    case 234u: goto L_089ED960;
    case 235u: goto L_089ED9A8;
    case 236u: goto L_089ED9D0;
    case 237u: goto L_089ED9E4;
    case 238u: goto L_089EDA10;
    case 239u: goto L_089EDA18;
    case 240u: goto L_089EDA20;
    case 241u: goto L_089EDA34;
    case 242u: goto L_089EDA44;
    case 243u: goto L_089EDA5C;
    case 244u: goto L_089EDA84;
    case 245u: goto L_089EDA90;
    case 246u: goto L_089EDAA0;
    case 247u: goto L_089EDAA8;
    case 248u: goto L_089EDAB0;
    case 249u: goto L_089EDAD4;
    case 250u: goto L_089EDAF0;
    case 251u: goto L_089EDB04;
    case 252u: goto L_089EDB0C;
    case 253u: goto L_089EDB14;
    case 254u: goto L_089EDB1C;
    case 255u: goto L_089EDB24;
    case 256u: goto L_089EDB2C;
    case 257u: goto L_089EDB34;
    case 258u: goto L_089EDB4C;
    case 259u: goto L_089EDB64;
    case 260u: goto L_089EDB6C;
    case 261u: goto L_089EDB74;
    case 262u: goto L_089EDB8C;
    case 263u: goto L_089EDBA4;
    case 264u: goto L_089EDBAC;
    case 265u: goto L_089EDBB4;
    case 266u: goto L_089EDBCC;
    case 267u: goto L_089EDBE4;
    case 268u: goto L_089EDBEC;
    case 269u: goto L_089EDBF4;
    case 270u: goto L_089EDC0C;
    case 271u: goto L_089EDC24;
    case 272u: goto L_089EDC2C;
    case 273u: goto L_089EDC34;
    case 274u: goto L_089EDC3C;
    case 275u: goto L_089EDC44;
    case 276u: goto L_089EDC4C;
    case 277u: goto L_089EDC68;
    case 278u: goto L_089EDC80;
    case 279u: goto L_089EDC88;
    case 280u: goto L_089EDCA0;
    case 281u: goto L_089EDCC0;
    case 282u: goto L_089EDCC8;
    case 283u: goto L_089EDCD0;
    case 284u: goto L_089EDCD8;
    case 285u: goto L_089EDCE0;
    case 286u: goto L_089EDCE8;
    case 287u: goto L_089EDD04;
    case 288u: goto L_089EDD1C;
    case 289u: goto L_089EDD24;
    case 290u: goto L_089EDD2C;
    case 291u: goto L_089EDD34;
    case 292u: goto L_089EDD50;
    case 293u: goto L_089EDD68;
    case 294u: goto L_089EDD80;
    case 295u: goto L_089EDD88;
    case 296u: goto L_089EDDA0;
    case 297u: goto L_089EDDBC;
    case 298u: goto L_089EDDC4;
    case 299u: goto L_089EDDCC;
    case 300u: goto L_089EDDD4;
    case 301u: goto L_089EDDDC;
    case 302u: goto L_089EDDE4;
    case 303u: goto L_089EDDE8;
    case 304u: goto L_089EDDF4;
    case 305u: goto L_089EDE40;
    case 306u: goto L_089EDE6C;
    case 307u: goto L_089EDE74;
    case 308u: goto L_089EDE78;
    case 309u: goto L_089EDE80;
    case 310u: goto L_089EDE94;
    case 311u: goto L_089EDEAC;
    case 312u: goto L_089EDEC8;
    case 313u: goto L_089EDED8;
    case 314u: goto L_089EDEE8;
    case 315u: goto L_089EDEF0;
    case 316u: goto L_089EDF00;
    case 317u: goto L_089EDF14;
    case 318u: goto L_089EDF2C;
    case 319u: goto L_089EDF48;
    case 320u: goto L_089EDF58;
    case 321u: goto L_089EDF68;
    case 322u: goto L_089EDF70;
    case 323u: goto L_089EDF80;
    case 324u: goto L_089EDFD8;
    case 325u: goto L_089EDFE8;
    case 326u: goto L_089EDFF4;
    case 327u: goto L_089EE028;
    case 328u: goto L_089EE030;
    case 329u: goto L_089EE038;
    case 330u: goto L_089EE04C;
    case 331u: goto L_089EE05C;
    case 332u: goto L_089EE064;
    case 333u: goto L_089EE06C;
    case 334u: goto L_089EE08C;
    case 335u: goto L_089EE090;
    case 336u: goto L_089EE0AC;
    case 337u: goto L_089EE0D4;
    case 338u: goto L_089EE0DC;
    case 339u: goto L_089EE0EC;
    case 340u: goto L_089EE0FC;
    case 341u: goto L_089EE150;
    case 342u: goto L_089EE15C;
    case 343u: goto L_089EE164;
    case 344u: goto L_089EE16C;
    case 345u: goto L_089EE174;
    case 346u: goto L_089EE17C;
    case 347u: goto L_089EE184;
    case 348u: goto L_089EE190;
    case 349u: goto L_089EE1A0;
    case 350u: goto L_089EE1AC;
    case 351u: goto L_089EE1C4;
    case 352u: goto L_089EE1D4;
    case 353u: goto L_089EE1E0;
    case 354u: goto L_089EE1E8;
    case 355u: goto L_089EE1F4;
    case 356u: goto L_089EE214;
    case 357u: goto L_089EE220;
    case 358u: goto L_089EE22C;
    case 359u: goto L_089EE24C;
    case 360u: goto L_089EE268;
    case 361u: goto L_089EE284;
    case 362u: goto L_089EE28C;
    case 363u: goto L_089EE294;
    case 364u: goto L_089EE29C;
    case 365u: goto L_089EE2B8;
    case 366u: goto L_089EE2C0;
    case 367u: goto L_089EE2CC;
    case 368u: goto L_089EE2D8;
    case 369u: goto L_089EE2EC;
    case 370u: goto L_089EE308;
    case 371u: goto L_089EE318;
    case 372u: goto L_089EE324;
    case 373u: goto L_089EE348;
    case 374u: goto L_089EE350;
    case 375u: goto L_089EE35C;
    case 376u: goto L_089EE368;
    case 377u: goto L_089EE374;
    case 378u: goto L_089EE394;
    case 379u: goto L_089EE3B0;
    case 380u: goto L_089EE3C8;
    case 381u: goto L_089EE3D0;
    case 382u: goto L_089EE3D8;
    case 383u: goto L_089EE3E0;
    case 384u: goto L_089EE3FC;
    case 385u: goto L_089EE404;
    case 386u: goto L_089EE420;
    case 387u: goto L_089EE42C;
    case 388u: goto L_089EE438;
    case 389u: goto L_089EE440;
    case 390u: goto L_089EE448;
    case 391u: goto L_089EE45C;
    case 392u: goto L_089EE464;
    case 393u: goto L_089EE46C;
    case 394u: goto L_089EE480;
    case 395u: goto L_089EE494;
    case 396u: goto L_089EE4A4;
    case 397u: goto L_089EE4B0;
    case 398u: goto L_089EE4C4;
    case 399u: goto L_089EE4CC;
    case 400u: goto L_089EE4D8;
    case 401u: goto L_089EE4E0;
    case 402u: goto L_089EE4E8;
    case 403u: goto L_089EE4F0;
    case 404u: goto L_089EE4F8;
    case 405u: goto L_089EE500;
    case 406u: goto L_089EE508;
    case 407u: goto L_089EE51C;
    case 408u: goto L_089EE530;
    case 409u: goto L_089EE534;
    case 410u: goto L_089EE540;
    case 411u: goto L_089EE544;
    case 412u: goto L_089EE54C;
    case 413u: goto L_089EE560;
    case 414u: goto L_089EE564;
    case 415u: goto L_089EE56C;
    case 416u: goto L_089EE580;
    case 417u: goto L_089EE584;
    case 418u: goto L_089EE58C;
    case 419u: goto L_089EE5A0;
    case 420u: goto L_089EE5A4;
    case 421u: goto L_089EE5AC;
    case 422u: goto L_089EE5B4;
    case 423u: goto L_089EE5C8;
    case 424u: goto L_089EE5D4;
    case 425u: goto L_089EE5DC;
    case 426u: goto L_089EE5E4;
    case 427u: goto L_089EE5E8;
    case 428u: goto L_089EE5F0;
    case 429u: goto L_089EE608;
    case 430u: goto L_089EE61C;
    case 431u: goto L_089EE634;
    case 432u: goto L_089EE648;
    case 433u: goto L_089EE650;
    case 434u: goto L_089EE654;
    case 435u: goto L_089EE65C;
    case 436u: goto L_089EE668;
    case 437u: goto L_089EE670;
    case 438u: goto L_089EE678;
    case 439u: goto L_089EE680;
    case 440u: goto L_089EE684;
    case 441u: goto L_089EE68C;
    case 442u: goto L_089EE6BC;
    case 443u: goto L_089EE6C4;
    case 444u: goto L_089EE6F8;
    case 445u: goto L_089EE708;
    case 446u: goto L_089EE718;
    case 447u: goto L_089EE724;
    case 448u: goto L_089EE730;
    case 449u: goto L_089EE748;
    case 450u: goto L_089EE750;
    case 451u: goto L_089EE758;
    case 452u: goto L_089EE75C;
    case 453u: goto L_089EE784;
    case 454u: goto L_089EE788;
    case 455u: goto L_089EE7AC;
    case 456u: goto L_089EE7B8;
    case 457u: goto L_089EE7C4;
    case 458u: goto L_089EE7E0;
    case 459u: goto L_089EE7E8;
    case 460u: goto L_089EE804;
    case 461u: goto L_089EE80C;
    case 462u: goto L_089EE814;
    case 463u: goto L_089EE81C;
    case 464u: goto L_089EE838;
    case 465u: goto L_089EE84C;
    case 466u: goto L_089EE8C0;
    case 467u: goto L_089EE8D4;
    case 468u: goto L_089EE8F4;
    case 469u: goto L_089EE924;
    case 470u: goto L_089EE938;
    case 471u: goto L_089EE944;
    case 472u: goto L_089EE950;
    case 473u: goto L_089EE960;
    case 474u: goto L_089EE968;
    case 475u: goto L_089EE970;
    case 476u: goto L_089EE978;
    case 477u: goto L_089EE988;
    case 478u: goto L_089EE9BC;
    case 479u: goto L_089EE9D0;
    case 480u: goto L_089EE9D8;
    case 481u: goto L_089EE9E0;
    case 482u: goto L_089EE9EC;
    case 483u: goto L_089EEA00;
    case 484u: goto L_089EEA08;
    case 485u: goto L_089EEA2C;
    case 486u: goto L_089EEA34;
    case 487u: goto L_089EEA3C;
    case 488u: goto L_089EEA48;
    case 489u: goto L_089EEA68;
    case 490u: goto L_089EEA70;
    case 491u: goto L_089EEA78;
    case 492u: goto L_089EEAA8;
    case 493u: goto L_089EEABC;
    case 494u: goto L_089EEACC;
    case 495u: goto L_089EEAD4;
    case 496u: goto L_089EEADC;
    case 497u: goto L_089EEAE4;
    case 498u: goto L_089EEAF4;
    case 499u: goto L_089EEAFC;
    case 500u: goto L_089EEB3C;
    case 501u: goto L_089EEB40;
    case 502u: goto L_089EEB44;
    case 503u: goto L_089EEB74;
    case 504u: goto L_089EEBC4;
    case 505u: goto L_089EEC18;
    case 506u: goto L_089EEC20;
    case 507u: goto L_089EEC28;
    case 508u: goto L_089EEC30;
    case 509u: goto L_089EEC70;
    case 510u: goto L_089EECC4;
    case 511u: goto L_089EECD4;
    case 512u: goto L_089EECDC;
    case 513u: goto L_089EECE4;
    case 514u: goto L_089EECEC;
    case 515u: goto L_089EECF8;
    case 516u: goto L_089EED08;
    case 517u: goto L_089EED0C;
    case 518u: goto L_089EED34;
    case 519u: goto L_089EED60;
    case 520u: goto L_089EED68;
    case 521u: goto L_089EEDA4;
    case 522u: goto L_089EEDE4;
    case 523u: goto L_089EEE20;
    case 524u: goto L_089EEE2C;
    case 525u: goto L_089EEE68;
    case 526u: goto L_089EEEA4;
    case 527u: goto L_089EEEC4;
    case 528u: goto L_089EEEC8;
    case 529u: goto L_089EEEE4;
    case 530u: goto L_089EEEEC;
    case 531u: goto L_089EEEFC;
    case 532u: goto L_089EEF00;
    case 533u: goto L_089EEF0C;
    case 534u: goto L_089EEF1C;
    case 535u: goto L_089EEF2C;
    case 536u: goto L_089EEF34;
    case 537u: goto L_089EEF3C;
    case 538u: goto L_089EEF78;
    case 539u: goto L_089EEF80;
    case 540u: goto L_089EEF88;
    case 541u: goto L_089EEF90;
    case 542u: goto L_089EEF9C;
    case 543u: goto L_089EEFD0;
    case 544u: goto L_089EEFF0;
    case 545u: goto L_089EEFF8;
    case 546u: goto L_089EF024;
    case 547u: goto L_089EF030;
    case 548u: goto L_089EF038;
    case 549u: goto L_089EF054;
    case 550u: goto L_089EF080;
    case 551u: goto L_089EF09C;
    case 552u: goto L_089EF0B8;
    case 553u: goto L_089EF0C0;
    case 554u: goto L_089EF0EC;
    case 555u: goto L_089EF0F8;
    case 556u: goto L_089EF100;
    case 557u: goto L_089EF11C;
    case 558u: goto L_089EF148;
    case 559u: goto L_089EF168;
    case 560u: goto L_089EF170;
    case 561u: goto L_089EF19C;
    case 562u: goto L_089EF1A8;
    case 563u: goto L_089EF1C0;
    case 564u: goto L_089EF1C8;
    case 565u: goto L_089EF1E8;
    case 566u: goto L_089EF1F0;
    case 567u: goto L_089EF21C;
    case 568u: goto L_089EF228;
    case 569u: goto L_089EF240;
    case 570u: goto L_089EF270;
    case 571u: goto L_089EF2AC;
    case 572u: goto L_089EF2B0;
    case 573u: goto L_089EF2B4;
    case 574u: goto L_089EF2FC;
    case 575u: goto L_089EF304;
    case 576u: goto L_089EF358;
    case 577u: goto L_089EF364;
    case 578u: goto L_089EF36C;
    case 579u: goto L_089EF374;
    case 580u: goto L_089EF388;
    case 581u: goto L_089EF390;
    case 582u: goto L_089EF398;
    case 583u: goto L_089EF3C4;
    case 584u: goto L_089EF3D4;
    case 585u: goto L_089EF410;
    case 586u: goto L_089EF414;
    case 587u: goto L_089EF440;
    case 588u: goto L_089EF448;
    case 589u: goto L_089EF454;
    case 590u: goto L_089EF45C;
    case 591u: goto L_089EF460;
    case 592u: goto L_089EF468;
    case 593u: goto L_089EF474;
    case 594u: goto L_089EF484;
    case 595u: goto L_089EF4B4;
    case 596u: goto L_089EF4BC;
    case 597u: goto L_089EF4C4;
    case 598u: goto L_089EF4CC;
    case 599u: goto L_089EF4D4;
    case 600u: goto L_089EF4D8;
    case 601u: goto L_089EF504;
    case 602u: goto L_089EF50C;
    case 603u: goto L_089EF514;
    case 604u: goto L_089EF51C;
    case 605u: goto L_089EF528;
    case 606u: goto L_089EF530;
    case 607u: goto L_089EF538;
    case 608u: goto L_089EF560;
    case 609u: goto L_089EF56C;
    case 610u: goto L_089EF574;
    case 611u: goto L_089EF5A0;
    case 612u: goto L_089EF5A8;
    case 613u: goto L_089EF5AC;
    case 614u: goto L_089EF5E0;
    case 615u: goto L_089EF630;
    case 616u: goto L_089EF640;
    case 617u: goto L_089EF6A0;
    case 618u: goto L_089EF6C8;
    case 619u: goto L_089EF6F4;
    case 620u: goto L_089EF6FC;
    case 621u: goto L_089EF710;
    case 622u: goto L_089EF724;
    case 623u: goto L_089EF734;
    case 624u: goto L_089EF740;
    case 625u: goto L_089EF74C;
    case 626u: goto L_089EF758;
    case 627u: goto L_089EF75C;
    case 628u: goto L_089EF76C;
    case 629u: goto L_089EF778;
    case 630u: goto L_089EF784;
    case 631u: goto L_089EF798;
    case 632u: goto L_089EF7AC;
    case 633u: goto L_089EF7BC;
    case 634u: goto L_089EF7CC;
    case 635u: goto L_089EF7D8;
    case 636u: goto L_089EF7E4;
    case 637u: goto L_089EF7EC;
    case 638u: goto L_089EF7F4;
    case 639u: goto L_089EF800;
    case 640u: goto L_089EF804;
    case 641u: goto L_089EF80C;
    case 642u: goto L_089EF818;
    case 643u: goto L_089EF824;
    case 644u: goto L_089EF830;
    case 645u: goto L_089EF834;
    case 646u: goto L_089EF844;
    case 647u: goto L_089EF850;
    case 648u: goto L_089EF858;
    case 649u: goto L_089EF85C;
    case 650u: goto L_089EF87C;
    case 651u: goto L_089EF888;
    case 652u: goto L_089EF890;
    case 653u: goto L_089EF894;
    case 654u: goto L_089EF89C;
    case 655u: goto L_089EF8B4;
    case 656u: goto L_089EF8E8;
    case 657u: goto L_089EF8FC;
    case 658u: goto L_089EF934;
    case 659u: goto L_089EF948;
    case 660u: goto L_089EF980;
    case 661u: goto L_089EF988;
    case 662u: goto L_089EF9B0;
    case 663u: goto L_089EF9BC;
    case 664u: goto L_089EF9C8;
    case 665u: goto L_089EF9D0;
    case 666u: goto L_089EF9E0;
    case 667u: goto L_089EF9F4;
    case 668u: goto L_089EFA1C;
    case 669u: goto L_089EFA30;
    case 670u: goto L_089EFA4C;
    case 671u: goto L_089EFA5C;
    case 672u: goto L_089EFA70;
    case 673u: goto L_089EFA88;
    case 674u: goto L_089EFA8C;
    case 675u: goto L_089EFAE0;
    case 676u: goto L_089EFAF0;
    case 677u: goto L_089EFAF4;
    case 678u: goto L_089EFB14;
    case 679u: goto L_089EFB30;
    case 680u: goto L_089EFB40;
    case 681u: goto L_089EFB48;
    case 682u: goto L_089EFB54;
    case 683u: goto L_089EFCA0;
    case 684u: goto L_089EFCB0;
    case 685u: goto L_089EFCC8;
    case 686u: goto L_089EFCEC;
    case 687u: goto L_089EFCF0;
    case 688u: goto L_089EFD04;
    case 689u: goto L_089EFD10;
    case 690u: goto L_089EFD18;
    case 691u: goto L_089EFD4C;
    case 692u: goto L_089EFD54;
    case 693u: goto L_089EFD70;
    case 694u: goto L_089EFD78;
    case 695u: goto L_089EFD8C;
    case 696u: goto L_089EFD94;
    case 697u: goto L_089EFDF4;
    case 698u: goto L_089EFDF8;
    case 699u: goto L_089EFE48;
    case 700u: goto L_089EFE54;
    case 701u: goto L_089EFE5C;
    case 702u: goto L_089EFF20;
    case 703u: goto L_089EFF30;
    case 704u: goto L_089EFF44;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089EC000:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = ctx.fpr[16] - ctx.fpr[17];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = ctx.fpr[13] - ctx.fpr[15];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[18] + ctx.fpr[19];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC174;
      }
      goto L_089EC0E0;
    }
L_089EC0E0:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[18] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[19] + ctx.fpr[0];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[2])) && ctx.fpr[12] == ctx.fpr[2]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC16C;
      }
      goto L_089EC110;
    }
L_089EC110:
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[12];
    ctx.gpr[4] = (16197u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC164;
      }
      goto L_089EC140;
    }
L_089EC140:
    ctx.gpr[4] = (48965u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC17C;
      }
      goto L_089EC15C;
    }
L_089EC15C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_089EC180;
      }
      goto L_089EC164;
    }
L_089EC164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_089EC180;
      }
      goto L_089EC16C;
    }
L_089EC16C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089EC180;
      }
      goto L_089EC174;
    }
L_089EC174:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089EC180;
      }
      goto L_089EC17C;
    }
L_089EC17C:
    ctx.gpr[2] = (0u | 1u);
    goto L_089EC180;
L_089EC180:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC188:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17180), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17172), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17168), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17164), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17160), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17156), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17152), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-17135), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-17136), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5976));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5488));
    goto L_089EC208;
L_089EC208:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EC208;
      }
      goto L_089EC21C;
    }
L_089EC21C:
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(6048));
    goto L_089EC230;
L_089EC230:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_089EC238;
L_089EC238:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EC238;
      }
      goto L_089EC24C;
    }
L_089EC24C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(100));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EC230;
      }
      goto L_089EC264;
    }
L_089EC264:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC26C:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17180), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17172), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17168), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17164), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17160), 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-17136), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5976));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5488));
    goto L_089EC2D4;
L_089EC2D4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EC2D4;
      }
      goto L_089EC2E8;
    }
L_089EC2E8:
    ctx.gpr[5] = (0u | 0u);
    goto L_089EC2EC;
L_089EC2EC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EC2EC;
      }
      goto L_089EC300;
    }
L_089EC300:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC308:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EC32Cu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089EC32Cu) goto L_089EC32C;
    return;
L_089EC32C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_089EC344;
    }
    goto L_089EC344;
L_089EC344:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089EC358;
    }
    goto L_089EC358;
L_089EC358:
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[20];
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[0] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
      if (branch_taken) {
          goto L_089EC380;
      }
      goto L_089EC37C;
    }
L_089EC37C:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_089EC380;
L_089EC380:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC398:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 158u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EC3B8;
      }
      goto L_089EC3A8;
    }
L_089EC3A8:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EC3C0;
      }
      goto L_089EC3B8;
    }
L_089EC3B8:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089EC3C0;
L_089EC3C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC3C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[21] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_089EC468;
      }
      goto L_089EC458;
    }
L_089EC458:
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC470;
      }
      goto L_089EC468;
    }
L_089EC468:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089EC470;
L_089EC470:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[13];
    ctx.gpr[31] = (0x089EC484u);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089EC484u) goto L_089EC484;
    return;
L_089EC484:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089EC4A4;
      }
      goto L_089EC498;
    }
L_089EC498:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089EC4A4;
L_089EC4A4:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089EC4B8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089EC4B8u) goto L_089EC4B8;
    return;
L_089EC4B8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089EC4D8;
      }
      goto L_089EC4CC;
    }
L_089EC4CC:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_089EC4D8;
L_089EC4D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(397))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EC500;
      }
      goto L_089EC4E8;
    }
L_089EC4E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089EC4FCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 552u, 0x089F3444u>(ctx, &aot_mem) && ctx.pc == 0x089EC4FCu) goto L_089EC4FC;
    return;
L_089EC4FC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089EC500;
L_089EC500:
    ctx.gpr[31] = (0x089EC508u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089EC508u) goto L_089EC508;
    return;
L_089EC508:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC574;
      }
      goto L_089EC53C;
    }
L_089EC53C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_089EC550;
    }
    goto L_089EC550;
L_089EC550:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC574;
      }
      goto L_089EC56C;
    }
L_089EC56C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089EC574;
L_089EC574:
    ctx.gpr[31] = (0x089EC57Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089EC398;
L_089EC57C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC598;
      }
      goto L_089EC594;
    }
L_089EC594:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089EC598;
L_089EC598:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC5AC;
      }
      goto L_089EC5A8;
    }
L_089EC5A8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089EC5AC;
L_089EC5AC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[13];
    ctx.gpr[31] = (0x089EC5C0u);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089EC5C0u) goto L_089EC5C0;
    return;
L_089EC5C0:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089EC5E0;
      }
      goto L_089EC5D4;
    }
L_089EC5D4:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[12];
    goto L_089EC5E0;
L_089EC5E0:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[22];
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089EC604u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089EC308;
L_089EC604:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16800u << 16u);
      if (branch_taken) {
          goto L_089EC6A0;
      }
      goto L_089EC658;
    }
L_089EC658:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EC698;
      }
      goto L_089EC674;
    }
L_089EC674:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089EC690;
    }
    goto L_089EC690;
L_089EC690:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089EC6CC;
      }
      goto L_089EC698;
    }
L_089EC698:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089EC6CC;
      }
      goto L_089EC6A0;
    }
L_089EC6A0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_089EC6C8;
    }
    goto L_089EC6C8;
L_089EC6C8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089EC6CC;
L_089EC6CC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC710:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[16] + ctx.fpr[17];
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.fpr[17] = std::sqrt(ctx.fpr[17]);
    ctx.gpr[7] = (15877u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 7864u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089EC784;
      }
      goto L_089EC778;
    }
L_089EC778:
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[17];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_089EC784;
L_089EC784:
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.fpr[20] = ctx.fpr[15] + ctx.fpr[13];
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[22] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089EC7D4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089EC3C8;
L_089EC7D4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC830;
      }
      goto L_089EC80C;
    }
L_089EC80C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EC828;
      }
      goto L_089EC81C;
    }
L_089EC81C:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089EC830;
      }
      goto L_089EC828;
    }
L_089EC828:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089EC830;
L_089EC830:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EC848:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[17] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[13];
    ctx.gpr[4] = (17096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 19u);
      if (branch_taken) {
          goto L_089EC8DC;
      }
      goto L_089EC8B8;
    }
L_089EC8B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089EC8D0;
      }
      goto L_089EC8C4;
    }
L_089EC8C4:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089ECA90;
      }
      goto L_089EC8D0;
    }
L_089EC8D0:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089ECA90;
      }
      goto L_089EC8DC;
    }
L_089EC8DC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089EC964;
      }
      goto L_089EC8E8;
    }
L_089EC8E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (14545u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECA90;
      }
      goto L_089EC918;
    }
L_089EC918:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (14801u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECA90;
      }
      goto L_089EC940;
    }
L_089EC940:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ECA90;
      }
      goto L_089EC950;
    }
L_089EC950:
    ctx.gpr[31] = (0x089EC958u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 253u, 0x0891D584u>(ctx, &aot_mem) && ctx.pc == 0x089EC958u) goto L_089EC958;
    return;
L_089EC958:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089ECA90;
      }
      goto L_089EC964;
    }
L_089EC964:
    ctx.gpr[31] = (0x089EC96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089EC96Cu) goto L_089EC96C;
    return;
L_089EC96C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EC9E8;
      }
      goto L_089EC974;
    }
L_089EC974:
    ctx.gpr[31] = (0x089EC97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089EC97Cu) goto L_089EC97C;
    return;
L_089EC97C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EC9E8;
      }
      goto L_089EC9B0;
    }
L_089EC9B0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16773u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 21845u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(644), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089EC9EC;
      }
      goto L_089EC9E8;
    }
L_089EC9E8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(644), static_cast<std::uint16_t>(0u));
    goto L_089EC9EC;
L_089EC9EC:
    ctx.gpr[31] = (0x089EC9F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089EC9F4u) goto L_089EC9F4;
    return;
L_089EC9F4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
        goto L_089ECA64;
    }
    goto L_089EC9FC;
L_089EC9FC:
    ctx.gpr[31] = (0x089ECA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089ECA04u) goto L_089ECA04;
    return;
L_089ECA04:
    ctx.gpr[31] = (0x089ECA0Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 824u, 0x0889FD00u>(ctx, &aot_mem) && ctx.pc == 0x089ECA0Cu) goto L_089ECA0C;
    return;
L_089ECA0C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
        goto L_089ECA64;
    }
    goto L_089ECA14;
L_089ECA14:
    ctx.gpr[31] = (0x089ECA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089ECA1Cu) goto L_089ECA1C;
    return;
L_089ECA1C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECA90;
      }
      goto L_089ECA50;
    }
L_089ECA50:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2501 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ECA90;
      }
      goto L_089ECA60;
    }
L_089ECA60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    goto L_089ECA64;
L_089ECA64:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ECA90;
      }
      goto L_089ECA70;
    }
L_089ECA70:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECA90;
      }
      goto L_089ECA80;
    }
L_089ECA80:
    ctx.gpr[31] = (0x089ECA88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 253u, 0x0891D584u>(ctx, &aot_mem) && ctx.pc == 0x089ECA88u) goto L_089ECA88;
    return;
L_089ECA88:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    goto L_089ECA90;
L_089ECA90:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ECAA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x089ECB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x089ECB04u) goto L_089ECB04;
    return;
L_089ECB04:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089ECB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 181u, 0x089D5808u>(ctx, &aot_mem) && ctx.pc == 0x089ECB18u) goto L_089ECB18;
    return;
L_089ECB18:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089ECB4Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089ECB4Cu) goto L_089ECB4C;
    return;
L_089ECB4C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089ECBC0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089ECBC0u) goto L_089ECBC0;
    return;
L_089ECBC0:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
        goto L_089ECC1C;
    }
    goto L_089ECC0C;
L_089ECC0C:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    goto L_089ECC1C;
L_089ECC1C:
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECC3C;
      }
      goto L_089ECC30;
    }
L_089ECC30:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089ECD6C;
      }
      goto L_089ECC3C;
    }
L_089ECC3C:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x089ECC48u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089ECC48u) goto L_089ECC48;
    return;
L_089ECC48:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[13] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECCE4;
      }
      goto L_089ECCBC;
    }
L_089ECCBC:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089ECCD8;
    }
    goto L_089ECCD8;
L_089ECCD8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089ECD6C;
      }
      goto L_089ECCE4;
    }
L_089ECCE4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (48588u << 16u);
      if (branch_taken) {
          goto L_089ECD48;
      }
      goto L_089ECCF4;
    }
L_089ECCF4:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_089ECD1C;
    }
    goto L_089ECD1C;
L_089ECD1C:
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089ECD40;
      }
      goto L_089ECD38;
    }
L_089ECD38:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089ECD40;
L_089ECD40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ECD6C;
      }
      goto L_089ECD48;
    }
L_089ECD48:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089ECD64;
    }
    goto L_089ECD64;
L_089ECD64:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089ECD6C;
L_089ECD6C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ECDA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[8] = (48896u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[24])) && ctx.fpr[13] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089ECE40;
      }
      goto L_089ECE30;
    }
L_089ECE30:
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[13];
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ECE48;
      }
      goto L_089ECE40;
    }
L_089ECE40:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089ECE48;
L_089ECE48:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[13];
    ctx.gpr[31] = (0x089ECE60u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089ECE60u) goto L_089ECE60;
    return;
L_089ECE60:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089ECE80;
      }
      goto L_089ECE74;
    }
L_089ECE74:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[12];
    goto L_089ECE80;
L_089ECE80:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089ECE8Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089ECE8Cu) goto L_089ECE8C;
    return;
L_089ECE8C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089ECEAC;
      }
      goto L_089ECEA0;
    }
L_089ECEA0:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089ECEAC;
L_089ECEAC:
    ctx.gpr[31] = (0x089ECEB4u);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089ECEB4u) goto L_089ECEB4;
    return;
L_089ECEB4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECECC;
      }
      goto L_089ECEC8;
    }
L_089ECEC8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_089ECECC;
L_089ECECC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECEE0;
      }
      goto L_089ECEDC;
    }
L_089ECEDC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_089ECEE0;
L_089ECEE0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
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
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
        goto L_089ECF74;
    }
    goto L_089ECF34;
L_089ECF34:
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49312u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ECF6C;
      }
      goto L_089ECF5C;
    }
L_089ECF5C:
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089ECF6C;
L_089ECF6C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_089ECFBC;
      }
      goto L_089ECF74;
    }
L_089ECF74:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (16000u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089ECFA4;
      }
      goto L_089ECF9C;
    }
L_089ECF9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089ECFBC;
      }
      goto L_089ECFA4;
    }
L_089ECFA4:
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089ECFBC;
L_089ECFBC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ECFF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089ED054u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089ED054u) goto L_089ED054;
    return;
L_089ED054:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[30] / ctx.fpr[12];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089ED0B0;
    }
    goto L_089ED0B0;
L_089ED0B0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ED0EC;
      }
      goto L_089ED0DC;
    }
L_089ED0DC:
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[12];
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ED0F4;
      }
      goto L_089ED0EC;
    }
L_089ED0EC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089ED0F4;
L_089ED0F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089ED104u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089ED104u) goto L_089ED104;
    return;
L_089ED104:
    ctx.gpr[31] = (0x089ED10Cu);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x089ED10Cu) goto L_089ED10C;
    return;
L_089ED10C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x089ED124u);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089ED124u) goto L_089ED124;
    return;
L_089ED124:
    ctx.gpr[31] = (0x089ED12Cu);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x089ED12Cu) goto L_089ED12C;
    return;
L_089ED12C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[31] = (0x089ED150u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089ED150u) goto L_089ED150;
    return;
L_089ED150:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_089ED178;
      }
      goto L_089ED168;
    }
L_089ED168:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089ED178;
L_089ED178:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089ED184u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089ED184u) goto L_089ED184;
    return;
L_089ED184:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089ED1A4;
      }
      goto L_089ED198;
    }
L_089ED198:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_089ED1A4;
L_089ED1A4:
    ctx.gpr[31] = (0x089ED1ACu);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089ED1ACu) goto L_089ED1AC;
    return;
L_089ED1AC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
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
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[28] = ctx.fpr[13] - ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
        goto L_089ED238;
    }
    goto L_089ED1FC;
L_089ED1FC:
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49312u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ED280;
      }
      goto L_089ED224;
    }
L_089ED224:
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089ED280;
      }
      goto L_089ED238;
    }
L_089ED238:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[28] / ctx.fpr[12];
    ctx.gpr[4] = (16000u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089ED268;
      }
      goto L_089ED260;
    }
L_089ED260:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_089ED280;
      }
      goto L_089ED268;
    }
L_089ED268:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089ED280;
L_089ED280:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089ED2D4;
      }
      goto L_089ED29C;
    }
L_089ED29C:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15897u << 16u);
      if (branch_taken) {
          goto L_089ED2D4;
      }
      goto L_089ED2B4;
    }
L_089ED2B4:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ED2D4;
      }
      goto L_089ED2CC;
    }
L_089ED2CC:
    ctx.gpr[31] = (0x089ED2D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 129u, 0x08861240u>(ctx, &aot_mem) && ctx.pc == 0x089ED2D4u) goto L_089ED2D4;
    return;
L_089ED2D4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED314:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-5976));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5968));
    goto L_089ED330;
L_089ED330:
    ctx.gpr[8] = (ctx.gpr[9] << 2u);
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089ED364;
      }
      goto L_089ED344;
    }
L_089ED344:
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED330;
      }
      goto L_089ED35C;
    }
L_089ED35C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ED370;
      }
      goto L_089ED364;
    }
L_089ED364:
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089ED420;
      }
      goto L_089ED370;
    }
L_089ED370:
    ctx.gpr[9] = (0u | 0u);
    goto L_089ED374;
L_089ED374:
    ctx.gpr[8] = (ctx.gpr[9] << 2u);
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ED3A8;
      }
      goto L_089ED388;
    }
L_089ED388:
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED374;
      }
      goto L_089ED3A0;
    }
L_089ED3A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089ED3B8;
      }
      goto L_089ED3A8;
    }
L_089ED3A8:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089ED420;
      }
      goto L_089ED3B8;
    }
L_089ED3B8:
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    goto L_089ED3C4;
L_089ED3C4:
    ctx.gpr[8] = (ctx.gpr[9] << 2u);
    ctx.gpr[2] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ED3F4;
      }
      goto L_089ED3D8;
    }
L_089ED3D8:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[8] < ctx.gpr[11] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ED3F4;
      }
      goto L_089ED3EC;
    }
L_089ED3EC:
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
    goto L_089ED3F4;
L_089ED3F4:
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED3C4;
      }
      goto L_089ED40C;
    }
L_089ED40C:
    ctx.gpr[8] = (ctx.gpr[10] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089ED420;
L_089ED420:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED428:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5976));
    goto L_089ED434;
L_089ED434:
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089ED468;
      }
      goto L_089ED448;
    }
L_089ED448:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED434;
      }
      goto L_089ED460;
    }
L_089ED460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089ED46C;
      }
      goto L_089ED468;
    }
L_089ED468:
    ctx.gpr[2] = (0u | 1u);
    goto L_089ED46C;
L_089ED46C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED474:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5976));
    goto L_089ED480;
L_089ED480:
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089ED498;
      }
      goto L_089ED494;
    }
L_089ED494:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_089ED498;
L_089ED498:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED480;
      }
      goto L_089ED4B0;
    }
L_089ED4B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED4B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5976));
    goto L_089ED4C4;
L_089ED4C4:
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED4C4;
      }
      goto L_089ED4E8;
    }
L_089ED4E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED4F0:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(384), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(388), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED510:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(356), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(352), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(360), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(376), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(380), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(372), 0u);
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089ED568u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 456u, 0x08975FB0u>(ctx, &aot_mem) && ctx.pc == 0x089ED568u) goto L_089ED568;
    return;
L_089ED568:
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[9] << 4u);
    ctx.gpr[5] = (ctx.gpr[9] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    ctx.gpr[5] = (18804u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9214u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_089ED694;
      }
      goto L_089ED5C8;
    }
L_089ED5C8:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089ED5D0;
L_089ED5D0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] & 16383u);
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    ctx.gpr[2] = (ctx.gpr[10] << 4u);
    ctx.gpr[3] = (ctx.gpr[10] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = ctx.fpr[18] - ctx.fpr[16];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ED66C;
      }
      goto L_089ED664;
    }
L_089ED664:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    goto L_089ED66C;
L_089ED66C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED5D0;
      }
      goto L_089ED684;
    }
L_089ED684:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089ED694;
L_089ED694:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_089ED75C;
      }
      goto L_089ED69C;
    }
L_089ED69C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089ED6CC;
      }
      goto L_089ED6B4;
    }
L_089ED6B4:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ED6CC;
      }
      goto L_089ED6C4;
    }
L_089ED6C4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089ED6CC;
L_089ED6CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089ED73C;
      }
      goto L_089ED730;
    }
L_089ED730:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    goto L_089ED73C;
L_089ED73C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(360), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(352), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(356), ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(480), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x089ED754u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 486u, 0x089F7DCCu>(ctx, &aot_mem) && ctx.pc == 0x089ED754u) goto L_089ED754;
    return;
L_089ED754:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(0u));
    goto L_089ED75C;
L_089ED75C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED770:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(480));
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    ctx.gpr[11] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089ED800u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 753u, 0x08977DB0u>(ctx, &aot_mem) && ctx.pc == 0x089ED800u) goto L_089ED800;
    return;
L_089ED800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
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
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089ED81Cu);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 361u, 0x08975638u>(ctx, &aot_mem) && ctx.pc == 0x089ED81Cu) goto L_089ED81C;
    return;
L_089ED81C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(480))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089ED898;
      }
      goto L_089ED82C;
    }
L_089ED82C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(360), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 20u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(352));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x089ED85Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(352), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 188u, 0x089253D4u>(ctx, &aot_mem) && ctx.pc == 0x089ED85Cu) goto L_089ED85C;
    return;
L_089ED85C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(448)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x089ED880u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(356), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 188u, 0x089253D4u>(ctx, &aot_mem) && ctx.pc == 0x089ED880u) goto L_089ED880;
    return;
L_089ED880:
    ctx.gpr[31] = (0x089ED888u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 486u, 0x089F7DCCu>(ctx, &aot_mem) && ctx.pc == 0x089ED888u) goto L_089ED888;
    return;
L_089ED888:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089ED8AC;
      }
      goto L_089ED898;
    }
L_089ED898:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(356), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(352), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(360), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(480), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (0u | 1u);
    goto L_089ED8AC;
L_089ED8AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED8D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17192)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089ED8FCu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089ED8FCu) goto L_089ED8FC;
    return;
L_089ED8FC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089ED910u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089ED910u) goto L_089ED910;
    return;
L_089ED910:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7076)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089ED960:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5488));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(7152));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_089EDA18;
      }
      goto L_089ED9A8;
    }
L_089ED9A8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(4944));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[31] = (0x089ED9D0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089ED9D0u) goto L_089ED9D0;
    return;
L_089ED9D0:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089ED9E4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089ED9E4u) goto L_089ED9E4;
    return;
L_089ED9E4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDA20;
      }
      goto L_089EDA10;
    }
L_089EDA10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDA34;
      }
      goto L_089EDA18;
    }
L_089EDA18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089EDA44;
      }
      goto L_089EDA20;
    }
L_089EDA20:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EDA20;
      }
      goto L_089EDA34;
    }
L_089EDA34:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6048));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089EDA44;
L_089EDA44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDA5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5488));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089EDA84u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_089ED960;
L_089EDA84:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDA90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EDAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089EDAA0u) goto L_089EDAA0;
    return;
L_089EDAA0:
    ctx.gpr[31] = (0x089EDAA8u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 344u, 0x08ACD63Cu>(ctx, &aot_mem) && ctx.pc == 0x089EDAA8u) goto L_089EDAA8;
    return;
L_089EDAA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EDC34;
      }
      goto L_089EDAB0;
    }
L_089EDAB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17124)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11072));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EDC34;
      }
      goto L_089EDAD4;
    }
L_089EDAD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-19068)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDC34;
      }
      goto L_089EDAF0;
    }
L_089EDAF0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17128)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EDB1C;
      }
      goto L_089EDB04;
    }
L_089EDB04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EDC34;
      }
      goto L_089EDB0C;
    }
L_089EDB0C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089EDB34;
      }
      goto L_089EDB14;
    }
L_089EDB14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDB74;
      }
      goto L_089EDB1C;
    }
L_089EDB1C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EDBB4;
      }
      goto L_089EDB24;
    }
L_089EDB24:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDBF4;
      }
      goto L_089EDB2C;
    }
L_089EDB2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDC34;
      }
      goto L_089EDB34;
    }
L_089EDB34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1952)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDB64;
      }
      goto L_089EDB4C;
    }
L_089EDB4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1972)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDB6C;
      }
      goto L_089EDB64;
    }
L_089EDB64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDC34;
      }
      goto L_089EDB6C;
    }
L_089EDB6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-954));
      if (branch_taken) {
          goto L_089EDDE8;
      }
      goto L_089EDB74;
    }
L_089EDB74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1992)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDBA4;
      }
      goto L_089EDB8C;
    }
L_089EDB8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2012)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDBAC;
      }
      goto L_089EDBA4;
    }
L_089EDBA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDC34;
      }
      goto L_089EDBAC;
    }
L_089EDBAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-954));
      if (branch_taken) {
          goto L_089EDDE8;
      }
      goto L_089EDBB4;
    }
L_089EDBB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2032)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDBE4;
      }
      goto L_089EDBCC;
    }
L_089EDBCC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2052)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDBEC;
      }
      goto L_089EDBE4;
    }
L_089EDBE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDC34;
      }
      goto L_089EDBEC;
    }
L_089EDBEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-954));
      if (branch_taken) {
          goto L_089EDDE8;
      }
      goto L_089EDBF4;
    }
L_089EDBF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDC24;
      }
      goto L_089EDC0C;
    }
L_089EDC0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2092)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDC2C;
      }
      goto L_089EDC24;
    }
L_089EDC24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDC34;
      }
      goto L_089EDC2C;
    }
L_089EDC2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-954));
      if (branch_taken) {
          goto L_089EDDE8;
      }
      goto L_089EDC34;
    }
L_089EDC34:
    ctx.gpr[31] = (0x089EDC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089EDC3Cu) goto L_089EDC3C;
    return;
L_089EDC3C:
    ctx.gpr[31] = (0x089EDC44u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 348u, 0x08ACD668u>(ctx, &aot_mem) && ctx.pc == 0x089EDC44u) goto L_089EDC44;
    return;
L_089EDC44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EDCD0;
      }
      goto L_089EDC4C;
    }
L_089EDC4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3172)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCD0;
      }
      goto L_089EDC68;
    }
L_089EDC68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDCD0;
      }
      goto L_089EDC80;
    }
L_089EDC80:
    ctx.gpr[31] = (0x089EDC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089EDC88u) goto L_089EDC88;
    return;
L_089EDC88:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17084)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17088)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089EDCA0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089EDCA0u) goto L_089EDCA0;
    return;
L_089EDCA0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EDCC8;
      }
      goto L_089EDCC0;
    }
L_089EDCC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 158u);
      if (branch_taken) {
          goto L_089EDDE8;
      }
      goto L_089EDCC8;
    }
L_089EDCC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 157u);
      if (branch_taken) {
          goto L_089EDDE8;
      }
      goto L_089EDCD0;
    }
L_089EDCD0:
    ctx.gpr[31] = (0x089EDCD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089EDCD8u) goto L_089EDCD8;
    return;
L_089EDCD8:
    ctx.gpr[31] = (0x089EDCE0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 356u, 0x08ACD6B4u>(ctx, &aot_mem) && ctx.pc == 0x089EDCE0u) goto L_089EDCE0;
    return;
L_089EDCE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EDD1C;
      }
      goto L_089EDCE8;
    }
L_089EDCE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2972)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDD1C;
      }
      goto L_089EDD04;
    }
L_089EDD04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDDCC;
      }
      goto L_089EDD1C;
    }
L_089EDD1C:
    ctx.gpr[31] = (0x089EDD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089EDD24u) goto L_089EDD24;
    return;
L_089EDD24:
    ctx.gpr[31] = (0x089EDD2Cu);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 364u, 0x08ACD700u>(ctx, &aot_mem) && ctx.pc == 0x089EDD2Cu) goto L_089EDD2C;
    return;
L_089EDD2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EDDC4;
      }
      goto L_089EDD34;
    }
L_089EDD34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3252)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDDC4;
      }
      goto L_089EDD50;
    }
L_089EDD50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3272)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDDC4;
      }
      goto L_089EDD68;
    }
L_089EDD68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDDC4;
      }
      goto L_089EDD80;
    }
L_089EDD80:
    ctx.gpr[31] = (0x089EDD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089EDD88u) goto L_089EDD88;
    return;
L_089EDD88:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17092)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17096)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089EDDA0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089EDDA0u) goto L_089EDDA0;
    return;
L_089EDDA0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089EDDD4;
      }
      goto L_089EDDBC;
    }
L_089EDDBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089EDDD4;
      }
      goto L_089EDDC4;
    }
L_089EDDC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 157u);
      if (branch_taken) {
          goto L_089EDDE8;
      }
      goto L_089EDDCC;
    }
L_089EDDCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 148u);
      if (branch_taken) {
          goto L_089EDDE8;
      }
      goto L_089EDDD4;
    }
L_089EDDD4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDDE4;
      }
      goto L_089EDDDC;
    }
L_089EDDDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 163u);
      if (branch_taken) {
          goto L_089EDDE8;
      }
      goto L_089EDDE4;
    }
L_089EDDE4:
    ctx.gpr[2] = (0u | 162u);
    goto L_089EDDE8;
L_089EDDE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDDF4:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5704));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] ^ 1u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDE6C;
      }
      goto L_089EDE40;
    }
L_089EDE40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDE74;
      }
      goto L_089EDE6C;
    }
L_089EDE6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089EDE78;
      }
      goto L_089EDE74;
    }
L_089EDE74:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089EDE78;
L_089EDE78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDE80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EDE94u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089EDE94u) goto L_089EDE94;
    return;
L_089EDE94:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17104)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089EDEACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089EDEACu) goto L_089EDEAC;
    return;
L_089EDEAC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089EDEC8;
L_089EDEC8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDEF0;
      }
      goto L_089EDED8;
    }
L_089EDED8:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089EDEC8;
      }
      goto L_089EDEE8;
    }
L_089EDEE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDEF0;
      }
      goto L_089EDEF0;
    }
L_089EDEF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDF00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EDF14u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089EDF14u) goto L_089EDF14;
    return;
L_089EDF14:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17100)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17104)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089EDF2Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x089EDF2Cu) goto L_089EDF2C;
    return;
L_089EDF2C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(18));
    goto L_089EDF48;
L_089EDF48:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EDF70;
      }
      goto L_089EDF58;
    }
L_089EDF58:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089EDF48;
      }
      goto L_089EDF68;
    }
L_089EDF68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EDF70;
      }
      goto L_089EDF70;
    }
L_089EDF70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDF80:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7152));
    ctx.gpr[9] = (ctx.gpr[8] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(6048));
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[10] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[10] + static_cast<std::uint32_t>(4944));
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089EDFE8;
      }
      goto L_089EDFD8;
    }
L_089EDFD8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_089EDFE8;
L_089EDFE8:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EDFF4:
    ctx.gpr[9] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[6] - ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(6048));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4944));
      if (branch_taken) {
          goto L_089EE04C;
      }
      goto L_089EE028;
    }
L_089EE028:
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089EE038;
      }
      goto L_089EE030;
    }
L_089EE030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE04C;
      }
      goto L_089EE038;
    }
L_089EE038:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[7];
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EE028;
      }
      goto L_089EE04C;
    }
L_089EE04C:
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) <= 0;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089EE064;
      }
      goto L_089EE05C;
    }
L_089EE05C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[10]);
    goto L_089EE064;
L_089EE064:
    if (ctx.gpr[9] == ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
        goto L_089EE090;
    }
    goto L_089EE06C;
L_089EE06C:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[7];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089EE06C;
      }
      goto L_089EE08C;
    }
L_089EE08C:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    goto L_089EE090;
L_089EE090:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7152));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE0AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE17C;
      }
      goto L_089EE0D4;
    }
L_089EE0D4:
    ctx.gpr[31] = (0x089EE0DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089EE0DCu) goto L_089EE0DC;
    return;
L_089EE0DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE174;
      }
      goto L_089EE0EC;
    }
L_089EE0EC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EE16C;
      }
      goto L_089EE0FC;
    }
L_089EE0FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17180)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17172)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17164)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-17160)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-17132)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE164;
      }
      goto L_089EE150;
    }
L_089EE150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089EE184;
      }
      goto L_089EE15C;
    }
L_089EE15C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE2C0;
      }
      goto L_089EE164;
    }
L_089EE164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE404;
      }
      goto L_089EE16C;
    }
L_089EE16C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE404;
      }
      goto L_089EE174;
    }
L_089EE174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE404;
      }
      goto L_089EE17C;
    }
L_089EE17C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE404;
      }
      goto L_089EE184;
    }
L_089EE184:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16653)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE2C0;
      }
      goto L_089EE190;
    }
L_089EE190:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16920));
    ctx.gpr[31] = (0x089EE1A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 64u, 0x088B04D0u>(ctx, &aot_mem) && ctx.pc == 0x089EE1A0u) goto L_089EE1A0;
    return;
L_089EE1A0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EE29C;
      }
      goto L_089EE1AC;
    }
L_089EE1AC:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089EE1C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089EE1C4u) goto L_089EE1C4;
    return;
L_089EE1C4:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089EE1D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 48u, 0x088B02E4u>(ctx, &aot_mem) && ctx.pc == 0x089EE1D4u) goto L_089EE1D4;
    return;
L_089EE1D4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE294;
      }
      goto L_089EE1E0;
    }
L_089EE1E0:
    ctx.gpr[31] = (0x089EE1E8u);
    ctx.gpr[4] = (0u | 147u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 397u, 0x089EA804u>(ctx, &aot_mem) && ctx.pc == 0x089EE1E8u) goto L_089EE1E8;
    return;
L_089EE1E8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE294;
      }
      goto L_089EE1F4;
    }
L_089EE1F4:
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-17156)));
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE294;
      }
      goto L_089EE214;
    }
L_089EE214:
    ctx.gpr[4] = (0u | 147u);
    ctx.gpr[31] = (0x089EE220u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089EE220u) goto L_089EE220;
    return;
L_089EE220:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x089EE22Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089EE22Cu) goto L_089EE22C;
    return;
L_089EE22C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2952)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE294;
      }
      goto L_089EE24C;
    }
L_089EE24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE294;
      }
      goto L_089EE268;
    }
L_089EE268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089EE284u);
    ctx.gpr[4] = (0u | 147u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 11u, 0x089F815Cu>(ctx, &aot_mem) && ctx.pc == 0x089EE284u) goto L_089EE284;
    return;
L_089EE284:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE294;
      }
      goto L_089EE28C;
    }
L_089EE28C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-17156), ctx.gpr[4]);
    goto L_089EE294;
L_089EE294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE2C0;
      }
      goto L_089EE29C;
    }
L_089EE29C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2952)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE2C0;
      }
      goto L_089EE2B8;
    }
L_089EE2B8:
    ctx.gpr[31] = (0x089EE2C0u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x089EE2C0u) goto L_089EE2C0;
    return;
L_089EE2C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-17160)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089EE404;
      }
      goto L_089EE2CC;
    }
L_089EE2CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16653)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE404;
      }
      goto L_089EE2D8;
    }
L_089EE2D8:
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-24800)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EE3E0;
      }
      goto L_089EE2EC;
    }
L_089EE2EC:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-24800));
    ctx.gpr[31] = (0x089EE308u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x089EE308u) goto L_089EE308;
    return;
L_089EE308:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089EE318u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 581u, 0x0884E3D4u>(ctx, &aot_mem) && ctx.pc == 0x089EE318u) goto L_089EE318;
    return;
L_089EE318:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE3D8;
      }
      goto L_089EE324;
    }
L_089EE324:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-17152)));
    ctx.gpr[4] = (0u | 35000u);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE3D8;
      }
      goto L_089EE348;
    }
L_089EE348:
    ctx.gpr[31] = (0x089EE350u);
    ctx.gpr[4] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 397u, 0x089EA804u>(ctx, &aot_mem) && ctx.pc == 0x089EE350u) goto L_089EE350;
    return;
L_089EE350:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE3D8;
      }
      goto L_089EE35C;
    }
L_089EE35C:
    ctx.gpr[4] = (0u | 138u);
    ctx.gpr[31] = (0x089EE368u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089EE368u) goto L_089EE368;
    return;
L_089EE368:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089EE374u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089EE374u) goto L_089EE374;
    return;
L_089EE374:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2772)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE3D8;
      }
      goto L_089EE394;
    }
L_089EE394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE3D8;
      }
      goto L_089EE3B0;
    }
L_089EE3B0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089EE3C8u);
    ctx.gpr[4] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 11u, 0x089F815Cu>(ctx, &aot_mem) && ctx.pc == 0x089EE3C8u) goto L_089EE3C8;
    return;
L_089EE3C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE3D8;
      }
      goto L_089EE3D0;
    }
L_089EE3D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-17152), ctx.gpr[4]);
    goto L_089EE3D8;
L_089EE3D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE404;
      }
      goto L_089EE3E0;
    }
L_089EE3E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2772)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE404;
      }
      goto L_089EE3FC;
    }
L_089EE3FC:
    ctx.gpr[31] = (0x089EE404u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x089EE404u) goto L_089EE404;
    return;
L_089EE404:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE420:
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
      if (branch_taken) {
          goto L_089EE4CC;
      }
      goto L_089EE42C;
    }
L_089EE42C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_089EE45C;
    }
    goto L_089EE438;
L_089EE438:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EE4C4;
      }
      goto L_089EE440;
    }
L_089EE440:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE480;
      }
      goto L_089EE448;
    }
L_089EE448:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EE5AC;
      }
      goto L_089EE45C;
    }
L_089EE45C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EE4B0;
      }
      goto L_089EE464;
    }
L_089EE464:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE4C4;
      }
      goto L_089EE46C;
    }
L_089EE46C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17168), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EE5AC;
      }
      goto L_089EE480;
    }
L_089EE480:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17184)));
      if (branch_taken) {
          goto L_089EE4A4;
      }
      goto L_089EE494;
    }
L_089EE494:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17180)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-17180), ctx.gpr[7]);
    goto L_089EE4A4;
L_089EE4A4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17184), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EE5AC;
      }
      goto L_089EE4B0;
    }
L_089EE4B0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17172)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17172), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EE5AC;
      }
      goto L_089EE4C4;
    }
L_089EE4C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE5AC;
      }
      goto L_089EE4CC;
    }
L_089EE4CC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
        goto L_089EE4F0;
    }
    goto L_089EE4D8;
L_089EE4D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EE5AC;
      }
      goto L_089EE4E0;
    }
L_089EE4E0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE508;
      }
      goto L_089EE4E8;
    }
L_089EE4E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE54C;
      }
      goto L_089EE4F0;
    }
L_089EE4F0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EE56C;
      }
      goto L_089EE4F8;
    }
L_089EE4F8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE58C;
      }
      goto L_089EE500;
    }
L_089EE500:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE5AC;
      }
      goto L_089EE508;
    }
L_089EE508:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17184)));
      if (branch_taken) {
          goto L_089EE534;
      }
      goto L_089EE51C;
    }
L_089EE51C:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17180)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-17180), ctx.gpr[7]);
      if (branch_taken) {
          goto L_089EE534;
      }
      goto L_089EE530;
    }
L_089EE530:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-17180), 0u);
    goto L_089EE534;
L_089EE534:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17184), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EE544;
      }
      goto L_089EE540;
    }
L_089EE540:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17184), 0u);
    goto L_089EE544;
L_089EE544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE5AC;
      }
      goto L_089EE54C;
    }
L_089EE54C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EE564;
      }
      goto L_089EE560;
    }
L_089EE560:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17176), 0u);
    goto L_089EE564;
L_089EE564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE5AC;
      }
      goto L_089EE56C;
    }
L_089EE56C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17172)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17172), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EE584;
      }
      goto L_089EE580;
    }
L_089EE580:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17172), 0u);
    goto L_089EE584;
L_089EE584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE5AC;
      }
      goto L_089EE58C;
    }
L_089EE58C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17168), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EE5A4;
      }
      goto L_089EE5A0;
    }
L_089EE5A0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17168), 0u);
    goto L_089EE5A4;
L_089EE5A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE5AC;
      }
      goto L_089EE5AC;
    }
L_089EE5AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE5B4:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(262)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089EE5DC;
      }
      goto L_089EE5C8;
    }
L_089EE5C8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(266)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EE5E4;
      }
      goto L_089EE5D4;
    }
L_089EE5D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089EE5E8;
      }
      goto L_089EE5DC;
    }
L_089EE5DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089EE5E8;
      }
      goto L_089EE5E4;
    }
L_089EE5E4:
    ctx.gpr[2] = (0u | 0u);
    goto L_089EE5E8;
L_089EE5E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE5F0:
    ctx.gpr[4] = (50091u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (50011u << 16u);
      if (branch_taken) {
          goto L_089EE650;
      }
      goto L_089EE608;
    }
L_089EE608:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (50217u << 16u);
      if (branch_taken) {
          goto L_089EE650;
      }
      goto L_089EE61C;
    }
L_089EE61C:
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (50193u << 16u);
      if (branch_taken) {
          goto L_089EE650;
      }
      goto L_089EE634;
    }
L_089EE634:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EE650;
      }
      goto L_089EE648;
    }
L_089EE648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089EE654;
      }
      goto L_089EE650;
    }
L_089EE650:
    ctx.gpr[2] = (0u | 0u);
    goto L_089EE654;
L_089EE654:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE65C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-988));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-990));
      if (branch_taken) {
          goto L_089EE678;
      }
      goto L_089EE668;
    }
L_089EE668:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-992));
      if (branch_taken) {
          goto L_089EE678;
      }
      goto L_089EE670;
    }
L_089EE670:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EE680;
      }
      goto L_089EE678;
    }
L_089EE678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089EE684;
      }
      goto L_089EE680;
    }
L_089EE680:
    ctx.gpr[2] = (0u | 0u);
    goto L_089EE684;
L_089EE684:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE68C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089EE6C4;
      }
      goto L_089EE6BC;
    }
L_089EE6BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089EE788;
      }
      goto L_089EE6C4;
    }
L_089EE6C4:
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_089EE784;
      }
      goto L_089EE6F8;
    }
L_089EE6F8:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089EE708;
L_089EE708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[4] == ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
        goto L_089EE75C;
    }
    goto L_089EE718;
L_089EE718:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089EE724u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x089EE724u) goto L_089EE724;
    return;
L_089EE724:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE758;
      }
      goto L_089EE730;
    }
L_089EE730:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089EE748u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 130u, 0x08A34C48u>(ctx, &aot_mem) && ctx.pc == 0x089EE748u) goto L_089EE748;
    return;
L_089EE748:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE758;
      }
      goto L_089EE750;
    }
L_089EE750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089EE788;
      }
      goto L_089EE758;
    }
L_089EE758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    goto L_089EE75C;
L_089EE75C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE708;
      }
      goto L_089EE784;
    }
L_089EE784:
    ctx.gpr[2] = (0u | 1u);
    goto L_089EE788;
L_089EE788:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE7AC:
    ctx.gpr[5] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17116), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE7B8:
    ctx.gpr[5] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-17112), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE7C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089EE7E0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x089EE7E0u) goto L_089EE7E0;
    return;
L_089EE7E0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE804;
      }
      goto L_089EE7E8;
    }
L_089EE7E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089EE804u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EE804u) goto L_089EE804;
    return;
L_089EE804:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE838;
      }
      goto L_089EE80C;
    }
L_089EE80C:
    ctx.gpr[31] = (0x089EE814u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x089EE814u) goto L_089EE814;
    return;
L_089EE814:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE838;
      }
      goto L_089EE81C;
    }
L_089EE81C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089EE838u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EE838u) goto L_089EE838;
    return;
L_089EE838:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EE84C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1168));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1096), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1112), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1116), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1148), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1152), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089EE8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 195u, 0x089D58E0u>(ctx, &aot_mem) && ctx.pc == 0x089EE8C0u) goto L_089EE8C0;
    return;
L_089EE8C0:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089EE8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x089EE8D4u) goto L_089EE8D4;
    return;
L_089EE8D4:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[31] = (0x089EE8F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 390u, 0x088724BCu>(ctx, &aot_mem) && ctx.pc == 0x089EE8F4u) goto L_089EE8F4;
    return;
L_089EE8F4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(328)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(324), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
        goto L_089EEC30;
    }
    goto L_089EE924;
L_089EE924:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16663)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089EE970;
      }
      goto L_089EE938;
    }
L_089EE938:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089EE944u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 244u, 0x088A912Cu>(ctx, &aot_mem) && ctx.pc == 0x089EE944u) goto L_089EE944;
    return;
L_089EE944:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE968;
      }
      goto L_089EE950;
    }
L_089EE950:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-17112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE978;
      }
      goto L_089EE960;
    }
L_089EE960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE9E0;
      }
      goto L_089EE968;
    }
L_089EE968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EE970;
    }
L_089EE970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EE978;
    }
L_089EE978:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[31] = (0x089EE988u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 310u, 0x088A9558u>(ctx, &aot_mem) && ctx.pc == 0x089EE988u) goto L_089EE988;
    return;
L_089EE988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EE9D8;
      }
      goto L_089EE9BC;
    }
L_089EE9BC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089EEA08;
      }
      goto L_089EE9D0;
    }
L_089EE9D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089EEA34;
      }
      goto L_089EE9D8;
    }
L_089EE9D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EE9E0;
    }
L_089EE9E0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089EE9ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 310u, 0x088A9558u>(ctx, &aot_mem) && ctx.pc == 0x089EE9ECu) goto L_089EE9EC;
    return;
L_089EE9EC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17116)));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EE9BC;
      }
      goto L_089EEA00;
    }
L_089EEA00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EEA08;
    }
L_089EEA08:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089EEA34;
      }
      goto L_089EEA2C;
    }
L_089EEA2C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089EEA34;
L_089EEA34:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEA70;
      }
      goto L_089EEA3C;
    }
L_089EEA3C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089EEA48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 273u, 0x088A9340u>(ctx, &aot_mem) && ctx.pc == 0x089EEA48u) goto L_089EEA48;
    return;
L_089EEA48:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17144)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17140)));
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089EEA78;
      }
      goto L_089EEA68;
    }
L_089EEA68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EEA70;
    }
L_089EEA70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EEA78;
    }
L_089EEA78:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089EEB74;
      }
      goto L_089EEAA8;
    }
L_089EEAA8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089EEABCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x089EEABCu) goto L_089EEABC;
    return;
L_089EEABC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089EEACCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x089EEACCu) goto L_089EEACC;
    return;
L_089EEACC:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089EEADC;
      }
      goto L_089EEAD4;
    }
L_089EEAD4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EEAE4;
      }
      goto L_089EEADC;
    }
L_089EEADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089EEB44;
      }
      goto L_089EEAE4;
    }
L_089EEAE4:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089EEAF4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x089EEAF4u) goto L_089EEAF4;
    return;
L_089EEAF4:
    ctx.gpr[31] = (0x089EEAFCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 111u, 0x08A34AF8u>(ctx, &aot_mem) && ctx.pc == 0x089EEAFCu) goto L_089EEAFC;
    return;
L_089EEAFC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17308)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EEB40;
      }
      goto L_089EEB3C;
    }
L_089EEB3C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089EEB40;
L_089EEB40:
    ctx.gpr[4] = (2232u << 16u);
    goto L_089EEB44;
L_089EEB44:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EEAA8;
      }
      goto L_089EEB74;
    }
L_089EEB74:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17188)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30824)));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EEC20;
      }
      goto L_089EEBC4;
    }
L_089EEBC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17180)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17172)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17164)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17160)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17132)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EEC28;
      }
      goto L_089EEC18;
    }
L_089EEC18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EEC20;
    }
L_089EEC20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EEC28;
    }
L_089EEC28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EECC4;
      }
      goto L_089EEC30;
    }
L_089EEC30:
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17188)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30824)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EECE4;
      }
      goto L_089EEC70;
    }
L_089EEC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17180)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17176)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17172)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17164)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17160)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17132)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EECDC;
      }
      goto L_089EECC4;
    }
L_089EECC4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EECEC;
      }
      goto L_089EECD4;
    }
L_089EECD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089EED68;
      }
      goto L_089EECDC;
    }
L_089EECDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EECE4;
    }
L_089EECE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EECEC;
    }
L_089EECEC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[31] = (0x089EECF8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 314u, 0x089EA1FCu>(ctx, &aot_mem) && ctx.pc == 0x089EECF8u) goto L_089EECF8;
    return;
L_089EECF8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089EED60;
      }
      goto L_089EED08;
    }
L_089EED08:
    ctx.gpr[4] = (2232u << 16u);
    goto L_089EED0C;
L_089EED0C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48998u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EEF88;
      }
      goto L_089EED34;
    }
L_089EED34:
    ctx.gpr[5] = (16180u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 65012u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (16988u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_089EF240;
      }
      goto L_089EED60;
    }
L_089EED60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EED68;
    }
L_089EED68:
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
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089EEEFC;
      }
      goto L_089EEDA4;
    }
L_089EEDA4:
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
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2090)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17180)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089EEEFC;
      }
      goto L_089EEDE4;
    }
L_089EEDE4:
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
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2088)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2089)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089EEEFC;
      }
      goto L_089EEE20;
    }
L_089EEE20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089EEEFC;
      }
      goto L_089EEE2C;
    }
L_089EEE2C:
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
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089EEEE4;
      }
      goto L_089EEE68;
    }
L_089EEE68:
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
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089EEEC8;
      }
      goto L_089EEEA4;
    }
L_089EEEA4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17148)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EEEE4;
      }
      goto L_089EEEC4;
    }
L_089EEEC4:
    ctx.gpr[4] = (2229u << 16u);
    goto L_089EEEC8;
L_089EEEC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17148)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEEFC;
      }
      goto L_089EEEE4;
    }
L_089EEEE4:
    ctx.gpr[31] = (0x089EEEECu);
    // nop
    goto L_089EDA90;
L_089EEEEC:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089EED08;
      }
      goto L_089EEEFC;
    }
L_089EEEFC:
    ctx.gpr[18] = (0u | 0u);
    goto L_089EEF00;
L_089EEF00:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[31] = (0x089EEF0Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 314u, 0x089EA1FCu>(ctx, &aot_mem) && ctx.pc == 0x089EEF0Cu) goto L_089EEF0C;
    return;
L_089EEF0C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089EEF34;
      }
      goto L_089EEF1C;
    }
L_089EEF1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089EEF3C;
      }
      goto L_089EEF2C;
    }
L_089EEF2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EEF80;
      }
      goto L_089EEF34;
    }
L_089EEF34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EEF3C;
    }
L_089EEF3C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EEF80;
      }
      goto L_089EEF78;
    }
L_089EEF78:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EEF00;
      }
      goto L_089EEF80;
    }
L_089EEF80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089EED0C;
      }
      goto L_089EEF88;
    }
L_089EEF88:
    ctx.gpr[31] = (0x089EEF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x089EEF90u) goto L_089EEF90;
    return;
L_089EEF90:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2232u << 16u);
        goto L_089EF1C8;
    }
    goto L_089EEF9C;
L_089EEF9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[14] = std::sqrt(ctx.fpr[14]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EF080;
      }
      goto L_089EEFD0;
    }
L_089EEFD0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089EF024;
      }
      goto L_089EEFF0;
    }
L_089EEFF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EF1C0;
      }
      goto L_089EEFF8;
    }
L_089EEFF8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF1C0;
      }
      goto L_089EF024;
    }
L_089EF024:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EF054;
      }
      goto L_089EF030;
    }
L_089EF030:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF1C0;
      }
      goto L_089EF038;
    }
L_089EF038:
    ctx.gpr[5] = (16180u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (16928u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EF1C0;
      }
      goto L_089EF054;
    }
L_089EF054:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16180u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF1C0;
      }
      goto L_089EF080;
    }
L_089EF080:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089EF148;
      }
      goto L_089EF09C;
    }
L_089EF09C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089EF0EC;
      }
      goto L_089EF0B8;
    }
L_089EF0B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EF1C0;
      }
      goto L_089EF0C0;
    }
L_089EF0C0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF1C0;
      }
      goto L_089EF0EC;
    }
L_089EF0EC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089EF11C;
      }
      goto L_089EF0F8;
    }
L_089EF0F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF1C0;
      }
      goto L_089EF100;
    }
L_089EF100:
    ctx.gpr[5] = (16180u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (16928u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EF1C0;
      }
      goto L_089EF11C;
    }
L_089EF11C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16180u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF1C0;
      }
      goto L_089EF148;
    }
L_089EF148:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF19C;
      }
      goto L_089EF168;
    }
L_089EF168:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EF1C0;
      }
      goto L_089EF170;
    }
L_089EF170:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16180u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF1C0;
      }
      goto L_089EF19C;
    }
L_089EF19C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF1C0;
      }
      goto L_089EF1A8;
    }
L_089EF1A8:
    ctx.gpr[5] = (16180u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_089EF1C0;
L_089EF1C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF240;
      }
      goto L_089EF1C8;
    }
L_089EF1C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF21C;
      }
      goto L_089EF1E8;
    }
L_089EF1E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089EF240;
      }
      goto L_089EF1F0;
    }
L_089EF1F0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16180u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF240;
      }
      goto L_089EF21C;
    }
L_089EF21C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF240;
      }
      goto L_089EF228;
    }
L_089EF228:
    ctx.gpr[5] = (16180u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_089EF240;
L_089EF240:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[2] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[2];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
      if (branch_taken) {
          goto L_089EF2B0;
      }
      goto L_089EF270;
    }
L_089EF270:
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[2] = (2233u << 16u);
    ctx.gpr[3] = (ctx.gpr[11] << 7u);
    ctx.gpr[12] = (ctx.gpr[3] + ctx.gpr[3]);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[11] = (ctx.gpr[11] << 4u);
    ctx.gpr[11] = (ctx.gpr[3] - ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[2]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2064));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089EF2B4;
      }
      goto L_089EF2AC;
    }
L_089EF2AC:
    ctx.gpr[9] = (0u | 1u);
    goto L_089EF2B0;
L_089EF2B0:
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
    goto L_089EF2B4;
L_089EF2B4:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[2] = (ctx.gpr[9] & 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[6] = (ctx.gpr[10] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[31] = (0x089EF2FCu);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 125u, 0x08978F38u>(ctx, &aot_mem) && ctx.pc == 0x089EF2FCu) goto L_089EF2FC;
    return;
L_089EF2FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EF304;
    }
L_089EF304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[20] = (ctx.gpr[20] & 15u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_089EF358;
    }
    goto L_089EF358;
L_089EF358:
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[31] = (0x089EF364u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_089EE68C;
L_089EF364:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF390;
      }
      goto L_089EF36C;
    }
L_089EF36C:
    ctx.gpr[31] = (0x089EF374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089EF374u) goto L_089EF374;
    return;
L_089EF374:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089EF398;
    }
    goto L_089EF388;
L_089EF388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EF390;
    }
L_089EF390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EF398;
    }
L_089EF398:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF514;
      }
      goto L_089EF3C4;
    }
L_089EF3C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089EF45C;
      }
      goto L_089EF3D4;
    }
L_089EF3D4:
    ctx.gpr[4] = (0u | 21u);
    ctx.gpr[17] = (0u | 196u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
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
          goto L_089EF448;
      }
      goto L_089EF410;
    }
L_089EF410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_089EF414;
L_089EF414:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF504;
      }
      goto L_089EF440;
    }
L_089EF440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_089EF4D8;
      }
      goto L_089EF448;
    }
L_089EF448:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089EF454u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x089EF454u) goto L_089EF454;
    return;
L_089EF454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EF45C;
    }
L_089EF45C:
    ctx.gpr[20] = (0u | 10u);
    goto L_089EF460;
L_089EF460:
    ctx.gpr[31] = (0x089EF468u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    goto L_089EDF00;
L_089EF468:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.gpr[31] = (0x089EF474u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089EDA5C;
L_089EF474:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089EF4B4;
      }
      goto L_089EF484;
    }
L_089EF484:
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
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF4BC;
      }
      goto L_089EF4B4;
    }
L_089EF4B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) > 0;
    // nop
      if (branch_taken) {
          goto L_089EF460;
      }
      goto L_089EF4BC;
    }
L_089EF4BC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF4CC;
      }
      goto L_089EF4C4;
    }
L_089EF4C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EF4CC;
    }
L_089EF4CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089EF414;
      }
      goto L_089EF4D4;
    }
L_089EF4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_089EF4D8;
L_089EF4D8:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF514;
      }
      goto L_089EF504;
    }
L_089EF504:
    ctx.gpr[31] = (0x089EF50Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089EE65C;
L_089EF50C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF528;
      }
      goto L_089EF514;
    }
L_089EF514:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089EF530;
      }
      goto L_089EF51C;
    }
L_089EF51C:
    ctx.gpr[5] = (16928u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089EF538;
      }
      goto L_089EF528;
    }
L_089EF528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EF530;
    }
L_089EF530:
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_089EF538;
L_089EF538:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(402));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x089EF560u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 270u, 0x088C1A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089EF560u) goto L_089EF560;
    return;
L_089EF560:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(402))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EF56C;
    }
L_089EF56C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_089EF5A8;
      }
      goto L_089EF574;
    }
L_089EF574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089EF5A0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 496u, 0x08976494u>(ctx, &aot_mem) && ctx.pc == 0x089EF5A0u) goto L_089EF5A0;
    return;
L_089EF5A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EF5A8;
    }
L_089EF5A8:
    ctx.gpr[20] = (0u | 0u);
    goto L_089EF5AC;
L_089EF5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089EF640;
    }
    goto L_089EF5E0;
L_089EF5E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 16383u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_089EF640;
    }
    goto L_089EF630;
L_089EF630:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
      if (branch_taken) {
          goto L_089EF5AC;
      }
      goto L_089EF640;
    }
L_089EF640:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_089EF6C8;
      }
      goto L_089EF6A0;
    }
L_089EF6A0:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 7u);
      if (branch_taken) {
          goto L_089EF6F4;
      }
      goto L_089EF6C8;
    }
L_089EF6C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (ctx.gpr[4] & 56u);
    ctx.gpr[4] = (ctx.gpr[4] >> 3u);
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    goto L_089EF6F4;
L_089EF6F4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EF6FC;
    }
L_089EF6FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089EF724;
      }
      goto L_089EF710;
    }
L_089EF710:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089EF724;
L_089EF724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EF784;
      }
      goto L_089EF734;
    }
L_089EF734:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x089EF740u);
    ctx.gpr[4] = (0u | 1472u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x089EF740u) goto L_089EF740;
    return;
L_089EF740:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089EF75C;
      }
      goto L_089EF74C;
    }
L_089EF74C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089EF758u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 565u, 0x08A378CCu>(ctx, &aot_mem) && ctx.pc == 0x089EF758u) goto L_089EF758;
    return;
L_089EF758:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_089EF75C;
L_089EF75C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(360), 0u);
        goto L_089EF85C;
    }
    goto L_089EF76C;
L_089EF76C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089EF778u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 273u, 0x088A9340u>(ctx, &aot_mem) && ctx.pc == 0x089EF778u) goto L_089EF778;
    return;
L_089EF778:
    ctx.gpr[4] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17144), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089EF858;
      }
      goto L_089EF784;
    }
L_089EF784:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089EF7AC;
      }
      goto L_089EF798;
    }
L_089EF798:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089EF7AC;
L_089EF7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EF80C;
      }
      goto L_089EF7BC;
    }
L_089EF7BC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF7EC;
      }
      goto L_089EF7CC;
    }
L_089EF7CC:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x089EF7D8u);
    ctx.gpr[4] = (0u | 1424u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x089EF7D8u) goto L_089EF7D8;
    return;
L_089EF7D8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089EF7F4;
      }
      goto L_089EF7E4;
    }
L_089EF7E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EF804;
      }
      goto L_089EF7EC;
    }
L_089EF7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EF7F4;
    }
L_089EF7F4:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089EF800u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 403u, 0x08A4DE78u>(ctx, &aot_mem) && ctx.pc == 0x089EF800u) goto L_089EF800;
    return;
L_089EF800:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_089EF804;
L_089EF804:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(360), 0u);
      if (branch_taken) {
          goto L_089EF85C;
      }
      goto L_089EF80C;
    }
L_089EF80C:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x089EF818u);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x089EF818u) goto L_089EF818;
    return;
L_089EF818:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_089EF834;
      }
      goto L_089EF824;
    }
L_089EF824:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089EF830u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x089EF830u) goto L_089EF830;
    return;
L_089EF830:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_089EF834;
L_089EF834:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(360), 0u);
        goto L_089EF85C;
    }
    goto L_089EF844;
L_089EF844:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089EF850u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 273u, 0x088A9340u>(ctx, &aot_mem) && ctx.pc == 0x089EF850u) goto L_089EF850;
    return;
L_089EF850:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17144), ctx.gpr[2]);
    goto L_089EF858;
L_089EF858:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(360), 0u);
    goto L_089EF85C;
L_089EF85C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(352), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_089EF894;
      }
      goto L_089EF87C;
    }
L_089EF87C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF9E0;
      }
      goto L_089EF888;
    }
L_089EF888:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089EF8FC;
      }
      goto L_089EF890;
    }
L_089EF890:
    ctx.gpr[5] = (0u | 21u);
    goto L_089EF894;
L_089EF894:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EF9E0;
      }
      goto L_089EF89C;
    }
L_089EF89C:
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16768u << 16u);
    ctx.gpr[31] = (0x089EF8B4u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089EF8B4u) goto L_089EF8B4;
    return;
L_089EF8B4:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[31] = (0x089EF8E8u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 307u, 0x0891D99Cu>(ctx, &aot_mem) && ctx.pc == 0x089EF8E8u) goto L_089EF8E8;
    return;
L_089EF8E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(603))))));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089EFB30;
      }
      goto L_089EF8FC;
    }
L_089EF8FC:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EF980;
      }
      goto L_089EF934;
    }
L_089EF934:
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.gpr[31] = (0x089EF948u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089EF948u) goto L_089EF948;
    return;
L_089EF948:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089EF9BC;
      }
      goto L_089EF980;
    }
L_089EF980:
    ctx.gpr[31] = (0x089EF988u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 316u, 0x0891DA18u>(ctx, &aot_mem) && ctx.pc == 0x089EF988u) goto L_089EF988;
    return;
L_089EF988:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(408))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x089EF9B0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 290u, 0x0891D8A4u>(ctx, &aot_mem) && ctx.pc == 0x089EF9B0u) goto L_089EF9B0;
    return;
L_089EF9B0:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089EF9BC;
L_089EF9BC:
    ctx.gpr[4] = (0u | 148u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089EF9D0;
      }
      goto L_089EF9C8;
    }
L_089EF9C8:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(496), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(497), static_cast<std::uint8_t>(0u));
    goto L_089EF9D0;
L_089EF9D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089EFB30;
      }
      goto L_089EF9E0;
    }
L_089EF9E0:
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16736u << 16u);
    ctx.gpr[31] = (0x089EF9F4u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089EF9F4u) goto L_089EF9F4;
    return;
L_089EF9F4:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (0u | 3u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089EFA4C;
      }
      goto L_089EFA1C;
    }
L_089EFA1C:
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16784u << 16u);
    ctx.gpr[31] = (0x089EFA30u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089EFA30u) goto L_089EFA30;
    return;
L_089EFA30:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089EFA88;
      }
      goto L_089EFA4C;
    }
L_089EFA4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
        goto L_089EFA8C;
    }
    goto L_089EFA5C;
L_089EFA5C:
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[31] = (0x089EFA70u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089EFA70u) goto L_089EFA70;
    return;
L_089EFA70:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089EFA88;
L_089EFA88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
    goto L_089EFA8C;
L_089EFA8C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(408))))));
        goto L_089EFAF4;
    }
    goto L_089EFAE0;
L_089EFAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (0u | 5u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(408))))));
        goto L_089EFB14;
    }
    goto L_089EFAF0;
L_089EFAF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(408))))));
    goto L_089EFAF4;
L_089EFAF4:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(408))))));
    goto L_089EFB14;
L_089EFB14:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089EFB30;
L_089EFB30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 154u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EFB48;
      }
      goto L_089EFB40;
    }
L_089EFB40:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089EFB48;
L_089EFB48:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(376), ctx.gpr[20]);
    ctx.gpr[31] = (0x089EFB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089EFB54u) goto L_089EFB54;
    return;
L_089EFB54:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(395), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(516));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[4]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[5]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089EFCB0;
      }
      goto L_089EFCA0;
    }
L_089EFCA0:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089EFCF0;
      }
      goto L_089EFCB0;
    }
L_089EFCB0:
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_089EFCC8;
    }
    goto L_089EFCC8;
L_089EFCC8:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_089EFCEC;
    }
    goto L_089EFCEC;
L_089EFCEC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089EFCF0;
L_089EFCF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFD10;
      }
      goto L_089EFD04;
    }
L_089EFD04:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(394), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089EFD18;
      }
      goto L_089EFD10;
    }
L_089EFD10:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(394), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089EFD18;
L_089EFD18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089EFD78;
      }
      goto L_089EFD4C;
    }
L_089EFD4C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFD70;
      }
      goto L_089EFD54;
    }
L_089EFD54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089EFD70u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EFD70u) goto L_089EFD70;
    return;
L_089EFD70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 183u, 0x089F118Cu>(ctx, &aot_mem); return;
      }
      goto L_089EFD78;
    }
L_089EFD78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(376)));
    ctx.gpr[4] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(372), ctx.gpr[4]);
        goto L_089EFDF8;
    }
    goto L_089EFD8C;
L_089EFD8C:
    ctx.gpr[31] = (0x089EFD94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x089EFD94u) goto L_089EFD94;
    return;
L_089EFD94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(376)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089EFD8C;
      }
      goto L_089EFDF4;
    }
L_089EFDF4:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(372), ctx.gpr[4]);
    goto L_089EFDF8;
L_089EFDF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 16383u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EFE54;
      }
      goto L_089EFE48;
    }
L_089EFE48:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(393), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089EFE5C;
      }
      goto L_089EFE54;
    }
L_089EFE54:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(393), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089EFE5C;
L_089EFE5C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
        goto L_089EFF30;
    }
    goto L_089EFF20;
L_089EFF20:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089EFF44;
      }
      goto L_089EFF30;
    }
L_089EFF30:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089EFF44;
L_089EFF44:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(372)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(6))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[7] = (15395u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 55050u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(393))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(7))))));
    ctx.pc = 0x089F0000u; return;
}

void recomp_unit_0122(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0122_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_122(Runtime &runtime) {
    runtime.register_generated_unit(122u, 0x089EC000u, 16384u, &recomp_unit_0122, &recomp_unit_0122_entry);
    runtime.register_function(0x089EC000u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC0E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC110u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC140u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC15Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC164u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC16Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC174u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC17Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC180u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC188u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC208u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC21Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC230u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC238u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC24Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC264u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC26Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC2D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC2E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC2ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC300u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC308u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC32Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC344u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC358u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC37Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC380u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC398u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC3A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC3B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC3C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC3C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC458u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC468u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC470u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC484u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC498u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC4A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC4B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC4CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC4D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC4E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC4FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC500u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC508u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC53Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC550u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC56Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC574u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC57Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC594u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC598u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC5E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC604u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC658u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC674u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC690u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC698u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC6A0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC6C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC6CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC710u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC778u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC784u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC7D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC80Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC81Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC828u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC830u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC848u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC8B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC8C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC8D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC8DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC8E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC918u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC940u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC950u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC958u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC964u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC96Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC974u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC97Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC9B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC9E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC9ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC9F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EC9FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA0Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA14u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA50u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA60u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA64u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA70u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA80u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA88u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECA90u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECAA8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECB04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECB18u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECB4Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECBC0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECC0Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECC1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECC30u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECC3Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECC48u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECCBCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECCD8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECCE4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECCF4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD38u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD40u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD48u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD64u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECD6Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECDA8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECE30u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECE40u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECE48u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECE60u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECE74u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECE80u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECE8Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECEA0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECEACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECEB4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECEC8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECECCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECEDCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECEE0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF5Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF6Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF74u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECF9Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECFA4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECFBCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ECFF8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED054u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED0B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED0DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED0ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED0F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED104u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED10Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED124u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED12Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED150u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED168u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED178u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED184u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED198u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED1A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED1ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED1FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED224u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED238u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED260u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED268u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED280u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED29Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED2B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED2CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED2D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED314u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED330u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED344u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED35Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED364u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED370u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED374u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED388u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED3A0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED3A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED3B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED3C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED3D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED3ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED3F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED40Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED420u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED428u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED434u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED448u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED460u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED468u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED46Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED474u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED480u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED494u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED498u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED4B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED4B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED4C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED4E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED4F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED510u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED568u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED5C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED5D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED664u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED66Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED684u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED694u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED69Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED6B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED6C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED6CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED730u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED73Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED754u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED75Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED770u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED800u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED81Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED82Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED85Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED880u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED888u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED898u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED8ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED8D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED8FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED910u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED960u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED9A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED9D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089ED9E4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDA10u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDA18u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDA20u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDA34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDA44u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDA5Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDA84u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDA90u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDAA0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDAA8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDAB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDAD4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDAF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB0Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB14u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB24u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB4Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB64u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB6Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB74u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDB8Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBA4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBB4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBCCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBE4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDBF4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC0Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC24u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC3Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC44u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC4Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC68u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC80u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDC88u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCA0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCC0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCC8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCD0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCD8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCE0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDCE8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD24u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD50u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD68u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD80u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDD88u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDA0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDBCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDC4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDCCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDD4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDDCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDE4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDE8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDDF4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE40u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE6Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE74u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE78u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE80u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDE94u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDEACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDEC8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDED8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDEE8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDEF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF00u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF14u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF48u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF58u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF68u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF70u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDF80u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDFD8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDFE8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EDFF4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE028u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE030u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE038u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE04Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE05Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE064u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE06Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE08Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE090u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE0ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE0D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE0DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE0ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE0FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE150u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE15Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE164u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE16Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE174u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE17Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE184u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE190u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE1A0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE1ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE1C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE1D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE1E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE1E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE1F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE214u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE220u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE22Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE24Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE268u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE284u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE28Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE294u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE29Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE2B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE2C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE2CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE2D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE2ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE308u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE318u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE324u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE348u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE350u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE35Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE368u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE374u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE394u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE3B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE3C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE3D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE3D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE3E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE3FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE404u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE420u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE42Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE438u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE440u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE448u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE45Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE464u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE46Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE480u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE494u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE4A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE4B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE4C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE4CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE4D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE4E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE4E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE4F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE4F8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE500u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE508u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE51Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE530u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE534u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE540u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE544u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE54Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE560u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE564u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE56Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE580u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE584u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE58Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5A0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5A4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5DCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5E4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE5F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE608u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE61Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE634u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE648u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE650u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE654u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE65Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE668u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE670u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE678u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE680u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE684u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE68Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE6BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE6C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE6F8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE708u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE718u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE724u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE730u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE748u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE750u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE758u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE75Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE784u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE788u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE7ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE7B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE7C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE7E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE7E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE804u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE80Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE814u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE81Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE838u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE84Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE8C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE8D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE8F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE924u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE938u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE944u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE950u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE960u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE968u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE970u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE978u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE988u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EE9ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA00u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA08u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA3Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA48u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA68u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA70u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEA78u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEAA8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEABCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEACCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEAD4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEADCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEAE4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEAF4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEAFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEB3Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEB40u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEB44u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEB74u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEBC4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEC18u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEC20u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEC28u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEC30u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEC70u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EECC4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EECD4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EECDCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EECE4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EECECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EECF8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED08u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED0Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED60u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EED68u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEDA4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEDE4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEE20u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEE2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEE68u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEEA4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEEC4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEEC8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEEE4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEEECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEEFCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF00u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF0Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF2Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF34u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF3Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF78u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF80u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF88u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF90u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEF9Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEFD0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEFF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EEFF8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF024u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF030u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF038u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF054u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF080u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF09Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF0B8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF0C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF0ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF0F8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF100u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF11Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF148u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF168u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF170u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF19Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF1A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF1C0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF1C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF1E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF1F0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF21Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF228u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF240u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF270u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF2ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF2B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF2B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF2FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF304u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF358u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF364u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF36Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF374u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF388u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF390u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF398u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF3C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF3D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF410u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF414u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF440u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF448u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF454u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF45Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF460u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF468u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF474u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF484u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF4B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF4BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF4C4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF4CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF4D4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF4D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF504u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF50Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF514u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF51Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF528u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF530u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF538u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF560u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF56Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF574u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF5A0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF5A8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF5ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF5E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF630u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF640u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF6A0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF6C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF6F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF6FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF710u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF724u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF734u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF740u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF74Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF758u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF75Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF76Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF778u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF784u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF798u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7ACu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7CCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7D8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7E4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7ECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF7F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF800u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF804u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF80Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF818u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF824u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF830u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF834u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF844u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF850u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF858u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF85Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF87Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF888u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF890u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF894u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF89Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8B4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8E8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF8FCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF934u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF948u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF980u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF988u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF9B0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF9BCu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF9C8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF9D0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF9E0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EF9F4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA1Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA30u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA4Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA5Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA70u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA88u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFA8Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFAE0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFAF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFAF4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB14u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB30u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB40u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB48u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFB54u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFCA0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFCB0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFCC8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFCECu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFCF0u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD04u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD10u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD18u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD4Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD54u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD70u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD78u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD8Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFD94u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFDF4u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFDF8u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFE48u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFE54u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFE5Cu, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF20u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF30u, &recomp_unit_0122, "recomp_unit_0122");
    runtime.register_function(0x089EFF44u, &recomp_unit_0122, "recomp_unit_0122");
}
} // namespace psprecomp
