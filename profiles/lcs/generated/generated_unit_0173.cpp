#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0173[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0,
    0, 0, 0, 8, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 0, 14, 0, 15, 0, 0,
    0, 16, 0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 20, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24,
    0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 32, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 38, 0, 39, 0, 0, 0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 44, 45,
    0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0,
    0, 0, 0, 0, 52, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0,
    58, 0, 59, 0, 0, 60, 0, 61, 0, 0, 62, 0, 63, 0, 64, 0, 0, 65, 0, 0, 66, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0,
    0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 77, 0, 0, 0, 78, 79, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83,
    0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 93, 0, 0, 94,
    0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0,
    0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 108, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0,
    0, 0, 112, 113, 114, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0,
    0, 131, 0, 0, 132, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0,
    0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 149, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0,
    0, 0, 154, 0, 155, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 159, 160, 0, 161, 0, 0, 162, 0, 0,
    0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 166, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 170, 171, 0,
    172, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 183, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189,
    0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 199, 0, 200, 0, 0, 0,
    0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0,
    0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 215, 0, 216, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 230, 231, 232, 0, 233, 0,
    234, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 240, 241, 0, 0,
    0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 246, 0, 0, 0, 247, 0, 0, 248, 0, 0,
    0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0,
    0, 255, 0, 256, 0, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 262, 0, 0, 263, 0, 264, 0, 0, 0, 0,
    265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270,
    0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 274, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 278, 0, 0,
    279, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 287, 0, 288, 0, 0,
    0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 295, 0, 0, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 299,
    0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0,
    0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 309, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311,
    0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 316, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 320, 0, 0, 321,
    0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 327, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0,
    0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 344,
    0, 0, 0, 0, 345, 346, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 349, 350, 0, 0, 351, 0, 0, 0, 0, 352, 0,
    353, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 358, 0, 0, 359, 0,
    360, 0, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 368, 0, 0, 369, 0,
    370, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 376, 0, 377, 0, 0, 378, 0, 0, 379, 0, 380, 0, 0, 381, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393,
    0, 394, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399,
    0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411,
    0, 0, 0, 412, 0, 0, 0, 0, 413, 414, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 423, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429,
    0, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 438,
    0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443,
    0, 0, 444, 0, 0, 445, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0,
    0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 454, 455, 0, 0, 0, 0, 0, 0,
    456, 0, 0, 457, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0,
    463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 472,
    0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477,
    0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481,
    0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 489, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 498, 0,
    499, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0,
    0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507,
    0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0,
    0, 512, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526,
    0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 531, 0, 532, 0, 0, 0, 533, 0,
    0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 536, 0, 537, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0,
    544, 0, 0, 0, 0, 545, 0, 546, 0, 0, 547, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    552, 0, 553, 554, 0, 0, 0, 555, 0, 0, 556, 0, 557, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 569,
    0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0,
    0, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580,
    0, 0, 0, 581, 0, 0, 0, 582, 0, 583, 0, 0, 584, 0, 585, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 593,
    0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0,
    0, 601, 0, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0,
    0, 0, 0, 0, 0, 0, 622, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 627,
    0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 0, 632, 0,
    0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0, 0, 636, 0, 637, 0, 0, 638, 0, 639, 0, 0, 640, 0, 641, 0, 0, 642, 0, 0, 643,
    0, 644, 0, 645, 0, 0, 646, 0, 647, 0, 648, 649, 0, 0, 650, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 652, 0, 653, 0, 0, 654, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 0, 659, 0, 0, 660, 0, 0, 661,
};
void recomp_unit_0173_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AB8000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0173[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AB8000;
    case 2u: goto L_08AB8018;
    case 3u: goto L_08AB8020;
    case 4u: goto L_08AB802C;
    case 5u: goto L_08AB8044;
    case 6u: goto L_08AB805C;
    case 7u: goto L_08AB8074;
    case 8u: goto L_08AB808C;
    case 9u: goto L_08AB8090;
    case 10u: goto L_08AB80A8;
    case 11u: goto L_08AB80CC;
    case 12u: goto L_08AB80D8;
    case 13u: goto L_08AB80E0;
    case 14u: goto L_08AB80EC;
    case 15u: goto L_08AB80F4;
    case 16u: goto L_08AB8104;
    case 17u: goto L_08AB810C;
    case 18u: goto L_08AB8114;
    case 19u: goto L_08AB8120;
    case 20u: goto L_08AB8130;
    case 21u: goto L_08AB8134;
    case 22u: goto L_08AB814C;
    case 23u: goto L_08AB8170;
    case 24u: goto L_08AB817C;
    case 25u: goto L_08AB8184;
    case 26u: goto L_08AB8190;
    case 27u: goto L_08AB8198;
    case 28u: goto L_08AB81A8;
    case 29u: goto L_08AB81B0;
    case 30u: goto L_08AB81B8;
    case 31u: goto L_08AB81C4;
    case 32u: goto L_08AB81D4;
    case 33u: goto L_08AB81D8;
    case 34u: goto L_08AB81F0;
    case 35u: goto L_08AB8214;
    case 36u: goto L_08AB8220;
    case 37u: goto L_08AB8228;
    case 38u: goto L_08AB8234;
    case 39u: goto L_08AB823C;
    case 40u: goto L_08AB824C;
    case 41u: goto L_08AB8254;
    case 42u: goto L_08AB825C;
    case 43u: goto L_08AB8268;
    case 44u: goto L_08AB8278;
    case 45u: goto L_08AB827C;
    case 46u: goto L_08AB8294;
    case 47u: goto L_08AB82B4;
    case 48u: goto L_08AB82C0;
    case 49u: goto L_08AB82D0;
    case 50u: goto L_08AB82E8;
    case 51u: goto L_08AB82F4;
    case 52u: goto L_08AB8310;
    case 53u: goto L_08AB8314;
    case 54u: goto L_08AB832C;
    case 55u: goto L_08AB8340;
    case 56u: goto L_08AB8350;
    case 57u: goto L_08AB8374;
    case 58u: goto L_08AB8380;
    case 59u: goto L_08AB8388;
    case 60u: goto L_08AB8394;
    case 61u: goto L_08AB839C;
    case 62u: goto L_08AB83A8;
    case 63u: goto L_08AB83B0;
    case 64u: goto L_08AB83B8;
    case 65u: goto L_08AB83C4;
    case 66u: goto L_08AB83D0;
    case 67u: goto L_08AB83D4;
    case 68u: goto L_08AB83EC;
    case 69u: goto L_08AB8410;
    case 70u: goto L_08AB841C;
    case 71u: goto L_08AB8424;
    case 72u: goto L_08AB8430;
    case 73u: goto L_08AB8438;
    case 74u: goto L_08AB8448;
    case 75u: goto L_08AB8450;
    case 76u: goto L_08AB8458;
    case 77u: goto L_08AB8464;
    case 78u: goto L_08AB8474;
    case 79u: goto L_08AB8478;
    case 80u: goto L_08AB8490;
    case 81u: goto L_08AB84C4;
    case 82u: goto L_08AB84D0;
    case 83u: goto L_08AB84FC;
    case 84u: goto L_08AB8504;
    case 85u: goto L_08AB8510;
    case 86u: goto L_08AB8520;
    case 87u: goto L_08AB852C;
    case 88u: goto L_08AB853C;
    case 89u: goto L_08AB8544;
    case 90u: goto L_08AB8550;
    case 91u: goto L_08AB8558;
    case 92u: goto L_08AB8560;
    case 93u: goto L_08AB8570;
    case 94u: goto L_08AB857C;
    case 95u: goto L_08AB8584;
    case 96u: goto L_08AB858C;
    case 97u: goto L_08AB8598;
    case 98u: goto L_08AB85B4;
    case 99u: goto L_08AB8658;
    case 100u: goto L_08AB866C;
    case 101u: goto L_08AB8684;
    case 102u: goto L_08AB868C;
    case 103u: goto L_08AB8694;
    case 104u: goto L_08AB869C;
    case 105u: goto L_08AB86AC;
    case 106u: goto L_08AB86B8;
    case 107u: goto L_08AB86CC;
    case 108u: goto L_08AB86D0;
    case 109u: goto L_08AB86D8;
    case 110u: goto L_08AB86E8;
    case 111u: goto L_08AB86F4;
    case 112u: goto L_08AB8708;
    case 113u: goto L_08AB870C;
    case 114u: goto L_08AB8710;
    case 115u: goto L_08AB8720;
    case 116u: goto L_08AB8734;
    case 117u: goto L_08AB8774;
    case 118u: goto L_08AB8790;
    case 119u: goto L_08AB87A8;
    case 120u: goto L_08AB87B4;
    case 121u: goto L_08AB87BC;
    case 122u: goto L_08AB87D0;
    case 123u: goto L_08AB87E8;
    case 124u: goto L_08AB87F4;
    case 125u: goto L_08AB8824;
    case 126u: goto L_08AB883C;
    case 127u: goto L_08AB8850;
    case 128u: goto L_08AB885C;
    case 129u: goto L_08AB8864;
    case 130u: goto L_08AB8878;
    case 131u: goto L_08AB8884;
    case 132u: goto L_08AB8890;
    case 133u: goto L_08AB889C;
    case 134u: goto L_08AB88A4;
    case 135u: goto L_08AB88AC;
    case 136u: goto L_08AB88C0;
    case 137u: goto L_08AB896C;
    case 138u: goto L_08AB8978;
    case 139u: goto L_08AB8994;
    case 140u: goto L_08AB89A4;
    case 141u: goto L_08AB89C8;
    case 142u: goto L_08AB89D8;
    case 143u: goto L_08AB89E4;
    case 144u: goto L_08AB89EC;
    case 145u: goto L_08AB8A48;
    case 146u: goto L_08AB8AA8;
    case 147u: goto L_08AB8AB4;
    case 148u: goto L_08AB8AC4;
    case 149u: goto L_08AB8AC8;
    case 150u: goto L_08AB8AD0;
    case 151u: goto L_08AB8ADC;
    case 152u: goto L_08AB8AEC;
    case 153u: goto L_08AB8AF8;
    case 154u: goto L_08AB8B08;
    case 155u: goto L_08AB8B10;
    case 156u: goto L_08AB8B14;
    case 157u: goto L_08AB8B44;
    case 158u: goto L_08AB8B50;
    case 159u: goto L_08AB8B5C;
    case 160u: goto L_08AB8B60;
    case 161u: goto L_08AB8B68;
    case 162u: goto L_08AB8B74;
    case 163u: goto L_08AB8B84;
    case 164u: goto L_08AB8B90;
    case 165u: goto L_08AB8BA0;
    case 166u: goto L_08AB8BA8;
    case 167u: goto L_08AB8BAC;
    case 168u: goto L_08AB8BDC;
    case 169u: goto L_08AB8BE8;
    case 170u: goto L_08AB8BF4;
    case 171u: goto L_08AB8BF8;
    case 172u: goto L_08AB8C00;
    case 173u: goto L_08AB8C0C;
    case 174u: goto L_08AB8C1C;
    case 175u: goto L_08AB8C28;
    case 176u: goto L_08AB8C38;
    case 177u: goto L_08AB8C40;
    case 178u: goto L_08AB8C64;
    case 179u: goto L_08AB8D08;
    case 180u: goto L_08AB8D10;
    case 181u: goto L_08AB8D20;
    case 182u: goto L_08AB8D30;
    case 183u: goto L_08AB8D34;
    case 184u: goto L_08AB8D3C;
    case 185u: goto L_08AB8D58;
    case 186u: goto L_08AB8D78;
    case 187u: goto L_08AB8DB4;
    case 188u: goto L_08AB8DC0;
    case 189u: goto L_08AB8DFC;
    case 190u: goto L_08AB8E0C;
    case 191u: goto L_08AB8E28;
    case 192u: goto L_08AB8E30;
    case 193u: goto L_08AB8E40;
    case 194u: goto L_08AB8E7C;
    case 195u: goto L_08AB8EBC;
    case 196u: goto L_08AB8EC4;
    case 197u: goto L_08AB8ED4;
    case 198u: goto L_08AB8EE4;
    case 199u: goto L_08AB8EE8;
    case 200u: goto L_08AB8EF0;
    case 201u: goto L_08AB8F0C;
    case 202u: goto L_08AB8F2C;
    case 203u: goto L_08AB8F68;
    case 204u: goto L_08AB8F78;
    case 205u: goto L_08AB8F90;
    case 206u: goto L_08AB8FC4;
    case 207u: goto L_08AB8FCC;
    case 208u: goto L_08AB8FD8;
    case 209u: goto L_08AB8FE4;
    case 210u: goto L_08AB8FFC;
    case 211u: goto L_08AB9020;
    case 212u: goto L_08AB9028;
    case 213u: goto L_08AB9038;
    case 214u: goto L_08AB9048;
    case 215u: goto L_08AB904C;
    case 216u: goto L_08AB9054;
    case 217u: goto L_08AB9058;
    case 218u: goto L_08AB9070;
    case 219u: goto L_08AB9090;
    case 220u: goto L_08AB90CC;
    case 221u: goto L_08AB90DC;
    case 222u: goto L_08AB90F0;
    case 223u: goto L_08AB911C;
    case 224u: goto L_08AB9128;
    case 225u: goto L_08AB9134;
    case 226u: goto L_08AB913C;
    case 227u: goto L_08AB9144;
    case 228u: goto L_08AB9150;
    case 229u: goto L_08AB9158;
    case 230u: goto L_08AB9168;
    case 231u: goto L_08AB916C;
    case 232u: goto L_08AB9170;
    case 233u: goto L_08AB9178;
    case 234u: goto L_08AB9180;
    case 235u: goto L_08AB9188;
    case 236u: goto L_08AB91A4;
    case 237u: goto L_08AB91AC;
    case 238u: goto L_08AB91D4;
    case 239u: goto L_08AB91DC;
    case 240u: goto L_08AB91F0;
    case 241u: goto L_08AB91F4;
    case 242u: goto L_08AB9214;
    case 243u: goto L_08AB924C;
    case 244u: goto L_08AB9258;
    case 245u: goto L_08AB9354;
    case 246u: goto L_08AB9358;
    case 247u: goto L_08AB9368;
    case 248u: goto L_08AB9374;
    case 249u: goto L_08AB9384;
    case 250u: goto L_08AB93B8;
    case 251u: goto L_08AB93C0;
    case 252u: goto L_08AB93D4;
    case 253u: goto L_08AB93E8;
    case 254u: goto L_08AB93F8;
    case 255u: goto L_08AB9404;
    case 256u: goto L_08AB940C;
    case 257u: goto L_08AB9418;
    case 258u: goto L_08AB942C;
    case 259u: goto L_08AB9434;
    case 260u: goto L_08AB9444;
    case 261u: goto L_08AB9454;
    case 262u: goto L_08AB9458;
    case 263u: goto L_08AB9464;
    case 264u: goto L_08AB946C;
    case 265u: goto L_08AB9480;
    case 266u: goto L_08AB94A0;
    case 267u: goto L_08AB94C4;
    case 268u: goto L_08AB94D0;
    case 269u: goto L_08AB94F0;
    case 270u: goto L_08AB94FC;
    case 271u: goto L_08AB9520;
    case 272u: goto L_08AB9530;
    case 273u: goto L_08AB953C;
    case 274u: goto L_08AB9544;
    case 275u: goto L_08AB9554;
    case 276u: goto L_08AB9560;
    case 277u: goto L_08AB9570;
    case 278u: goto L_08AB9574;
    case 279u: goto L_08AB9580;
    case 280u: goto L_08AB958C;
    case 281u: goto L_08AB95A0;
    case 282u: goto L_08AB962C;
    case 283u: goto L_08AB9638;
    case 284u: goto L_08AB963C;
    case 285u: goto L_08AB9654;
    case 286u: goto L_08AB9664;
    case 287u: goto L_08AB966C;
    case 288u: goto L_08AB9674;
    case 289u: goto L_08AB9688;
    case 290u: goto L_08AB96D0;
    case 291u: goto L_08AB96E4;
    case 292u: goto L_08AB9700;
    case 293u: goto L_08AB9758;
    case 294u: goto L_08AB9768;
    case 295u: goto L_08AB9770;
    case 296u: goto L_08AB9790;
    case 297u: goto L_08AB97E0;
    case 298u: goto L_08AB97EC;
    case 299u: goto L_08AB97FC;
    case 300u: goto L_08AB980C;
    case 301u: goto L_08AB9840;
    case 302u: goto L_08AB985C;
    case 303u: goto L_08AB9878;
    case 304u: goto L_08AB988C;
    case 305u: goto L_08AB9898;
    case 306u: goto L_08AB98A0;
    case 307u: goto L_08AB98D4;
    case 308u: goto L_08AB98DC;
    case 309u: goto L_08AB98E0;
    case 310u: goto L_08AB9910;
    case 311u: goto L_08AB99FC;
    case 312u: goto L_08AB9A0C;
    case 313u: goto L_08AB9A1C;
    case 314u: goto L_08AB9A28;
    case 315u: goto L_08AB9A34;
    case 316u: goto L_08AB9A3C;
    case 317u: goto L_08AB9A44;
    case 318u: goto L_08AB9A54;
    case 319u: goto L_08AB9A64;
    case 320u: goto L_08AB9A70;
    case 321u: goto L_08AB9A7C;
    case 322u: goto L_08AB9A84;
    case 323u: goto L_08AB9A8C;
    case 324u: goto L_08AB9B04;
    case 325u: goto L_08AB9B20;
    case 326u: goto L_08AB9B38;
    case 327u: goto L_08AB9B44;
    case 328u: goto L_08AB9B58;
    case 329u: goto L_08AB9B60;
    case 330u: goto L_08AB9B80;
    case 331u: goto L_08AB9BDC;
    case 332u: goto L_08AB9BEC;
    case 333u: goto L_08AB9BF8;
    case 334u: goto L_08AB9C08;
    case 335u: goto L_08AB9C3C;
    case 336u: goto L_08AB9C44;
    case 337u: goto L_08AB9C4C;
    case 338u: goto L_08AB9CA4;
    case 339u: goto L_08AB9CAC;
    case 340u: goto L_08AB9CB4;
    case 341u: goto L_08AB9CC0;
    case 342u: goto L_08AB9CDC;
    case 343u: goto L_08AB9CE4;
    case 344u: goto L_08AB9CFC;
    case 345u: goto L_08AB9D10;
    case 346u: goto L_08AB9D14;
    case 347u: goto L_08AB9D30;
    case 348u: goto L_08AB9D38;
    case 349u: goto L_08AB9D54;
    case 350u: goto L_08AB9D58;
    case 351u: goto L_08AB9D64;
    case 352u: goto L_08AB9D78;
    case 353u: goto L_08AB9D80;
    case 354u: goto L_08AB9D90;
    case 355u: goto L_08AB9DB8;
    case 356u: goto L_08AB9DD8;
    case 357u: goto L_08AB9DE0;
    case 358u: goto L_08AB9DEC;
    case 359u: goto L_08AB9DF8;
    case 360u: goto L_08AB9E00;
    case 361u: goto L_08AB9E10;
    case 362u: goto L_08AB9E18;
    case 363u: goto L_08AB9E20;
    case 364u: goto L_08AB9E28;
    case 365u: goto L_08AB9E3C;
    case 366u: goto L_08AB9E5C;
    case 367u: goto L_08AB9E64;
    case 368u: goto L_08AB9E6C;
    case 369u: goto L_08AB9E78;
    case 370u: goto L_08AB9E80;
    case 371u: goto L_08AB9E88;
    case 372u: goto L_08AB9E94;
    case 373u: goto L_08AB9EA0;
    case 374u: goto L_08AB9EAC;
    case 375u: goto L_08AB9EB8;
    case 376u: goto L_08AB9EC0;
    case 377u: goto L_08AB9EC8;
    case 378u: goto L_08AB9ED4;
    case 379u: goto L_08AB9EE0;
    case 380u: goto L_08AB9EE8;
    case 381u: goto L_08AB9EF4;
    case 382u: goto L_08AB9F40;
    case 383u: goto L_08AB9F58;
    case 384u: goto L_08AB9F70;
    case 385u: goto L_08ABA020;
    case 386u: goto L_08ABA03C;
    case 387u: goto L_08ABA044;
    case 388u: goto L_08ABA054;
    case 389u: goto L_08ABA068;
    case 390u: goto L_08ABA07C;
    case 391u: goto L_08ABA0A8;
    case 392u: goto L_08ABA0DC;
    case 393u: goto L_08ABA0FC;
    case 394u: goto L_08ABA104;
    case 395u: goto L_08ABA110;
    case 396u: goto L_08ABA120;
    case 397u: goto L_08ABA130;
    case 398u: goto L_08ABA15C;
    case 399u: goto L_08ABA17C;
    case 400u: goto L_08ABA184;
    case 401u: goto L_08ABA194;
    case 402u: goto L_08ABA1A8;
    case 403u: goto L_08ABA220;
    case 404u: goto L_08ABA278;
    case 405u: goto L_08ABA280;
    case 406u: goto L_08ABA2A4;
    case 407u: goto L_08ABA2AC;
    case 408u: goto L_08ABA2BC;
    case 409u: goto L_08ABA2D0;
    case 410u: goto L_08ABA2F4;
    case 411u: goto L_08ABA2FC;
    case 412u: goto L_08ABA30C;
    case 413u: goto L_08ABA320;
    case 414u: goto L_08ABA324;
    case 415u: goto L_08ABA338;
    case 416u: goto L_08ABA340;
    case 417u: goto L_08ABA398;
    case 418u: goto L_08ABA3A0;
    case 419u: goto L_08ABA3A8;
    case 420u: goto L_08ABA3C4;
    case 421u: goto L_08ABA42C;
    case 422u: goto L_08ABA444;
    case 423u: goto L_08ABA448;
    case 424u: goto L_08ABA454;
    case 425u: goto L_08ABA464;
    case 426u: goto L_08ABA47C;
    case 427u: goto L_08ABA4D0;
    case 428u: goto L_08ABA4E4;
    case 429u: goto L_08ABA4FC;
    case 430u: goto L_08ABA508;
    case 431u: goto L_08ABA514;
    case 432u: goto L_08ABA520;
    case 433u: goto L_08ABA52C;
    case 434u: goto L_08ABA540;
    case 435u: goto L_08ABA548;
    case 436u: goto L_08ABA560;
    case 437u: goto L_08ABA568;
    case 438u: goto L_08ABA57C;
    case 439u: goto L_08ABA590;
    case 440u: goto L_08ABA5AC;
    case 441u: goto L_08ABA5C8;
    case 442u: goto L_08ABA5EC;
    case 443u: goto L_08ABA5FC;
    case 444u: goto L_08ABA608;
    case 445u: goto L_08ABA614;
    case 446u: goto L_08ABA61C;
    case 447u: goto L_08ABA640;
    case 448u: goto L_08ABA648;
    case 449u: goto L_08ABA658;
    case 450u: goto L_08ABA66C;
    case 451u: goto L_08ABA690;
    case 452u: goto L_08ABA6D0;
    case 453u: goto L_08ABA6D8;
    case 454u: goto L_08ABA6E0;
    case 455u: goto L_08ABA6E4;
    case 456u: goto L_08ABA700;
    case 457u: goto L_08ABA70C;
    case 458u: goto L_08ABA714;
    case 459u: goto L_08ABA720;
    case 460u: goto L_08ABA744;
    case 461u: goto L_08ABA760;
    case 462u: goto L_08ABA774;
    case 463u: goto L_08ABA780;
    case 464u: goto L_08ABA790;
    case 465u: goto L_08ABA7A8;
    case 466u: goto L_08ABA7DC;
    case 467u: goto L_08ABA7E8;
    case 468u: goto L_08ABA820;
    case 469u: goto L_08ABA860;
    case 470u: goto L_08ABA868;
    case 471u: goto L_08ABA870;
    case 472u: goto L_08ABA87C;
    case 473u: goto L_08ABA884;
    case 474u: goto L_08ABA8A8;
    case 475u: goto L_08ABA8B4;
    case 476u: goto L_08ABA8BC;
    case 477u: goto L_08ABA8FC;
    case 478u: goto L_08ABA90C;
    case 479u: goto L_08ABA91C;
    case 480u: goto L_08ABA934;
    case 481u: goto L_08ABA97C;
    case 482u: goto L_08ABA984;
    case 483u: goto L_08ABA99C;
    case 484u: goto L_08ABA9B0;
    case 485u: goto L_08ABA9BC;
    case 486u: goto L_08ABA9C4;
    case 487u: goto L_08ABA9E4;
    case 488u: goto L_08ABA9F0;
    case 489u: goto L_08ABA9F8;
    case 490u: goto L_08ABAA34;
    case 491u: goto L_08ABAA44;
    case 492u: goto L_08ABAA54;
    case 493u: goto L_08ABAA70;
    case 494u: goto L_08ABAAB8;
    case 495u: goto L_08ABAAC0;
    case 496u: goto L_08ABAAD8;
    case 497u: goto L_08ABAAEC;
    case 498u: goto L_08ABAAF8;
    case 499u: goto L_08ABAB00;
    case 500u: goto L_08ABAB24;
    case 501u: goto L_08ABAB30;
    case 502u: goto L_08ABAB38;
    case 503u: goto L_08ABAB74;
    case 504u: goto L_08ABAB84;
    case 505u: goto L_08ABAB94;
    case 506u: goto L_08ABABB0;
    case 507u: goto L_08ABABFC;
    case 508u: goto L_08ABAC04;
    case 509u: goto L_08ABAC10;
    case 510u: goto L_08ABAC3C;
    case 511u: goto L_08ABAC60;
    case 512u: goto L_08ABAC84;
    case 513u: goto L_08ABAC8C;
    case 514u: goto L_08ABACA0;
    case 515u: goto L_08ABACBC;
    case 516u: goto L_08ABACC4;
    case 517u: goto L_08ABACCC;
    case 518u: goto L_08ABAD08;
    case 519u: goto L_08ABAD38;
    case 520u: goto L_08ABAD74;
    case 521u: goto L_08ABADA4;
    case 522u: goto L_08ABADB8;
    case 523u: goto L_08ABADC0;
    case 524u: goto L_08ABADD0;
    case 525u: goto L_08ABADF4;
    case 526u: goto L_08ABADFC;
    case 527u: goto L_08ABAE0C;
    case 528u: goto L_08ABAE20;
    case 529u: goto L_08ABAE40;
    case 530u: goto L_08ABAE58;
    case 531u: goto L_08ABAE60;
    case 532u: goto L_08ABAE68;
    case 533u: goto L_08ABAE78;
    case 534u: goto L_08ABAE8C;
    case 535u: goto L_08ABAEAC;
    case 536u: goto L_08ABAEC4;
    case 537u: goto L_08ABAECC;
    case 538u: goto L_08ABAED4;
    case 539u: goto L_08ABAEE4;
    case 540u: goto L_08ABAEF8;
    case 541u: goto L_08ABAF24;
    case 542u: goto L_08ABAF30;
    case 543u: goto L_08ABAF78;
    case 544u: goto L_08ABAF80;
    case 545u: goto L_08ABAF94;
    case 546u: goto L_08ABAF9C;
    case 547u: goto L_08ABAFA8;
    case 548u: goto L_08ABAFB0;
    case 549u: goto L_08ABAFB8;
    case 550u: goto L_08ABAFD4;
    case 551u: goto L_08ABAFE0;
    case 552u: goto L_08ABB080;
    case 553u: goto L_08ABB088;
    case 554u: goto L_08ABB08C;
    case 555u: goto L_08ABB09C;
    case 556u: goto L_08ABB0A8;
    case 557u: goto L_08ABB0B0;
    case 558u: goto L_08ABB0B4;
    case 559u: goto L_08ABB0CC;
    case 560u: goto L_08ABB0DC;
    case 561u: goto L_08ABB0EC;
    case 562u: goto L_08ABB114;
    case 563u: goto L_08ABB124;
    case 564u: goto L_08ABB144;
    case 565u: goto L_08ABB154;
    case 566u: goto L_08ABB1E0;
    case 567u: goto L_08ABB260;
    case 568u: goto L_08ABB268;
    case 569u: goto L_08ABB27C;
    case 570u: goto L_08ABB288;
    case 571u: goto L_08ABB324;
    case 572u: goto L_08ABB33C;
    case 573u: goto L_08ABB348;
    case 574u: goto L_08ABB3F0;
    case 575u: goto L_08ABB410;
    case 576u: goto L_08ABB41C;
    case 577u: goto L_08ABB518;
    case 578u: goto L_08ABB520;
    case 579u: goto L_08ABB528;
    case 580u: goto L_08ABB57C;
    case 581u: goto L_08ABB58C;
    case 582u: goto L_08ABB59C;
    case 583u: goto L_08ABB5A4;
    case 584u: goto L_08ABB5B0;
    case 585u: goto L_08ABB5B8;
    case 586u: goto L_08ABB5C0;
    case 587u: goto L_08ABB5F0;
    case 588u: goto L_08ABB634;
    case 589u: goto L_08ABB63C;
    case 590u: goto L_08ABB644;
    case 591u: goto L_08ABB66C;
    case 592u: goto L_08ABB674;
    case 593u: goto L_08ABB67C;
    case 594u: goto L_08ABB690;
    case 595u: goto L_08ABB6A8;
    case 596u: goto L_08ABB6B4;
    case 597u: goto L_08ABB6C8;
    case 598u: goto L_08ABB6DC;
    case 599u: goto L_08ABB6E8;
    case 600u: goto L_08ABB6F4;
    case 601u: goto L_08ABB704;
    case 602u: goto L_08ABB714;
    case 603u: goto L_08ABB720;
    case 604u: goto L_08ABB734;
    case 605u: goto L_08ABB740;
    case 606u: goto L_08ABB74C;
    case 607u: goto L_08ABB75C;
    case 608u: goto L_08ABB7E8;
    case 609u: goto L_08ABB86C;
    case 610u: goto L_08ABB8C0;
    case 611u: goto L_08ABB914;
    case 612u: goto L_08ABB98C;
    case 613u: goto L_08ABB9E0;
    case 614u: goto L_08ABBA60;
    case 615u: goto L_08ABBAE0;
    case 616u: goto L_08ABBB64;
    case 617u: goto L_08ABBBD0;
    case 618u: goto L_08ABBC3C;
    case 619u: goto L_08ABBCC0;
    case 620u: goto L_08ABBCF8;
    case 621u: goto L_08ABBD74;
    case 622u: goto L_08ABBD98;
    case 623u: goto L_08ABBDA0;
    case 624u: goto L_08ABBDAC;
    case 625u: goto L_08ABBDC8;
    case 626u: goto L_08ABBDE0;
    case 627u: goto L_08ABBDFC;
    case 628u: goto L_08ABBE10;
    case 629u: goto L_08ABBE28;
    case 630u: goto L_08ABBE58;
    case 631u: goto L_08ABBE60;
    case 632u: goto L_08ABBE78;
    case 633u: goto L_08ABBE90;
    case 634u: goto L_08ABBE9C;
    case 635u: goto L_08ABBEA8;
    case 636u: goto L_08ABBEB4;
    case 637u: goto L_08ABBEBC;
    case 638u: goto L_08ABBEC8;
    case 639u: goto L_08ABBED0;
    case 640u: goto L_08ABBEDC;
    case 641u: goto L_08ABBEE4;
    case 642u: goto L_08ABBEF0;
    case 643u: goto L_08ABBEFC;
    case 644u: goto L_08ABBF04;
    case 645u: goto L_08ABBF0C;
    case 646u: goto L_08ABBF18;
    case 647u: goto L_08ABBF20;
    case 648u: goto L_08ABBF28;
    case 649u: goto L_08ABBF2C;
    case 650u: goto L_08ABBF38;
    case 651u: goto L_08ABBF40;
    case 652u: goto L_08ABBF84;
    case 653u: goto L_08ABBF8C;
    case 654u: goto L_08ABBF98;
    case 655u: goto L_08ABBFA8;
    case 656u: goto L_08ABBFB4;
    case 657u: goto L_08ABBFCC;
    case 658u: goto L_08ABBFD8;
    case 659u: goto L_08ABBFE4;
    case 660u: goto L_08ABBFF0;
    case 661u: goto L_08ABBFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AB8000:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AB8018u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 723u, 0x08937384u>(ctx, &aot_mem) && ctx.pc == 0x08AB8018u) goto L_08AB8018;
    return;
L_08AB8018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB808C;
      }
      goto L_08AB8020;
    }
L_08AB8020:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB802Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08AB802Cu) goto L_08AB802C;
    return;
L_08AB802C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AB8044u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08AB8044u) goto L_08AB8044;
    return;
L_08AB8044:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08AB805Cu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08AB805Cu) goto L_08AB805C;
    return;
L_08AB805C:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08AB8074u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08AB8074u) goto L_08AB8074;
    return;
L_08AB8074:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AB808Cu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 723u, 0x08937384u>(ctx, &aot_mem) && ctx.pc == 0x08AB808Cu) goto L_08AB808C;
    return;
L_08AB808C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB8090;
L_08AB8090:
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
L_08AB80A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB80CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 611u, 0x08AB7ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AB80CCu) goto L_08AB80CC;
    return;
L_08AB80CC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB810C;
      }
      goto L_08AB80D8;
    }
L_08AB80D8:
    ctx.gpr[31] = (0x08AB80E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB80E0u) goto L_08AB80E0;
    return;
L_08AB80E0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8114;
      }
      goto L_08AB80EC;
    }
L_08AB80EC:
    ctx.gpr[31] = (0x08AB80F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 719u, 0x08937338u>(ctx, &aot_mem) && ctx.pc == 0x08AB80F4u) goto L_08AB80F4;
    return;
L_08AB80F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB8104u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB8104u) goto L_08AB8104;
    return;
L_08AB8104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AB8134;
      }
      goto L_08AB810C;
    }
L_08AB810C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB8134;
      }
      goto L_08AB8114;
    }
L_08AB8114:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB8120u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08AB8120u) goto L_08AB8120;
    return;
L_08AB8120:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB8130u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 715u, 0x089372E0u>(ctx, &aot_mem) && ctx.pc == 0x08AB8130u) goto L_08AB8130;
    return;
L_08AB8130:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB8134;
L_08AB8134:
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
L_08AB814C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB8170u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 611u, 0x08AB7ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AB8170u) goto L_08AB8170;
    return;
L_08AB8170:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB81B0;
      }
      goto L_08AB817C;
    }
L_08AB817C:
    ctx.gpr[31] = (0x08AB8184u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB8184u) goto L_08AB8184;
    return;
L_08AB8184:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB81B8;
      }
      goto L_08AB8190;
    }
L_08AB8190:
    ctx.gpr[31] = (0x08AB8198u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 703u, 0x089371F0u>(ctx, &aot_mem) && ctx.pc == 0x08AB8198u) goto L_08AB8198;
    return;
L_08AB8198:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB81A8u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB81A8u) goto L_08AB81A8;
    return;
L_08AB81A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AB81D8;
      }
      goto L_08AB81B0;
    }
L_08AB81B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB81D8;
      }
      goto L_08AB81B8;
    }
L_08AB81B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB81C4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08AB81C4u) goto L_08AB81C4;
    return;
L_08AB81C4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB81D4u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 699u, 0x08937198u>(ctx, &aot_mem) && ctx.pc == 0x08AB81D4u) goto L_08AB81D4;
    return;
L_08AB81D4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB81D8;
L_08AB81D8:
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
L_08AB81F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB8214u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 611u, 0x08AB7ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AB8214u) goto L_08AB8214;
    return;
L_08AB8214:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8254;
      }
      goto L_08AB8220;
    }
L_08AB8220:
    ctx.gpr[31] = (0x08AB8228u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB8228u) goto L_08AB8228;
    return;
L_08AB8228:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB825C;
      }
      goto L_08AB8234;
    }
L_08AB8234:
    ctx.gpr[31] = (0x08AB823Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 711u, 0x08937294u>(ctx, &aot_mem) && ctx.pc == 0x08AB823Cu) goto L_08AB823C;
    return;
L_08AB823C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB824Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB824Cu) goto L_08AB824C;
    return;
L_08AB824C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AB827C;
      }
      goto L_08AB8254;
    }
L_08AB8254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB827C;
      }
      goto L_08AB825C;
    }
L_08AB825C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB8268u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08AB8268u) goto L_08AB8268;
    return;
L_08AB8268:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB8278u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 707u, 0x0893723Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB8278u) goto L_08AB8278;
    return;
L_08AB8278:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB827C;
L_08AB827C:
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
L_08AB8294:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB82B4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16716));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 398u, 0x08A4B3B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB82B4u) goto L_08AB82B4;
    return;
L_08AB82B4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8314;
      }
      goto L_08AB82C0;
    }
L_08AB82C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AB8314;
      }
      goto L_08AB82D0;
    }
L_08AB82D0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08AB82E8u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08AB82E8u) goto L_08AB82E8;
    return;
L_08AB82E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8310;
      }
      goto L_08AB82F4;
    }
L_08AB82F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AB8310u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB8310u) goto L_08AB8310;
    return;
L_08AB8310:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08AB8314;
L_08AB8314:
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
L_08AB832C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB8340u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 485u, 0x08986E30u>(ctx, &aot_mem) && ctx.pc == 0x08AB8340u) goto L_08AB8340;
    return;
L_08AB8340:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8350:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB8374u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 611u, 0x08AB7ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AB8374u) goto L_08AB8374;
    return;
L_08AB8374:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB83B0;
      }
      goto L_08AB8380;
    }
L_08AB8380:
    ctx.gpr[31] = (0x08AB8388u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB8388u) goto L_08AB8388;
    return;
L_08AB8388:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB83B8;
      }
      goto L_08AB8394;
    }
L_08AB8394:
    ctx.gpr[31] = (0x08AB839Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 735u, 0x089374A0u>(ctx, &aot_mem) && ctx.pc == 0x08AB839Cu) goto L_08AB839C;
    return;
L_08AB839C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB83A8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB83A8u) goto L_08AB83A8;
    return;
L_08AB83A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AB83D4;
      }
      goto L_08AB83B0;
    }
L_08AB83B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB83D4;
      }
      goto L_08AB83B8;
    }
L_08AB83B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB83C4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08AB83C4u) goto L_08AB83C4;
    return;
L_08AB83C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB83D0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 731u, 0x08937448u>(ctx, &aot_mem) && ctx.pc == 0x08AB83D0u) goto L_08AB83D0;
    return;
L_08AB83D0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB83D4;
L_08AB83D4:
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
L_08AB83EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB8410u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 611u, 0x08AB7ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AB8410u) goto L_08AB8410;
    return;
L_08AB8410:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8450;
      }
      goto L_08AB841C;
    }
L_08AB841C:
    ctx.gpr[31] = (0x08AB8424u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AB8424u) goto L_08AB8424;
    return;
L_08AB8424:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8458;
      }
      goto L_08AB8430;
    }
L_08AB8430:
    ctx.gpr[31] = (0x08AB8438u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 743u, 0x08937544u>(ctx, &aot_mem) && ctx.pc == 0x08AB8438u) goto L_08AB8438;
    return;
L_08AB8438:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB8448u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB8448u) goto L_08AB8448;
    return;
L_08AB8448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AB8478;
      }
      goto L_08AB8450;
    }
L_08AB8450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB8478;
      }
      goto L_08AB8458;
    }
L_08AB8458:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB8464u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08AB8464u) goto L_08AB8464;
    return;
L_08AB8464:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB8474u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 739u, 0x089374ECu>(ctx, &aot_mem) && ctx.pc == 0x08AB8474u) goto L_08AB8474;
    return;
L_08AB8474:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB8478;
L_08AB8478:
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
L_08AB8490:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB84C4u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-5692))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AB84C4u) goto L_08AB84C4;
    return;
L_08AB84C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AB84FC;
      }
      goto L_08AB84D0;
    }
L_08AB84D0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9540));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9524));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30992));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08AB84FC;
L_08AB84FC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AB8510;
      }
      goto L_08AB8504;
    }
L_08AB8504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AB8510;
L_08AB8510:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB8520u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8520u) goto L_08AB8520;
    return;
L_08AB8520:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8544;
      }
      goto L_08AB852C;
    }
L_08AB852C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB8544;
      }
      goto L_08AB853C;
    }
L_08AB853C:
    ctx.gpr[31] = (0x08AB8544u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AB8544u) goto L_08AB8544;
    return;
L_08AB8544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AB8560;
      }
      goto L_08AB8550;
    }
L_08AB8550:
    ctx.gpr[31] = (0x08AB8558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08AB8558u) goto L_08AB8558;
    return;
L_08AB8558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2229u << 16u);
    goto L_08AB8560;
L_08AB8560:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27828));
    ctx.gpr[31] = (0x08AB8570u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16716));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 5u, 0x0883C058u>(ctx, &aot_mem) && ctx.pc == 0x08AB8570u) goto L_08AB8570;
    return;
L_08AB8570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AB858C;
      }
      goto L_08AB857C;
    }
L_08AB857C:
    ctx.gpr[31] = (0x08AB8584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08AB8584u) goto L_08AB8584;
    return;
L_08AB8584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2229u << 16u);
    goto L_08AB858C;
L_08AB858C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AB8598u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27924));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 787u, 0x0883BFF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB8598u) goto L_08AB8598;
    return;
L_08AB8598:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB85B4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27804)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27800)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[13] = (0u | 51u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-5692), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2232u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-5692)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(27808), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(6264));
    ctx.gpr[7] = (ctx.gpr[10] + static_cast<std::uint32_t>(-16704));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(27816), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27812), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(27820), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(27824), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8658:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB8694;
      }
      goto L_08AB866C;
    }
L_08AB866C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AB8684u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB8684u) goto L_08AB8684;
    return;
L_08AB8684:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB869C;
      }
      goto L_08AB868C;
    }
L_08AB868C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB86D8;
      }
      goto L_08AB8694;
    }
L_08AB8694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB8710;
      }
      goto L_08AB869C;
    }
L_08AB869C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x08AB86ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15032)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 76u, 0x08B0864Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB86ACu) goto L_08AB86AC;
    return;
L_08AB86AC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB86D0;
      }
      goto L_08AB86B8;
    }
L_08AB86B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15032)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB86D0;
      }
      goto L_08AB86CC;
    }
L_08AB86CC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AB86D0;
L_08AB86D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AB8710;
      }
      goto L_08AB86D8;
    }
L_08AB86D8:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x08AB86E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15036)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 75u, 0x08B08630u>(ctx, &aot_mem) && ctx.pc == 0x08AB86E8u) goto L_08AB86E8;
    return;
L_08AB86E8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB870C;
      }
      goto L_08AB86F4;
    }
L_08AB86F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15036)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB870C;
      }
      goto L_08AB8708;
    }
L_08AB8708:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AB870C;
L_08AB870C:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    goto L_08AB8710;
L_08AB8710:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8720:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB8734u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 78u, 0x08A305B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8734u) goto L_08AB8734;
    return;
L_08AB8734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12364));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
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
L_08AB8774:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB87BC;
      }
      goto L_08AB8790;
    }
L_08AB8790:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12364));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AB87A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 586u, 0x08A2EAB4u>(ctx, &aot_mem) && ctx.pc == 0x08AB87A8u) goto L_08AB87A8;
    return;
L_08AB87A8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB87BC;
      }
      goto L_08AB87B4;
    }
L_08AB87B4:
    ctx.gpr[31] = (0x08AB87BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AB87D0;
L_08AB87BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB87D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB87E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15036)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 72u, 0x08B085ECu>(ctx, &aot_mem) && ctx.pc == 0x08AB87E8u) goto L_08AB87E8;
    return;
L_08AB87E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB87F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AB8824u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AB8824u) goto L_08AB8824;
    return;
L_08AB8824:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB8850;
      }
      goto L_08AB883C;
    }
L_08AB883C:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AB8850;
L_08AB8850:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8864;
      }
      goto L_08AB885C;
    }
L_08AB885C:
    ctx.gpr[31] = (0x08AB8864u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x08AB8864u) goto L_08AB8864;
    return;
L_08AB8864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08AB889C;
      }
      goto L_08AB8878;
    }
L_08AB8878:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(90)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AB8890;
      }
      goto L_08AB8884;
    }
L_08AB8884:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7060)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB889C;
      }
      goto L_08AB8890;
    }
L_08AB8890:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AB889Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AB889Cu) goto L_08AB889C;
    return;
L_08AB889C:
    ctx.gpr[31] = (0x08AB88A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08AB88A4u) goto L_08AB88A4;
    return;
L_08AB88A4:
    ctx.gpr[31] = (0x08AB88ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08AB88ACu) goto L_08AB88AC;
    return;
L_08AB88AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB88C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27972)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 14571u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27968)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (17096u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(27996)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(27976), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[6] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(27984), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(27980), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[4] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11424));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27988), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27992), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB896Cu);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28000), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08AB8720;
L_08AB896C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08AB8978u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28004));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08AB8978u) goto L_08AB8978;
    return;
L_08AB8978:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11328));
    ctx.gpr[31] = (0x08AB8994u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16576));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AEF4u>(ctx, &aot_mem) && ctx.pc == 0x08AB8994u) goto L_08AB8994;
    return;
L_08AB8994:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB89A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB89C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AB89C8u) goto L_08AB89C8;
    return;
L_08AB89C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AB89EC;
      }
      goto L_08AB89D8;
    }
L_08AB89D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[31] = (0x08AB89E4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AB89E4u) goto L_08AB89E4;
    return;
L_08AB89E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AB89EC;
L_08AB89EC:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17))))));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8A48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(28016));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28016)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB8AA8u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-5691))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AB8AA8u) goto L_08AB8AA8;
    return;
L_08AB8AA8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AB8AC8;
      }
      goto L_08AB8AB4;
    }
L_08AB8AB4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AB8AC4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 77u, 0x08B08668u>(ctx, &aot_mem) && ctx.pc == 0x08AB8AC4u) goto L_08AB8AC4;
    return;
L_08AB8AC4:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08AB8AC8;
L_08AB8AC8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AB8ADC;
      }
      goto L_08AB8AD0;
    }
L_08AB8AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AB8ADC;
L_08AB8ADC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB8AECu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8AECu) goto L_08AB8AEC;
    return;
L_08AB8AEC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AB8B14;
      }
      goto L_08AB8AF8;
    }
L_08AB8AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB8B10;
      }
      goto L_08AB8B08;
    }
L_08AB8B08:
    ctx.gpr[31] = (0x08AB8B10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AB8B10u) goto L_08AB8B10;
    return;
L_08AB8B10:
    ctx.gpr[4] = (2229u << 16u);
    goto L_08AB8B14;
L_08AB8B14:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(28024));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28024)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[31] = (0x08AB8B44u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-5690))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AB8B44u) goto L_08AB8B44;
    return;
L_08AB8B44:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08AB8B60;
      }
      goto L_08AB8B50;
    }
L_08AB8B50:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AB8B5Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 77u, 0x08B08668u>(ctx, &aot_mem) && ctx.pc == 0x08AB8B5Cu) goto L_08AB8B5C;
    return;
L_08AB8B5C:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08AB8B60;
L_08AB8B60:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AB8B74;
      }
      goto L_08AB8B68;
    }
L_08AB8B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AB8B74;
L_08AB8B74:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB8B84u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8B84u) goto L_08AB8B84;
    return;
L_08AB8B84:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AB8BAC;
      }
      goto L_08AB8B90;
    }
L_08AB8B90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB8BA8;
      }
      goto L_08AB8BA0;
    }
L_08AB8BA0:
    ctx.gpr[31] = (0x08AB8BA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AB8BA8u) goto L_08AB8BA8;
    return;
L_08AB8BA8:
    ctx.gpr[4] = (2229u << 16u);
    goto L_08AB8BAC;
L_08AB8BAC:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(28032));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28032)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (0u | 20u);
    ctx.gpr[31] = (0x08AB8BDCu);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-5689))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AB8BDCu) goto L_08AB8BDC;
    return;
L_08AB8BDC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08AB8BF8;
      }
      goto L_08AB8BE8;
    }
L_08AB8BE8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AB8BF4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 77u, 0x08B08668u>(ctx, &aot_mem) && ctx.pc == 0x08AB8BF4u) goto L_08AB8BF4;
    return;
L_08AB8BF4:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08AB8BF8;
L_08AB8BF8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AB8C0C;
      }
      goto L_08AB8C00;
    }
L_08AB8C00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AB8C0C;
L_08AB8C0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB8C1Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 237u, 0x088A90A8u>(ctx, &aot_mem) && ctx.pc == 0x08AB8C1Cu) goto L_08AB8C1C;
    return;
L_08AB8C1C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8C40;
      }
      goto L_08AB8C28;
    }
L_08AB8C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB8C40;
      }
      goto L_08AB8C38;
    }
L_08AB8C38:
    ctx.gpr[31] = (0x08AB8C40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AB8C40u) goto L_08AB8C40;
    return;
L_08AB8C40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8C64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[30]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[21] = (ctx.gpr[10] & 255u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
    ctx.gpr[23] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[11]);
    ctx.gpr[22] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08AB8D3C;
      }
      goto L_08AB8D08;
    }
L_08AB8D08:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(172), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08AB8D10;
L_08AB8D10:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08AB8D30;
    }
    goto L_08AB8D20;
L_08AB8D20:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB8D34;
      }
      goto L_08AB8D30;
    }
L_08AB8D30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AB8D34;
L_08AB8D34:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08AB8D10;
    }
    goto L_08AB8D3C;
L_08AB8D3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AB8D78;
      }
      goto L_08AB8D58;
    }
L_08AB8D58:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8DC0;
      }
      goto L_08AB8D78;
    }
L_08AB8D78:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08AB8DB4u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 155u, 0x08B08DCCu>(ctx, &aot_mem) && ctx.pc == 0x08AB8DB4u) goto L_08AB8DB4;
    return;
L_08AB8DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    goto L_08AB8DC0;
L_08AB8DC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AB8DFCu);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 82u, 0x08B0870Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB8DFCu) goto L_08AB8DFC;
    return;
L_08AB8DFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB8E30;
      }
      goto L_08AB8E0C;
    }
L_08AB8E0C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(0u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(130))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB8E28u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08AB9214;
L_08AB8E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8E40;
      }
      goto L_08AB8E30;
    }
L_08AB8E30:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB8E40u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB8E40u) goto L_08AB8E40;
    return;
L_08AB8E40:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8E7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
      if (branch_taken) {
          goto L_08AB8EF0;
      }
      goto L_08AB8EBC;
    }
L_08AB8EBC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_08AB8EC4;
L_08AB8EC4:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_08AB8EE4;
    }
    goto L_08AB8ED4;
L_08AB8ED4:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB8EE8;
      }
      goto L_08AB8EE4;
    }
L_08AB8EE4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08AB8EE8;
L_08AB8EE8:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_08AB8EC4;
    }
    goto L_08AB8EF0;
L_08AB8EF0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] ^ ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AB8F2C;
      }
      goto L_08AB8F0C;
    }
L_08AB8F0C:
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8F78;
      }
      goto L_08AB8F2C;
    }
L_08AB8F2C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AB8F68u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 155u, 0x08B08DCCu>(ctx, &aot_mem) && ctx.pc == 0x08AB8F68u) goto L_08AB8F68;
    return;
L_08AB8F68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08AB8F78;
L_08AB8F78:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AB8FCC;
      }
      goto L_08AB8F90;
    }
L_08AB8F90:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-5690)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[31] = (0x08AB8FC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB8FC4u) goto L_08AB8FC4;
    return;
L_08AB8FC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB8FD8;
      }
      goto L_08AB8FCC;
    }
L_08AB8FCC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AB8FD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB94FC;
L_08AB8FD8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AB8FE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 83u, 0x08B08818u>(ctx, &aot_mem) && ctx.pc == 0x08AB8FE4u) goto L_08AB8FE4;
    return;
L_08AB8FE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB8FFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    if (ctx.gpr[8] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
        goto L_08AB9058;
    }
    goto L_08AB9020;
L_08AB9020:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    goto L_08AB9028;
L_08AB9028:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
        goto L_08AB9048;
    }
    goto L_08AB9038;
L_08AB9038:
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AB904C;
      }
      goto L_08AB9048;
    }
L_08AB9048:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_08AB904C;
L_08AB904C:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
        goto L_08AB9028;
    }
    goto L_08AB9054;
L_08AB9054:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    goto L_08AB9058;
L_08AB9058:
    ctx.gpr[8] = (ctx.gpr[5] ^ ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AB9090;
      }
      goto L_08AB9070;
    }
L_08AB9070:
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
        goto L_08AB90DC;
    }
    goto L_08AB9090;
L_08AB9090:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08AB90CCu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 155u, 0x08B08DCCu>(ctx, &aot_mem) && ctx.pc == 0x08AB90CCu) goto L_08AB90CC;
    return;
L_08AB90CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    goto L_08AB90DC;
L_08AB90DC:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB90F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB9188;
      }
      goto L_08AB911C;
    }
L_08AB911C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB9178;
      }
      goto L_08AB9128;
    }
L_08AB9128:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB9134u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AB9688;
L_08AB9134:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9178;
      }
      goto L_08AB913C;
    }
L_08AB913C:
    ctx.gpr[31] = (0x08AB9144u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AB9144u) goto L_08AB9144;
    return;
L_08AB9144:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[17] == ctx.gpr[18]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4));
        goto L_08AB9170;
    }
    goto L_08AB9150;
L_08AB9150:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB916C;
      }
      goto L_08AB9158;
    }
L_08AB9158:
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AB9168u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AB9168u) goto L_08AB9168;
    return;
L_08AB9168:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08AB916C;
L_08AB916C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4));
    goto L_08AB9170;
L_08AB9170:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AB9180;
      }
      goto L_08AB9178;
    }
L_08AB9178:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08AB9180;
L_08AB9180:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AB911C;
      }
      goto L_08AB9188;
    }
L_08AB9188:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB91A4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB91AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB91F4;
      }
      goto L_08AB91D4;
    }
L_08AB91D4:
    ctx.gpr[31] = (0x08AB91DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AB91DCu) goto L_08AB91DC;
    return;
L_08AB91DC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB91D4;
      }
      goto L_08AB91F0;
    }
L_08AB91F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08AB91F4;
L_08AB91F4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9214:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[7]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB924Cu);
    ctx.gpr[4] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08AB924Cu) goto L_08AB924C;
    return;
L_08AB924C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] & 65535u);
      if (branch_taken) {
          goto L_08AB9358;
      }
      goto L_08AB9258;
    }
L_08AB9258:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(6), ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(9));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(13));
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(17));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(21));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(25));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(29));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(33));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(37));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[9]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(41));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(45), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[10]));
    ctx.gpr[1] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(49), ctx.gpr[1]));
    ctx.gpr[1] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[1]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[1]);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(53)));
    ctx.gpr[31] = (0x08AB9354u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08AB95A0;
L_08AB9354:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08AB9358;
L_08AB9358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08AB9384;
    }
    goto L_08AB9368;
L_08AB9368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
        goto L_08AB9374;
    }
    goto L_08AB9374;
L_08AB9374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB9480;
      }
      goto L_08AB9384;
    }
L_08AB9384:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
      if (branch_taken) {
          goto L_08AB93C0;
      }
      goto L_08AB93B8;
    }
L_08AB93B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
      if (branch_taken) {
          goto L_08AB93C0;
      }
      goto L_08AB93C0;
    }
L_08AB93C0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AB940C;
      }
      goto L_08AB93D4;
    }
L_08AB93D4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB93E8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x08AB93E8u) goto L_08AB93E8;
    return;
L_08AB93E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_08AB940C;
      }
      goto L_08AB93F8;
    }
L_08AB93F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB9404u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x08AB9404u) goto L_08AB9404;
    return;
L_08AB9404:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_08AB940C;
L_08AB940C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AB9434;
      }
      goto L_08AB9418;
    }
L_08AB9418:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB942Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AB942Cu) goto L_08AB942C;
    return;
L_08AB942C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AB9434;
      }
      goto L_08AB9434;
    }
L_08AB9434:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08AB9458;
    }
    goto L_08AB9444;
L_08AB9444:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AB9444;
      }
      goto L_08AB9454;
    }
L_08AB9454:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_08AB9458;
L_08AB9458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB946C;
      }
      goto L_08AB9464;
    }
L_08AB9464:
    ctx.gpr[31] = (0x08AB946Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x08AB946Cu) goto L_08AB946C;
    return;
L_08AB946C:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08AB9480;
L_08AB9480:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB94A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(6), ctx.gpr[8]));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB94C4u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_08AB94FC;
L_08AB94C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB94D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(6), ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB94F0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08AB8FFC;
L_08AB94F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB94FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB958C;
      }
      goto L_08AB9520;
    }
L_08AB9520:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB9580;
      }
      goto L_08AB9530;
    }
L_08AB9530:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AB9580;
      }
      goto L_08AB953C;
    }
L_08AB953C:
    ctx.gpr[31] = (0x08AB9544u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 656u, 0x08AA3128u>(ctx, &aot_mem) && ctx.pc == 0x08AB9544u) goto L_08AB9544;
    return;
L_08AB9544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB9574;
      }
      goto L_08AB9554;
    }
L_08AB9554:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AB9574;
      }
      goto L_08AB9560;
    }
L_08AB9560:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08AB9570u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x08AB9570u) goto L_08AB9570;
    return;
L_08AB9570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08AB9574;
L_08AB9574:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AB958C;
      }
      goto L_08AB9580;
    }
L_08AB9580:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB9520;
      }
      goto L_08AB958C;
    }
L_08AB958C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB95A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[10] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[10] >> 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[10] >> 24u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AB963C;
      }
      goto L_08AB962C;
    }
L_08AB962C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AB9638u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08AB9638u) goto L_08AB9638;
    return;
L_08AB9638:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AB963C;
L_08AB963C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB966C;
      }
      goto L_08AB9654;
    }
L_08AB9654:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AB9664u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 643u, 0x08877EE0u>(ctx, &aot_mem) && ctx.pc == 0x08AB9664u) goto L_08AB9664;
    return;
L_08AB9664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9674;
      }
      goto L_08AB966C;
    }
L_08AB966C:
    ctx.gpr[31] = (0x08AB9674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 647u, 0x08877F54u>(ctx, &aot_mem) && ctx.pc == 0x08AB9674u) goto L_08AB9674;
    return;
L_08AB9674:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[23]);
    ctx.gpr[23] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(5992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AB96D0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x08AB96D0u) goto L_08AB96D0;
    return;
L_08AB96D0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AB96E4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08AB96E4u) goto L_08AB96E4;
    return;
L_08AB96E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AB97E0;
      }
      goto L_08AB9700;
    }
L_08AB9700:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(70)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (17096u << 16u);
    ctx.gpr[5] = (0u | 5u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 128u);
    ctx.gpr[31] = (0x08AB9758u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB9758u) goto L_08AB9758;
    return;
L_08AB9758:
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AB9768u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 563u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB9768u) goto L_08AB9768;
    return;
L_08AB9768:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB97E0;
      }
      goto L_08AB9770;
    }
L_08AB9770:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB97E0;
      }
      goto L_08AB9790;
    }
L_08AB9790:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (16460u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 190u);
    ctx.gpr[9] = (0u | 40u);
    ctx.gpr[10] = (0u | 102u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08AB97E0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x08AB97E0u) goto L_08AB97E0;
    return;
L_08AB97E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_08AB980C;
    }
    goto L_08AB97EC;
L_08AB97EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(101));
    ctx.gpr[31] = (0x08AB97FCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08AB97FCu) goto L_08AB97FC;
    return;
L_08AB97FC:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(101)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_08AB980C;
L_08AB980C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB98DC;
      }
      goto L_08AB9840;
    }
L_08AB9840:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB98DC;
      }
      goto L_08AB985C;
    }
L_08AB985C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AB98DC;
      }
      goto L_08AB9878;
    }
L_08AB9878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AB98A0;
      }
      goto L_08AB988C;
    }
L_08AB988C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[31] = (0x08AB9898u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB8FFC;
L_08AB9898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB98D4;
      }
      goto L_08AB98A0;
    }
L_08AB98A0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-5689)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[31] = (0x08AB98D4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08AB98D4u) goto L_08AB98D4;
    return;
L_08AB98D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AB98E0;
      }
      goto L_08AB98DC;
    }
L_08AB98DC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AB98E0;
L_08AB98E0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9910:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28044)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28040)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[24] = (0u | 52u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-5691), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[2] = (2227u << 16u);
    ctx.gpr[10] = (2232u << 16u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(6264));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28048), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-5691)));
    ctx.gpr[11] = (ctx.gpr[2] + static_cast<std::uint32_t>(-16552));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[2] = (0u | 53u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-5690), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-5690)));
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[3] = (2227u << 16u);
    ctx.gpr[7] = (0u | 54u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[11] = (ctx.gpr[3] + static_cast<std::uint32_t>(-16540));
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(28056), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-5689), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-5689)));
    ctx.gpr[8] = (16672u << 16u);
    ctx.gpr[12] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[12] + static_cast<std::uint32_t>(-16524));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[15] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(28052), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28060), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(28064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB99FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7260)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9A28;
      }
      goto L_08AB9A0C;
    }
L_08AB9A0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9A34;
      }
      goto L_08AB9A1C;
    }
L_08AB9A1C:
    ctx.gpr[2] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-32516));
      if (branch_taken) {
          goto L_08AB9A3C;
      }
      goto L_08AB9A28;
    }
L_08AB9A28:
    ctx.gpr[2] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-32461));
      if (branch_taken) {
          goto L_08AB9A3C;
      }
      goto L_08AB9A34;
    }
L_08AB9A34:
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-32574));
    goto L_08AB9A3C;
L_08AB9A3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9A44:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7260)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9A70;
      }
      goto L_08AB9A54;
    }
L_08AB9A54:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9A7C;
      }
      goto L_08AB9A64;
    }
L_08AB9A64:
    ctx.gpr[2] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-32345));
      if (branch_taken) {
          goto L_08AB9A84;
      }
      goto L_08AB9A70;
    }
L_08AB9A70:
    ctx.gpr[2] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-32277));
      if (branch_taken) {
          goto L_08AB9A84;
      }
      goto L_08AB9A7C;
    }
L_08AB9A7C:
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-32406));
    goto L_08AB9A84;
L_08AB9A84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9A8C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[4] = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7767)));
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(29799));
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9B04:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9B20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9B38:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28160));
    ctx.gpr[5] = (0u | 0u);
    goto L_08AB9B44;
L_08AB9B44:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08AB9B44;
      }
      goto L_08AB9B58;
    }
L_08AB9B58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9B60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-5688)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08AB9BEC;
      }
      goto L_08AB9B80;
    }
L_08AB9B80:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-5688)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2278u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-11312));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-5688)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[31] = (0x08AB9BDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9008));
    goto L_08AB9B04;
L_08AB9BDC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-5688)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(-5688), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AB9BF8;
      }
      goto L_08AB9BEC;
    }
L_08AB9BEC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AB9BF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16512));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08AB9BF8u) goto L_08AB9BF8;
    return;
L_08AB9BF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9C08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9CAC;
      }
      goto L_08AB9C3C;
    }
L_08AB9C3C:
    ctx.gpr[31] = (0x08AB9C44u);
    // nop
    goto L_08ABAE8C;
L_08AB9C44:
    ctx.gpr[31] = (0x08AB9C4Cu);
    // nop
    goto L_08ABA7E8;
L_08AB9C4C:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 3u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[5] >> 29u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
    ctx.gpr[20] = (2229u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(28160));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AB9CB4;
      }
      goto L_08AB9CA4;
    }
L_08AB9CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9CFC;
      }
      goto L_08AB9CAC;
    }
L_08AB9CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9D90;
      }
      goto L_08AB9CB4;
    }
L_08AB9CB4:
    ctx.gpr[21] = (2278u << 16u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-11312));
    goto L_08AB9CC0;
L_08AB9CC0:
    ctx.gpr[4] = (ctx.gpr[22] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AB9CE4;
      }
      goto L_08AB9CDC;
    }
L_08AB9CDC:
    ctx.gpr[31] = (0x08AB9CE4u);
    // nop
    goto L_08ABAF30;
L_08AB9CE4:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[4] << 16u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9CC0;
      }
      goto L_08AB9CFC;
    }
L_08AB9CFC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(-5688)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2278u << 16u);
      if (branch_taken) {
          goto L_08AB9D54;
      }
      goto L_08AB9D10;
    }
L_08AB9D10:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-11312));
    goto L_08AB9D14;
L_08AB9D14:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9D38;
      }
      goto L_08AB9D30;
    }
L_08AB9D30:
    ctx.gpr[31] = (0x08AB9D38u);
    // nop
    goto L_08ABAF30;
L_08AB9D38:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(-5688)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9D14;
      }
      goto L_08AB9D54;
    }
L_08AB9D54:
    ctx.gpr[17] = (0u | 0u);
    goto L_08AB9D58;
L_08AB9D58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(101)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9D78;
      }
      goto L_08AB9D64;
    }
L_08AB9D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9D80;
      }
      goto L_08AB9D78;
    }
L_08AB9D78:
    ctx.gpr[31] = (0x08AB9D80u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08ABBCF8;
L_08AB9D80:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08AB9D58;
      }
      goto L_08AB9D90;
    }
L_08AB9D90:
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
L_08AB9DB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9DE0;
      }
      goto L_08AB9DD8;
    }
L_08AB9DD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9E28;
      }
      goto L_08AB9DE0;
    }
L_08AB9DE0:
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(28160));
    goto L_08AB9DEC;
L_08AB9DEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(101)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9E00;
      }
      goto L_08AB9DF8;
    }
L_08AB9DF8:
    ctx.gpr[31] = (0x08AB9E00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 122u, 0x08ABC6E8u>(ctx, &aot_mem) && ctx.pc == 0x08AB9E00u) goto L_08AB9E00;
    return;
L_08AB9E00:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08AB9DEC;
      }
      goto L_08AB9E10;
    }
L_08AB9E10:
    ctx.gpr[31] = (0x08AB9E18u);
    // nop
    goto L_08ABA66C;
L_08AB9E18:
    ctx.gpr[31] = (0x08AB9E20u);
    // nop
    goto L_08ABAE20;
L_08AB9E20:
    ctx.gpr[31] = (0x08AB9E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 34u, 0x0897C464u>(ctx, &aot_mem) && ctx.pc == 0x08AB9E28u) goto L_08AB9E28;
    return;
L_08AB9E28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9E3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(432)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AB9E6C;
      }
      goto L_08AB9E5C;
    }
L_08AB9E5C:
    ctx.gpr[31] = (0x08AB9E64u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08AB9B60;
L_08AB9E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9EE8;
      }
      goto L_08AB9E6C;
    }
L_08AB9E6C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(434)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AB9E88;
      }
      goto L_08AB9E78;
    }
L_08AB9E78:
    ctx.gpr[31] = (0x08AB9E80u);
    ctx.gpr[5] = (0u | 2u);
    goto L_08AB9B60;
L_08AB9E80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9EE8;
      }
      goto L_08AB9E88;
    }
L_08AB9E88:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AB9EB8;
      }
      goto L_08AB9E94;
    }
L_08AB9E94:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(78)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AB9EB8;
      }
      goto L_08AB9EA0;
    }
L_08AB9EA0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AB9EB8;
      }
      goto L_08AB9EAC;
    }
L_08AB9EAC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(82)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AB9EC8;
      }
      goto L_08AB9EB8;
    }
L_08AB9EB8:
    ctx.gpr[31] = (0x08AB9EC0u);
    ctx.gpr[5] = (0u | 3u);
    goto L_08AB9B60;
L_08AB9EC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9EE8;
      }
      goto L_08AB9EC8;
    }
L_08AB9EC8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(488)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AB9EE0;
      }
      goto L_08AB9ED4;
    }
L_08AB9ED4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(490)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AB9EE8;
      }
      goto L_08AB9EE0;
    }
L_08AB9EE0:
    ctx.gpr[31] = (0x08AB9EE8u);
    ctx.gpr[5] = (0u | 4u);
    goto L_08AB9B60;
L_08AB9EE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AB9EF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[7] & 255u);
    ctx.gpr[21] = (ctx.gpr[8] & 255u);
    ctx.gpr[20] = (ctx.gpr[9] & 255u);
    ctx.gpr[19] = (ctx.gpr[10] & 255u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AB9F40;
L_08AB9F40:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AB9F40;
      }
      goto L_08AB9F58;
    }
L_08AB9F58:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29821));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AB9F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08AB9F70u) goto L_08AB9F70;
    return;
L_08AB9F70:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(0u));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(102), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(103), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA044;
      }
      goto L_08ABA03C;
    }
L_08ABA03C:
    ctx.gpr[31] = (0x08ABA044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 658u, 0x08AA314Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABA044u) goto L_08ABA044;
    return;
L_08ABA044:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ABA054;
L_08ABA054:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ABA054;
      }
      goto L_08ABA068;
    }
L_08ABA068:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA07C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ABA0A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16448));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08ABA0A8u) goto L_08ABA0A8;
    return;
L_08ABA0A8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA0DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_08ABA0FC;
L_08ABA0FC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA120;
      }
      goto L_08ABA104;
    }
L_08ABA104:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA120;
      }
      goto L_08ABA110;
    }
L_08ABA110:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABA0FC;
      }
      goto L_08ABA120;
    }
L_08ABA120:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08ABA130u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08ABA130u) goto L_08ABA130;
    return;
L_08ABA130:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA15C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_08ABA1A8;
      }
      goto L_08ABA17C;
    }
L_08ABA17C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_08ABA184;
L_08ABA184:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[8];
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08ABA220;
      }
      goto L_08ABA194;
    }
L_08ABA194:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ABA184;
      }
      goto L_08ABA1A8;
    }
L_08ABA1A8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ABA278;
      }
      goto L_08ABA220;
    }
L_08ABA220:
    ctx.gpr[8] = (ctx.gpr[9] << 4u);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[2] + ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ABA278;
L_08ABA278:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1920));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_08ABA2A4;
L_08ABA2A4:
    ctx.gpr[31] = (0x08ABA2ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ABA020;
L_08ABA2AC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08ABA2A4;
      }
      goto L_08ABA2BC;
    }
L_08ABA2BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA2D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1920));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_08ABA2F4;
L_08ABA2F4:
    ctx.gpr[31] = (0x08ABA2FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 155u, 0x08ABCB28u>(ctx, &aot_mem) && ctx.pc == 0x08ABA2FCu) goto L_08ABA2FC;
    return;
L_08ABA2FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08ABA2F4;
      }
      goto L_08ABA30C;
    }
L_08ABA30C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA320:
    ctx.gpr[5] = (0u | 0u);
    goto L_08ABA324;
L_08ABA324:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(256), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ABA324;
      }
      goto L_08ABA338;
    }
L_08ABA338:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-464));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08ABA3A0;
      }
      goto L_08ABA398;
    }
L_08ABA398:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08ABA3A0;
L_08ABA3A0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA568;
      }
      goto L_08ABA3A8;
    }
L_08ABA3A8:
    ctx.gpr[5] = (17116u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ABA568;
      }
      goto L_08ABA3C4;
    }
L_08ABA3C4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (18154u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 24576u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (17948u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 16384u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(20400));
    ctx.gpr[8] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    goto L_08ABA42C;
L_08ABA42C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(256)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[11] = (ctx.gpr[2] - ctx.gpr[11]);
    ctx.gpr[2] = (ctx.gpr[11] < static_cast<std::uint32_t>(30001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA448;
      }
      goto L_08ABA444;
    }
L_08ABA444:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(256), 0u);
    goto L_08ABA448;
L_08ABA448:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA4D0;
      }
      goto L_08ABA454;
    }
L_08ABA454:
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    if (static_cast<std::int32_t>(ctx.gpr[11]) < 0) {
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[13];
        goto L_08ABA464;
    }
    goto L_08ABA464;
L_08ABA464:
    ctx.fpr[17] = ctx.fpr[14] - ctx.fpr[17];
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08ABA47C;
    }
    goto L_08ABA47C;
L_08ABA47C:
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(32));
    goto L_08ABA4D0;
L_08ABA4D0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ABA42C;
      }
      goto L_08ABA4E4;
    }
L_08ABA4E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA568;
      }
      goto L_08ABA4FC;
    }
L_08ABA4FC:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08ABA508u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08ABA508u) goto L_08ABA508;
    return;
L_08ABA508:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08ABA514u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08ABA514u) goto L_08ABA514;
    return;
L_08ABA514:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08ABA520u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08ABA520u) goto L_08ABA520;
    return;
L_08ABA520:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08ABA52Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08ABA52Cu) goto L_08ABA52C;
    return;
L_08ABA52C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ABA540u);
    ctx.gpr[7] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868560u>(ctx, &aot_mem) && ctx.pc == 0x08ABA540u) goto L_08ABA540;
    return;
L_08ABA540:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA568;
      }
      goto L_08ABA548;
    }
L_08ABA548:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30580));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x08ABA560u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886885Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABA560u) goto L_08ABA560;
    return;
L_08ABA560:
    ctx.gpr[31] = (0x08ABA568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868844u>(ctx, &aot_mem) && ctx.pc == 0x08ABA568u) goto L_08ABA568;
    return;
L_08ABA568:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA57C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA5EC;
      }
      goto L_08ABA590;
    }
L_08ABA590:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(256)));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA5EC;
      }
      goto L_08ABA5AC;
    }
L_08ABA5AC:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[10] = (0u | 15u);
    ctx.gpr[9] = (0u | 240u);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    goto L_08ABA5C8;
L_08ABA5C8:
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(252)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(256), ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) > 0;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08ABA5C8;
      }
      goto L_08ABA5EC;
    }
L_08ABA5EC:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA608;
      }
      goto L_08ABA5FC;
    }
L_08ABA5FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA614;
      }
      goto L_08ABA608;
    }
L_08ABA608:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(256), ctx.gpr[5]);
    goto L_08ABA614;
L_08ABA614:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA61C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8912));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08ABA640;
L_08ABA640:
    ctx.gpr[31] = (0x08ABA648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ABA320;
L_08ABA648:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_08ABA640;
      }
      goto L_08ABA658;
    }
L_08ABA658:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA66C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA6D8;
      }
      goto L_08ABA690;
    }
L_08ABA690:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7672)));
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7804)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11072)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11068)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11076)));
      if (branch_taken) {
          goto L_08ABA6E0;
      }
      goto L_08ABA6D0;
    }
L_08ABA6D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA6E4;
      }
      goto L_08ABA6D8;
    }
L_08ABA6D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA790;
      }
      goto L_08ABA6E0;
    }
L_08ABA6E0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08ABA6E4;
L_08ABA6E4:
    ctx.gpr[7] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7808)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08ABA700;
    }
    goto L_08ABA700;
L_08ABA700:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA714;
      }
      goto L_08ABA70C;
    }
L_08ABA70C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ABA714;
      }
      goto L_08ABA714;
    }
L_08ABA714:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_08ABA720;
    }
    goto L_08ABA720;
L_08ABA720:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (15232u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08ABA744;
    }
    goto L_08ABA744;
L_08ABA744:
    ctx.gpr[4] = (14545u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ABA790;
      }
      goto L_08ABA760;
    }
L_08ABA760:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8912));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08ABA774;
L_08ABA774:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ABA780u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08ABA340;
L_08ABA780:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_08ABA774;
      }
      goto L_08ABA790;
    }
L_08ABA790:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA7A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2278u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8912));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08ABA7DCu);
    // nop
    goto L_08ABA57C;
L_08ABA7DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABA7E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA868;
      }
      goto L_08ABA820;
    }
L_08ABA820:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[17] = (2u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[5] = (14409u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (2278u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8912));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ABA870;
      }
      goto L_08ABA860;
    }
L_08ABA860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA87C;
      }
      goto L_08ABA868;
    }
L_08ABA868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAC10;
      }
      goto L_08ABA870;
    }
L_08ABA870:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08ABA87C;
L_08ABA87C:
    ctx.gpr[31] = (0x08ABA884u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x08ABA884u) goto L_08ABA884;
    return;
L_08ABA884:
    ctx.gpr[4] = (17606u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ABA8B4;
      }
      goto L_08ABA8A8;
    }
L_08ABA8A8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ABA8B4;
L_08ABA8B4:
    ctx.gpr[31] = (0x08ABA8BCu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x08ABA8BCu) goto L_08ABA8BC;
    return;
L_08ABA8BC:
    ctx.gpr[4] = (17558u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17417u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(960));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08ABA8FCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08ABA57C;
L_08ABA8FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA91C;
      }
      goto L_08ABA90C;
    }
L_08ABA90C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA99C;
      }
      goto L_08ABA91C;
    }
L_08ABA91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08ABA984;
      }
      goto L_08ABA934;
    }
L_08ABA934:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 101u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x08ABA97Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08ABA97Cu) goto L_08ABA97C;
    return;
L_08ABA97C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABA99C;
      }
      goto L_08ABA984;
    }
L_08ABA984:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 101u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08ABA99Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABA99Cu) goto L_08ABA99C;
    return;
L_08ABA99C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
      if (branch_taken) {
          goto L_08ABA9BC;
      }
      goto L_08ABA9B0;
    }
L_08ABA9B0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08ABA9BC;
L_08ABA9BC:
    ctx.gpr[31] = (0x08ABA9C4u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x08ABA9C4u) goto L_08ABA9C4;
    return;
L_08ABA9C4:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ABA9F0;
      }
      goto L_08ABA9E4;
    }
L_08ABA9E4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ABA9F0;
L_08ABA9F0:
    ctx.gpr[31] = (0x08ABA9F8u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x08ABA9F8u) goto L_08ABA9F8;
    return;
L_08ABA9F8:
    ctx.gpr[4] = (50376u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(1280));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08ABAA34u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08ABA57C;
L_08ABAA34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAA54;
      }
      goto L_08ABAA44;
    }
L_08ABAA44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAAD8;
      }
      goto L_08ABAA54;
    }
L_08ABAA54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(350));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08ABAAC0;
      }
      goto L_08ABAA70;
    }
L_08ABAA70:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 102u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 128u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x08ABAAB8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08ABAAB8u) goto L_08ABAAB8;
    return;
L_08ABAAB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAAD8;
      }
      goto L_08ABAAC0;
    }
L_08ABAAC0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 102u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08ABAAD8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABAAD8u) goto L_08ABAAD8;
    return;
L_08ABAAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
      if (branch_taken) {
          goto L_08ABAAF8;
      }
      goto L_08ABAAEC;
    }
L_08ABAAEC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08ABAAF8;
L_08ABAAF8:
    ctx.gpr[31] = (0x08ABAB00u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x08ABAB00u) goto L_08ABAB00;
    return;
L_08ABAB00:
    ctx.gpr[4] = (17545u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ABAB30;
      }
      goto L_08ABAB24;
    }
L_08ABAB24:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ABAB30;
L_08ABAB30:
    ctx.gpr[31] = (0x08ABAB38u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x08ABAB38u) goto L_08ABAB38;
    return;
L_08ABAB38:
    ctx.gpr[4] = (17455u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(1600));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08ABAB74u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08ABA57C;
L_08ABAB74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAB94;
      }
      goto L_08ABAB84;
    }
L_08ABAB84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAC10;
      }
      goto L_08ABAB94;
    }
L_08ABAB94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08ABAC04;
      }
      goto L_08ABABB0;
    }
L_08ABABB0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 103u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x08ABABFCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08ABABFCu) goto L_08ABABFC;
    return;
L_08ABABFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAC10;
      }
      goto L_08ABAC04;
    }
L_08ABAC04:
    ctx.gpr[4] = (0u | 103u);
    ctx.gpr[31] = (0x08ABAC10u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 327u, 0x089FA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABAC10u) goto L_08ABAC10;
    return;
L_08ABAC10:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABAC3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (49776u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_08ABAC60;
L_08ABAC60:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ABAC60;
      }
      goto L_08ABAC84;
    }
L_08ABAC84:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABAC8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABACC4;
      }
      goto L_08ABACA0;
    }
L_08ABACA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (49736u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ABACCC;
      }
      goto L_08ABACBC;
    }
L_08ABACBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABADB8;
      }
      goto L_08ABACC4;
    }
L_08ABACC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABADB8;
      }
      goto L_08ABACCC;
    }
L_08ABACCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08ABAD08;
    }
    goto L_08ABAD08;
L_08ABAD08:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (0u | 16u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-16));
    goto L_08ABAD38;
L_08ABAD38:
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ABADA4;
      }
      goto L_08ABAD74;
    }
L_08ABAD74:
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[10]);
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08ABADA4;
L_08ABADA4:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ABAD38;
      }
      goto L_08ABADB8;
    }
L_08ABADB8:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABADC0:
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
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABADD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08ABADF4;
L_08ABADF4:
    ctx.gpr[31] = (0x08ABADFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ABAC3C;
L_08ABADFC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08ABADF4;
      }
      goto L_08ABAE0C;
    }
L_08ABAE0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABAE20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAE58;
      }
      goto L_08ABAE40;
    }
L_08ABAE40:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08ABAE60;
      }
      goto L_08ABAE58;
    }
L_08ABAE58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAE78;
      }
      goto L_08ABAE60;
    }
L_08ABAE60:
    ctx.gpr[31] = (0x08ABAE68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 198u, 0x08ABD064u>(ctx, &aot_mem) && ctx.pc == 0x08ABAE68u) goto L_08ABAE68;
    return;
L_08ABAE68:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08ABAE60;
      }
      goto L_08ABAE78;
    }
L_08ABAE78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABAE8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAEC4;
      }
      goto L_08ABAEAC;
    }
L_08ABAEAC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08ABAECC;
      }
      goto L_08ABAEC4;
    }
L_08ABAEC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABAEE4;
      }
      goto L_08ABAECC;
    }
L_08ABAECC:
    ctx.gpr[31] = (0x08ABAED4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ABAC8C;
L_08ABAED4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08ABAECC;
      }
      goto L_08ABAEE4;
    }
L_08ABAEE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABAEF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] << 7u);
    ctx.gpr[6] = (2278u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08ABAF24u);
    // nop
    goto L_08ABADC0;
L_08ABAF24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABAF30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[31]);
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(13216));
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ABAF9C;
      }
      goto L_08ABAF78;
    }
L_08ABAF78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB518;
      }
      goto L_08ABAF80;
    }
L_08ABAF80:
    ctx.gpr[17] = (2230u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16256u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ABAFB8;
      }
      goto L_08ABAF94;
    }
L_08ABAF94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB268;
      }
      goto L_08ABAF9C;
    }
L_08ABAF9C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08ABB324;
      }
      goto L_08ABAFA8;
    }
L_08ABAFA8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB3F0;
      }
      goto L_08ABAFB0;
    }
L_08ABAFB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB518;
      }
      goto L_08ABAFB8;
    }
L_08ABAFB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] & 16383u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.gpr[17] = (2230u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ABAFE0;
      }
      goto L_08ABAFD4;
    }
L_08ABAFD4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08ABAFE0;
L_08ABAFE0:
    ctx.gpr[4] = (14793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20156)));
        goto L_08ABB08C;
    }
    goto L_08ABB080;
L_08ABB080:
    ctx.gpr[31] = (0x08ABB088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB088u) goto L_08ABB088;
    return;
L_08ABB088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20156)));
    goto L_08ABB08C;
L_08ABB08C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3936)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB0CC;
      }
      goto L_08ABB09C;
    }
L_08ABB09C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08ABB0B4;
    }
    goto L_08ABB0A8;
L_08ABB0A8:
    ctx.gpr[31] = (0x08ABB0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08ABB0B0u) goto L_08ABB0B0;
    return;
L_08ABB0B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08ABB0B4;
L_08ABB0B4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20156)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(4769), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[31] = (0x08ABB0CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4688));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08ABB0CCu) goto L_08ABB0CC;
    return;
L_08ABB0CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB0EC;
      }
      goto L_08ABB0DC;
    }
L_08ABB0DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB260;
      }
      goto L_08ABB0EC;
    }
L_08ABB0EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (17430u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08ABB114;
    }
    goto L_08ABB114;
L_08ABB114:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ABB260;
      }
      goto L_08ABB124;
    }
L_08ABB124:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08ABB144;
    }
    goto L_08ABB144;
L_08ABB144:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ABB260;
      }
      goto L_08ABB154;
    }
L_08ABB154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[26] / ctx.fpr[12];
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
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (49003u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 34079u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ABB260;
      }
      goto L_08ABB1E0;
    }
L_08ABB1E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
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
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 43u);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 100u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08ABB260u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08ABB260u) goto L_08ABB260;
    return;
L_08ABB260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB518;
      }
      goto L_08ABB268;
    }
L_08ABB268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ABB288;
      }
      goto L_08ABB27C;
    }
L_08ABB27C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ABB288;
L_08ABB288:
    ctx.gpr[4] = (15177u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB518;
      }
      goto L_08ABB324;
    }
L_08ABB324:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] & 1023u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ABB348;
      }
      goto L_08ABB33C;
    }
L_08ABB33C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ABB348;
L_08ABB348:
    ctx.gpr[4] = (15305u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB518;
      }
      goto L_08ABB3F0;
    }
L_08ABB3F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ABB41C;
      }
      goto L_08ABB410;
    }
L_08ABB410:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ABB41C;
L_08ABB41C:
    ctx.gpr[4] = (14281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17327u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (50152u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17553u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24576u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17282u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB518;
      }
      goto L_08ABB518;
    }
L_08ABB518:
    ctx.gpr[31] = (0x08ABB520u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08ABB520u) goto L_08ABB520;
    return;
L_08ABB520:
    ctx.gpr[31] = (0x08ABB528u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08ABB528u) goto L_08ABB528;
    return;
L_08ABB528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28140));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ABB5A4;
      }
      goto L_08ABB57C;
    }
L_08ABB57C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ABB5C0;
      }
      goto L_08ABB58C;
    }
L_08ABB58C:
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9008));
    ctx.gpr[31] = (0x08ABB59Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB9B04;
L_08ABB59C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08ABB5C0;
      }
      goto L_08ABB5A4;
    }
L_08ABB5A4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB5C0;
      }
      goto L_08ABB5B0;
    }
L_08ABB5B0:
    ctx.gpr[31] = (0x08ABB5B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AB9B20;
L_08ABB5B8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08ABB5C0;
L_08ABB5C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABB5F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB644;
      }
      goto L_08ABB634;
    }
L_08ABB634:
    ctx.gpr[31] = (0x08ABB63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 330u, 0x08AE5CE4u>(ctx, &aot_mem) && ctx.pc == 0x08ABB63Cu) goto L_08ABB63C;
    return;
L_08ABB63C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBCC0;
      }
      goto L_08ABB644;
    }
L_08ABB644:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8960));
    ctx.gpr[6] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-9008), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9008));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-8960), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[31] = (0x08ABB66Cu);
    // nop
    goto L_08ABA61C;
L_08ABB66C:
    ctx.gpr[31] = (0x08ABB674u);
    // nop
    goto L_08ABADD0;
L_08ABB674:
    ctx.gpr[31] = (0x08ABB67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 330u, 0x08AE5CE4u>(ctx, &aot_mem) && ctx.pc == 0x08ABB67Cu) goto L_08ABB67C;
    return;
L_08ABB67C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5688), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11312));
    goto L_08ABB690;
L_08ABB690:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08ABB690;
      }
      goto L_08ABB6A8;
    }
L_08ABB6A8:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08ABB6B4;
L_08ABB6B4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[18] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[17]);
    goto L_08ABB6C8;
L_08ABB6C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB6F4;
      }
      goto L_08ABB6DC;
    }
L_08ABB6DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ABB6E8u);
    // nop
    goto L_08AB9E3C;
L_08ABB6E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB6DC;
      }
      goto L_08ABB6F4;
    }
L_08ABB6F4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08ABB6C8;
      }
      goto L_08ABB704;
    }
L_08ABB704:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_08ABB6B4;
      }
      goto L_08ABB714;
    }
L_08ABB714:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[16] = (0u | 0u);
    goto L_08ABB720;
L_08ABB720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20980)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB74C;
      }
      goto L_08ABB734;
    }
L_08ABB734:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ABB740u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AB9E3C;
L_08ABB740:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ABB734;
      }
      goto L_08ABB74C;
    }
L_08ABB74C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ABB720;
      }
      goto L_08ABB75C;
    }
L_08ABB75C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(28160));
    ctx.gpr[4] = (17252u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (50215u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (16926u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (50210u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16936u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 128u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08ABB7E8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AB9EF4;
L_08ABB7E8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (50312u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 17285u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (50194u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 3670u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16723u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 61342u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (50195u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49938u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16732u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32506u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (15841u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 18350u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08ABB86Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08AB9EF4;
L_08ABB86C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (50198u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 33522u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (50200u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14254u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08ABB8C0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08AB9EF4;
L_08ABB8C0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (50202u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 62538u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (50204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 43270u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 128u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08ABB914u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08AB9EF4;
L_08ABB914:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
    ctx.gpr[5] = (50236u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 34046u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (50206u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 24723u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16791u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 18874u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (50200u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 30622u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16812u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 5767u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (0u | 100u);
    ctx.gpr[9] = (0u | 100u);
    ctx.gpr[10] = (0u | 255u);
    ctx.gpr[31] = (0x08ABB98Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AB9EF4;
L_08ABB98C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(560));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (50194u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 43778u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (50188u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49676u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (0u | 100u);
    ctx.gpr[9] = (0u | 100u);
    ctx.gpr[10] = (0u | 255u);
    ctx.gpr[31] = (0x08ABB9E0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AB9EF4;
L_08ABB9E0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(672));
    ctx.gpr[5] = (17066u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 61997u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (50309u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49250u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16888u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 30999u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (50311u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 8290u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16905u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 25690u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[8] = (0u | 100u);
    ctx.gpr[9] = (0u | 100u);
    ctx.gpr[10] = (0u | 255u);
    ctx.gpr[31] = (0x08ABBA60u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AB9EF4;
L_08ABBA60:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(784));
    ctx.gpr[5] = (17045u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 42336u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (50311u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52257u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16882u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 524u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (50311u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 19759u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16899u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 41681u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 128u);
    ctx.gpr[31] = (0x08ABBAE0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AB9EF4;
L_08ABBAE0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(896));
    ctx.gpr[5] = (49643u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 47186u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (50305u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 22471u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16898u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 8913u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (49689u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 22020u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (50305u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 3760u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16902u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 46924u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 150u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 50u);
    ctx.gpr[31] = (0x08ABBB64u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08AB9EF4;
L_08ABBB64:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1008));
    ctx.gpr[5] = (49683u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 54788u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (50304u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55190u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (49718u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 59507u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (50304u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 33202u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 150u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 50u);
    ctx.gpr[31] = (0x08ABBBD0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08AB9EF4;
L_08ABBBD0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1120));
    ctx.gpr[5] = (49717u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (50304u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26518u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (49748u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 37749u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (50304u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 6177u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 150u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 50u);
    ctx.gpr[31] = (0x08ABBC3Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08AB9EF4;
L_08ABBC3C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1232));
    ctx.gpr[5] = (17558u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 61440u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (49789u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 18612u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16796u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (17559u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 38683u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (49804u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 28443u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16808u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 29884u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 128u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08ABBCC0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AB9EF4;
L_08ABBCC0:
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
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBCF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ABBDA0;
      }
      goto L_08ABBD74;
    }
L_08ABBD74:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17046u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABBDAC;
      }
      goto L_08ABBD98;
    }
L_08ABBD98:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08ABBDC8;
      }
      goto L_08ABBDA0;
    }
L_08ABBDA0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 121u, 0x08ABC6B4u>(ctx, &aot_mem); return;
      }
      goto L_08ABBDAC;
    }
L_08ABBDAC:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ABBDC8;
L_08ABBDC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 116u, 0x08ABC648u>(ctx, &aot_mem); return;
      }
      goto L_08ABBDE0;
    }
L_08ABBDE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 116u, 0x08ABC648u>(ctx, &aot_mem); return;
      }
      goto L_08ABBDFC;
    }
L_08ABBDFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 114u, 0x08ABC638u>(ctx, &aot_mem); return;
      }
      goto L_08ABBE10;
    }
L_08ABBE10:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16416)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBE28:
    ctx.gpr[30] = (0u | 7u);
    ctx.gpr[20] = (2229u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(29824));
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(29869));
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(29907));
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[21] = (0u | 2u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-30712));
    goto L_08ABBE58;
L_08ABBE58:
    ctx.gpr[31] = (0x08ABBE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08ABBE60u) goto L_08ABBE60;
    return;
L_08ABBE60:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBF28;
      }
      goto L_08ABBE78;
    }
L_08ABBE78:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16384)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBE90:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08ABBF2C;
      }
      goto L_08ABBE9C;
    }
L_08ABBE9C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ABBF2C;
      }
      goto L_08ABBEA8;
    }
L_08ABBEA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08ABBF2C;
      }
      goto L_08ABBEB4;
    }
L_08ABBEB4:
    ctx.gpr[31] = (0x08ABBEBCu);
    // nop
    goto L_08AB99FC;
L_08ABBEBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ABBF2C;
      }
      goto L_08ABBEC8;
    }
L_08ABBEC8:
    ctx.gpr[31] = (0x08ABBED0u);
    // nop
    goto L_08AB9A44;
L_08ABBED0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ABBF2C;
      }
      goto L_08ABBEDC;
    }
L_08ABBEDC:
    ctx.gpr[31] = (0x08ABBEE4u);
    // nop
    goto L_08AB9A8C;
L_08ABBEE4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ABBF2C;
      }
      goto L_08ABBEF0;
    }
L_08ABBEF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-25444)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08ABBF04;
      }
      goto L_08ABBEFC;
    }
L_08ABBEFC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08ABBF18;
      }
      goto L_08ABBF04;
    }
L_08ABBF04:
    ctx.gpr[31] = (0x08ABBF0Cu);
    // nop
    goto L_08AB9A8C;
L_08ABBF0C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ABBF20;
      }
      goto L_08ABBF18;
    }
L_08ABBF18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ABBF20;
L_08ABBF20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ABBF2C;
      }
      goto L_08ABBF28;
    }
L_08ABBF28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08ABBF2C;
L_08ABBF2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ABBE58;
      }
      goto L_08ABBF38;
    }
L_08ABBF38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 114u, 0x08ABC638u>(ctx, &aot_mem); return;
      }
      goto L_08ABBF40;
    }
L_08ABBF40:
    ctx.gpr[23] = (2229u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(29971));
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(30024));
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(30072));
    ctx.gpr[20] = (2229u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(30131));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(29989));
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(30007));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(30156));
    goto L_08ABBF84;
L_08ABBF84:
    ctx.gpr[31] = (0x08ABBF8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08ABBF8Cu) goto L_08ABBF8C;
    return;
L_08ABBF8C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_08ABBFA8;
    }
    goto L_08ABBF98;
L_08ABBF98:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ABBFA8;
      }
      goto L_08ABBFA8;
    }
L_08ABBFA8:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 13u, 0x08ABC08Cu>(ctx, &aot_mem); return;
      }
      goto L_08ABBFB4;
    }
L_08ABBFB4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16352)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ABBFCC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 14u, 0x08ABC090u>(ctx, &aot_mem); return;
      }
      goto L_08ABBFD8;
    }
L_08ABBFD8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 14u, 0x08ABC090u>(ctx, &aot_mem); return;
      }
      goto L_08ABBFE4;
    }
L_08ABBFE4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 14u, 0x08ABC090u>(ctx, &aot_mem); return;
      }
      goto L_08ABBFF0;
    }
L_08ABBFF0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 14u, 0x08ABC090u>(ctx, &aot_mem); return;
      }
      goto L_08ABBFFC;
    }
L_08ABBFFC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.pc = 0x08ABC000u; return;
}

void recomp_unit_0173(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0173_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_173(Runtime &runtime) {
    runtime.register_generated_unit(173u, 0x08AB8000u, 16384u, &recomp_unit_0173, &recomp_unit_0173_entry);
    runtime.register_function(0x08AB8000u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8018u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8020u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB802Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8044u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB805Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8074u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB808Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8090u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB80F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8104u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB810Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8114u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8120u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8130u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8134u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB814Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8170u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB817Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8184u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8190u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8198u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB81F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8214u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8220u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8228u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8234u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB823Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB824Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8254u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB825Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8268u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8278u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB827Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8294u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB82F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8310u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8314u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB832Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8340u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8350u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8374u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8380u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8388u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8394u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB839Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB83ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8410u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB841Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8424u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8430u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8438u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8448u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8450u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8458u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8464u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8474u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8478u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8490u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB84C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB84D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB84FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8504u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8510u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8520u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB852Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB853Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8544u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8550u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8558u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8560u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8570u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB857Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8584u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB858Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8598u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB85B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8658u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB866Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8684u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB868Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8694u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB869Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB86F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8708u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB870Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8710u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8720u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8734u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8774u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8790u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB87F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8824u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB883Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8850u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB885Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8864u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8878u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8884u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8890u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB889Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB88A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB88ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB88C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB896Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8978u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8994u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB89A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB89C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB89D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB89E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB89ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8A48u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AB4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AD0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8ADCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8AF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B08u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B10u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B14u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B44u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B50u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B5Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B68u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8B90u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BDCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BE8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BF4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8BF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C00u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C0Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8C64u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D08u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D10u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D20u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D30u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D58u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8D78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8DB4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8DC0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8DFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E0Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E30u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8E7Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8EBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8EC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8ED4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8EE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8EE8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8EF0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F0Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F2Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F68u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8F90u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8FC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8FCCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8FD8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8FE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB8FFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9020u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9028u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9038u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9048u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB904Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9054u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9058u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9070u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9090u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB90F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB911Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9128u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9134u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB913Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9144u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9150u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9158u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9168u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB916Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9170u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9178u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9180u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9188u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB91F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9214u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB924Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9258u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9354u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9358u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9368u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9374u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9384u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB93F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9404u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB940Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9418u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB942Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9434u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9444u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9454u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9458u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9464u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB946Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9480u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB94A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB94C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB94D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB94F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB94FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9520u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9530u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB953Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9544u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9554u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9560u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9570u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9574u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9580u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB958Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB95A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB962Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9638u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB963Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9654u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9664u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB966Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9674u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9688u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB96D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB96E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9700u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9758u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9768u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9770u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9790u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB97E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB97ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB97FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB980Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9840u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB985Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9878u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB988Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9898u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98D4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB98E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9910u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB99FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A0Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A1Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A44u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A64u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A7Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9A8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B20u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B44u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B58u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9B80u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9BDCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9BECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9BF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C08u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C44u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9C4Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9CA4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9CACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9CB4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9CC0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9CDCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9CE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9CFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D10u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D14u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D30u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D58u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D64u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D80u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9D90u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9DB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9DD8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9DE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9DECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9DF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E00u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E10u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E18u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E20u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E5Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E64u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E6Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E80u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E88u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9E94u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9EA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9EACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9EB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9EC0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9EC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9ED4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9EE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9EE8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9EF4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9F40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9F58u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08AB9F70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA020u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA03Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA044u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA054u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA068u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA07Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA0A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA0DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA0FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA104u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA110u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA120u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA130u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA15Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA17Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA184u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA194u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA1A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA220u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA278u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA280u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA2FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA30Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA320u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA324u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA338u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA340u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA398u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA3A0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA3A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA3C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA42Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA444u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA448u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA454u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA464u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA47Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA4FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA508u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA514u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA520u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA52Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA540u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA548u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA560u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA568u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA57Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA590u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA5ACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA5C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA5ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA5FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA608u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA614u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA61Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA640u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA648u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA658u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA66Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA690u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA6D0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA6D8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA6E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA6E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA700u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA70Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA714u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA720u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA744u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA760u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA774u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA780u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA790u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA7E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA820u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA860u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA868u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA870u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA87Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA884u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA8A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA8B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA8BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA8FCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA90Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA91Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA934u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA97Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA984u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA99Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA9B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA9BCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA9C4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA9E4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA9F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABA9F8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA34u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA44u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA54u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAA70u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAC0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAD8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAAF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB00u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB30u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAB94u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABB0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABABFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC10u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAC8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABACA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABACBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABACC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABACCCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD08u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAD74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADA4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADC0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADD0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADF4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABADFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE0Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE20u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE58u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE68u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAE8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAEACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAEC4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAECCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAED4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAEE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAEF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF24u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF30u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF80u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF94u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAF9Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFB0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFB8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFD4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABAFE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB080u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB088u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB08Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB09Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0CCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB0ECu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB114u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB124u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB144u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB154u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB1E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB260u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB268u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB27Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB288u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB324u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB33Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB348u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB3F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB410u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB41Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB518u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB520u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB528u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB57Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB58Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB59Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5A4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5B0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5B8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB5F0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB634u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB63Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB644u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB66Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB674u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB67Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB690u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6A8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6B4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6C8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6DCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB6F4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB704u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB714u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB720u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB734u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB740u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB74Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB75Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB7E8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB86Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB8C0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB914u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB98Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABB9E0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBA60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBAE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBB64u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBBD0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBC3Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBCC0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBCF8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD74u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBD98u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDA0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDACu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDE0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBDFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE10u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE58u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE60u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE78u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE90u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBE9Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEB4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEBCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEC8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBED0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEDCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEF0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBEFCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF04u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF0Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF18u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF20u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF28u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF2Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF38u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF40u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF84u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF8Cu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBF98u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBFA8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBFB4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBFCCu, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBFD8u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBFE4u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBFF0u, &recomp_unit_0173, "recomp_unit_0173");
    runtime.register_function(0x08ABBFFCu, &recomp_unit_0173, "recomp_unit_0173");
}
} // namespace psprecomp
