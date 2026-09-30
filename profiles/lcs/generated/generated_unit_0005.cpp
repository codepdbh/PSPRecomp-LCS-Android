#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0005[4092] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0,
    0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0,
    20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 27, 0,
    0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0,
    0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44,
    0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0,
    0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0,
    61, 0, 62, 0, 63, 0, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 74, 0,
    75, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0,
    90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94,
    0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    119, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 127,
    0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0,
    0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0,
    0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0,
    0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0,
    0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0,
    0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0,
    0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0,
    0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209,
    0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 0,
    221, 0, 222, 0, 0, 223, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 228, 0, 0, 229, 0, 230, 0, 0, 231, 0, 232, 0, 0, 0,
    0, 233, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 237, 0, 0, 0,
    0, 0, 238, 0, 239, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0,
    0, 0, 0, 247, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 254,
    0, 255, 0, 0, 256, 0, 257, 258, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 262, 0, 0, 0, 263, 0, 0, 0,
    264, 0, 0, 265, 0, 266, 0, 267, 0, 268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0,
    274, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282,
    0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 286, 0, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0,
    292, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 300, 0, 0, 0,
    0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 304, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 323, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0,
    331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 333, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 340, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0,
    345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0,
    352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 0,
    370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0,
    377, 0, 0, 378, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 0, 384, 0, 385, 0, 0, 386,
    0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0,
    390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392,
    0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 395,
    0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 411, 0, 412, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0,
    420, 0, 0, 421, 0, 0, 422, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 428, 0, 0, 429, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 438, 0, 439, 0, 440, 0, 441, 0, 0, 442, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0,
    447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 450, 0, 451, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 454, 0, 455, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 458, 0, 459, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 477, 0, 478, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499,
    0, 500, 0, 0, 501, 0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 509,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 523, 0, 524, 0,
    525, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0,
    0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 535, 0, 0, 536, 0, 537, 0,
    0, 538, 0, 0, 539, 0, 540, 0, 0, 541, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 547, 0,
    548, 0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 554, 0,
    0, 0, 555, 0, 0, 556, 0, 557, 0, 558, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 563, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 569, 0, 0, 570, 0, 0, 571, 0,
    0, 572, 0, 0, 573, 0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 579, 0,
    0, 580, 0, 0, 581, 0, 0, 582, 0, 0, 583, 0, 0, 584, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587,
    0, 588, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591,
    0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0,
    595, 0, 596, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 604, 0, 0, 605, 0, 606, 0, 0, 607, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 612, 0, 0, 613, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 619, 0, 620,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 626, 0, 627,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 0, 630, 0, 631, 0, 632, 0, 0, 633, 0, 0, 634, 0, 635, 0,
    0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0,
    642, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 649, 0, 650, 0, 0, 0, 0,
    651, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655,
    0, 0, 0, 0, 0, 656, 0, 0, 657, 0, 658, 0, 0, 659, 0, 660, 0, 661, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0,
    664, 0, 665, 0, 666, 0, 0, 667, 0, 0, 668, 0, 0, 669, 0, 0, 670, 0, 671, 0, 0, 0, 672, 0, 0, 673, 0, 0, 674, 0, 0, 675,
    0, 0, 676, 0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 681, 0, 0, 682, 0, 0, 0, 0, 683, 0,
    0, 684, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 688, 0, 689, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 0,
    0, 692, 0, 693, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 697, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 699, 0,
    0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 705, 0, 0,
    706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0,
    711, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0,
    0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 722, 0, 723,
    0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 729, 0, 730, 0, 731, 0, 0, 732,
    0, 0, 0, 0, 733, 0, 734, 0, 735, 0, 0, 0, 736, 0, 737, 0, 0, 738, 0, 0, 0, 0, 0, 739, 0, 740, 0, 0, 0, 0, 741, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 743, 0, 0, 0, 0, 0, 0, 0, 744, 0, 745, 0, 746, 0, 0, 0, 747, 0, 0, 0,
    0, 0, 0, 748, 0, 749, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 753, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0,
    755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 760, 0, 761,
    0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 764, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 0, 0,
    0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 769, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0,
    0, 0, 0, 773, 0, 0, 0, 0, 0, 774, 0, 0, 775, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 778, 0,
    779, 0, 0, 780, 0, 0, 0, 0, 0, 781, 0, 782, 0, 0, 0, 0, 0, 783, 0, 0, 784, 0, 0, 0, 0, 785, 0, 786, 0, 787, 0, 0,
    788, 0, 0, 0, 789, 0, 790, 0, 0, 791, 0, 0, 792, 0, 0, 0, 793, 0, 794, 0, 0, 795, 0, 0, 0, 0, 796, 0, 0, 797, 0, 0,
    0, 798, 0, 0, 0, 0, 0, 0, 0, 799, 0, 800, 0, 0, 801, 0, 802, 0, 803, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 806,
    0, 0, 807, 0, 0, 0, 0, 808, 0, 809, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 811, 0, 0, 812, 0, 0, 0, 813,
};
void recomp_unit_0005_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08818000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0005[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08818000;
    case 2u: goto L_08818008;
    case 3u: goto L_08818020;
    case 4u: goto L_0881805C;
    case 5u: goto L_0881806C;
    case 6u: goto L_0881807C;
    case 7u: goto L_08818094;
    case 8u: goto L_088180B8;
    case 9u: goto L_088180C0;
    case 10u: goto L_088180E8;
    case 11u: goto L_088180F8;
    case 12u: goto L_08818108;
    case 13u: goto L_08818110;
    case 14u: goto L_08818120;
    case 15u: goto L_08818138;
    case 16u: goto L_08818154;
    case 17u: goto L_0881815C;
    case 18u: goto L_08818164;
    case 19u: goto L_08818174;
    case 20u: goto L_08818180;
    case 21u: goto L_08818194;
    case 22u: goto L_088181A0;
    case 23u: goto L_088181A8;
    case 24u: goto L_088181D0;
    case 25u: goto L_088181D8;
    case 26u: goto L_088181E4;
    case 27u: goto L_088181F8;
    case 28u: goto L_08818208;
    case 29u: goto L_08818224;
    case 30u: goto L_08818240;
    case 31u: goto L_08818250;
    case 32u: goto L_08818264;
    case 33u: goto L_08818270;
    case 34u: goto L_08818284;
    case 35u: goto L_08818294;
    case 36u: goto L_088182B4;
    case 37u: goto L_088182C0;
    case 38u: goto L_088182CC;
    case 39u: goto L_088182E0;
    case 40u: goto L_088182EC;
    case 41u: goto L_08818318;
    case 42u: goto L_08818340;
    case 43u: goto L_08818354;
    case 44u: goto L_0881837C;
    case 45u: goto L_08818384;
    case 46u: goto L_0881839C;
    case 47u: goto L_088183AC;
    case 48u: goto L_088183B4;
    case 49u: goto L_088183C0;
    case 50u: goto L_088183E8;
    case 51u: goto L_088183F0;
    case 52u: goto L_08818404;
    case 53u: goto L_0881842C;
    case 54u: goto L_0881843C;
    case 55u: goto L_08818444;
    case 56u: goto L_08818454;
    case 57u: goto L_08818460;
    case 58u: goto L_08818468;
    case 59u: goto L_08818470;
    case 60u: goto L_08818478;
    case 61u: goto L_08818480;
    case 62u: goto L_08818488;
    case 63u: goto L_08818490;
    case 64u: goto L_0881849C;
    case 65u: goto L_088184A8;
    case 66u: goto L_088184B0;
    case 67u: goto L_088184B8;
    case 68u: goto L_088184C0;
    case 69u: goto L_088184C8;
    case 70u: goto L_088184D4;
    case 71u: goto L_088184DC;
    case 72u: goto L_088184E4;
    case 73u: goto L_088184EC;
    case 74u: goto L_088184F8;
    case 75u: goto L_08818500;
    case 76u: goto L_08818510;
    case 77u: goto L_08818518;
    case 78u: goto L_08818530;
    case 79u: goto L_08818564;
    case 80u: goto L_08818570;
    case 81u: goto L_0881858C;
    case 82u: goto L_08818598;
    case 83u: goto L_088185B4;
    case 84u: goto L_088185EC;
    case 85u: goto L_088185F8;
    case 86u: goto L_08818614;
    case 87u: goto L_08818620;
    case 88u: goto L_0881863C;
    case 89u: goto L_08818674;
    case 90u: goto L_08818680;
    case 91u: goto L_0881869C;
    case 92u: goto L_088186A8;
    case 93u: goto L_088186C4;
    case 94u: goto L_088186FC;
    case 95u: goto L_08818708;
    case 96u: goto L_08818724;
    case 97u: goto L_08818730;
    case 98u: goto L_0881874C;
    case 99u: goto L_08818754;
    case 100u: goto L_08818764;
    case 101u: goto L_088187A4;
    case 102u: goto L_088187D8;
    case 103u: goto L_088187E8;
    case 104u: goto L_088187F4;
    case 105u: goto L_08818800;
    case 106u: goto L_08818830;
    case 107u: goto L_0881883C;
    case 108u: goto L_0881886C;
    case 109u: goto L_08818878;
    case 110u: goto L_088188A0;
    case 111u: goto L_088188AC;
    case 112u: goto L_088188C0;
    case 113u: goto L_088188CC;
    case 114u: goto L_08818904;
    case 115u: goto L_08818910;
    case 116u: goto L_08818948;
    case 117u: goto L_08818954;
    case 118u: goto L_08818978;
    case 119u: goto L_08818980;
    case 120u: goto L_0881898C;
    case 121u: goto L_08818994;
    case 122u: goto L_088189A4;
    case 123u: goto L_088189B0;
    case 124u: goto L_088189D0;
    case 125u: goto L_088189D8;
    case 126u: goto L_088189E8;
    case 127u: goto L_088189FC;
    case 128u: goto L_08818A10;
    case 129u: goto L_08818A24;
    case 130u: goto L_08818A70;
    case 131u: goto L_08818A88;
    case 132u: goto L_08818A94;
    case 133u: goto L_08818AA8;
    case 134u: goto L_08818AB4;
    case 135u: goto L_08818AC8;
    case 136u: goto L_08818AD0;
    case 137u: goto L_08818B00;
    case 138u: goto L_08818B1C;
    case 139u: goto L_08818B30;
    case 140u: goto L_08818B4C;
    case 141u: goto L_08818B58;
    case 142u: goto L_08818B68;
    case 143u: goto L_08818B70;
    case 144u: goto L_08818B78;
    case 145u: goto L_08818B84;
    case 146u: goto L_08818BDC;
    case 147u: goto L_08818BE4;
    case 148u: goto L_08818C00;
    case 149u: goto L_08818C54;
    case 150u: goto L_08818C5C;
    case 151u: goto L_08818C78;
    case 152u: goto L_08818C8C;
    case 153u: goto L_08818C94;
    case 154u: goto L_08818CA4;
    case 155u: goto L_08818CB4;
    case 156u: goto L_08818CD0;
    case 157u: goto L_08818CE0;
    case 158u: goto L_08818CF0;
    case 159u: goto L_08818D08;
    case 160u: goto L_08818D18;
    case 161u: goto L_08818D28;
    case 162u: goto L_08818D84;
    case 163u: goto L_08818D90;
    case 164u: goto L_08818DA8;
    case 165u: goto L_08818DDC;
    case 166u: goto L_08818DE4;
    case 167u: goto L_08818DF4;
    case 168u: goto L_08818E04;
    case 169u: goto L_08818E20;
    case 170u: goto L_08818E30;
    case 171u: goto L_08818E40;
    case 172u: goto L_08818E50;
    case 173u: goto L_08818E60;
    case 174u: goto L_08818E70;
    case 175u: goto L_08818EC8;
    case 176u: goto L_08818ED4;
    case 177u: goto L_08818EEC;
    case 178u: goto L_08818F20;
    case 179u: goto L_08818F28;
    case 180u: goto L_08818F38;
    case 181u: goto L_08818F48;
    case 182u: goto L_08818F64;
    case 183u: goto L_08818F74;
    case 184u: goto L_08818F84;
    case 185u: goto L_08818F9C;
    case 186u: goto L_08818FAC;
    case 187u: goto L_08818FBC;
    case 188u: goto L_08819018;
    case 189u: goto L_08819024;
    case 190u: goto L_0881903C;
    case 191u: goto L_08819070;
    case 192u: goto L_08819078;
    case 193u: goto L_08819084;
    case 194u: goto L_088190B0;
    case 195u: goto L_088190C0;
    case 196u: goto L_088190CC;
    case 197u: goto L_088190D4;
    case 198u: goto L_088190E0;
    case 199u: goto L_088190E8;
    case 200u: goto L_088190F8;
    case 201u: goto L_08819108;
    case 202u: goto L_08819118;
    case 203u: goto L_08819124;
    case 204u: goto L_08819138;
    case 205u: goto L_08819140;
    case 206u: goto L_0881914C;
    case 207u: goto L_088191A0;
    case 208u: goto L_088191A8;
    case 209u: goto L_088191FC;
    case 210u: goto L_08819204;
    case 211u: goto L_0881921C;
    case 212u: goto L_08819224;
    case 213u: goto L_08819230;
    case 214u: goto L_08819238;
    case 215u: goto L_08819244;
    case 216u: goto L_0881924C;
    case 217u: goto L_08819258;
    case 218u: goto L_08819260;
    case 219u: goto L_0881926C;
    case 220u: goto L_08819274;
    case 221u: goto L_08819280;
    case 222u: goto L_08819288;
    case 223u: goto L_08819294;
    case 224u: goto L_0881929C;
    case 225u: goto L_088192A8;
    case 226u: goto L_088192B4;
    case 227u: goto L_088192C0;
    case 228u: goto L_088192C8;
    case 229u: goto L_088192D4;
    case 230u: goto L_088192DC;
    case 231u: goto L_088192E8;
    case 232u: goto L_088192F0;
    case 233u: goto L_08819304;
    case 234u: goto L_08819308;
    case 235u: goto L_08819338;
    case 236u: goto L_0881936C;
    case 237u: goto L_08819370;
    case 238u: goto L_08819388;
    case 239u: goto L_08819390;
    case 240u: goto L_0881939C;
    case 241u: goto L_088193A4;
    case 242u: goto L_088193B0;
    case 243u: goto L_088193D0;
    case 244u: goto L_088193E0;
    case 245u: goto L_088193EC;
    case 246u: goto L_088193F8;
    case 247u: goto L_0881940C;
    case 248u: goto L_08819418;
    case 249u: goto L_08819424;
    case 250u: goto L_08819438;
    case 251u: goto L_08819454;
    case 252u: goto L_08819464;
    case 253u: goto L_08819474;
    case 254u: goto L_0881947C;
    case 255u: goto L_08819484;
    case 256u: goto L_08819490;
    case 257u: goto L_08819498;
    case 258u: goto L_0881949C;
    case 259u: goto L_088194A4;
    case 260u: goto L_088194AC;
    case 261u: goto L_088194DC;
    case 262u: goto L_088194E0;
    case 263u: goto L_088194F0;
    case 264u: goto L_08819500;
    case 265u: goto L_0881950C;
    case 266u: goto L_08819514;
    case 267u: goto L_0881951C;
    case 268u: goto L_08819524;
    case 269u: goto L_08819534;
    case 270u: goto L_08819544;
    case 271u: goto L_08819554;
    case 272u: goto L_08819560;
    case 273u: goto L_08819568;
    case 274u: goto L_08819580;
    case 275u: goto L_08819594;
    case 276u: goto L_0881959C;
    case 277u: goto L_088195B4;
    case 278u: goto L_088195C0;
    case 279u: goto L_088195C8;
    case 280u: goto L_088195D4;
    case 281u: goto L_088195F0;
    case 282u: goto L_088195FC;
    case 283u: goto L_08819614;
    case 284u: goto L_0881961C;
    case 285u: goto L_08819624;
    case 286u: goto L_0881962C;
    case 287u: goto L_0881963C;
    case 288u: goto L_08819644;
    case 289u: goto L_08819650;
    case 290u: goto L_0881965C;
    case 291u: goto L_08819674;
    case 292u: goto L_08819680;
    case 293u: goto L_08819690;
    case 294u: goto L_08819698;
    case 295u: goto L_088196B4;
    case 296u: goto L_088196C0;
    case 297u: goto L_088196CC;
    case 298u: goto L_088196DC;
    case 299u: goto L_088196E4;
    case 300u: goto L_088196F0;
    case 301u: goto L_08819704;
    case 302u: goto L_08819738;
    case 303u: goto L_08819740;
    case 304u: goto L_08819748;
    case 305u: goto L_0881974C;
    case 306u: goto L_0881978C;
    case 307u: goto L_088197A4;
    case 308u: goto L_088197B8;
    case 309u: goto L_088197C4;
    case 310u: goto L_088197CC;
    case 311u: goto L_08819830;
    case 312u: goto L_0881983C;
    case 313u: goto L_08819844;
    case 314u: goto L_088198A8;
    case 315u: goto L_088198B0;
    case 316u: goto L_088198BC;
    case 317u: goto L_088198C4;
    case 318u: goto L_08819928;
    case 319u: goto L_08819934;
    case 320u: goto L_0881993C;
    case 321u: goto L_088199A0;
    case 322u: goto L_088199A8;
    case 323u: goto L_088199BC;
    case 324u: goto L_088199C8;
    case 325u: goto L_088199D0;
    case 326u: goto L_08819A54;
    case 327u: goto L_08819A60;
    case 328u: goto L_08819A68;
    case 329u: goto L_08819AEC;
    case 330u: goto L_08819AF4;
    case 331u: goto L_08819B00;
    case 332u: goto L_08819B08;
    case 333u: goto L_08819B8C;
    case 334u: goto L_08819B98;
    case 335u: goto L_08819BA0;
    case 336u: goto L_08819C24;
    case 337u: goto L_08819C2C;
    case 338u: goto L_08819C38;
    case 339u: goto L_08819C40;
    case 340u: goto L_08819C8C;
    case 341u: goto L_08819C98;
    case 342u: goto L_08819CA0;
    case 343u: goto L_08819CEC;
    case 344u: goto L_08819CF4;
    case 345u: goto L_08819D00;
    case 346u: goto L_08819D08;
    case 347u: goto L_08819D30;
    case 348u: goto L_08819D3C;
    case 349u: goto L_08819D44;
    case 350u: goto L_08819D6C;
    case 351u: goto L_08819D78;
    case 352u: goto L_08819D80;
    case 353u: goto L_08819D90;
    case 354u: goto L_08819D9C;
    case 355u: goto L_08819DA8;
    case 356u: goto L_08819DB4;
    case 357u: goto L_08819DC0;
    case 358u: goto L_08819DCC;
    case 359u: goto L_08819DD8;
    case 360u: goto L_08819DE4;
    case 361u: goto L_08819E14;
    case 362u: goto L_08819E20;
    case 363u: goto L_08819E28;
    case 364u: goto L_08819E38;
    case 365u: goto L_08819E44;
    case 366u: goto L_08819E50;
    case 367u: goto L_08819E5C;
    case 368u: goto L_08819E68;
    case 369u: goto L_08819E74;
    case 370u: goto L_08819E80;
    case 371u: goto L_08819E8C;
    case 372u: goto L_08819EBC;
    case 373u: goto L_08819EC8;
    case 374u: goto L_08819ED0;
    case 375u: goto L_08819EDC;
    case 376u: goto L_08819EE8;
    case 377u: goto L_08819F00;
    case 378u: goto L_08819F0C;
    case 379u: goto L_08819F1C;
    case 380u: goto L_08819F24;
    case 381u: goto L_08819F40;
    case 382u: goto L_08819F4C;
    case 383u: goto L_08819F58;
    case 384u: goto L_08819F68;
    case 385u: goto L_08819F70;
    case 386u: goto L_08819F7C;
    case 387u: goto L_08819F90;
    case 388u: goto L_08819FCC;
    case 389u: goto L_08819FF8;
    case 390u: goto L_0881A000;
    case 391u: goto L_0881A070;
    case 392u: goto L_0881A07C;
    case 393u: goto L_0881A084;
    case 394u: goto L_0881A0F4;
    case 395u: goto L_0881A0FC;
    case 396u: goto L_0881A114;
    case 397u: goto L_0881A134;
    case 398u: goto L_0881A13C;
    case 399u: goto L_0881A148;
    case 400u: goto L_0881A150;
    case 401u: goto L_0881A1C0;
    case 402u: goto L_0881A1CC;
    case 403u: goto L_0881A1D4;
    case 404u: goto L_0881A244;
    case 405u: goto L_0881A24C;
    case 406u: goto L_0881A258;
    case 407u: goto L_0881A260;
    case 408u: goto L_0881A2AC;
    case 409u: goto L_0881A2B8;
    case 410u: goto L_0881A2C0;
    case 411u: goto L_0881A30C;
    case 412u: goto L_0881A314;
    case 413u: goto L_0881A320;
    case 414u: goto L_0881A328;
    case 415u: goto L_0881A340;
    case 416u: goto L_0881A34C;
    case 417u: goto L_0881A354;
    case 418u: goto L_0881A36C;
    case 419u: goto L_0881A378;
    case 420u: goto L_0881A380;
    case 421u: goto L_0881A38C;
    case 422u: goto L_0881A398;
    case 423u: goto L_0881A3A4;
    case 424u: goto L_0881A3B0;
    case 425u: goto L_0881A3BC;
    case 426u: goto L_0881A3C8;
    case 427u: goto L_0881A3D4;
    case 428u: goto L_0881A404;
    case 429u: goto L_0881A410;
    case 430u: goto L_0881A418;
    case 431u: goto L_0881A424;
    case 432u: goto L_0881A430;
    case 433u: goto L_0881A43C;
    case 434u: goto L_0881A448;
    case 435u: goto L_0881A454;
    case 436u: goto L_0881A460;
    case 437u: goto L_0881A46C;
    case 438u: goto L_0881A494;
    case 439u: goto L_0881A49C;
    case 440u: goto L_0881A4A4;
    case 441u: goto L_0881A4AC;
    case 442u: goto L_0881A4B8;
    case 443u: goto L_0881A4C0;
    case 444u: goto L_0881A4CC;
    case 445u: goto L_0881A4F0;
    case 446u: goto L_0881A4F8;
    case 447u: goto L_0881A500;
    case 448u: goto L_0881A554;
    case 449u: goto L_0881A55C;
    case 450u: goto L_0881A564;
    case 451u: goto L_0881A56C;
    case 452u: goto L_0881A5D0;
    case 453u: goto L_0881A5D8;
    case 454u: goto L_0881A5E4;
    case 455u: goto L_0881A5EC;
    case 456u: goto L_0881A650;
    case 457u: goto L_0881A658;
    case 458u: goto L_0881A664;
    case 459u: goto L_0881A66C;
    case 460u: goto L_0881A6D4;
    case 461u: goto L_0881A6D8;
    case 462u: goto L_0881A720;
    case 463u: goto L_0881A72C;
    case 464u: goto L_0881A734;
    case 465u: goto L_0881A73C;
    case 466u: goto L_0881A744;
    case 467u: goto L_0881A7A4;
    case 468u: goto L_0881A7AC;
    case 469u: goto L_0881A7B8;
    case 470u: goto L_0881A7C0;
    case 471u: goto L_0881A824;
    case 472u: goto L_0881A82C;
    case 473u: goto L_0881A838;
    case 474u: goto L_0881A840;
    case 475u: goto L_0881A8A0;
    case 476u: goto L_0881A8A8;
    case 477u: goto L_0881A8B4;
    case 478u: goto L_0881A8BC;
    case 479u: goto L_0881A8C4;
    case 480u: goto L_0881A8CC;
    case 481u: goto L_0881A92C;
    case 482u: goto L_0881A934;
    case 483u: goto L_0881A940;
    case 484u: goto L_0881A948;
    case 485u: goto L_0881A9AC;
    case 486u: goto L_0881A9B4;
    case 487u: goto L_0881A9C0;
    case 488u: goto L_0881A9C8;
    case 489u: goto L_0881AA28;
    case 490u: goto L_0881AA30;
    case 491u: goto L_0881AA38;
    case 492u: goto L_0881AA40;
    case 493u: goto L_0881AA4C;
    case 494u: goto L_0881AA54;
    case 495u: goto L_0881AA5C;
    case 496u: goto L_0881AA64;
    case 497u: goto L_0881AA6C;
    case 498u: goto L_0881AA74;
    case 499u: goto L_0881AA7C;
    case 500u: goto L_0881AA84;
    case 501u: goto L_0881AA90;
    case 502u: goto L_0881AA98;
    case 503u: goto L_0881AAA0;
    case 504u: goto L_0881AAA8;
    case 505u: goto L_0881AAD0;
    case 506u: goto L_0881AAD8;
    case 507u: goto L_0881AAE4;
    case 508u: goto L_0881AAF0;
    case 509u: goto L_0881AAFC;
    case 510u: goto L_0881AB2C;
    case 511u: goto L_0881AB34;
    case 512u: goto L_0881AB3C;
    case 513u: goto L_0881AB48;
    case 514u: goto L_0881AB54;
    case 515u: goto L_0881AB60;
    case 516u: goto L_0881AB90;
    case 517u: goto L_0881AB9C;
    case 518u: goto L_0881ABAC;
    case 519u: goto L_0881ABC0;
    case 520u: goto L_0881ABD0;
    case 521u: goto L_0881ABDC;
    case 522u: goto L_0881ABE8;
    case 523u: goto L_0881ABF0;
    case 524u: goto L_0881ABF8;
    case 525u: goto L_0881AC00;
    case 526u: goto L_0881AC18;
    case 527u: goto L_0881AC24;
    case 528u: goto L_0881AC40;
    case 529u: goto L_0881AC70;
    case 530u: goto L_0881AC78;
    case 531u: goto L_0881AC84;
    case 532u: goto L_0881ACA0;
    case 533u: goto L_0881ACD4;
    case 534u: goto L_0881ACDC;
    case 535u: goto L_0881ACE4;
    case 536u: goto L_0881ACF0;
    case 537u: goto L_0881ACF8;
    case 538u: goto L_0881AD04;
    case 539u: goto L_0881AD10;
    case 540u: goto L_0881AD18;
    case 541u: goto L_0881AD24;
    case 542u: goto L_0881AD2C;
    case 543u: goto L_0881AD38;
    case 544u: goto L_0881AD44;
    case 545u: goto L_0881AD5C;
    case 546u: goto L_0881AD68;
    case 547u: goto L_0881AD78;
    case 548u: goto L_0881AD80;
    case 549u: goto L_0881AD9C;
    case 550u: goto L_0881ADA8;
    case 551u: goto L_0881ADC0;
    case 552u: goto L_0881ADD8;
    case 553u: goto L_0881ADE8;
    case 554u: goto L_0881ADF8;
    case 555u: goto L_0881AE08;
    case 556u: goto L_0881AE14;
    case 557u: goto L_0881AE1C;
    case 558u: goto L_0881AE24;
    case 559u: goto L_0881AE30;
    case 560u: goto L_0881AE44;
    case 561u: goto L_0881AE5C;
    case 562u: goto L_0881AE68;
    case 563u: goto L_0881AE70;
    case 564u: goto L_0881AED4;
    case 565u: goto L_0881AEE0;
    case 566u: goto L_0881AEE8;
    case 567u: goto L_0881AF4C;
    case 568u: goto L_0881AF58;
    case 569u: goto L_0881AF60;
    case 570u: goto L_0881AF6C;
    case 571u: goto L_0881AF78;
    case 572u: goto L_0881AF84;
    case 573u: goto L_0881AF90;
    case 574u: goto L_0881AF9C;
    case 575u: goto L_0881AFA8;
    case 576u: goto L_0881AFB4;
    case 577u: goto L_0881AFE4;
    case 578u: goto L_0881AFF0;
    case 579u: goto L_0881AFF8;
    case 580u: goto L_0881B004;
    case 581u: goto L_0881B010;
    case 582u: goto L_0881B01C;
    case 583u: goto L_0881B028;
    case 584u: goto L_0881B034;
    case 585u: goto L_0881B040;
    case 586u: goto L_0881B04C;
    case 587u: goto L_0881B07C;
    case 588u: goto L_0881B084;
    case 589u: goto L_0881B090;
    case 590u: goto L_0881B098;
    case 591u: goto L_0881B0FC;
    case 592u: goto L_0881B108;
    case 593u: goto L_0881B110;
    case 594u: goto L_0881B174;
    case 595u: goto L_0881B180;
    case 596u: goto L_0881B188;
    case 597u: goto L_0881B194;
    case 598u: goto L_0881B1A0;
    case 599u: goto L_0881B1AC;
    case 600u: goto L_0881B1B8;
    case 601u: goto L_0881B1C4;
    case 602u: goto L_0881B1D0;
    case 603u: goto L_0881B1DC;
    case 604u: goto L_0881B20C;
    case 605u: goto L_0881B218;
    case 606u: goto L_0881B220;
    case 607u: goto L_0881B22C;
    case 608u: goto L_0881B238;
    case 609u: goto L_0881B244;
    case 610u: goto L_0881B250;
    case 611u: goto L_0881B25C;
    case 612u: goto L_0881B268;
    case 613u: goto L_0881B274;
    case 614u: goto L_0881B2A4;
    case 615u: goto L_0881B2AC;
    case 616u: goto L_0881B2B8;
    case 617u: goto L_0881B2C0;
    case 618u: goto L_0881B2E8;
    case 619u: goto L_0881B2F4;
    case 620u: goto L_0881B2FC;
    case 621u: goto L_0881B324;
    case 622u: goto L_0881B32C;
    case 623u: goto L_0881B338;
    case 624u: goto L_0881B340;
    case 625u: goto L_0881B368;
    case 626u: goto L_0881B374;
    case 627u: goto L_0881B37C;
    case 628u: goto L_0881B3A4;
    case 629u: goto L_0881B3BC;
    case 630u: goto L_0881B3C8;
    case 631u: goto L_0881B3D0;
    case 632u: goto L_0881B3D8;
    case 633u: goto L_0881B3E4;
    case 634u: goto L_0881B3F0;
    case 635u: goto L_0881B3F8;
    case 636u: goto L_0881B404;
    case 637u: goto L_0881B41C;
    case 638u: goto L_0881B438;
    case 639u: goto L_0881B440;
    case 640u: goto L_0881B45C;
    case 641u: goto L_0881B474;
    case 642u: goto L_0881B480;
    case 643u: goto L_0881B48C;
    case 644u: goto L_0881B4A0;
    case 645u: goto L_0881B4AC;
    case 646u: goto L_0881B4B8;
    case 647u: goto L_0881B4C4;
    case 648u: goto L_0881B4DC;
    case 649u: goto L_0881B4E4;
    case 650u: goto L_0881B4EC;
    case 651u: goto L_0881B500;
    case 652u: goto L_0881B504;
    case 653u: goto L_0881B514;
    case 654u: goto L_0881B53C;
    case 655u: goto L_0881B57C;
    case 656u: goto L_0881B594;
    case 657u: goto L_0881B5A0;
    case 658u: goto L_0881B5A8;
    case 659u: goto L_0881B5B4;
    case 660u: goto L_0881B5BC;
    case 661u: goto L_0881B5C4;
    case 662u: goto L_0881B5DC;
    case 663u: goto L_0881B5E4;
    case 664u: goto L_0881B600;
    case 665u: goto L_0881B608;
    case 666u: goto L_0881B610;
    case 667u: goto L_0881B61C;
    case 668u: goto L_0881B628;
    case 669u: goto L_0881B634;
    case 670u: goto L_0881B640;
    case 671u: goto L_0881B648;
    case 672u: goto L_0881B658;
    case 673u: goto L_0881B664;
    case 674u: goto L_0881B670;
    case 675u: goto L_0881B67C;
    case 676u: goto L_0881B688;
    case 677u: goto L_0881B690;
    case 678u: goto L_0881B69C;
    case 679u: goto L_0881B6C0;
    case 680u: goto L_0881B6D0;
    case 681u: goto L_0881B6D8;
    case 682u: goto L_0881B6E4;
    case 683u: goto L_0881B6F8;
    case 684u: goto L_0881B704;
    case 685u: goto L_0881B714;
    case 686u: goto L_0881B734;
    case 687u: goto L_0881B73C;
    case 688u: goto L_0881B748;
    case 689u: goto L_0881B750;
    case 690u: goto L_0881B758;
    case 691u: goto L_0881B768;
    case 692u: goto L_0881B784;
    case 693u: goto L_0881B78C;
    case 694u: goto L_0881B798;
    case 695u: goto L_0881B7AC;
    case 696u: goto L_0881B7C4;
    case 697u: goto L_0881B7CC;
    case 698u: goto L_0881B7D8;
    case 699u: goto L_0881B7F8;
    case 700u: goto L_0881B810;
    case 701u: goto L_0881B820;
    case 702u: goto L_0881B830;
    case 703u: goto L_0881B864;
    case 704u: goto L_0881B86C;
    case 705u: goto L_0881B874;
    case 706u: goto L_0881B880;
    case 707u: goto L_0881B8A8;
    case 708u: goto L_0881B8C0;
    case 709u: goto L_0881B8D0;
    case 710u: goto L_0881B8E0;
    case 711u: goto L_0881B900;
    case 712u: goto L_0881B910;
    case 713u: goto L_0881B920;
    case 714u: goto L_0881B938;
    case 715u: goto L_0881B968;
    case 716u: goto L_0881B970;
    case 717u: goto L_0881B984;
    case 718u: goto L_0881B99C;
    case 719u: goto L_0881B9A8;
    case 720u: goto L_0881B9B8;
    case 721u: goto L_0881B9E4;
    case 722u: goto L_0881B9F4;
    case 723u: goto L_0881B9FC;
    case 724u: goto L_0881BA08;
    case 725u: goto L_0881BA20;
    case 726u: goto L_0881BA28;
    case 727u: goto L_0881BA40;
    case 728u: goto L_0881BA4C;
    case 729u: goto L_0881BA60;
    case 730u: goto L_0881BA68;
    case 731u: goto L_0881BA70;
    case 732u: goto L_0881BA7C;
    case 733u: goto L_0881BA90;
    case 734u: goto L_0881BA98;
    case 735u: goto L_0881BAA0;
    case 736u: goto L_0881BAB0;
    case 737u: goto L_0881BAB8;
    case 738u: goto L_0881BAC4;
    case 739u: goto L_0881BADC;
    case 740u: goto L_0881BAE4;
    case 741u: goto L_0881BAF8;
    case 742u: goto L_0881BB28;
    case 743u: goto L_0881BB30;
    case 744u: goto L_0881BB50;
    case 745u: goto L_0881BB58;
    case 746u: goto L_0881BB60;
    case 747u: goto L_0881BB70;
    case 748u: goto L_0881BB8C;
    case 749u: goto L_0881BB94;
    case 750u: goto L_0881BBA0;
    case 751u: goto L_0881BBB4;
    case 752u: goto L_0881BBCC;
    case 753u: goto L_0881BBD4;
    case 754u: goto L_0881BBE0;
    case 755u: goto L_0881BC00;
    case 756u: goto L_0881BC18;
    case 757u: goto L_0881BC28;
    case 758u: goto L_0881BC38;
    case 759u: goto L_0881BC6C;
    case 760u: goto L_0881BC74;
    case 761u: goto L_0881BC7C;
    case 762u: goto L_0881BC88;
    case 763u: goto L_0881BCB0;
    case 764u: goto L_0881BCC8;
    case 765u: goto L_0881BCD8;
    case 766u: goto L_0881BCE8;
    case 767u: goto L_0881BD08;
    case 768u: goto L_0881BD18;
    case 769u: goto L_0881BD28;
    case 770u: goto L_0881BD40;
    case 771u: goto L_0881BD70;
    case 772u: goto L_0881BD78;
    case 773u: goto L_0881BD8C;
    case 774u: goto L_0881BDA4;
    case 775u: goto L_0881BDB0;
    case 776u: goto L_0881BDC0;
    case 777u: goto L_0881BDE8;
    case 778u: goto L_0881BDF8;
    case 779u: goto L_0881BE00;
    case 780u: goto L_0881BE0C;
    case 781u: goto L_0881BE24;
    case 782u: goto L_0881BE2C;
    case 783u: goto L_0881BE44;
    case 784u: goto L_0881BE50;
    case 785u: goto L_0881BE64;
    case 786u: goto L_0881BE6C;
    case 787u: goto L_0881BE74;
    case 788u: goto L_0881BE80;
    case 789u: goto L_0881BE90;
    case 790u: goto L_0881BE98;
    case 791u: goto L_0881BEA4;
    case 792u: goto L_0881BEB0;
    case 793u: goto L_0881BEC0;
    case 794u: goto L_0881BEC8;
    case 795u: goto L_0881BED4;
    case 796u: goto L_0881BEE8;
    case 797u: goto L_0881BEF4;
    case 798u: goto L_0881BF04;
    case 799u: goto L_0881BF24;
    case 800u: goto L_0881BF2C;
    case 801u: goto L_0881BF38;
    case 802u: goto L_0881BF40;
    case 803u: goto L_0881BF48;
    case 804u: goto L_0881BF58;
    case 805u: goto L_0881BF74;
    case 806u: goto L_0881BF7C;
    case 807u: goto L_0881BF88;
    case 808u: goto L_0881BF9C;
    case 809u: goto L_0881BFA4;
    case 810u: goto L_0881BFB8;
    case 811u: goto L_0881BFD0;
    case 812u: goto L_0881BFDC;
    case 813u: goto L_0881BFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08818000:
    ctx.gpr[31] = (0x08818008u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08818008u) goto L_08818008;
    return;
L_08818008:
    ctx.gpr[6] = (16042u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 42572u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1472));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08818020u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 269u, 0x0880A900u>(ctx, &aot_mem) && ctx.pc == 0x08818020u) goto L_08818020;
    return;
L_08818020:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7808)));
    ctx.gpr[4] = (16528u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[21] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088180F8;
      }
      goto L_0881805C;
    }
L_0881805C:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1504));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1472));
    ctx.gpr[31] = (0x0881806Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881806Cu) goto L_0881806C;
    return;
L_0881806C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881807Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 279u, 0x0880A9A8u>(ctx, &aot_mem) && ctx.pc == 0x0881807Cu) goto L_0881807C;
    return;
L_0881807C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1504)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08818094u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1504), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 279u, 0x0880A9A8u>(ctx, &aot_mem) && ctx.pc == 0x08818094u) goto L_08818094;
    return;
L_08818094:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1508)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1488));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[0];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088180B8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1508), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x088180B8u) goto L_088180B8;
    return;
L_088180B8:
    ctx.gpr[31] = (0x088180C0u);
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF983Cu>(ctx, &aot_mem) && ctx.pc == 0x088180C0u) goto L_088180C0;
    return;
L_088180C0:
    ctx.gpr[10] = (ctx.gpr[2] & 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (0u | 38u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x088180E8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088180E8u) goto L_088180E8;
    return;
L_088180E8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881805C;
      }
      goto L_088180F8;
    }
L_088180F8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 975u, 0x08817F78u>(ctx, &aot_mem); return;
      }
      goto L_08818108;
    }
L_08818108:
    ctx.gpr[31] = (0x08818110u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 402u, 0x0881D858u>(ctx, &aot_mem) && ctx.pc == 0x08818110u) goto L_08818110;
    return;
L_08818110:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881843C;
      }
      goto L_08818120;
    }
L_08818120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881843C;
      }
      goto L_08818138;
    }
L_08818138:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[4] = (17154u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881843C;
      }
      goto L_08818154;
    }
L_08818154:
    ctx.gpr[31] = (0x0881815Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881815Cu) goto L_0881815C;
    return;
L_0881815C:
    ctx.gpr[31] = (0x08818164u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 309u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08818164u) goto L_08818164;
    return;
L_08818164:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08818174u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 443u, 0x08AFA020u>(ctx, &aot_mem) && ctx.pc == 0x08818174u) goto L_08818174;
    return;
L_08818174:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08818180u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08818180u) goto L_08818180;
    return;
L_08818180:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1520));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08818194u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08818194u) goto L_08818194;
    return;
L_08818194:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088181A0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 563u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x088181A0u) goto L_088181A0;
    return;
L_088181A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881843C;
      }
      goto L_088181A8;
    }
L_088181A8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08818240;
      }
      goto L_088181D0;
    }
L_088181D0:
    ctx.gpr[31] = (0x088181D8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(584)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x088181D8u) goto L_088181D8;
    return;
L_088181D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(584)));
    ctx.gpr[31] = (0x088181E4u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x088181E4u) goto L_088181E4;
    return;
L_088181E4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1632));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088181F8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x088181F8u) goto L_088181F8;
    return;
L_088181F8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1648));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08818208u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 260u, 0x0880A83Cu>(ctx, &aot_mem) && ctx.pc == 0x08818208u) goto L_08818208;
    return;
L_08818208:
    ctx.gpr[4] = (48501u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48373u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[31] = (0x08818224u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 279u, 0x0880A9A8u>(ctx, &aot_mem) && ctx.pc == 0x08818224u) goto L_08818224;
    return;
L_08818224:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1648)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1652)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1572), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08818250;
      }
      goto L_08818240;
    }
L_08818240:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1572), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08818250;
L_08818250:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1552));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08818264u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08818264u) goto L_08818264;
    return;
L_08818264:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1600));
    ctx.gpr[31] = (0x08818270u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08818270u) goto L_08818270;
    return;
L_08818270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088182CC;
      }
      goto L_08818284;
    }
L_08818284:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1680));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    ctx.gpr[31] = (0x08818294u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08818294u) goto L_08818294;
    return;
L_08818294:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1680)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1664));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1680), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088182B4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x088182B4u) goto L_088182B4;
    return;
L_088182B4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1616));
    ctx.gpr[31] = (0x088182C0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x088182C0u) goto L_088182C0;
    return;
L_088182C0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1584));
    ctx.gpr[31] = (0x088182CCu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1568));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x088182CCu) goto L_088182CC;
    return;
L_088182CC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.gpr[31] = (0x088182E0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 279u, 0x0880A9A8u>(ctx, &aot_mem) && ctx.pc == 0x088182E0u) goto L_088182E0;
    return;
L_088182E0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x088182ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 449u, 0x08AFA07Cu>(ctx, &aot_mem) && ctx.pc == 0x088182ECu) goto L_088182EC;
    return;
L_088182EC:
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(860)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881843C;
      }
      goto L_08818318;
    }
L_08818318:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1600));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1568));
    ctx.gpr[4] = (0u | 65u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08818340u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08818340u) goto L_08818340;
    return;
L_08818340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881837C;
      }
      goto L_08818354;
    }
L_08818354:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1616));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1584));
    ctx.gpr[4] = (0u | 65u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881837Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881837Cu) goto L_0881837C;
    return;
L_0881837C:
    ctx.gpr[31] = (0x08818384u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 449u, 0x08AFA07Cu>(ctx, &aot_mem) && ctx.pc == 0x08818384u) goto L_08818384;
    return;
L_08818384:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(864)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881842C;
      }
      goto L_0881839C;
    }
L_0881839C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(624)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881842C;
      }
      goto L_088183AC;
    }
L_088183AC:
    ctx.gpr[31] = (0x088183B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 346u, 0x08AF983Cu>(ctx, &aot_mem) && ctx.pc == 0x088183B4u) goto L_088183B4;
    return;
L_088183B4:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088183F0;
      }
      goto L_088183C0;
    }
L_088183C0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1600));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1568));
    ctx.gpr[4] = (0u | 65u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088183E8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088183E8u) goto L_088183E8;
    return;
L_088183E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881842C;
      }
      goto L_088183F0;
    }
L_088183F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881842C;
      }
      goto L_08818404;
    }
L_08818404:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1616));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1584));
    ctx.gpr[4] = (0u | 65u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881842Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0881842Cu) goto L_0881842C;
    return;
L_0881842C:
    ctx.gpr[4] = (0u | 99u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08818318;
      }
      goto L_0881843C;
    }
L_0881843C:
    ctx.gpr[31] = (0x08818444u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08818444u) goto L_08818444;
    return;
L_08818444:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 149 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 159 ? 1u : 0u);
      if (branch_taken) {
          goto L_08818488;
      }
      goto L_08818454;
    }
L_08818454:
    ctx.gpr[5] = (0u | 148u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 147u);
      if (branch_taken) {
          goto L_08819078;
      }
      goto L_08818460;
    }
L_08818460:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 138u);
      if (branch_taken) {
          goto L_088184EC;
      }
      goto L_08818468;
    }
L_08818468:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-954));
      if (branch_taken) {
          goto L_088184EC;
      }
      goto L_08818470;
    }
L_08818470:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-967));
      if (branch_taken) {
          goto L_08819078;
      }
      goto L_08818478;
    }
L_08818478:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08818F28;
      }
      goto L_08818480;
    }
L_08818480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881921C;
      }
      goto L_08818488;
    }
L_08818488:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 167 ? 1u : 0u);
      if (branch_taken) {
          goto L_088184C0;
      }
      goto L_08818490;
    }
L_08818490:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 152 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 157 ? 1u : 0u);
        goto L_088184B0;
    }
    goto L_0881849C;
L_0881849C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 151 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881921C;
      }
      goto L_088184A8;
    }
L_088184A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08818C94;
      }
      goto L_088184B0;
    }
L_088184B0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881921C;
      }
      goto L_088184B8;
    }
L_088184B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088184EC;
      }
      goto L_088184C0;
    }
L_088184C0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 181u);
      if (branch_taken) {
          goto L_088184DC;
      }
      goto L_088184C8;
    }
L_088184C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 166 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881921C;
      }
      goto L_088184D4;
    }
L_088184D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08818DE4;
      }
      goto L_088184DC;
    }
L_088184DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08818F28;
      }
      goto L_088184E4;
    }
L_088184E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881921C;
      }
      goto L_088184EC;
    }
L_088184EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08818C8C;
      }
      goto L_088184F8;
    }
L_088184F8:
    ctx.gpr[31] = (0x08818500u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08818500u) goto L_08818500;
    return;
L_08818500:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 138 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 159 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881874C;
      }
      goto L_08818510;
    }
L_08818510:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-138));
      if (branch_taken) {
          goto L_0881874C;
      }
      goto L_08818518;
    }
L_08818518:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-13192)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818530:
    ctx.gpr[5] = (48844u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1760));
    ctx.gpr[5] = (16112u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 41943u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08818564u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08818564u) goto L_08818564;
    return;
L_08818564:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08818570u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08818570u) goto L_08818570;
    return;
L_08818570:
    ctx.gpr[5] = (48880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 41943u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881858Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x0881858Cu) goto L_0881858C;
    return;
L_0881858C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08818598u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08818598u) goto L_08818598;
    return;
L_08818598:
    ctx.gpr[20] = (0u | 255u);
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3872), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0881874C;
      }
      goto L_088185B4;
    }
L_088185B4:
    ctx.gpr[5] = (16250u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 57672u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1760));
    ctx.gpr[5] = (16326u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (16179u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.gpr[31] = (0x088185ECu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x088185ECu) goto L_088185EC;
    return;
L_088185EC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x088185F8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x088185F8u) goto L_088185F8;
    return;
L_088185F8:
    ctx.gpr[5] = (48947u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08818614u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08818614u) goto L_08818614;
    return;
L_08818614:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08818620u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08818620u) goto L_08818620;
    return;
L_08818620:
    ctx.gpr[20] = (0u | 255u);
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3872), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0881874C;
      }
      goto L_0881863C;
    }
L_0881863C:
    ctx.gpr[5] = (16163u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1760));
    ctx.gpr[5] = (16332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (16243u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.gpr[31] = (0x08818674u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08818674u) goto L_08818674;
    return;
L_08818674:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08818680u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08818680u) goto L_08818680;
    return;
L_08818680:
    ctx.gpr[5] = (49011u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881869Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x0881869Cu) goto L_0881869C;
    return;
L_0881869C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x088186A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x088186A8u) goto L_088186A8;
    return;
L_088186A8:
    ctx.gpr[22] = (0u | 255u);
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3872), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_0881874C;
      }
      goto L_088186C4;
    }
L_088186C4:
    ctx.gpr[5] = (16345u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1760));
    ctx.gpr[5] = (16366u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 5243u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (16232u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] | 62915u);
    ctx.gpr[31] = (0x088186FCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x088186FCu) goto L_088186FC;
    return;
L_088186FC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08818708u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08818708u) goto L_08818708;
    return;
L_08818708:
    ctx.gpr[5] = (49000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 62915u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08818724u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08818724u) goto L_08818724;
    return;
L_08818724:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08818730u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08818730u) goto L_08818730;
    return;
L_08818730:
    ctx.gpr[22] = (0u | 255u);
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3872), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0881874C;
      }
      goto L_0881874C;
    }
L_0881874C:
    ctx.gpr[31] = (0x08818754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x08818754u) goto L_08818754;
    return;
L_08818754:
    ctx.gpr[4] = (ctx.gpr[2] & 1023u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_088187A4;
      }
      goto L_08818764;
    }
L_08818764:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3872)));
    ctx.gpr[6] = (0u | 6u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[30]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[18] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[23]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[16] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_088187D8;
      }
      goto L_088187A4;
    }
L_088187A4:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[22]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[21]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[18] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[20]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[16] = (ctx.lo);
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_088187D8;
L_088187D8:
    ctx.gpr[4] = (ctx.gpr[4] & 511u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088188A0;
      }
      goto L_088187E8;
    }
L_088187E8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08818800;
      }
      goto L_088187F4;
    }
L_088187F4:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08818800;
L_08818800:
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_0881883C;
      }
      goto L_08818830;
    }
L_08818830:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0881883C;
L_0881883C:
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08818878;
      }
      goto L_0881886C;
    }
L_0881886C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08818878;
L_08818878:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_08818978;
      }
      goto L_088188A0;
    }
L_088188A0:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(413) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08818978;
      }
      goto L_088188AC;
    }
L_088188AC:
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088188CC;
      }
      goto L_088188C0;
    }
L_088188C0:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088188CC;
L_088188CC:
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08818910;
      }
      goto L_08818904;
    }
L_08818904:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08818910;
L_08818910:
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08818954;
      }
      goto L_08818948;
    }
L_08818948:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08818954;
L_08818954:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_08818978;
L_08818978:
    ctx.gpr[31] = (0x08818980u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08818980u) goto L_08818980;
    return;
L_08818980:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1744));
    ctx.gpr[31] = (0x0881898Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881898Cu) goto L_0881898C;
    return;
L_0881898C:
    ctx.gpr[31] = (0x08818994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x08818994u) goto L_08818994;
    return;
L_08818994:
    ctx.gpr[4] = (ctx.gpr[2] & 1023u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_088189B0;
      }
      goto L_088189A4;
    }
L_088189A4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_088189B0;
L_088189B0:
    ctx.gpr[4] = (15304u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3874), static_cast<std::uint8_t>(ctx.gpr[21]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3873), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[31] = (0x088189D0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x088189D0u) goto L_088189D0;
    return;
L_088189D0:
    ctx.gpr[31] = (0x088189D8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x088189D8u) goto L_088189D8;
    return;
L_088189D8:
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088189E8u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x088189E8u) goto L_088189E8;
    return;
L_088189E8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1712));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088189FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x088189FCu) goto L_088189FC;
    return;
L_088189FC:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1696));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1744));
    ctx.gpr[31] = (0x08818A10u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08818A10u) goto L_08818A10;
    return;
L_08818A10:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1728));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08818A24u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08818A24u) goto L_08818A24;
    return;
L_08818A24:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.gpr[9] = (16704u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[31] = (0x08818A70u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 333u, 0x08AE5D44u>(ctx, &aot_mem) && ctx.pc == 0x08818A70u) goto L_08818A70;
    return;
L_08818A70:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1776));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08818A88u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08818A88u) goto L_08818A88;
    return;
L_08818A88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08818A94u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08818A94u) goto L_08818A94;
    return;
L_08818A94:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08818AA8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08818AA8u) goto L_08818AA8;
    return;
L_08818AA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08818AB4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08818AB4u) goto L_08818AB4;
    return;
L_08818AB4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3873)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3874)));
      if (branch_taken) {
          goto L_08818C8C;
      }
      goto L_08818AC8;
    }
L_08818AC8:
    ctx.gpr[31] = (0x08818AD0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3873), static_cast<std::uint8_t>(ctx.gpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x08818AD0u) goto L_08818AD0;
    return;
L_08818AD0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[18] = (ctx.gpr[4] & 3u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1824));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3875), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08818B00u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 269u, 0x0880A900u>(ctx, &aot_mem) && ctx.pc == 0x08818B00u) goto L_08818B00;
    return;
L_08818B00:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1840));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[31] = (0x08818B1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 269u, 0x0880A900u>(ctx, &aot_mem) && ctx.pc == 0x08818B1Cu) goto L_08818B1C;
    return;
L_08818B1C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1808));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08818B30u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08818B30u) goto L_08818B30;
    return;
L_08818B30:
    ctx.gpr[5] = (16042u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 43691u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1792));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08818B4Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 269u, 0x0880A900u>(ctx, &aot_mem) && ctx.pc == 0x08818B4Cu) goto L_08818B4C;
    return;
L_08818B4C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08818B58u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08818B58u) goto L_08818B58;
    return;
L_08818B58:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3875)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3873)));
      if (branch_taken) {
          goto L_08818B78;
      }
      goto L_08818B68;
    }
L_08818B68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08818C5C;
      }
      goto L_08818B70;
    }
L_08818B70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08818BE4;
      }
      goto L_08818B78;
    }
L_08818B78:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08818C5C;
      }
      goto L_08818B84;
    }
L_08818B84:
    ctx.gpr[2] = (16076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[2] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08818BDCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08818BDCu) goto L_08818BDC;
    return;
L_08818BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08818C78;
      }
      goto L_08818BE4;
    }
L_08818BE4:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    if (ctx.gpr[16] == ctx.gpr[7]) {
    ctx.gpr[6] = (0u | 2u);
        goto L_08818C00;
    }
    goto L_08818C00;
L_08818C00:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[2] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(3872)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[2] = (16320u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16968u << 16u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08818C54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08818C54u) goto L_08818C54;
    return;
L_08818C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08818C78;
      }
      goto L_08818C5C;
    }
L_08818C5C:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08818C78u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08818C78u) goto L_08818C78;
    return;
L_08818C78:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08818AC8;
      }
      goto L_08818C8C;
    }
L_08818C8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881921C;
      }
      goto L_08818C94;
    }
L_08818C94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08818DDC;
      }
      goto L_08818CA4;
    }
L_08818CA4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1904));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1856));
    ctx.gpr[31] = (0x08818CB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08818CB4u) goto L_08818CB4;
    return;
L_08818CB4:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1872));
    ctx.gpr[31] = (0x08818CD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08818CD0u) goto L_08818CD0;
    return;
L_08818CD0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08818CE0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08818CE0u) goto L_08818CE0;
    return;
L_08818CE0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08818CF0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08818CF0u) goto L_08818CF0;
    return;
L_08818CF0:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1888));
    ctx.gpr[31] = (0x08818D08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08818D08u) goto L_08818D08;
    return;
L_08818D08:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08818D18u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08818D18u) goto L_08818D18;
    return;
L_08818D18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08818D28u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08818D28u) goto L_08818D28;
    return;
L_08818D28:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (16204u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08818D84u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08818D84u) goto L_08818D84;
    return;
L_08818D84:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08818D90u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08818D90u) goto L_08818D90;
    return;
L_08818D90:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08818DA8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08818DA8u) goto L_08818DA8;
    return;
L_08818DA8:
    ctx.gpr[9] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (16128u << 16u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08818DDCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 333u, 0x08AE5D44u>(ctx, &aot_mem) && ctx.pc == 0x08818DDCu) goto L_08818DDC;
    return;
L_08818DDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881921C;
      }
      goto L_08818DE4;
    }
L_08818DE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08818F20;
      }
      goto L_08818DF4;
    }
L_08818DF4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1968));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1920));
    ctx.gpr[31] = (0x08818E04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08818E04u) goto L_08818E04;
    return;
L_08818E04:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1936));
    ctx.gpr[31] = (0x08818E20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08818E20u) goto L_08818E20;
    return;
L_08818E20:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08818E30u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08818E30u) goto L_08818E30;
    return;
L_08818E30:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08818E40u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08818E40u) goto L_08818E40;
    return;
L_08818E40:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1952));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08818E50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08818E50u) goto L_08818E50;
    return;
L_08818E50:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08818E60u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08818E60u) goto L_08818E60;
    return;
L_08818E60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08818E70u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08818E70u) goto L_08818E70;
    return;
L_08818E70:
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (16204u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08818EC8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08818EC8u) goto L_08818EC8;
    return;
L_08818EC8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08818ED4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08818ED4u) goto L_08818ED4;
    return;
L_08818ED4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08818EECu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x08818EECu) goto L_08818EEC;
    return;
L_08818EEC:
    ctx.gpr[9] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (16128u << 16u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08818F20u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 333u, 0x08AE5D44u>(ctx, &aot_mem) && ctx.pc == 0x08818F20u) goto L_08818F20;
    return;
L_08818F20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881921C;
      }
      goto L_08818F28;
    }
L_08818F28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08819070;
      }
      goto L_08818F38;
    }
L_08818F38:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(2032));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1984));
    ctx.gpr[31] = (0x08818F48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08818F48u) goto L_08818F48;
    return;
L_08818F48:
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(2000));
    ctx.gpr[31] = (0x08818F64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08818F64u) goto L_08818F64;
    return;
L_08818F64:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08818F74u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08818F74u) goto L_08818F74;
    return;
L_08818F74:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08818F84u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08818F84u) goto L_08818F84;
    return;
L_08818F84:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(2016));
    ctx.gpr[31] = (0x08818F9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08818F9Cu) goto L_08818F9C;
    return;
L_08818F9C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08818FACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x08818FACu) goto L_08818FAC;
    return;
L_08818FAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08818FBCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x08818FBCu) goto L_08818FBC;
    return;
L_08818FBC:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (16204u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08819018u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08819018u) goto L_08819018;
    return;
L_08819018:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08819024u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08819024u) goto L_08819024;
    return;
L_08819024:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881903Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x0881903Cu) goto L_0881903C;
    return;
L_0881903C:
    ctx.gpr[9] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (16128u << 16u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08819070u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 333u, 0x08AE5D44u>(ctx, &aot_mem) && ctx.pc == 0x08819070u) goto L_08819070;
    return;
L_08819070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881921C;
      }
      goto L_08819078;
    }
L_08819078:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (16076u << 16u);
      if (branch_taken) {
          goto L_0881921C;
      }
      goto L_08819084;
    }
L_08819084:
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(2048));
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2064));
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[31] = (0x088190B0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x088190B0u) goto L_088190B0;
    return;
L_088190B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088190C0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x088190C0u) goto L_088190C0;
    return;
L_088190C0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x088190CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x088190CCu) goto L_088190CC;
    return;
L_088190CC:
    ctx.gpr[31] = (0x088190D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x088190D4u) goto L_088190D4;
    return;
L_088190D4:
    ctx.gpr[4] = (ctx.gpr[2] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08819204;
      }
      goto L_088190E0;
    }
L_088190E0:
    ctx.gpr[31] = (0x088190E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x088190E8u) goto L_088190E8;
    return;
L_088190E8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(2064));
    ctx.gpr[31] = (0x088190F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x088190F8u) goto L_088190F8;
    return;
L_088190F8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08819108u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08819108u) goto L_08819108;
    return;
L_08819108:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08819118u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x08819118u) goto L_08819118;
    return;
L_08819118:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08819124u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 263u, 0x0880A884u>(ctx, &aot_mem) && ctx.pc == 0x08819124u) goto L_08819124;
    return;
L_08819124:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08819204;
      }
      goto L_08819138;
    }
L_08819138:
    ctx.gpr[31] = (0x08819140u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08819140u) goto L_08819140;
    return;
L_08819140:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-954));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088191A8;
      }
      goto L_0881914C;
    }
L_0881914C:
    ctx.gpr[2] = (16076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[2] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 70u);
    ctx.gpr[7] = (0u | 70u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088191A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x088191A0u) goto L_088191A0;
    return;
L_088191A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881921C;
      }
      goto L_088191A8;
    }
L_088191A8:
    ctx.gpr[2] = (16076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[2] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088191FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x088191FCu) goto L_088191FC;
    return;
L_088191FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881921C;
      }
      goto L_08819204;
    }
L_08819204:
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0881921Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x0881921Cu) goto L_0881921C;
    return;
L_0881921C:
    ctx.gpr[31] = (0x08819224u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08819224u) goto L_08819224;
    return;
L_08819224:
    ctx.gpr[4] = (0u | 169u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881B3A4;
      }
      goto L_08819230;
    }
L_08819230:
    ctx.gpr[31] = (0x08819238u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08819238u) goto L_08819238;
    return;
L_08819238:
    ctx.gpr[4] = (0u | 164u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881B3A4;
      }
      goto L_08819244;
    }
L_08819244:
    ctx.gpr[31] = (0x0881924Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881924Cu) goto L_0881924C;
    return;
L_0881924C:
    ctx.gpr[4] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881B3A4;
      }
      goto L_08819258;
    }
L_08819258:
    ctx.gpr[31] = (0x08819260u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08819260u) goto L_08819260;
    return;
L_08819260:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-955));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881B3A4;
      }
      goto L_0881926C;
    }
L_0881926C:
    ctx.gpr[31] = (0x08819274u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x08819274u) goto L_08819274;
    return;
L_08819274:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881B3A4;
      }
      goto L_08819280;
    }
L_08819280:
    ctx.gpr[31] = (0x08819288u);
    ctx.gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 473u, 0x08AFA1B4u>(ctx, &aot_mem) && ctx.pc == 0x08819288u) goto L_08819288;
    return;
L_08819288:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 21 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08819370;
    }
    goto L_08819294;
L_08819294:
    ctx.gpr[31] = (0x0881929Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 473u, 0x08AFA1B4u>(ctx, &aot_mem) && ctx.pc == 0x0881929Cu) goto L_0881929C;
    return;
L_0881929C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088192C0;
      }
      goto L_088192A8;
    }
L_088192A8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86)));
    ctx.gpr[31] = (0x088192B4u);
    ctx.gpr[18] = (ctx.gpr[4] & 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 474u, 0x08AFA1C0u>(ctx, &aot_mem) && ctx.pc == 0x088192B4u) goto L_088192B4;
    return;
L_088192B4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08819370;
    }
    goto L_088192C0;
L_088192C0:
    ctx.gpr[31] = (0x088192C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 473u, 0x08AFA1B4u>(ctx, &aot_mem) && ctx.pc == 0x088192C8u) goto L_088192C8;
    return;
L_088192C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 6 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08819370;
    }
    goto L_088192D4;
L_088192D4:
    ctx.gpr[31] = (0x088192DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 473u, 0x08AFA1B4u>(ctx, &aot_mem) && ctx.pc == 0x088192DCu) goto L_088192DC;
    return;
L_088192DC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 7 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86)));
        goto L_08819308;
    }
    goto L_088192E8;
L_088192E8:
    ctx.gpr[31] = (0x088192F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 474u, 0x08AFA1C0u>(ctx, &aot_mem) && ctx.pc == 0x088192F0u) goto L_088192F0;
    return;
L_088192F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08819370;
    }
    goto L_08819304;
L_08819304:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86)));
    goto L_08819308;
L_08819308:
    ctx.gpr[5] = (18243u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 20480u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7804)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08819370;
    }
    goto L_08819338;
L_08819338:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (18243u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 20480u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7816)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08819370;
      }
      goto L_0881936C;
    }
L_0881936C:
    ctx.gpr[16] = (0u | 1u);
    goto L_08819370;
L_08819370:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (ctx.gpr[4] >> 6u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08819464;
      }
      goto L_08819388;
    }
L_08819388:
    ctx.gpr[31] = (0x08819390u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08819390u) goto L_08819390;
    return;
L_08819390:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08819464;
      }
      goto L_0881939C;
    }
L_0881939C:
    ctx.gpr[31] = (0x088193A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x088193A4u) goto L_088193A4;
    return;
L_088193A4:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088193D0;
      }
      goto L_088193B0;
    }
L_088193B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[6] = (ctx.gpr[16] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08819464;
      }
      goto L_088193D0;
    }
L_088193D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08819464;
      }
      goto L_088193E0;
    }
L_088193E0:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x088193ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x088193ECu) goto L_088193EC;
    return;
L_088193EC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088193F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x088193F8u) goto L_088193F8;
    return;
L_088193F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2080));
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[31] = (0x0881940Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 372u, 0x08AF9994u>(ctx, &aot_mem) && ctx.pc == 0x0881940Cu) goto L_0881940C;
    return;
L_0881940C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08819418u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08819418u) goto L_08819418;
    return;
L_08819418:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08819424u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08819424u) goto L_08819424;
    return;
L_08819424:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2084));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[31] = (0x08819438u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2084), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 372u, 0x08AF9994u>(ctx, &aot_mem) && ctx.pc == 0x08819438u) goto L_08819438;
    return;
L_08819438:
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[0];
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08819464;
      }
      goto L_08819454;
    }
L_08819454:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08819464;
L_08819464:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08819474u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 452u, 0x08AFA094u>(ctx, &aot_mem) && ctx.pc == 0x08819474u) goto L_08819474;
    return;
L_08819474:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881949C;
      }
      goto L_0881947C;
    }
L_0881947C:
    ctx.gpr[31] = (0x08819484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 339u, 0x08AF97E8u>(ctx, &aot_mem) && ctx.pc == 0x08819484u) goto L_08819484;
    return;
L_08819484:
    ctx.gpr[4] = (ctx.gpr[2] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08819498;
      }
      goto L_08819490;
    }
L_08819490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0881949C;
      }
      goto L_08819498;
    }
L_08819498:
    ctx.gpr[16] = (0u | 1u);
    goto L_0881949C;
L_0881949C:
    ctx.gpr[31] = (0x088194A4u);
    ctx.gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088194A4u) goto L_088194A4;
    return;
L_088194A4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088194E0;
      }
      goto L_088194AC;
    }
L_088194AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088194E0;
      }
      goto L_088194DC;
    }
L_088194DC:
    ctx.gpr[19] = (0u | 1u);
    goto L_088194E0;
L_088194E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881950C;
      }
      goto L_088194F0;
    }
L_088194F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881950C;
      }
      goto L_08819500;
    }
L_08819500:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881951C;
      }
      goto L_0881950C;
    }
L_0881950C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881951C;
      }
      goto L_08819514;
    }
L_08819514:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881ACDC;
      }
      goto L_0881951C;
    }
L_0881951C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881ACDC;
      }
      goto L_08819524;
    }
L_08819524:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(2160));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(2096));
    ctx.gpr[31] = (0x08819534u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08819534u) goto L_08819534;
    return;
L_08819534:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08819544u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08819544u) goto L_08819544;
    return;
L_08819544:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08819554u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x08819554u) goto L_08819554;
    return;
L_08819554:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08819560u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08819560u) goto L_08819560;
    return;
L_08819560:
    ctx.gpr[31] = (0x08819568u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 288u, 0x0880AA64u>(ctx, &aot_mem) && ctx.pc == 0x08819568u) goto L_08819568;
    return;
L_08819568:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881959C;
      }
      goto L_08819580;
    }
L_08819580:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[31] = (0x08819594u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2160));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 291u, 0x0880AAA8u>(ctx, &aot_mem) && ctx.pc == 0x08819594u) goto L_08819594;
    return;
L_08819594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088195C0;
      }
      goto L_0881959C;
    }
L_0881959C:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2208));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088195B4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x088195B4u) goto L_088195B4;
    return;
L_088195B4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2160));
    ctx.gpr[31] = (0x088195C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x088195C0u) goto L_088195C0;
    return;
L_088195C0:
    ctx.gpr[31] = (0x088195C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x088195C8u) goto L_088195C8;
    return;
L_088195C8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2160));
    ctx.gpr[31] = (0x088195D4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 263u, 0x0880A884u>(ctx, &aot_mem) && ctx.pc == 0x088195D4u) goto L_088195D4;
    return;
L_088195D4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088195FC;
      }
      goto L_088195F0;
    }
L_088195F0:
    ctx.gpr[4] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881961C;
      }
      goto L_088195FC;
    }
L_088195FC:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881961C;
      }
      goto L_08819614;
    }
L_08819614:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0881961C;
L_0881961C:
    ctx.gpr[31] = (0x08819624u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 379u, 0x08AF9A54u>(ctx, &aot_mem) && ctx.pc == 0x08819624u) goto L_08819624;
    return;
L_08819624:
    ctx.gpr[31] = (0x0881962Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 283u, 0x0880AA00u>(ctx, &aot_mem) && ctx.pc == 0x0881962Cu) goto L_0881962C;
    return;
L_0881962C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(2176));
    ctx.gpr[31] = (0x0881963Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881963Cu) goto L_0881963C;
    return;
L_0881963C:
    ctx.gpr[31] = (0x08819644u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 309u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08819644u) goto L_08819644;
    return;
L_08819644:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08819650u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 443u, 0x08AFA020u>(ctx, &aot_mem) && ctx.pc == 0x08819650u) goto L_08819650;
    return;
L_08819650:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881965Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881965Cu) goto L_0881965C;
    return;
L_0881965C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(2096));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08819674u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08819674u) goto L_08819674;
    return;
L_08819674:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08819680u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08819680u) goto L_08819680;
    return;
L_08819680:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08819690u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08819690u) goto L_08819690;
    return;
L_08819690:
    ctx.gpr[31] = (0x08819698u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08819698u) goto L_08819698;
    return;
L_08819698:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2176)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088196B4u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 269u, 0x0880A900u>(ctx, &aot_mem) && ctx.pc == 0x088196B4u) goto L_088196B4;
    return;
L_088196B4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088196C0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x088196C0u) goto L_088196C0;
    return;
L_088196C0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x088196CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x088196CCu) goto L_088196CC;
    return;
L_088196CC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088196DCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x088196DCu) goto L_088196DC;
    return;
L_088196DC:
    ctx.gpr[31] = (0x088196E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x088196E4u) goto L_088196E4;
    return;
L_088196E4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088196F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 263u, 0x0880A884u>(ctx, &aot_mem) && ctx.pc == 0x088196F0u) goto L_088196F0;
    return;
L_088196F0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08819CF4;
      }
      goto L_08819704;
    }
L_08819704:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_0881974C;
      }
      goto L_08819738;
    }
L_08819738:
    ctx.gpr[31] = (0x08819740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08819740u) goto L_08819740;
    return;
L_08819740:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08819CF4;
      }
      goto L_08819748;
    }
L_08819748:
    ctx.gpr[4] = (16128u << 16u);
    goto L_0881974C;
L_0881974C:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16025u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49016u << 16u);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[13];
      if (branch_taken) {
          goto L_088199A0;
      }
      goto L_0881978C;
    }
L_0881978C:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088199A0;
      }
      goto L_088197A4;
    }
L_088197A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088198B0;
      }
      goto L_088197B8;
    }
L_088197B8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x088197C4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x088197C4u) goto L_088197C4;
    return;
L_088197C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08819830;
      }
      goto L_088197CC;
    }
L_088197CC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (16948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (16281u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[2] = (ctx.gpr[2] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    ctx.gpr[5] = (0u | 150u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[7] = (0u | 195u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08819830u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08819830u) goto L_08819830;
    return;
L_08819830:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881983Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881983Cu) goto L_0881983C;
    return;
L_0881983C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_088199A0;
      }
      goto L_08819844;
    }
L_08819844:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (16948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (16281u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[2] = (ctx.gpr[2] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
    ctx.gpr[5] = (0u | 150u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[7] = (0u | 195u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088198A8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x088198A8u) goto L_088198A8;
    return;
L_088198A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088199A0;
      }
      goto L_088198B0;
    }
L_088198B0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x088198BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x088198BCu) goto L_088198BC;
    return;
L_088198BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08819928;
      }
      goto L_088198C4;
    }
L_088198C4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (16948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (16281u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[2] = (ctx.gpr[2] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    ctx.gpr[5] = (0u | 160u);
    ctx.gpr[6] = (0u | 160u);
    ctx.gpr[7] = (0u | 140u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08819928u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08819928u) goto L_08819928;
    return;
L_08819928:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08819934u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x08819934u) goto L_08819934;
    return;
L_08819934:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_088199A0;
      }
      goto L_0881993C;
    }
L_0881993C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (16948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (16281u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[2] = (ctx.gpr[2] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
    ctx.gpr[5] = (0u | 160u);
    ctx.gpr[6] = (0u | 160u);
    ctx.gpr[7] = (0u | 140u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x088199A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x088199A0u) goto L_088199A0;
    return;
L_088199A0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08819C2C;
      }
      goto L_088199A8;
    }
L_088199A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08819AF4;
      }
      goto L_088199BC;
    }
L_088199BC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x088199C8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x088199C8u) goto L_088199C8;
    return;
L_088199C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (17214u << 16u);
      if (branch_taken) {
          goto L_08819A54;
      }
      goto L_088199D0;
    }
L_088199D0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17279u << 16u);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[8] = (16320u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08819A54u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08819A54u) goto L_08819A54;
    return;
L_08819A54:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08819A60u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x08819A60u) goto L_08819A60;
    return;
L_08819A60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (17214u << 16u);
      if (branch_taken) {
          goto L_08819D6C;
      }
      goto L_08819A68;
    }
L_08819A68:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (17279u << 16u);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[8] = (16320u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08819AECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08819AECu) goto L_08819AEC;
    return;
L_08819AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08819D6C;
      }
      goto L_08819AF4;
    }
L_08819AF4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08819B00u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x08819B00u) goto L_08819B00;
    return;
L_08819B00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (17234u << 16u);
      if (branch_taken) {
          goto L_08819B8C;
      }
      goto L_08819B08;
    }
L_08819B08:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17219u << 16u);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[8] = (16320u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08819B8Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08819B8Cu) goto L_08819B8C;
    return;
L_08819B8C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08819B98u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x08819B98u) goto L_08819B98;
    return;
L_08819B98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (17234u << 16u);
      if (branch_taken) {
          goto L_08819D6C;
      }
      goto L_08819BA0;
    }
L_08819BA0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (17219u << 16u);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[8] = (16320u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[7] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08819C24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08819C24u) goto L_08819C24;
    return;
L_08819C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08819D6C;
      }
      goto L_08819C2C;
    }
L_08819C2C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08819C38u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x08819C38u) goto L_08819C38;
    return;
L_08819C38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08819C8C;
      }
      goto L_08819C40;
    }
L_08819C40:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08819C8Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08819C8Cu) goto L_08819C8C;
    return;
L_08819C8C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08819C98u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x08819C98u) goto L_08819C98;
    return;
L_08819C98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08819D6C;
      }
      goto L_08819CA0;
    }
L_08819CA0:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08819CECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08819CECu) goto L_08819CEC;
    return;
L_08819CEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08819D6C;
      }
      goto L_08819CF4;
    }
L_08819CF4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08819D00u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x08819D00u) goto L_08819D00;
    return;
L_08819D00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08819D30;
      }
      goto L_08819D08;
    }
L_08819D08:
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08819D30u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08819D30u) goto L_08819D30;
    return;
L_08819D30:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08819D3Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x08819D3Cu) goto L_08819D3C;
    return;
L_08819D3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08819D6C;
      }
      goto L_08819D44;
    }
L_08819D44:
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
    ctx.gpr[31] = (0x08819D6Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08819D6Cu) goto L_08819D6C;
    return;
L_08819D6C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08819D78u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x08819D78u) goto L_08819D78;
    return;
L_08819D78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08819E14;
      }
      goto L_08819D80;
    }
L_08819D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08819E14;
      }
      goto L_08819D90;
    }
L_08819D90:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2224));
    ctx.gpr[31] = (0x08819D9Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08819D9Cu) goto L_08819D9C;
    return;
L_08819D9C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08819DA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08819DA8u) goto L_08819DA8;
    return;
L_08819DA8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2240));
    ctx.gpr[31] = (0x08819DB4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08819DB4u) goto L_08819DB4;
    return;
L_08819DB4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08819DC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08819DC0u) goto L_08819DC0;
    return;
L_08819DC0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2256));
    ctx.gpr[31] = (0x08819DCCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08819DCCu) goto L_08819DCC;
    return;
L_08819DCC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08819DD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08819DD8u) goto L_08819DD8;
    return;
L_08819DD8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2272));
    ctx.gpr[31] = (0x08819DE4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08819DE4u) goto L_08819DE4;
    return;
L_08819DE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08819E14u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 184u, 0x088250B4u>(ctx, &aot_mem) && ctx.pc == 0x08819E14u) goto L_08819E14;
    return;
L_08819E14:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08819E20u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x08819E20u) goto L_08819E20;
    return;
L_08819E20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08819EBC;
      }
      goto L_08819E28;
    }
L_08819E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08819EBC;
      }
      goto L_08819E38;
    }
L_08819E38:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2288));
    ctx.gpr[31] = (0x08819E44u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08819E44u) goto L_08819E44;
    return;
L_08819E44:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08819E50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08819E50u) goto L_08819E50;
    return;
L_08819E50:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2304));
    ctx.gpr[31] = (0x08819E5Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08819E5Cu) goto L_08819E5C;
    return;
L_08819E5C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08819E68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08819E68u) goto L_08819E68;
    return;
L_08819E68:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2320));
    ctx.gpr[31] = (0x08819E74u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08819E74u) goto L_08819E74;
    return;
L_08819E74:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08819E80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08819E80u) goto L_08819E80;
    return;
L_08819E80:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2336));
    ctx.gpr[31] = (0x08819E8Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x08819E8Cu) goto L_08819E8C;
    return;
L_08819E8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08819EBCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 184u, 0x088250B4u>(ctx, &aot_mem) && ctx.pc == 0x08819EBCu) goto L_08819EBC;
    return;
L_08819EBC:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(2192));
    ctx.gpr[31] = (0x08819EC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08819EC8u) goto L_08819EC8;
    return;
L_08819EC8:
    ctx.gpr[31] = (0x08819ED0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 309u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08819ED0u) goto L_08819ED0;
    return;
L_08819ED0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08819EDCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 443u, 0x08AFA020u>(ctx, &aot_mem) && ctx.pc == 0x08819EDCu) goto L_08819EDC;
    return;
L_08819EDC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08819EE8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08819EE8u) goto L_08819EE8;
    return;
L_08819EE8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(2096));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08819F00u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x08819F00u) goto L_08819F00;
    return;
L_08819F00:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08819F0Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08819F0Cu) goto L_08819F0C;
    return;
L_08819F0C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08819F1Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x08819F1Cu) goto L_08819F1C;
    return;
L_08819F1C:
    ctx.gpr[31] = (0x08819F24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08819F24u) goto L_08819F24;
    return;
L_08819F24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08819F40u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 269u, 0x0880A900u>(ctx, &aot_mem) && ctx.pc == 0x08819F40u) goto L_08819F40;
    return;
L_08819F40:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08819F4Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08819F4Cu) goto L_08819F4C;
    return;
L_08819F4C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08819F58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08819F58u) goto L_08819F58;
    return;
L_08819F58:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08819F68u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x08819F68u) goto L_08819F68;
    return;
L_08819F68:
    ctx.gpr[31] = (0x08819F70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08819F70u) goto L_08819F70;
    return;
L_08819F70:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08819F7Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 263u, 0x0880A884u>(ctx, &aot_mem) && ctx.pc == 0x08819F7Cu) goto L_08819F7C;
    return;
L_08819F7C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_0881A314;
      }
      goto L_08819F90;
    }
L_08819F90:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(588)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[13];
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_0881A0FC;
      }
      goto L_08819FCC;
    }
L_08819FCC:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08819FF8u);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x08819FF8u) goto L_08819FF8;
    return;
L_08819FF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (17152u << 16u);
      if (branch_taken) {
          goto L_0881A070;
      }
      goto L_0881A000;
    }
L_0881A000:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (16320u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0881A070u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x0881A070u) goto L_0881A070;
    return;
L_0881A070:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A07Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A07Cu) goto L_0881A07C;
    return;
L_0881A07C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (17152u << 16u);
      if (branch_taken) {
          goto L_0881A36C;
      }
      goto L_0881A084;
    }
L_0881A084:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (16320u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0881A0F4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x0881A0F4u) goto L_0881A0F4;
    return;
L_0881A0F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A36C;
      }
      goto L_0881A0FC;
    }
L_0881A0FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881A134;
      }
      goto L_0881A114;
    }
L_0881A114:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[13];
    goto L_0881A134;
L_0881A134:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881A24C;
      }
      goto L_0881A13C;
    }
L_0881A13C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A148u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A148u) goto L_0881A148;
    return;
L_0881A148:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (17152u << 16u);
      if (branch_taken) {
          goto L_0881A1C0;
      }
      goto L_0881A150;
    }
L_0881A150:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (16320u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0881A1C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x0881A1C0u) goto L_0881A1C0;
    return;
L_0881A1C0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A1CCu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A1CCu) goto L_0881A1CC;
    return;
L_0881A1CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (17152u << 16u);
      if (branch_taken) {
          goto L_0881A36C;
      }
      goto L_0881A1D4;
    }
L_0881A1D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (16320u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0881A244u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x0881A244u) goto L_0881A244;
    return;
L_0881A244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A36C;
      }
      goto L_0881A24C;
    }
L_0881A24C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A258u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A258u) goto L_0881A258;
    return;
L_0881A258:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881A2AC;
      }
      goto L_0881A260;
    }
L_0881A260:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0881A2ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x0881A2ACu) goto L_0881A2AC;
    return;
L_0881A2AC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A2B8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A2B8u) goto L_0881A2B8;
    return;
L_0881A2B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881A36C;
      }
      goto L_0881A2C0;
    }
L_0881A2C0:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0881A30Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x0881A30Cu) goto L_0881A30C;
    return;
L_0881A30C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A36C;
      }
      goto L_0881A314;
    }
L_0881A314:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A320u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A320u) goto L_0881A320;
    return;
L_0881A320:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881A340;
      }
      goto L_0881A328;
    }
L_0881A328:
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0881A340u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x0881A340u) goto L_0881A340;
    return;
L_0881A340:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A34Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A34Cu) goto L_0881A34C;
    return;
L_0881A34C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881A36C;
      }
      goto L_0881A354;
    }
L_0881A354:
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0881A36Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x0881A36Cu) goto L_0881A36C;
    return;
L_0881A36C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A378u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A378u) goto L_0881A378;
    return;
L_0881A378:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881A404;
      }
      goto L_0881A380;
    }
L_0881A380:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2352));
    ctx.gpr[31] = (0x0881A38Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881A38Cu) goto L_0881A38C;
    return;
L_0881A38C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881A398u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x0881A398u) goto L_0881A398;
    return;
L_0881A398:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2368));
    ctx.gpr[31] = (0x0881A3A4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881A3A4u) goto L_0881A3A4;
    return;
L_0881A3A4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881A3B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x0881A3B0u) goto L_0881A3B0;
    return;
L_0881A3B0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2384));
    ctx.gpr[31] = (0x0881A3BCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881A3BCu) goto L_0881A3BC;
    return;
L_0881A3BC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881A3C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x0881A3C8u) goto L_0881A3C8;
    return;
L_0881A3C8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2400));
    ctx.gpr[31] = (0x0881A3D4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881A3D4u) goto L_0881A3D4;
    return;
L_0881A3D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(221)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881A404u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 184u, 0x088250B4u>(ctx, &aot_mem) && ctx.pc == 0x0881A404u) goto L_0881A404;
    return;
L_0881A404:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A410u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A410u) goto L_0881A410;
    return;
L_0881A410:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881A49C;
      }
      goto L_0881A418;
    }
L_0881A418:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2416));
    ctx.gpr[31] = (0x0881A424u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2128));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881A424u) goto L_0881A424;
    return;
L_0881A424:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881A430u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x0881A430u) goto L_0881A430;
    return;
L_0881A430:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2432));
    ctx.gpr[31] = (0x0881A43Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881A43Cu) goto L_0881A43C;
    return;
L_0881A43C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881A448u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x0881A448u) goto L_0881A448;
    return;
L_0881A448:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2448));
    ctx.gpr[31] = (0x0881A454u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881A454u) goto L_0881A454;
    return;
L_0881A454:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881A460u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x0881A460u) goto L_0881A460;
    return;
L_0881A460:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2464));
    ctx.gpr[31] = (0x0881A46Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881A46Cu) goto L_0881A46C;
    return;
L_0881A46C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(221)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    goto L_0881A494;
L_0881A494:
    ctx.gpr[31] = (0x0881A49Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 184u, 0x088250B4u>(ctx, &aot_mem) && ctx.pc == 0x0881A49Cu) goto L_0881A49C;
    return;
L_0881A49C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881AA28;
      }
      goto L_0881A4A4;
    }
L_0881A4A4:
    ctx.gpr[31] = (0x0881A4ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0881A4ACu) goto L_0881A4AC;
    return;
L_0881A4AC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2144));
    ctx.gpr[31] = (0x0881A4B8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881A4B8u) goto L_0881A4B8;
    return;
L_0881A4B8:
    ctx.gpr[31] = (0x0881A4C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x0881A4C0u) goto L_0881A4C0;
    return;
L_0881A4C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0881A4CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x0881A4CCu) goto L_0881A4CC;
    return;
L_0881A4CC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2180)));
        goto L_0881A500;
    }
    goto L_0881A4F0;
L_0881A4F0:
    ctx.gpr[31] = (0x0881A4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 386u, 0x08AF9AE0u>(ctx, &aot_mem) && ctx.pc == 0x0881A4F8u) goto L_0881A4F8;
    return;
L_0881A4F8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2180)));
    goto L_0881A500;
L_0881A500:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (16608u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2144)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2148)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2152)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[18];
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0881A554u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A554u) goto L_0881A554;
    return;
L_0881A554:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
      if (branch_taken) {
          goto L_0881A5D8;
      }
      goto L_0881A55C;
    }
L_0881A55C:
    ctx.gpr[31] = (0x0881A564u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A564u) goto L_0881A564;
    return;
L_0881A564:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (16608u << 16u);
      if (branch_taken) {
          goto L_0881A5D8;
      }
      goto L_0881A56C;
    }
L_0881A56C:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (48844u << 16u);
    ctx.gpr[4] = (49248u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (16480u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16307u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[8] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(27928)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(22));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(2144));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 145u);
    ctx.gpr[9] = (0u | 145u);
    ctx.gpr[10] = (0u | 145u);
    ctx.gpr[31] = (0x0881A5D0u);
    ctx.gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 152u, 0x089293E4u>(ctx, &aot_mem) && ctx.pc == 0x0881A5D0u) goto L_0881A5D0;
    return;
L_0881A5D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16657u << 16u);
      if (branch_taken) {
          goto L_0881A6D8;
      }
      goto L_0881A5D8;
    }
L_0881A5D8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A5E4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A5E4u) goto L_0881A5E4;
    return;
L_0881A5E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (16608u << 16u);
      if (branch_taken) {
          goto L_0881A658;
      }
      goto L_0881A5EC;
    }
L_0881A5EC:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16670u << 16u);
    ctx.gpr[4] = (49248u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (16480u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16307u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] | 26214u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[8] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(27928)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(22));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(2144));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 145u);
    ctx.gpr[9] = (0u | 145u);
    ctx.gpr[10] = (0u | 145u);
    ctx.gpr[31] = (0x0881A650u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 152u, 0x089293E4u>(ctx, &aot_mem) && ctx.pc == 0x0881A650u) goto L_0881A650;
    return;
L_0881A650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16657u << 16u);
      if (branch_taken) {
          goto L_0881A6D8;
      }
      goto L_0881A658;
    }
L_0881A658:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A664u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A664u) goto L_0881A664;
    return;
L_0881A664:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (16657u << 16u);
      if (branch_taken) {
          goto L_0881A6D8;
      }
      goto L_0881A66C;
    }
L_0881A66C:
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (48844u << 16u);
    ctx.gpr[4] = (49248u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (16480u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16307u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[8] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(27928)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(22));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(2144));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 145u);
    ctx.gpr[9] = (0u | 145u);
    ctx.gpr[10] = (0u | 145u);
    ctx.gpr[31] = (0x0881A6D4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 152u, 0x089293E4u>(ctx, &aot_mem) && ctx.pc == 0x0881A6D4u) goto L_0881A6D4;
    return;
L_0881A6D4:
    ctx.gpr[4] = (16657u << 16u);
    goto L_0881A6D8;
L_0881A6D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2180)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2196)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2144)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2148)));
    ctx.fpr[17] = std::bit_cast<float>(0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(588)));
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[17]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[19];
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881A8A8;
      }
      goto L_0881A720;
    }
L_0881A720:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A72Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A72Cu) goto L_0881A72C;
    return;
L_0881A72C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
      if (branch_taken) {
          goto L_0881A7AC;
      }
      goto L_0881A734;
    }
L_0881A734:
    ctx.gpr[31] = (0x0881A73Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A73Cu) goto L_0881A73C;
    return;
L_0881A73C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881A7AC;
      }
      goto L_0881A744;
    }
L_0881A744:
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (49088u << 16u);
    ctx.gpr[4] = (16320u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[9] = (48896u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27928)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(25));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(2144));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 58u);
    ctx.gpr[9] = (0u | 58u);
    ctx.gpr[10] = (0u | 58u);
    ctx.gpr[31] = (0x0881A7A4u);
    ctx.gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 152u, 0x089293E4u>(ctx, &aot_mem) && ctx.pc == 0x0881A7A4u) goto L_0881A7A4;
    return;
L_0881A7A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881AA28;
      }
      goto L_0881A7AC;
    }
L_0881A7AC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A7B8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A7B8u) goto L_0881A7B8;
    return;
L_0881A7B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881A82C;
      }
      goto L_0881A7C0;
    }
L_0881A7C0:
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16670u << 16u);
    ctx.gpr[4] = (16320u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (49088u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[8] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(27928)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(25));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(2144));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 58u);
    ctx.gpr[9] = (0u | 58u);
    ctx.gpr[10] = (0u | 58u);
    ctx.gpr[31] = (0x0881A824u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 152u, 0x089293E4u>(ctx, &aot_mem) && ctx.pc == 0x0881A824u) goto L_0881A824;
    return;
L_0881A824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881AA28;
      }
      goto L_0881A82C;
    }
L_0881A82C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A838u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A838u) goto L_0881A838;
    return;
L_0881A838:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881AA28;
      }
      goto L_0881A840;
    }
L_0881A840:
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (49088u << 16u);
    ctx.gpr[4] = (16320u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[9] = (48896u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27928)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(25));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(2144));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 58u);
    ctx.gpr[9] = (0u | 58u);
    ctx.gpr[10] = (0u | 58u);
    ctx.gpr[31] = (0x0881A8A0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 152u, 0x089293E4u>(ctx, &aot_mem) && ctx.pc == 0x0881A8A0u) goto L_0881A8A0;
    return;
L_0881A8A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881AA28;
      }
      goto L_0881A8A8;
    }
L_0881A8A8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A8B4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A8B4u) goto L_0881A8B4;
    return;
L_0881A8B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
      if (branch_taken) {
          goto L_0881A934;
      }
      goto L_0881A8BC;
    }
L_0881A8BC:
    ctx.gpr[31] = (0x0881A8C4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A8C4u) goto L_0881A8C4;
    return;
L_0881A8C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881A934;
      }
      goto L_0881A8CC;
    }
L_0881A8CC:
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (49088u << 16u);
    ctx.gpr[4] = (16320u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[9] = (48896u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27928)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(25));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(2144));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 56u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881A92Cu);
    ctx.gpr[11] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 152u, 0x089293E4u>(ctx, &aot_mem) && ctx.pc == 0x0881A92Cu) goto L_0881A92C;
    return;
L_0881A92C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881AA28;
      }
      goto L_0881A934;
    }
L_0881A934:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A940u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A940u) goto L_0881A940;
    return;
L_0881A940:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881A9B4;
      }
      goto L_0881A948;
    }
L_0881A948:
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16670u << 16u);
    ctx.gpr[4] = (16320u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (49088u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[8] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(27928)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(25));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(2144));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 56u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881A9ACu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 152u, 0x089293E4u>(ctx, &aot_mem) && ctx.pc == 0x0881A9ACu) goto L_0881A9AC;
    return;
L_0881A9AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881AA28;
      }
      goto L_0881A9B4;
    }
L_0881A9B4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881A9C0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881A9C0u) goto L_0881A9C0;
    return;
L_0881A9C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881AA28;
      }
      goto L_0881A9C8;
    }
L_0881A9C8:
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (49088u << 16u);
    ctx.gpr[4] = (16320u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (16512u << 16u);
    ctx.gpr[9] = (48896u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27928)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(25));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(2144));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 56u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881AA28u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 152u, 0x089293E4u>(ctx, &aot_mem) && ctx.pc == 0x0881AA28u) goto L_0881AA28;
    return;
L_0881AA28:
    ctx.gpr[31] = (0x0881AA30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0881AA30u) goto L_0881AA30;
    return;
L_0881AA30:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0881ACD4;
      }
      goto L_0881AA38;
    }
L_0881AA38:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881ACD4;
      }
      goto L_0881AA40;
    }
L_0881AA40:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881AA4Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881AA4Cu) goto L_0881AA4C;
    return;
L_0881AA4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
      if (branch_taken) {
          goto L_0881AA64;
      }
      goto L_0881AA54;
    }
L_0881AA54:
    ctx.gpr[31] = (0x0881AA5Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881AA5Cu) goto L_0881AA5C;
    return;
L_0881AA5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881AB90;
      }
      goto L_0881AA64;
    }
L_0881AA64:
    ctx.gpr[31] = (0x0881AA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0881AA6Cu) goto L_0881AA6C;
    return;
L_0881AA6C:
    ctx.gpr[31] = (0x0881AA74u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 429u, 0x08AF9E60u>(ctx, &aot_mem) && ctx.pc == 0x0881AA74u) goto L_0881AA74;
    return;
L_0881AA74:
    ctx.gpr[31] = (0x0881AA7Cu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0881AA7Cu) goto L_0881AA7C;
    return;
L_0881AA7C:
    ctx.gpr[31] = (0x0881AA84u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 429u, 0x08AF9E60u>(ctx, &aot_mem) && ctx.pc == 0x0881AA84u) goto L_0881AA84;
    return;
L_0881AA84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0881AA90u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0881AA90u) goto L_0881AA90;
    return;
L_0881AA90:
    ctx.gpr[31] = (0x0881AA98u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 429u, 0x08AF9E60u>(ctx, &aot_mem) && ctx.pc == 0x0881AA98u) goto L_0881AA98;
    return;
L_0881AA98:
    ctx.gpr[31] = (0x0881AAA0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0881AAA0u) goto L_0881AAA0;
    return;
L_0881AAA0:
    ctx.gpr[31] = (0x0881AAA8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 429u, 0x08AF9E60u>(ctx, &aot_mem) && ctx.pc == 0x0881AAA8u) goto L_0881AAA8;
    return;
L_0881AAA8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (15951u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 23592u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881AB34;
      }
      goto L_0881AAD0;
    }
L_0881AAD0:
    ctx.gpr[31] = (0x0881AAD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0881AAD8u) goto L_0881AAD8;
    return;
L_0881AAD8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2528));
    ctx.gpr[31] = (0x0881AAE4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881AAE4u) goto L_0881AAE4;
    return;
L_0881AAE4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881AAF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x0881AAF0u) goto L_0881AAF0;
    return;
L_0881AAF0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2544));
    ctx.gpr[31] = (0x0881AAFCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881AAFCu) goto L_0881AAFC;
    return;
L_0881AAFC:
    ctx.gpr[9] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[9] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x0881AB2Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 333u, 0x08AE5D44u>(ctx, &aot_mem) && ctx.pc == 0x0881AB2Cu) goto L_0881AB2C;
    return;
L_0881AB2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881AB90;
      }
      goto L_0881AB34;
    }
L_0881AB34:
    ctx.gpr[31] = (0x0881AB3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0881AB3Cu) goto L_0881AB3C;
    return;
L_0881AB3C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2560));
    ctx.gpr[31] = (0x0881AB48u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881AB48u) goto L_0881AB48;
    return;
L_0881AB48:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881AB54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x0881AB54u) goto L_0881AB54;
    return;
L_0881AB54:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2576));
    ctx.gpr[31] = (0x0881AB60u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881AB60u) goto L_0881AB60;
    return;
L_0881AB60:
    ctx.gpr[9] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[9] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0881AB90u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 333u, 0x08AE5D44u>(ctx, &aot_mem) && ctx.pc == 0x0881AB90u) goto L_0881AB90;
    return;
L_0881AB90:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(2480));
    ctx.gpr[31] = (0x0881AB9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0881AB9Cu) goto L_0881AB9C;
    return;
L_0881AB9C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(2496));
    ctx.gpr[31] = (0x0881ABACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x0881ABACu) goto L_0881ABAC;
    return;
L_0881ABAC:
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0881ABC0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 269u, 0x0880A900u>(ctx, &aot_mem) && ctx.pc == 0x0881ABC0u) goto L_0881ABC0;
    return;
L_0881ABC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881ABD0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x0881ABD0u) goto L_0881ABD0;
    return;
L_0881ABD0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2512));
    ctx.gpr[31] = (0x0881ABDCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881ABDCu) goto L_0881ABDC;
    return;
L_0881ABDC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881ABE8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881ABE8u) goto L_0881ABE8;
    return;
L_0881ABE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
      if (branch_taken) {
          goto L_0881AC00;
      }
      goto L_0881ABF0;
    }
L_0881ABF0:
    ctx.gpr[31] = (0x0881ABF8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881ABF8u) goto L_0881ABF8;
    return;
L_0881ABF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881ACD4;
      }
      goto L_0881AC00;
    }
L_0881AC00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881AC78;
      }
      goto L_0881AC18;
    }
L_0881AC18:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2592));
    ctx.gpr[31] = (0x0881AC24u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2512));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881AC24u) goto L_0881AC24;
    return;
L_0881AC24:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2608));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881AC40u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x0881AC40u) goto L_0881AC40;
    return;
L_0881AC40:
    ctx.gpr[9] = (16672u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0881AC70u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 333u, 0x08AE5D44u>(ctx, &aot_mem) && ctx.pc == 0x0881AC70u) goto L_0881AC70;
    return;
L_0881AC70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881ACD4;
      }
      goto L_0881AC78;
    }
L_0881AC78:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2624));
    ctx.gpr[31] = (0x0881AC84u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2512));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881AC84u) goto L_0881AC84;
    return;
L_0881AC84:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2640));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881ACA0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x0881ACA0u) goto L_0881ACA0;
    return;
L_0881ACA0:
    ctx.gpr[9] = (16153u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (ctx.gpr[9] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (16608u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0881ACD4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 333u, 0x08AE5D44u>(ctx, &aot_mem) && ctx.pc == 0x0881ACD4u) goto L_0881ACD4;
    return;
L_0881ACD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B3A4;
      }
      goto L_0881ACDC;
    }
L_0881ACDC:
    ctx.gpr[31] = (0x0881ACE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x0881ACE4u) goto L_0881ACE4;
    return;
L_0881ACE4:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881B3A4;
      }
      goto L_0881ACF0;
    }
L_0881ACF0:
    ctx.gpr[31] = (0x0881ACF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x0881ACF8u) goto L_0881ACF8;
    return;
L_0881ACF8:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881B3A4;
      }
      goto L_0881AD04;
    }
L_0881AD04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881B3A4;
      }
      goto L_0881AD10;
    }
L_0881AD10:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881B3A4;
      }
      goto L_0881AD18;
    }
L_0881AD18:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(2704));
    ctx.gpr[31] = (0x0881AD24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881AD24u) goto L_0881AD24;
    return;
L_0881AD24:
    ctx.gpr[31] = (0x0881AD2Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 309u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x0881AD2Cu) goto L_0881AD2C;
    return;
L_0881AD2C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881AD38u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 443u, 0x08AFA020u>(ctx, &aot_mem) && ctx.pc == 0x0881AD38u) goto L_0881AD38;
    return;
L_0881AD38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881AD44u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881AD44u) goto L_0881AD44;
    return;
L_0881AD44:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(2656));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(2688));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881AD5Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 261u, 0x0880A85Cu>(ctx, &aot_mem) && ctx.pc == 0x0881AD5Cu) goto L_0881AD5C;
    return;
L_0881AD5C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881AD68u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881AD68u) goto L_0881AD68;
    return;
L_0881AD68:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(2672));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881AD78u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881AD78u) goto L_0881AD78;
    return;
L_0881AD78:
    ctx.gpr[31] = (0x0881AD80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x0881AD80u) goto L_0881AD80;
    return;
L_0881AD80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2704)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881AD9Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 269u, 0x0880A900u>(ctx, &aot_mem) && ctx.pc == 0x0881AD9Cu) goto L_0881AD9C;
    return;
L_0881AD9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881ADA8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x0881ADA8u) goto L_0881ADA8;
    return;
L_0881ADA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881ADD8;
      }
      goto L_0881ADC0;
    }
L_0881ADC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(588)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881B32C;
      }
      goto L_0881ADD8;
    }
L_0881ADD8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(2736));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(2720));
    ctx.gpr[31] = (0x0881ADE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0881ADE8u) goto L_0881ADE8;
    return;
L_0881ADE8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881ADF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0881ADF8u) goto L_0881ADF8;
    return;
L_0881ADF8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881AE08u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x0881AE08u) goto L_0881AE08;
    return;
L_0881AE08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881AE14u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881AE14u) goto L_0881AE14;
    return;
L_0881AE14:
    ctx.gpr[31] = (0x0881AE1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 287u, 0x0880AA3Cu>(ctx, &aot_mem) && ctx.pc == 0x0881AE1Cu) goto L_0881AE1C;
    return;
L_0881AE1C:
    ctx.gpr[31] = (0x0881AE24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x0881AE24u) goto L_0881AE24;
    return;
L_0881AE24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881AE30u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 263u, 0x0880A884u>(ctx, &aot_mem) && ctx.pc == 0x0881AE30u) goto L_0881AE30;
    return;
L_0881AE30:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881B2AC;
      }
      goto L_0881AE44;
    }
L_0881AE44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(588)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881B084;
      }
      goto L_0881AE5C;
    }
L_0881AE5C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881AE68u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881AE68u) goto L_0881AE68;
    return;
L_0881AE68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_0881AED4;
      }
      goto L_0881AE70;
    }
L_0881AE70:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[2] = (16281u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2672));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (0u | 120u);
    ctx.gpr[6] = (0u | 120u);
    ctx.gpr[7] = (0u | 120u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0881AED4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x0881AED4u) goto L_0881AED4;
    return;
L_0881AED4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881AEE0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881AEE0u) goto L_0881AEE0;
    return;
L_0881AEE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_0881AF4C;
      }
      goto L_0881AEE8;
    }
L_0881AEE8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[2] = (16281u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2688));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (0u | 120u);
    ctx.gpr[6] = (0u | 120u);
    ctx.gpr[7] = (0u | 120u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0881AF4Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x0881AF4Cu) goto L_0881AF4C;
    return;
L_0881AF4C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881AF58u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881AF58u) goto L_0881AF58;
    return;
L_0881AF58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881AFE4;
      }
      goto L_0881AF60;
    }
L_0881AF60:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2752));
    ctx.gpr[31] = (0x0881AF6Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2672));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881AF6Cu) goto L_0881AF6C;
    return;
L_0881AF6C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881AF78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x0881AF78u) goto L_0881AF78;
    return;
L_0881AF78:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2768));
    ctx.gpr[31] = (0x0881AF84u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881AF84u) goto L_0881AF84;
    return;
L_0881AF84:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881AF90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x0881AF90u) goto L_0881AF90;
    return;
L_0881AF90:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2784));
    ctx.gpr[31] = (0x0881AF9Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881AF9Cu) goto L_0881AF9C;
    return;
L_0881AF9C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881AFA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x0881AFA8u) goto L_0881AFA8;
    return;
L_0881AFA8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2800));
    ctx.gpr[31] = (0x0881AFB4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881AFB4u) goto L_0881AFB4;
    return;
L_0881AFB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(221)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881AFE4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 184u, 0x088250B4u>(ctx, &aot_mem) && ctx.pc == 0x0881AFE4u) goto L_0881AFE4;
    return;
L_0881AFE4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881AFF0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881AFF0u) goto L_0881AFF0;
    return;
L_0881AFF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881B324;
      }
      goto L_0881AFF8;
    }
L_0881AFF8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2816));
    ctx.gpr[31] = (0x0881B004u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2688));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B004u) goto L_0881B004;
    return;
L_0881B004:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881B010u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B010u) goto L_0881B010;
    return;
L_0881B010:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2832));
    ctx.gpr[31] = (0x0881B01Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B01Cu) goto L_0881B01C;
    return;
L_0881B01C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881B028u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B028u) goto L_0881B028;
    return;
L_0881B028:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2848));
    ctx.gpr[31] = (0x0881B034u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B034u) goto L_0881B034;
    return;
L_0881B034:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881B040u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x0881B040u) goto L_0881B040;
    return;
L_0881B040:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2864));
    ctx.gpr[31] = (0x0881B04Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B04Cu) goto L_0881B04C;
    return;
L_0881B04C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(221)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881B07Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 184u, 0x088250B4u>(ctx, &aot_mem) && ctx.pc == 0x0881B07Cu) goto L_0881B07C;
    return;
L_0881B07C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B324;
      }
      goto L_0881B084;
    }
L_0881B084:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881B090u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881B090u) goto L_0881B090;
    return;
L_0881B090:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_0881B0FC;
      }
      goto L_0881B098;
    }
L_0881B098:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[2] = (16281u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2672));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (0u | 120u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0881B0FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x0881B0FCu) goto L_0881B0FC;
    return;
L_0881B0FC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881B108u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881B108u) goto L_0881B108;
    return;
L_0881B108:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_0881B174;
      }
      goto L_0881B110;
    }
L_0881B110:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[2] = (16281u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(2688));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (0u | 120u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0881B174u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x0881B174u) goto L_0881B174;
    return;
L_0881B174:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881B180u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881B180u) goto L_0881B180;
    return;
L_0881B180:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881B20C;
      }
      goto L_0881B188;
    }
L_0881B188:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2880));
    ctx.gpr[31] = (0x0881B194u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2672));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B194u) goto L_0881B194;
    return;
L_0881B194:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881B1A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B1A0u) goto L_0881B1A0;
    return;
L_0881B1A0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2896));
    ctx.gpr[31] = (0x0881B1ACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B1ACu) goto L_0881B1AC;
    return;
L_0881B1AC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881B1B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B1B8u) goto L_0881B1B8;
    return;
L_0881B1B8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2912));
    ctx.gpr[31] = (0x0881B1C4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B1C4u) goto L_0881B1C4;
    return;
L_0881B1C4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881B1D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x0881B1D0u) goto L_0881B1D0;
    return;
L_0881B1D0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2928));
    ctx.gpr[31] = (0x0881B1DCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B1DCu) goto L_0881B1DC;
    return;
L_0881B1DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(221)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881B20Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 184u, 0x088250B4u>(ctx, &aot_mem) && ctx.pc == 0x0881B20Cu) goto L_0881B20C;
    return;
L_0881B20C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881B218u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881B218u) goto L_0881B218;
    return;
L_0881B218:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881B324;
      }
      goto L_0881B220;
    }
L_0881B220:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2944));
    ctx.gpr[31] = (0x0881B22Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2688));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B22Cu) goto L_0881B22C;
    return;
L_0881B22C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881B238u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B238u) goto L_0881B238;
    return;
L_0881B238:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2960));
    ctx.gpr[31] = (0x0881B244u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B244u) goto L_0881B244;
    return;
L_0881B244:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881B250u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B250u) goto L_0881B250;
    return;
L_0881B250:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2976));
    ctx.gpr[31] = (0x0881B25Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B25Cu) goto L_0881B25C;
    return;
L_0881B25C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881B268u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x0881B268u) goto L_0881B268;
    return;
L_0881B268:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2992));
    ctx.gpr[31] = (0x0881B274u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 281u, 0x0880A9E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B274u) goto L_0881B274;
    return;
L_0881B274:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(221)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0881B2A4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 184u, 0x088250B4u>(ctx, &aot_mem) && ctx.pc == 0x0881B2A4u) goto L_0881B2A4;
    return;
L_0881B2A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B324;
      }
      goto L_0881B2AC;
    }
L_0881B2AC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881B2B8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881B2B8u) goto L_0881B2B8;
    return;
L_0881B2B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881B2E8;
      }
      goto L_0881B2C0;
    }
L_0881B2C0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2672));
    ctx.gpr[31] = (0x0881B2E8u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B2E8u) goto L_0881B2E8;
    return;
L_0881B2E8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881B2F4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881B2F4u) goto L_0881B2F4;
    return;
L_0881B2F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881B324;
      }
      goto L_0881B2FC;
    }
L_0881B2FC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2688));
    ctx.gpr[31] = (0x0881B324u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B324u) goto L_0881B324;
    return;
L_0881B324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B3A4;
      }
      goto L_0881B32C;
    }
L_0881B32C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881B338u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881B338u) goto L_0881B338;
    return;
L_0881B338:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881B368;
      }
      goto L_0881B340;
    }
L_0881B340:
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2672));
    ctx.gpr[31] = (0x0881B368u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B368u) goto L_0881B368;
    return;
L_0881B368:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x0881B374u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 205u, 0x08A29214u>(ctx, &aot_mem) && ctx.pc == 0x0881B374u) goto L_0881B374;
    return;
L_0881B374:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881B3A4;
      }
      goto L_0881B37C;
    }
L_0881B37C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2688));
    ctx.gpr[31] = (0x0881B3A4u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B3A4u) goto L_0881B3A4;
    return;
L_0881B3A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B3D0;
      }
      goto L_0881B3BC;
    }
L_0881B3BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881B3C8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 360u, 0x0892AE44u>(ctx, &aot_mem) && ctx.pc == 0x0881B3C8u) goto L_0881B3C8;
    return;
L_0881B3C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B404;
      }
      goto L_0881B3D0;
    }
L_0881B3D0:
    ctx.gpr[31] = (0x0881B3D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B3D8u) goto L_0881B3D8;
    return;
L_0881B3D8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-955));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881B3F8;
      }
      goto L_0881B3E4;
    }
L_0881B3E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881B3F0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 360u, 0x0892AE44u>(ctx, &aot_mem) && ctx.pc == 0x0881B3F0u) goto L_0881B3F0;
    return;
L_0881B3F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B404;
      }
      goto L_0881B3F8;
    }
L_0881B3F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881B404u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 360u, 0x0892AE44u>(ctx, &aot_mem) && ctx.pc == 0x0881B404u) goto L_0881B404;
    return;
L_0881B404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15846u << 16u);
      if (branch_taken) {
          goto L_0881B600;
      }
      goto L_0881B41C;
    }
L_0881B41C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[4] | 26215u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881B600;
      }
      goto L_0881B438;
    }
L_0881B438:
    ctx.gpr[31] = (0x0881B440u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B440u) goto L_0881B440;
    return;
L_0881B440:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881B600;
      }
      goto L_0881B45C;
    }
L_0881B45C:
    ctx.gpr[4] = (50298u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3016), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881B474u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3020), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B474u) goto L_0881B474;
    return;
L_0881B474:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0881B480u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B480u) goto L_0881B480;
    return;
L_0881B480:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0881B48Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B48Cu) goto L_0881B48C;
    return;
L_0881B48C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881B4A0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3016));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x0881B4A0u) goto L_0881B4A0;
    return;
L_0881B4A0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0881B4ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B4ACu) goto L_0881B4AC;
    return;
L_0881B4AC:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0881B4B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B4B8u) goto L_0881B4B8;
    return;
L_0881B4B8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0881B4C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B4C4u) goto L_0881B4C4;
    return;
L_0881B4C4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3020));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881B4DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x0881B4DCu) goto L_0881B4DC;
    return;
L_0881B4DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881B4EC;
      }
      goto L_0881B4E4;
    }
L_0881B4E4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3020), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0881B4EC;
L_0881B4EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3020)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881B504;
      }
      goto L_0881B500;
    }
L_0881B500:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(3020)));
    goto L_0881B504;
L_0881B504:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0881B514u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3008), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x0881B514u) goto L_0881B514;
    return;
L_0881B514:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(3012));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3008));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[31] = (0x0881B53Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3012), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x0881B53Cu) goto L_0881B53C;
    return;
L_0881B53C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (15846u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26215u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (15836u << 16u);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[4] | 10485u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[31] = (0x0881B57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 388u, 0x08AF9B38u>(ctx, &aot_mem) && ctx.pc == 0x0881B57Cu) goto L_0881B57C;
    return;
L_0881B57C:
    ctx.gpr[5] = (16672u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0881B594u);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B594u) goto L_0881B594;
    return;
L_0881B594:
    ctx.gpr[4] = (0u | 211u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881B5B4;
      }
      goto L_0881B5A0;
    }
L_0881B5A0:
    ctx.gpr[31] = (0x0881B5A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B5A8u) goto L_0881B5A8;
    return;
L_0881B5A8:
    ctx.gpr[4] = (0u | 212u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881B5BC;
      }
      goto L_0881B5B4;
    }
L_0881B5B4:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0881B5BC;
L_0881B5BC:
    ctx.gpr[31] = (0x0881B5C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B5C4u) goto L_0881B5C4;
    return;
L_0881B5C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881B600;
      }
      goto L_0881B5DC;
    }
L_0881B5DC:
    ctx.gpr[31] = (0x0881B5E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B5E4u) goto L_0881B5E4;
    return;
L_0881B5E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881B600u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 127u, 0x088A4FDCu>(ctx, &aot_mem) && ctx.pc == 0x0881B600u) goto L_0881B600;
    return;
L_0881B600:
    ctx.gpr[31] = (0x0881B608u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 341u, 0x08AF9800u>(ctx, &aot_mem) && ctx.pc == 0x0881B608u) goto L_0881B608;
    return;
L_0881B608:
    ctx.gpr[31] = (0x0881B610u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 309u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x0881B610u) goto L_0881B610;
    return;
L_0881B610:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881B61Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B61Cu) goto L_0881B61C;
    return;
L_0881B61C:
    ctx.gpr[4] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881B69C;
      }
      goto L_0881B628;
    }
L_0881B628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B69C;
      }
      goto L_0881B634;
    }
L_0881B634:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(3024));
    ctx.gpr[31] = (0x0881B640u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 341u, 0x08AF9800u>(ctx, &aot_mem) && ctx.pc == 0x0881B640u) goto L_0881B640;
    return;
L_0881B640:
    ctx.gpr[31] = (0x0881B648u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1236)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881B648u) goto L_0881B648;
    return;
L_0881B648:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881B658u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881B658u) goto L_0881B658;
    return;
L_0881B658:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(3104));
    ctx.gpr[31] = (0x0881B664u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881B664u) goto L_0881B664;
    return;
L_0881B664:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881B670u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881B670u) goto L_0881B670;
    return;
L_0881B670:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1708)));
    ctx.gpr[31] = (0x0881B67Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 490u, 0x08A05FD4u>(ctx, &aot_mem) && ctx.pc == 0x0881B67Cu) goto L_0881B67C;
    return;
L_0881B67C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881B688u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881B688u) goto L_0881B688;
    return;
L_0881B688:
    ctx.gpr[31] = (0x0881B690u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881B690u) goto L_0881B690;
    return;
L_0881B690:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881B69Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 299u, 0x0880AB60u>(ctx, &aot_mem) && ctx.pc == 0x0881B69Cu) goto L_0881B69C;
    return;
L_0881B69C:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 32u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(211), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1180)));
    ctx.gpr[31] = (0x0881B6C0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881B6C0u) goto L_0881B6C0;
    return;
L_0881B6C0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881B6D0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881B6D0u) goto L_0881B6D0;
    return;
L_0881B6D0:
    ctx.gpr[31] = (0x0881B6D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881B6D8u) goto L_0881B6D8;
    return;
L_0881B6D8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881B6E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881B6E4u) goto L_0881B6E4;
    return;
L_0881B6E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1488)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0881B6F8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 209u, 0x08A29280u>(ctx, &aot_mem) && ctx.pc == 0x0881B6F8u) goto L_0881B6F8;
    return;
L_0881B6F8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881B73C;
      }
      goto L_0881B704;
    }
L_0881B704:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1472)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0881B714u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B714u) goto L_0881B714;
    return;
L_0881B714:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881B734u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0881B734u) goto L_0881B734;
    return;
L_0881B734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B748;
      }
      goto L_0881B73C;
    }
L_0881B73C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1472)));
    ctx.gpr[31] = (0x0881B748u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x0881B748u) goto L_0881B748;
    return;
L_0881B748:
    ctx.gpr[31] = (0x0881B750u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x0881B750u) goto L_0881B750;
    return;
L_0881B750:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881BA08;
      }
      goto L_0881B758;
    }
L_0881B758:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16178)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B970;
      }
      goto L_0881B768;
    }
L_0881B768:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1404)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881B970;
      }
      goto L_0881B784;
    }
L_0881B784:
    ctx.gpr[31] = (0x0881B78Cu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1344));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x0881B78Cu) goto L_0881B78C;
    return;
L_0881B78C:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881B970;
      }
      goto L_0881B798;
    }
L_0881B798:
    ctx.gpr[5] = (49097u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881B7ACu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A06210u>(ctx, &aot_mem) && ctx.pc == 0x0881B7ACu) goto L_0881B7AC;
    return;
L_0881B7AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881B86C;
      }
      goto L_0881B7C4;
    }
L_0881B7C4:
    ctx.gpr[31] = (0x0881B7CCu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1344));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x0881B7CCu) goto L_0881B7CC;
    return;
L_0881B7CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3120));
    ctx.gpr[31] = (0x0881B7D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x0881B7D8u) goto L_0881B7D8;
    return;
L_0881B7D8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(3152));
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(3136));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881B7F8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B7F8u) goto L_0881B7F8;
    return;
L_0881B7F8:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(3168));
    ctx.gpr[31] = (0x0881B810u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B810u) goto L_0881B810;
    return;
L_0881B810:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881B820u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B820u) goto L_0881B820;
    return;
L_0881B820:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881B830u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x0881B830u) goto L_0881B830;
    return;
L_0881B830:
    ctx.gpr[2] = (16076u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0881B864u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0881B864u) goto L_0881B864;
    return;
L_0881B864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BA08;
      }
      goto L_0881B86C;
    }
L_0881B86C:
    ctx.gpr[31] = (0x0881B874u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1344));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x0881B874u) goto L_0881B874;
    return;
L_0881B874:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3184));
    ctx.gpr[31] = (0x0881B880u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x0881B880u) goto L_0881B880;
    return;
L_0881B880:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(3232));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(3200));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(3216));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881B8A8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B8A8u) goto L_0881B8A8;
    return;
L_0881B8A8:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(3248));
    ctx.gpr[31] = (0x0881B8C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B8C0u) goto L_0881B8C0;
    return;
L_0881B8C0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881B8D0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881B8D0u) goto L_0881B8D0;
    return;
L_0881B8D0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881B8E0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x0881B8E0u) goto L_0881B8E0;
    return;
L_0881B8E0:
    ctx.gpr[5] = (15820u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3264));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881B900u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x0881B900u) goto L_0881B900;
    return;
L_0881B900:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0881B910u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x0881B910u) goto L_0881B910;
    return;
L_0881B910:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881B920u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 279u, 0x0880A9A8u>(ctx, &aot_mem) && ctx.pc == 0x0881B920u) goto L_0881B920;
    return;
L_0881B920:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881B938u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 279u, 0x0880A9A8u>(ctx, &aot_mem) && ctx.pc == 0x0881B938u) goto L_0881B938;
    return;
L_0881B938:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x0881B968u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0881B968u) goto L_0881B968;
    return;
L_0881B968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BA08;
      }
      goto L_0881B970;
    }
L_0881B970:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1560)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881B984u);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881B984u) goto L_0881B984;
    return;
L_0881B984:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881B99Cu);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B99Cu) goto L_0881B99C;
    return;
L_0881B99C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-984));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881B9B8;
      }
      goto L_0881B9A8;
    }
L_0881B9A8:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_0881B9B8;
L_0881B9B8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(3292));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3280), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3288), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3288));
    ctx.gpr[31] = (0x0881B9E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x0881B9E4u) goto L_0881B9E4;
    return;
L_0881B9E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3284), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(3284));
    ctx.gpr[31] = (0x0881B9F4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3280));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x0881B9F4u) goto L_0881B9F4;
    return;
L_0881B9F4:
    ctx.gpr[31] = (0x0881B9FCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 378u, 0x08AF9A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0881B9FCu) goto L_0881B9FC;
    return;
L_0881B9FC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881BA08u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A06210u>(ctx, &aot_mem) && ctx.pc == 0x0881BA08u) goto L_0881BA08;
    return;
L_0881BA08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BA68;
      }
      goto L_0881BA20;
    }
L_0881BA20:
    ctx.gpr[31] = (0x0881BA28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881BA28u) goto L_0881BA28;
    return;
L_0881BA28:
    ctx.gpr[4] = (16275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881BA40u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881BA40u) goto L_0881BA40;
    return;
L_0881BA40:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0881BA4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881BA4Cu) goto L_0881BA4C;
    return;
L_0881BA4C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881BA60u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 514u, 0x08A06620u>(ctx, &aot_mem) && ctx.pc == 0x0881BA60u) goto L_0881BA60;
    return;
L_0881BA60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BA7C;
      }
      goto L_0881BA68;
    }
L_0881BA68:
    ctx.gpr[31] = (0x0881BA70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881BA70u) goto L_0881BA70;
    return;
L_0881BA70:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881BA7Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065F0u>(ctx, &aot_mem) && ctx.pc == 0x0881BA7Cu) goto L_0881BA7C;
    return;
L_0881BA7C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881BA90u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881BA90u) goto L_0881BA90;
    return;
L_0881BA90:
    ctx.gpr[31] = (0x0881BA98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881BA98u) goto L_0881BA98;
    return;
L_0881BA98:
    ctx.gpr[31] = (0x0881BAA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1192)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881BAA0u) goto L_0881BAA0;
    return;
L_0881BAA0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881BAB0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881BAB0u) goto L_0881BAB0;
    return;
L_0881BAB0:
    ctx.gpr[31] = (0x0881BAB8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881BAB8u) goto L_0881BAB8;
    return;
L_0881BAB8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881BAC4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881BAC4u) goto L_0881BAC4;
    return;
L_0881BAC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1480)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x0881BADCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 209u, 0x08A29280u>(ctx, &aot_mem) && ctx.pc == 0x0881BADCu) goto L_0881BADC;
    return;
L_0881BADC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0881BB30;
      }
      goto L_0881BAE4;
    }
L_0881BAE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1464)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x0881BAF8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x0881BAF8u) goto L_0881BAF8;
    return;
L_0881BAF8:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881BB28u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0881BB28u) goto L_0881BB28;
    return;
L_0881BB28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BB50;
      }
      goto L_0881BB30;
    }
L_0881BB30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1464)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881BB50u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0881BB50u) goto L_0881BB50;
    return;
L_0881BB50:
    ctx.gpr[31] = (0x0881BB58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x0881BB58u) goto L_0881BB58;
    return;
L_0881BB58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881BE0C;
      }
      goto L_0881BB60;
    }
L_0881BB60:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16178)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BD78;
      }
      goto L_0881BB70;
    }
L_0881BB70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1396)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881BD78;
      }
      goto L_0881BB8C;
    }
L_0881BB8C:
    ctx.gpr[31] = (0x0881BB94u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1280));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x0881BB94u) goto L_0881BB94;
    return;
L_0881BB94:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881BD78;
      }
      goto L_0881BBA0;
    }
L_0881BBA0:
    ctx.gpr[5] = (16329u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881BBB4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A06210u>(ctx, &aot_mem) && ctx.pc == 0x0881BBB4u) goto L_0881BBB4;
    return;
L_0881BBB4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BC74;
      }
      goto L_0881BBCC;
    }
L_0881BBCC:
    ctx.gpr[31] = (0x0881BBD4u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1280));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x0881BBD4u) goto L_0881BBD4;
    return;
L_0881BBD4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3296));
    ctx.gpr[31] = (0x0881BBE0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x0881BBE0u) goto L_0881BBE0;
    return;
L_0881BBE0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(3328));
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(3312));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881BC00u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881BC00u) goto L_0881BC00;
    return;
L_0881BC00:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(3344));
    ctx.gpr[31] = (0x0881BC18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x0881BC18u) goto L_0881BC18;
    return;
L_0881BC18:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881BC28u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881BC28u) goto L_0881BC28;
    return;
L_0881BC28:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881BC38u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x0881BC38u) goto L_0881BC38;
    return;
L_0881BC38:
    ctx.gpr[2] = (16076u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0881BC6Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0881BC6Cu) goto L_0881BC6C;
    return;
L_0881BC6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BE0C;
      }
      goto L_0881BC74;
    }
L_0881BC74:
    ctx.gpr[31] = (0x0881BC7Cu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1280));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x0881BC7Cu) goto L_0881BC7C;
    return;
L_0881BC7C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3360));
    ctx.gpr[31] = (0x0881BC88u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x0881BC88u) goto L_0881BC88;
    return;
L_0881BC88:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(3408));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(3376));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(3392));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881BCB0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881BCB0u) goto L_0881BCB0;
    return;
L_0881BCB0:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(3424));
    ctx.gpr[31] = (0x0881BCC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x0881BCC8u) goto L_0881BCC8;
    return;
L_0881BCC8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881BCD8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x0880A8E4u>(ctx, &aot_mem) && ctx.pc == 0x0881BCD8u) goto L_0881BCD8;
    return;
L_0881BCD8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881BCE8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 267u, 0x0880A8CCu>(ctx, &aot_mem) && ctx.pc == 0x0881BCE8u) goto L_0881BCE8;
    return;
L_0881BCE8:
    ctx.gpr[5] = (15820u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3440));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881BD08u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 286u, 0x0880AA28u>(ctx, &aot_mem) && ctx.pc == 0x0881BD08u) goto L_0881BD08;
    return;
L_0881BD08:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0881BD18u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 266u, 0x0880A8B4u>(ctx, &aot_mem) && ctx.pc == 0x0881BD18u) goto L_0881BD18;
    return;
L_0881BD18:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881BD28u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 279u, 0x0880A9A8u>(ctx, &aot_mem) && ctx.pc == 0x0881BD28u) goto L_0881BD28;
    return;
L_0881BD28:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881BD40u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 279u, 0x0880A9A8u>(ctx, &aot_mem) && ctx.pc == 0x0881BD40u) goto L_0881BD40;
    return;
L_0881BD40:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x0881BD70u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x0881BD70u) goto L_0881BD70;
    return;
L_0881BD70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BE0C;
      }
      goto L_0881BD78;
    }
L_0881BD78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1560)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881BD8Cu);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881BD8Cu) goto L_0881BD8C;
    return;
L_0881BD8C:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881BDA4u);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881BDA4u) goto L_0881BDA4;
    return;
L_0881BDA4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-984));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881BDC0;
      }
      goto L_0881BDB0;
    }
L_0881BDB0:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_0881BDC0;
L_0881BDC0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(3468));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3464));
    ctx.gpr[31] = (0x0881BDE8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3468), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x0881BDE8u) goto L_0881BDE8;
    return;
L_0881BDE8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3460), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(3460));
    ctx.gpr[31] = (0x0881BDF8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(3456));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x0881BDF8u) goto L_0881BDF8;
    return;
L_0881BDF8:
    ctx.gpr[31] = (0x0881BE00u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 378u, 0x08AF9A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0881BE00u) goto L_0881BE00;
    return;
L_0881BE00:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881BE0Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A06210u>(ctx, &aot_mem) && ctx.pc == 0x0881BE0Cu) goto L_0881BE0C;
    return;
L_0881BE0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BE6C;
      }
      goto L_0881BE24;
    }
L_0881BE24:
    ctx.gpr[31] = (0x0881BE2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881BE2Cu) goto L_0881BE2C;
    return;
L_0881BE2C:
    ctx.gpr[4] = (16275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881BE44u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881BE44u) goto L_0881BE44;
    return;
L_0881BE44:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0881BE50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881BE50u) goto L_0881BE50;
    return;
L_0881BE50:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881BE64u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 514u, 0x08A06620u>(ctx, &aot_mem) && ctx.pc == 0x0881BE64u) goto L_0881BE64;
    return;
L_0881BE64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BE80;
      }
      goto L_0881BE6C;
    }
L_0881BE6C:
    ctx.gpr[31] = (0x0881BE74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881BE74u) goto L_0881BE74;
    return;
L_0881BE74:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881BE80u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065F0u>(ctx, &aot_mem) && ctx.pc == 0x0881BE80u) goto L_0881BE80;
    return;
L_0881BE80:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881BE90u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 307u, 0x0880ABC8u>(ctx, &aot_mem) && ctx.pc == 0x0881BE90u) goto L_0881BE90;
    return;
L_0881BE90:
    ctx.gpr[31] = (0x0881BE98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0881BE98u) goto L_0881BE98;
    return;
L_0881BE98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 15u, 0x0881C0C8u>(ctx, &aot_mem); return;
      }
      goto L_0881BEA4;
    }
L_0881BEA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1176)));
    ctx.gpr[31] = (0x0881BEB0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 259u, 0x0880A834u>(ctx, &aot_mem) && ctx.pc == 0x0881BEB0u) goto L_0881BEB0;
    return;
L_0881BEB0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881BEC0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 293u, 0x0880AAE4u>(ctx, &aot_mem) && ctx.pc == 0x0881BEC0u) goto L_0881BEC0;
    return;
L_0881BEC0:
    ctx.gpr[31] = (0x0881BEC8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 345u, 0x08AF9834u>(ctx, &aot_mem) && ctx.pc == 0x0881BEC8u) goto L_0881BEC8;
    return;
L_0881BEC8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0881BED4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 290u, 0x0880AA98u>(ctx, &aot_mem) && ctx.pc == 0x0881BED4u) goto L_0881BED4;
    return;
L_0881BED4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1488)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0881BEE8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 209u, 0x08A29280u>(ctx, &aot_mem) && ctx.pc == 0x0881BEE8u) goto L_0881BEE8;
    return;
L_0881BEE8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881BF2C;
      }
      goto L_0881BEF4;
    }
L_0881BEF4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1472)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0881BF04u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x0881BF04u) goto L_0881BF04;
    return;
L_0881BF04:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881BF24u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0881BF24u) goto L_0881BF24;
    return;
L_0881BF24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BF38;
      }
      goto L_0881BF2C;
    }
L_0881BF2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1472)));
    ctx.gpr[31] = (0x0881BF38u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x0881BF38u) goto L_0881BF38;
    return;
L_0881BF38:
    ctx.gpr[31] = (0x0881BF40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x0881BF40u) goto L_0881BF40;
    return;
L_0881BF40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 5u, 0x0881C03Cu>(ctx, &aot_mem); return;
      }
      goto L_0881BF48;
    }
L_0881BF48:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16178)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BFA4;
      }
      goto L_0881BF58;
    }
L_0881BF58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1404)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0881BFA4;
      }
      goto L_0881BF74;
    }
L_0881BF74:
    ctx.gpr[31] = (0x0881BF7Cu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1344));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x0881BF7Cu) goto L_0881BF7C;
    return;
L_0881BF7C:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881BFA4;
      }
      goto L_0881BF88;
    }
L_0881BF88:
    ctx.gpr[5] = (49097u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0881BF9Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A06210u>(ctx, &aot_mem) && ctx.pc == 0x0881BF9Cu) goto L_0881BF9C;
    return;
L_0881BF9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 5u, 0x0881C03Cu>(ctx, &aot_mem); return;
      }
      goto L_0881BFA4;
    }
L_0881BFA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1560)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881BFB8u);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 442u, 0x08AFA018u>(ctx, &aot_mem) && ctx.pc == 0x0881BFB8u) goto L_0881BFB8;
    return;
L_0881BFB8:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881BFD0u);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0881BFD0u) goto L_0881BFD0;
    return;
L_0881BFD0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-984));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881BFEC;
      }
      goto L_0881BFDC;
    }
L_0881BFDC:
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_0881BFEC;
L_0881BFEC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(3484));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(3472), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.pc = 0x0881C000u; return;
}

void recomp_unit_0005(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0005_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_5(Runtime &runtime) {
    runtime.register_generated_unit(5u, 0x08818000u, 16384u, &recomp_unit_0005, &recomp_unit_0005_entry);
    runtime.register_function(0x08818000u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818008u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818020u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881805Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881806Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881807Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818094u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088180B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088180C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088180E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088180F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818108u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818110u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818120u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818138u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818154u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881815Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818164u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818174u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818180u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818194u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818208u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818224u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818240u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818250u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818264u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818270u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818284u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818294u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818318u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818340u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818354u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881837Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818384u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881839Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818404u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881842Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881843Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818444u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818454u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818460u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818468u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818470u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818478u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818480u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818488u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818490u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881849Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818500u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818510u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818518u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818530u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818564u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818570u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881858Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818598u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818614u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818620u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881863Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818674u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818680u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881869Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818708u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818724u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818730u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881874Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818754u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818764u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088187A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088187D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088187E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088187F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818800u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818830u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881883Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881886Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818878u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088188A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088188ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088188C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088188CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818904u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818910u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818948u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818954u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818978u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818980u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881898Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818994u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A10u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818AA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818AB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818AC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818AD0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CD0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E04u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818EC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818ED4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818EECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819018u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819024u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881903Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819070u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819078u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819084u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819108u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819118u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819124u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819138u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819140u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881914Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819204u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881921Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819224u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819230u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819238u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819244u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881924Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819258u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819260u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881926Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819274u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819280u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819288u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819294u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881929Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819304u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819308u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819338u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881936Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819370u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819388u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819390u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881939Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881940Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819418u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819424u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819438u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819454u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819464u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819474u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881947Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819484u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819490u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819498u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881949Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819500u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881950Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819514u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881951Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819524u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819534u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819544u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819554u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819560u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819568u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819580u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819594u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881959Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819614u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881961Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819624u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881962Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881963Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819644u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819650u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881965Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819674u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819680u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819690u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819698u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819704u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819738u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819740u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819748u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881974Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881978Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819830u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881983Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819844u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819928u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819934u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881993Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819ED0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F0Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A000u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A070u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A07Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A084u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A114u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A134u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A13Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A148u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A150u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A244u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A24Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A258u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A260u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A30Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A314u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A320u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A328u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A340u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A34Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A354u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A36Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A378u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A380u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A38Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A398u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A404u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A410u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A418u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A424u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A430u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A43Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A448u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A454u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A460u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A46Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A494u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A49Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A500u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A554u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A55Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A564u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A56Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A650u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A658u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A664u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A66Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A720u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A72Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A734u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A73Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A744u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A824u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A82Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A838u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A840u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A92Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A934u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A940u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A948u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAD0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAFCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB34u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABD0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD04u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD10u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ADA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ADC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ADD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ADE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ADF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AED4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AEE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AEE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B004u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B010u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B01Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B028u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B034u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B040u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B04Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B07Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B084u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B090u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B098u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B108u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B110u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B174u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B180u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B188u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B194u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B20Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B218u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B220u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B22Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B238u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B244u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B250u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B25Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B268u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B274u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B324u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B32Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B338u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B340u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B368u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B374u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B37Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B404u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B41Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B438u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B440u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B45Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B474u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B480u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B48Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B4ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B500u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B504u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B514u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B53Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B57Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B594u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B600u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B608u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B610u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B61Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B628u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B634u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B640u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B648u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B658u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B664u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B670u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B67Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B688u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B690u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B69Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B704u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B714u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B734u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B73Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B748u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B750u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B758u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B768u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B784u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B78Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B798u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B7ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B7C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B7CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B7D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B7F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B810u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B820u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B830u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B864u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B86Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B874u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B880u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B900u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B910u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B920u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B938u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B968u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B970u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B984u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B99Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BADCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BBA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BBB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BBCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BBD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BBE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE0Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BEA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BEB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BEC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BEC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BED4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BEE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BEF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF04u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BFA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BFB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BFD0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BFDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BFECu, &recomp_unit_0005, "recomp_unit_0005");
}
} // namespace psprecomp
