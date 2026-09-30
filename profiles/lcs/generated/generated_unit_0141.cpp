#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0141[4089] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8,
    0, 0, 9, 10, 0, 11, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0,
    0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 20, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 42, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 43, 44, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0,
    55, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0,
    0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0,
    0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 82, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0,
    0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0,
    93, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0,
    0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 127, 128, 0, 0, 0, 0, 129,
    0, 130, 0, 0, 131, 132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 135, 136, 0, 0, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141,
    142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144,
    0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 0, 0,
    0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162,
    0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 170, 0, 0, 171, 0,
    172, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    177, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0,
    186, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 204, 205,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0,
    0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0,
    0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 223,
    0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 245, 0, 0, 0, 0, 246, 0, 247, 0, 248, 0, 249, 0, 0, 0, 250, 0, 251, 0, 0, 0,
    252, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 257, 0, 0, 258, 0, 259, 0, 260, 0, 0, 0, 261, 0, 262, 0, 0,
    0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 268, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272,
    0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279,
    0, 0, 0, 0, 280, 0, 281, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293,
    0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0,
    0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 312, 0, 0, 0, 0, 0, 313, 314, 0, 315, 0, 316, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320,
    0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 325, 0, 0, 0, 326, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0,
    0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 336,
    0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 341, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0,
    0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 368, 0, 369, 0, 0, 370, 0, 0, 371,
    0, 372, 373, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0,
    0, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0,
    0, 386, 0, 0, 387, 0, 388, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392,
    0, 0, 0, 393, 0, 0, 394, 395, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0,
    400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0,
    407, 0, 408, 0, 409, 0, 0, 410, 0, 411, 412, 0, 413, 0, 0, 414, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0,
    0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 423, 424, 0, 0, 0, 0, 425, 0,
    0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 430, 0, 0, 431, 0, 432, 0, 433, 0, 0,
    434, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 441, 0, 0, 442, 0, 443,
    0, 444, 0, 0, 445, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451,
    0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 454, 0, 0, 455, 0, 456, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0,
    461, 0, 0, 462, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 465, 0, 0, 466, 0, 467, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0,
    471, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 0,
    484, 0, 0, 485, 486, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 494, 0, 0, 495, 0, 0, 0, 0, 496, 497, 0, 0, 498, 0, 499,
    0, 0, 0, 500, 0, 501, 0, 502, 0, 0, 0, 0, 0, 503, 0, 504, 0, 505, 0, 0, 0, 506, 0, 507, 0, 0, 508, 0, 0, 0, 509, 0,
    0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 512, 0, 0, 0, 513, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0,
    517, 0, 518, 0, 0, 0, 0, 0, 0, 519, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 525, 0, 526,
    0, 0, 527, 0, 0, 528, 0, 529, 0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 0, 535, 0,
    0, 0, 536, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 0,
    0, 544, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0,
    0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 552, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 556, 0, 0, 557, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 0, 0,
    0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 568, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0,
    0, 0, 571, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 577, 0, 578, 0, 579, 0,
    0, 0, 0, 580, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 585, 0, 586, 0, 587, 0, 0, 588, 0, 0,
    0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0,
    0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 598, 599, 0, 600, 0, 601, 0, 602,
    0, 0, 603, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 608, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 611, 0, 0, 612, 0, 0, 613, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0,
    0, 616, 0, 0, 617, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0, 625, 0, 0, 626, 0,
    0, 0, 627, 0, 0, 628, 0, 629, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 634, 0, 0, 635, 0, 636, 0, 0,
    637, 0, 0, 0, 638, 0, 639, 0, 0, 640, 0, 641, 0, 642, 0, 643, 0, 644, 645, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 648, 0,
    0, 649, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    653, 0, 0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 660,
    0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 663, 0, 0, 664, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 0,
    0, 669, 0, 0, 670, 0, 0, 0, 671, 0, 0, 672, 0, 673, 0, 674, 0, 0, 675, 0, 0, 0, 676, 0, 0, 677, 0, 678, 0, 679, 0, 0,
    680, 0, 681, 0, 682, 0, 0, 683, 0, 684, 0, 685, 0, 0, 686, 0, 687, 0, 688, 0, 689, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 691,
    0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 0, 697, 0,
    0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 0,
    702, 0, 0, 0, 0, 703, 704, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 707, 0, 708, 0, 709, 0, 0, 710, 0, 711, 0, 0, 712,
    0, 0, 0, 713, 0, 714, 0, 0, 715, 0, 716, 0, 717, 0, 718, 0, 719, 720, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0,
    724, 725, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728,
    0, 0, 729, 0, 0, 730, 0, 0, 0, 731, 0, 732, 0, 733, 0, 734, 0, 735, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0,
    0, 0, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0,
    745, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 749, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0,
    0, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 756, 757, 0, 0,
    758, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0, 0, 762, 0, 0, 763, 0, 0, 764, 0, 0, 765, 0, 0, 766, 0, 0, 767,
    0, 0, 0, 768, 0, 0, 769, 0, 770, 0, 771, 0, 0, 772, 0, 0, 0, 773, 0, 0, 774, 0, 775, 0, 0, 0, 776, 0, 777, 0, 0, 0,
    0, 0, 0, 778, 0, 779, 0, 780, 0, 0, 781, 0, 782, 0, 0, 783, 0, 0, 0, 784, 0, 785, 0, 0, 786, 0, 787, 0, 788, 0, 789, 0,
    790, 791, 0, 0, 0, 792, 0, 793, 0, 0, 0, 0, 0, 794, 0, 0, 795, 796, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 798, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 802, 803, 0, 804, 0, 0,
    0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 806, 0, 0, 0, 807, 808, 0, 809, 0, 810, 0, 0, 0, 811, 0, 0, 812, 0, 0, 0, 813,
    0, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 816, 0, 817, 0, 0, 0, 0, 818, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 822, 0, 0, 823, 824, 0, 825, 0, 0, 0, 826, 0, 0, 0, 0, 0, 827, 0,
    828, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 831, 0, 832, 0, 0, 833, 0, 0, 0, 0, 834, 0, 0, 835,
    0, 836, 0, 0, 0, 837, 0, 0, 0, 0, 838, 0, 0, 0, 0, 839, 0, 840, 0, 0, 0, 841, 0, 0, 0, 0, 842, 0, 0, 843, 0, 844,
    0, 0, 0, 0, 0, 845, 0, 0, 846, 0, 0, 0, 0, 0, 0, 847, 0, 0, 848, 0, 0, 849, 0, 0, 850, 0, 0, 0, 0, 851, 0, 0,
    0, 0, 852, 0, 0, 0, 853, 0, 0, 0, 854, 0, 0, 855, 0, 0, 0, 0, 856, 0, 857, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0, 0,
    0, 859, 0, 0, 860, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 863,
};
void recomp_unit_0141_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A38000u;
        entry_id = (entry_delta < 16356u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0141[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A38000;
    case 2u: goto L_08A38004;
    case 3u: goto L_08A3800C;
    case 4u: goto L_08A38038;
    case 5u: goto L_08A38044;
    case 6u: goto L_08A38050;
    case 7u: goto L_08A380EC;
    case 8u: goto L_08A380FC;
    case 9u: goto L_08A38108;
    case 10u: goto L_08A3810C;
    case 11u: goto L_08A38114;
    case 12u: goto L_08A38118;
    case 13u: goto L_08A38140;
    case 14u: goto L_08A3814C;
    case 15u: goto L_08A381F8;
    case 16u: goto L_08A38204;
    case 17u: goto L_08A38298;
    case 18u: goto L_08A382A8;
    case 19u: goto L_08A382B4;
    case 20u: goto L_08A382B8;
    case 21u: goto L_08A382C0;
    case 22u: goto L_08A382D4;
    case 23u: goto L_08A3831C;
    case 24u: goto L_08A3834C;
    case 25u: goto L_08A38368;
    case 26u: goto L_08A38374;
    case 27u: goto L_08A383B4;
    case 28u: goto L_08A383C8;
    case 29u: goto L_08A383CC;
    case 30u: goto L_08A3840C;
    case 31u: goto L_08A38448;
    case 32u: goto L_08A38450;
    case 33u: goto L_08A38470;
    case 34u: goto L_08A38490;
    case 35u: goto L_08A384C4;
    case 36u: goto L_08A3856C;
    case 37u: goto L_08A38584;
    case 38u: goto L_08A385A0;
    case 39u: goto L_08A385B8;
    case 40u: goto L_08A385D0;
    case 41u: goto L_08A385E8;
    case 42u: goto L_08A385EC;
    case 43u: goto L_08A38620;
    case 44u: goto L_08A38624;
    case 45u: goto L_08A38630;
    case 46u: goto L_08A38648;
    case 47u: goto L_08A38650;
    case 48u: goto L_08A38660;
    case 49u: goto L_08A3867C;
    case 50u: goto L_08A38694;
    case 51u: goto L_08A386AC;
    case 52u: goto L_08A386C4;
    case 53u: goto L_08A386E0;
    case 54u: goto L_08A386E8;
    case 55u: goto L_08A38700;
    case 56u: goto L_08A38708;
    case 57u: goto L_08A38714;
    case 58u: goto L_08A38734;
    case 59u: goto L_08A38748;
    case 60u: goto L_08A3874C;
    case 61u: goto L_08A38758;
    case 62u: goto L_08A38770;
    case 63u: goto L_08A38778;
    case 64u: goto L_08A38788;
    case 65u: goto L_08A387A0;
    case 66u: goto L_08A387B8;
    case 67u: goto L_08A387D0;
    case 68u: goto L_08A387E8;
    case 69u: goto L_08A38804;
    case 70u: goto L_08A3880C;
    case 71u: goto L_08A38824;
    case 72u: goto L_08A38838;
    case 73u: goto L_08A38840;
    case 74u: goto L_08A3885C;
    case 75u: goto L_08A38864;
    case 76u: goto L_08A38894;
    case 77u: goto L_08A388B4;
    case 78u: goto L_08A3891C;
    case 79u: goto L_08A3892C;
    case 80u: goto L_08A38938;
    case 81u: goto L_08A38968;
    case 82u: goto L_08A3896C;
    case 83u: goto L_08A389A8;
    case 84u: goto L_08A389B8;
    case 85u: goto L_08A389F4;
    case 86u: goto L_08A38A10;
    case 87u: goto L_08A38A18;
    case 88u: goto L_08A38A20;
    case 89u: goto L_08A38A2C;
    case 90u: goto L_08A38A3C;
    case 91u: goto L_08A38A50;
    case 92u: goto L_08A38A74;
    case 93u: goto L_08A38A80;
    case 94u: goto L_08A38A94;
    case 95u: goto L_08A38AA4;
    case 96u: goto L_08A38AB0;
    case 97u: goto L_08A38AB8;
    case 98u: goto L_08A38AC0;
    case 99u: goto L_08A38AF0;
    case 100u: goto L_08A38B08;
    case 101u: goto L_08A38B20;
    case 102u: goto L_08A38B30;
    case 103u: goto L_08A38B38;
    case 104u: goto L_08A38B48;
    case 105u: goto L_08A38B64;
    case 106u: goto L_08A38B78;
    case 107u: goto L_08A38BA4;
    case 108u: goto L_08A38BBC;
    case 109u: goto L_08A38BC8;
    case 110u: goto L_08A38BF0;
    case 111u: goto L_08A38C20;
    case 112u: goto L_08A38C5C;
    case 113u: goto L_08A38C88;
    case 114u: goto L_08A38CB4;
    case 115u: goto L_08A38D10;
    case 116u: goto L_08A38D18;
    case 117u: goto L_08A38D44;
    case 118u: goto L_08A38D50;
    case 119u: goto L_08A38D90;
    case 120u: goto L_08A38E08;
    case 121u: goto L_08A38E10;
    case 122u: goto L_08A38E20;
    case 123u: goto L_08A38E30;
    case 124u: goto L_08A38E38;
    case 125u: goto L_08A38E50;
    case 126u: goto L_08A38E58;
    case 127u: goto L_08A38E64;
    case 128u: goto L_08A38E68;
    case 129u: goto L_08A38E7C;
    case 130u: goto L_08A38E84;
    case 131u: goto L_08A38E90;
    case 132u: goto L_08A38E94;
    case 133u: goto L_08A38EA8;
    case 134u: goto L_08A38EB0;
    case 135u: goto L_08A38EBC;
    case 136u: goto L_08A38EC0;
    case 137u: goto L_08A38ED4;
    case 138u: goto L_08A38EDC;
    case 139u: goto L_08A38EE8;
    case 140u: goto L_08A38F50;
    case 141u: goto L_08A38F7C;
    case 142u: goto L_08A38F80;
    case 143u: goto L_08A38FB4;
    case 144u: goto L_08A38FFC;
    case 145u: goto L_08A39004;
    case 146u: goto L_08A39010;
    case 147u: goto L_08A39018;
    case 148u: goto L_08A39020;
    case 149u: goto L_08A39028;
    case 150u: goto L_08A3905C;
    case 151u: goto L_08A3907C;
    case 152u: goto L_08A3909C;
    case 153u: goto L_08A390A4;
    case 154u: goto L_08A390D4;
    case 155u: goto L_08A390DC;
    case 156u: goto L_08A390E4;
    case 157u: goto L_08A390EC;
    case 158u: goto L_08A3910C;
    case 159u: goto L_08A39130;
    case 160u: goto L_08A39140;
    case 161u: goto L_08A39148;
    case 162u: goto L_08A3917C;
    case 163u: goto L_08A3918C;
    case 164u: goto L_08A391A0;
    case 165u: goto L_08A391AC;
    case 166u: goto L_08A391C0;
    case 167u: goto L_08A391CC;
    case 168u: goto L_08A391DC;
    case 169u: goto L_08A391E8;
    case 170u: goto L_08A391EC;
    case 171u: goto L_08A391F8;
    case 172u: goto L_08A39200;
    case 173u: goto L_08A39204;
    case 174u: goto L_08A39228;
    case 175u: goto L_08A39248;
    case 176u: goto L_08A39250;
    case 177u: goto L_08A39280;
    case 178u: goto L_08A392A0;
    case 179u: goto L_08A392B0;
    case 180u: goto L_08A392D0;
    case 181u: goto L_08A3931C;
    case 182u: goto L_08A39328;
    case 183u: goto L_08A3932C;
    case 184u: goto L_08A3933C;
    case 185u: goto L_08A39360;
    case 186u: goto L_08A39380;
    case 187u: goto L_08A3938C;
    case 188u: goto L_08A39394;
    case 189u: goto L_08A393A4;
    case 190u: goto L_08A393B4;
    case 191u: goto L_08A39418;
    case 192u: goto L_08A3942C;
    case 193u: goto L_08A39440;
    case 194u: goto L_08A39458;
    case 195u: goto L_08A3946C;
    case 196u: goto L_08A39480;
    case 197u: goto L_08A394BC;
    case 198u: goto L_08A394CC;
    case 199u: goto L_08A394DC;
    case 200u: goto L_08A394F0;
    case 201u: goto L_08A39504;
    case 202u: goto L_08A3951C;
    case 203u: goto L_08A39560;
    case 204u: goto L_08A39578;
    case 205u: goto L_08A3957C;
    case 206u: goto L_08A39648;
    case 207u: goto L_08A3965C;
    case 208u: goto L_08A3966C;
    case 209u: goto L_08A39678;
    case 210u: goto L_08A3968C;
    case 211u: goto L_08A3969C;
    case 212u: goto L_08A396BC;
    case 213u: goto L_08A396CC;
    case 214u: goto L_08A396DC;
    case 215u: goto L_08A396E8;
    case 216u: goto L_08A396F8;
    case 217u: goto L_08A39708;
    case 218u: goto L_08A39714;
    case 219u: goto L_08A39734;
    case 220u: goto L_08A39748;
    case 221u: goto L_08A39758;
    case 222u: goto L_08A39760;
    case 223u: goto L_08A3977C;
    case 224u: goto L_08A39794;
    case 225u: goto L_08A397A8;
    case 226u: goto L_08A397BC;
    case 227u: goto L_08A397C0;
    case 228u: goto L_08A397CC;
    case 229u: goto L_08A397E8;
    case 230u: goto L_08A397FC;
    case 231u: goto L_08A39810;
    case 232u: goto L_08A39824;
    case 233u: goto L_08A39840;
    case 234u: goto L_08A39844;
    case 235u: goto L_08A39858;
    case 236u: goto L_08A39880;
    case 237u: goto L_08A398A0;
    case 238u: goto L_08A398C4;
    case 239u: goto L_08A398E0;
    case 240u: goto L_08A398F8;
    case 241u: goto L_08A39908;
    case 242u: goto L_08A39914;
    case 243u: goto L_08A3991C;
    case 244u: goto L_08A39924;
    case 245u: goto L_08A3992C;
    case 246u: goto L_08A39940;
    case 247u: goto L_08A39948;
    case 248u: goto L_08A39950;
    case 249u: goto L_08A39958;
    case 250u: goto L_08A39968;
    case 251u: goto L_08A39970;
    case 252u: goto L_08A39980;
    case 253u: goto L_08A39988;
    case 254u: goto L_08A399A4;
    case 255u: goto L_08A399AC;
    case 256u: goto L_08A399B4;
    case 257u: goto L_08A399C0;
    case 258u: goto L_08A399CC;
    case 259u: goto L_08A399D4;
    case 260u: goto L_08A399DC;
    case 261u: goto L_08A399EC;
    case 262u: goto L_08A399F4;
    case 263u: goto L_08A39A10;
    case 264u: goto L_08A39A1C;
    case 265u: goto L_08A39A30;
    case 266u: goto L_08A39A3C;
    case 267u: goto L_08A39A44;
    case 268u: goto L_08A39A48;
    case 269u: goto L_08A39A50;
    case 270u: goto L_08A39A5C;
    case 271u: goto L_08A39A74;
    case 272u: goto L_08A39A7C;
    case 273u: goto L_08A39A84;
    case 274u: goto L_08A39A94;
    case 275u: goto L_08A39A9C;
    case 276u: goto L_08A39AA8;
    case 277u: goto L_08A39AB0;
    case 278u: goto L_08A39AF4;
    case 279u: goto L_08A39AFC;
    case 280u: goto L_08A39B10;
    case 281u: goto L_08A39B18;
    case 282u: goto L_08A39B24;
    case 283u: goto L_08A39B30;
    case 284u: goto L_08A39B3C;
    case 285u: goto L_08A39B48;
    case 286u: goto L_08A39B50;
    case 287u: goto L_08A39B84;
    case 288u: goto L_08A39BA0;
    case 289u: goto L_08A39BAC;
    case 290u: goto L_08A39BC4;
    case 291u: goto L_08A39BD0;
    case 292u: goto L_08A39BE0;
    case 293u: goto L_08A39BFC;
    case 294u: goto L_08A39C04;
    case 295u: goto L_08A39C1C;
    case 296u: goto L_08A39C2C;
    case 297u: goto L_08A39C3C;
    case 298u: goto L_08A39C48;
    case 299u: goto L_08A39C6C;
    case 300u: goto L_08A39C78;
    case 301u: goto L_08A39C88;
    case 302u: goto L_08A39C9C;
    case 303u: goto L_08A39CBC;
    case 304u: goto L_08A39CC4;
    case 305u: goto L_08A39D08;
    case 306u: goto L_08A39D18;
    case 307u: goto L_08A39D24;
    case 308u: goto L_08A39D30;
    case 309u: goto L_08A39D3C;
    case 310u: goto L_08A39D48;
    case 311u: goto L_08A39D54;
    case 312u: goto L_08A39D88;
    case 313u: goto L_08A39DA0;
    case 314u: goto L_08A39DA4;
    case 315u: goto L_08A39DAC;
    case 316u: goto L_08A39DB4;
    case 317u: goto L_08A39DC0;
    case 318u: goto L_08A39DCC;
    case 319u: goto L_08A39DE4;
    case 320u: goto L_08A39DFC;
    case 321u: goto L_08A39E04;
    case 322u: goto L_08A39E10;
    case 323u: goto L_08A39E1C;
    case 324u: goto L_08A39E28;
    case 325u: goto L_08A39E30;
    case 326u: goto L_08A39E40;
    case 327u: goto L_08A39E50;
    case 328u: goto L_08A39E58;
    case 329u: goto L_08A39E6C;
    case 330u: goto L_08A39E8C;
    case 331u: goto L_08A39E94;
    case 332u: goto L_08A39EB0;
    case 333u: goto L_08A39ED0;
    case 334u: goto L_08A39ED8;
    case 335u: goto L_08A39EF0;
    case 336u: goto L_08A39EFC;
    case 337u: goto L_08A39F04;
    case 338u: goto L_08A39F10;
    case 339u: goto L_08A39F20;
    case 340u: goto L_08A39F2C;
    case 341u: goto L_08A39F34;
    case 342u: goto L_08A39F44;
    case 343u: goto L_08A39F4C;
    case 344u: goto L_08A39F68;
    case 345u: goto L_08A39F70;
    case 346u: goto L_08A39F8C;
    case 347u: goto L_08A39FA8;
    case 348u: goto L_08A39FB8;
    case 349u: goto L_08A39FC0;
    case 350u: goto L_08A39FCC;
    case 351u: goto L_08A39FE4;
    case 352u: goto L_08A39FF0;
    case 353u: goto L_08A3A020;
    case 354u: goto L_08A3A030;
    case 355u: goto L_08A3A03C;
    case 356u: goto L_08A3A04C;
    case 357u: goto L_08A3A054;
    case 358u: goto L_08A3A060;
    case 359u: goto L_08A3A068;
    case 360u: goto L_08A3A09C;
    case 361u: goto L_08A3A0BC;
    case 362u: goto L_08A3A0C8;
    case 363u: goto L_08A3A0D0;
    case 364u: goto L_08A3A10C;
    case 365u: goto L_08A3A134;
    case 366u: goto L_08A3A144;
    case 367u: goto L_08A3A154;
    case 368u: goto L_08A3A15C;
    case 369u: goto L_08A3A164;
    case 370u: goto L_08A3A170;
    case 371u: goto L_08A3A17C;
    case 372u: goto L_08A3A184;
    case 373u: goto L_08A3A188;
    case 374u: goto L_08A3A190;
    case 375u: goto L_08A3A1C8;
    case 376u: goto L_08A3A1D0;
    case 377u: goto L_08A3A1EC;
    case 378u: goto L_08A3A208;
    case 379u: goto L_08A3A218;
    case 380u: goto L_08A3A224;
    case 381u: goto L_08A3A234;
    case 382u: goto L_08A3A240;
    case 383u: goto L_08A3A254;
    case 384u: goto L_08A3A264;
    case 385u: goto L_08A3A274;
    case 386u: goto L_08A3A284;
    case 387u: goto L_08A3A290;
    case 388u: goto L_08A3A298;
    case 389u: goto L_08A3A2A0;
    case 390u: goto L_08A3A2B4;
    case 391u: goto L_08A3A2E0;
    case 392u: goto L_08A3A2FC;
    case 393u: goto L_08A3A30C;
    case 394u: goto L_08A3A318;
    case 395u: goto L_08A3A31C;
    case 396u: goto L_08A3A324;
    case 397u: goto L_08A3A338;
    case 398u: goto L_08A3A354;
    case 399u: goto L_08A3A378;
    case 400u: goto L_08A3A380;
    case 401u: goto L_08A3A3A4;
    case 402u: goto L_08A3A3AC;
    case 403u: goto L_08A3A3C4;
    case 404u: goto L_08A3A3D0;
    case 405u: goto L_08A3A3E8;
    case 406u: goto L_08A3A3F4;
    case 407u: goto L_08A3A400;
    case 408u: goto L_08A3A408;
    case 409u: goto L_08A3A410;
    case 410u: goto L_08A3A41C;
    case 411u: goto L_08A3A424;
    case 412u: goto L_08A3A428;
    case 413u: goto L_08A3A430;
    case 414u: goto L_08A3A43C;
    case 415u: goto L_08A3A44C;
    case 416u: goto L_08A3A458;
    case 417u: goto L_08A3A478;
    case 418u: goto L_08A3A484;
    case 419u: goto L_08A3A4A0;
    case 420u: goto L_08A3A4AC;
    case 421u: goto L_08A3A4C0;
    case 422u: goto L_08A3A4D4;
    case 423u: goto L_08A3A4E0;
    case 424u: goto L_08A3A4E4;
    case 425u: goto L_08A3A4F8;
    case 426u: goto L_08A3A514;
    case 427u: goto L_08A3A52C;
    case 428u: goto L_08A3A544;
    case 429u: goto L_08A3A54C;
    case 430u: goto L_08A3A558;
    case 431u: goto L_08A3A564;
    case 432u: goto L_08A3A56C;
    case 433u: goto L_08A3A574;
    case 434u: goto L_08A3A580;
    case 435u: goto L_08A3A58C;
    case 436u: goto L_08A3A5A0;
    case 437u: goto L_08A3A5B0;
    case 438u: goto L_08A3A5BC;
    case 439u: goto L_08A3A5D4;
    case 440u: goto L_08A3A5DC;
    case 441u: goto L_08A3A5E8;
    case 442u: goto L_08A3A5F4;
    case 443u: goto L_08A3A5FC;
    case 444u: goto L_08A3A604;
    case 445u: goto L_08A3A610;
    case 446u: goto L_08A3A61C;
    case 447u: goto L_08A3A630;
    case 448u: goto L_08A3A640;
    case 449u: goto L_08A3A64C;
    case 450u: goto L_08A3A664;
    case 451u: goto L_08A3A67C;
    case 452u: goto L_08A3A694;
    case 453u: goto L_08A3A69C;
    case 454u: goto L_08A3A6A8;
    case 455u: goto L_08A3A6B4;
    case 456u: goto L_08A3A6BC;
    case 457u: goto L_08A3A6C4;
    case 458u: goto L_08A3A6D0;
    case 459u: goto L_08A3A6DC;
    case 460u: goto L_08A3A6F0;
    case 461u: goto L_08A3A700;
    case 462u: goto L_08A3A70C;
    case 463u: goto L_08A3A724;
    case 464u: goto L_08A3A72C;
    case 465u: goto L_08A3A738;
    case 466u: goto L_08A3A744;
    case 467u: goto L_08A3A74C;
    case 468u: goto L_08A3A754;
    case 469u: goto L_08A3A760;
    case 470u: goto L_08A3A76C;
    case 471u: goto L_08A3A780;
    case 472u: goto L_08A3A790;
    case 473u: goto L_08A3A79C;
    case 474u: goto L_08A3A7B4;
    case 475u: goto L_08A3A7C4;
    case 476u: goto L_08A3A7CC;
    case 477u: goto L_08A3A7EC;
    case 478u: goto L_08A3A818;
    case 479u: goto L_08A3A82C;
    case 480u: goto L_08A3A848;
    case 481u: goto L_08A3A858;
    case 482u: goto L_08A3A864;
    case 483u: goto L_08A3A870;
    case 484u: goto L_08A3A880;
    case 485u: goto L_08A3A88C;
    case 486u: goto L_08A3A890;
    case 487u: goto L_08A3A8AC;
    case 488u: goto L_08A3A8B4;
    case 489u: goto L_08A3A8C0;
    case 490u: goto L_08A3A900;
    case 491u: goto L_08A3A910;
    case 492u: goto L_08A3A934;
    case 493u: goto L_08A3A93C;
    case 494u: goto L_08A3A944;
    case 495u: goto L_08A3A950;
    case 496u: goto L_08A3A964;
    case 497u: goto L_08A3A968;
    case 498u: goto L_08A3A974;
    case 499u: goto L_08A3A97C;
    case 500u: goto L_08A3A98C;
    case 501u: goto L_08A3A994;
    case 502u: goto L_08A3A99C;
    case 503u: goto L_08A3A9B4;
    case 504u: goto L_08A3A9BC;
    case 505u: goto L_08A3A9C4;
    case 506u: goto L_08A3A9D4;
    case 507u: goto L_08A3A9DC;
    case 508u: goto L_08A3A9E8;
    case 509u: goto L_08A3A9F8;
    case 510u: goto L_08A3AA14;
    case 511u: goto L_08A3AA24;
    case 512u: goto L_08A3AA2C;
    case 513u: goto L_08A3AA3C;
    case 514u: goto L_08A3AA40;
    case 515u: goto L_08A3AA5C;
    case 516u: goto L_08A3AA78;
    case 517u: goto L_08A3AA80;
    case 518u: goto L_08A3AA88;
    case 519u: goto L_08A3AAA4;
    case 520u: goto L_08A3AAA8;
    case 521u: goto L_08A3AABC;
    case 522u: goto L_08A3AAD0;
    case 523u: goto L_08A3AADC;
    case 524u: goto L_08A3AAE4;
    case 525u: goto L_08A3AAF4;
    case 526u: goto L_08A3AAFC;
    case 527u: goto L_08A3AB08;
    case 528u: goto L_08A3AB14;
    case 529u: goto L_08A3AB1C;
    case 530u: goto L_08A3AB24;
    case 531u: goto L_08A3AB30;
    case 532u: goto L_08A3AB3C;
    case 533u: goto L_08A3AB50;
    case 534u: goto L_08A3AB5C;
    case 535u: goto L_08A3AB78;
    case 536u: goto L_08A3AB88;
    case 537u: goto L_08A3AB90;
    case 538u: goto L_08A3AB9C;
    case 539u: goto L_08A3ABB4;
    case 540u: goto L_08A3ABC4;
    case 541u: goto L_08A3ABCC;
    case 542u: goto L_08A3ABE0;
    case 543u: goto L_08A3ABEC;
    case 544u: goto L_08A3AC04;
    case 545u: goto L_08A3AC14;
    case 546u: goto L_08A3AC1C;
    case 547u: goto L_08A3AC34;
    case 548u: goto L_08A3AC48;
    case 549u: goto L_08A3AC78;
    case 550u: goto L_08A3AC84;
    case 551u: goto L_08A3AC9C;
    case 552u: goto L_08A3ACA8;
    case 553u: goto L_08A3ACAC;
    case 554u: goto L_08A3ACC0;
    case 555u: goto L_08A3ACD4;
    case 556u: goto L_08A3AD04;
    case 557u: goto L_08A3AD10;
    case 558u: goto L_08A3AD18;
    case 559u: goto L_08A3AD40;
    case 560u: goto L_08A3AD48;
    case 561u: goto L_08A3AD58;
    case 562u: goto L_08A3AD68;
    case 563u: goto L_08A3AD88;
    case 564u: goto L_08A3AD94;
    case 565u: goto L_08A3ADB0;
    case 566u: goto L_08A3ADB8;
    case 567u: goto L_08A3ADC8;
    case 568u: goto L_08A3ADD0;
    case 569u: goto L_08A3ADE0;
    case 570u: goto L_08A3ADF4;
    case 571u: goto L_08A3AE08;
    case 572u: goto L_08A3AE14;
    case 573u: goto L_08A3AE24;
    case 574u: goto L_08A3AE3C;
    case 575u: goto L_08A3AE50;
    case 576u: goto L_08A3AE64;
    case 577u: goto L_08A3AE68;
    case 578u: goto L_08A3AE70;
    case 579u: goto L_08A3AE78;
    case 580u: goto L_08A3AE8C;
    case 581u: goto L_08A3AE98;
    case 582u: goto L_08A3AEA0;
    case 583u: goto L_08A3AEC4;
    case 584u: goto L_08A3AECC;
    case 585u: goto L_08A3AED8;
    case 586u: goto L_08A3AEE0;
    case 587u: goto L_08A3AEE8;
    case 588u: goto L_08A3AEF4;
    case 589u: goto L_08A3AF04;
    case 590u: goto L_08A3AF20;
    case 591u: goto L_08A3AF2C;
    case 592u: goto L_08A3AF68;
    case 593u: goto L_08A3AF84;
    case 594u: goto L_08A3AFA0;
    case 595u: goto L_08A3AFB4;
    case 596u: goto L_08A3AFC8;
    case 597u: goto L_08A3AFD8;
    case 598u: goto L_08A3AFE0;
    case 599u: goto L_08A3AFE4;
    case 600u: goto L_08A3AFEC;
    case 601u: goto L_08A3AFF4;
    case 602u: goto L_08A3AFFC;
    case 603u: goto L_08A3B008;
    case 604u: goto L_08A3B014;
    case 605u: goto L_08A3B030;
    case 606u: goto L_08A3B044;
    case 607u: goto L_08A3B058;
    case 608u: goto L_08A3B05C;
    case 609u: goto L_08A3B09C;
    case 610u: goto L_08A3B0B0;
    case 611u: goto L_08A3B0B8;
    case 612u: goto L_08A3B0C4;
    case 613u: goto L_08A3B0D0;
    case 614u: goto L_08A3B0E4;
    case 615u: goto L_08A3B0F8;
    case 616u: goto L_08A3B104;
    case 617u: goto L_08A3B110;
    case 618u: goto L_08A3B11C;
    case 619u: goto L_08A3B128;
    case 620u: goto L_08A3B134;
    case 621u: goto L_08A3B140;
    case 622u: goto L_08A3B150;
    case 623u: goto L_08A3B15C;
    case 624u: goto L_08A3B164;
    case 625u: goto L_08A3B16C;
    case 626u: goto L_08A3B178;
    case 627u: goto L_08A3B188;
    case 628u: goto L_08A3B194;
    case 629u: goto L_08A3B19C;
    case 630u: goto L_08A3B1AC;
    case 631u: goto L_08A3B1B4;
    case 632u: goto L_08A3B1D0;
    case 633u: goto L_08A3B1D8;
    case 634u: goto L_08A3B1E0;
    case 635u: goto L_08A3B1EC;
    case 636u: goto L_08A3B1F4;
    case 637u: goto L_08A3B200;
    case 638u: goto L_08A3B210;
    case 639u: goto L_08A3B218;
    case 640u: goto L_08A3B224;
    case 641u: goto L_08A3B22C;
    case 642u: goto L_08A3B234;
    case 643u: goto L_08A3B23C;
    case 644u: goto L_08A3B244;
    case 645u: goto L_08A3B248;
    case 646u: goto L_08A3B258;
    case 647u: goto L_08A3B260;
    case 648u: goto L_08A3B278;
    case 649u: goto L_08A3B284;
    case 650u: goto L_08A3B288;
    case 651u: goto L_08A3B2A8;
    case 652u: goto L_08A3B2B4;
    case 653u: goto L_08A3B300;
    case 654u: goto L_08A3B30C;
    case 655u: goto L_08A3B31C;
    case 656u: goto L_08A3B32C;
    case 657u: goto L_08A3B334;
    case 658u: goto L_08A3B348;
    case 659u: goto L_08A3B368;
    case 660u: goto L_08A3B37C;
    case 661u: goto L_08A3B390;
    case 662u: goto L_08A3B3A0;
    case 663u: goto L_08A3B3AC;
    case 664u: goto L_08A3B3B8;
    case 665u: goto L_08A3B3C4;
    case 666u: goto L_08A3B3DC;
    case 667u: goto L_08A3B3E8;
    case 668u: goto L_08A3B3F4;
    case 669u: goto L_08A3B404;
    case 670u: goto L_08A3B410;
    case 671u: goto L_08A3B420;
    case 672u: goto L_08A3B42C;
    case 673u: goto L_08A3B434;
    case 674u: goto L_08A3B43C;
    case 675u: goto L_08A3B448;
    case 676u: goto L_08A3B458;
    case 677u: goto L_08A3B464;
    case 678u: goto L_08A3B46C;
    case 679u: goto L_08A3B474;
    case 680u: goto L_08A3B480;
    case 681u: goto L_08A3B488;
    case 682u: goto L_08A3B490;
    case 683u: goto L_08A3B49C;
    case 684u: goto L_08A3B4A4;
    case 685u: goto L_08A3B4AC;
    case 686u: goto L_08A3B4B8;
    case 687u: goto L_08A3B4C0;
    case 688u: goto L_08A3B4C8;
    case 689u: goto L_08A3B4D0;
    case 690u: goto L_08A3B4E0;
    case 691u: goto L_08A3B4FC;
    case 692u: goto L_08A3B508;
    case 693u: goto L_08A3B538;
    case 694u: goto L_08A3B548;
    case 695u: goto L_08A3B558;
    case 696u: goto L_08A3B560;
    case 697u: goto L_08A3B578;
    case 698u: goto L_08A3B594;
    case 699u: goto L_08A3B5CC;
    case 700u: goto L_08A3B5DC;
    case 701u: goto L_08A3B5EC;
    case 702u: goto L_08A3B600;
    case 703u: goto L_08A3B614;
    case 704u: goto L_08A3B618;
    case 705u: goto L_08A3B62C;
    case 706u: goto L_08A3B634;
    case 707u: goto L_08A3B64C;
    case 708u: goto L_08A3B654;
    case 709u: goto L_08A3B65C;
    case 710u: goto L_08A3B668;
    case 711u: goto L_08A3B670;
    case 712u: goto L_08A3B67C;
    case 713u: goto L_08A3B68C;
    case 714u: goto L_08A3B694;
    case 715u: goto L_08A3B6A0;
    case 716u: goto L_08A3B6A8;
    case 717u: goto L_08A3B6B0;
    case 718u: goto L_08A3B6B8;
    case 719u: goto L_08A3B6C0;
    case 720u: goto L_08A3B6C4;
    case 721u: goto L_08A3B6D4;
    case 722u: goto L_08A3B6DC;
    case 723u: goto L_08A3B6F4;
    case 724u: goto L_08A3B700;
    case 725u: goto L_08A3B704;
    case 726u: goto L_08A3B724;
    case 727u: goto L_08A3B730;
    case 728u: goto L_08A3B77C;
    case 729u: goto L_08A3B788;
    case 730u: goto L_08A3B794;
    case 731u: goto L_08A3B7A4;
    case 732u: goto L_08A3B7AC;
    case 733u: goto L_08A3B7B4;
    case 734u: goto L_08A3B7BC;
    case 735u: goto L_08A3B7C4;
    case 736u: goto L_08A3B7D0;
    case 737u: goto L_08A3B7E0;
    case 738u: goto L_08A3B7F0;
    case 739u: goto L_08A3B80C;
    case 740u: goto L_08A3B824;
    case 741u: goto L_08A3B840;
    case 742u: goto L_08A3B854;
    case 743u: goto L_08A3B864;
    case 744u: goto L_08A3B870;
    case 745u: goto L_08A3B880;
    case 746u: goto L_08A3B888;
    case 747u: goto L_08A3B8AC;
    case 748u: goto L_08A3B8B4;
    case 749u: goto L_08A3B8C8;
    case 750u: goto L_08A3B8D0;
    case 751u: goto L_08A3B8E8;
    case 752u: goto L_08A3B8F4;
    case 753u: goto L_08A3B908;
    case 754u: goto L_08A3B91C;
    case 755u: goto L_08A3B95C;
    case 756u: goto L_08A3B970;
    case 757u: goto L_08A3B974;
    case 758u: goto L_08A3B980;
    case 759u: goto L_08A3B98C;
    case 760u: goto L_08A3B9A0;
    case 761u: goto L_08A3B9B4;
    case 762u: goto L_08A3B9C0;
    case 763u: goto L_08A3B9CC;
    case 764u: goto L_08A3B9D8;
    case 765u: goto L_08A3B9E4;
    case 766u: goto L_08A3B9F0;
    case 767u: goto L_08A3B9FC;
    case 768u: goto L_08A3BA0C;
    case 769u: goto L_08A3BA18;
    case 770u: goto L_08A3BA20;
    case 771u: goto L_08A3BA28;
    case 772u: goto L_08A3BA34;
    case 773u: goto L_08A3BA44;
    case 774u: goto L_08A3BA50;
    case 775u: goto L_08A3BA58;
    case 776u: goto L_08A3BA68;
    case 777u: goto L_08A3BA70;
    case 778u: goto L_08A3BA8C;
    case 779u: goto L_08A3BA94;
    case 780u: goto L_08A3BA9C;
    case 781u: goto L_08A3BAA8;
    case 782u: goto L_08A3BAB0;
    case 783u: goto L_08A3BABC;
    case 784u: goto L_08A3BACC;
    case 785u: goto L_08A3BAD4;
    case 786u: goto L_08A3BAE0;
    case 787u: goto L_08A3BAE8;
    case 788u: goto L_08A3BAF0;
    case 789u: goto L_08A3BAF8;
    case 790u: goto L_08A3BB00;
    case 791u: goto L_08A3BB04;
    case 792u: goto L_08A3BB14;
    case 793u: goto L_08A3BB1C;
    case 794u: goto L_08A3BB34;
    case 795u: goto L_08A3BB40;
    case 796u: goto L_08A3BB44;
    case 797u: goto L_08A3BB64;
    case 798u: goto L_08A3BB70;
    case 799u: goto L_08A3BBBC;
    case 800u: goto L_08A3BBC8;
    case 801u: goto L_08A3BBD8;
    case 802u: goto L_08A3BBE8;
    case 803u: goto L_08A3BBEC;
    case 804u: goto L_08A3BBF4;
    case 805u: goto L_08A3BC14;
    case 806u: goto L_08A3BC2C;
    case 807u: goto L_08A3BC3C;
    case 808u: goto L_08A3BC40;
    case 809u: goto L_08A3BC48;
    case 810u: goto L_08A3BC50;
    case 811u: goto L_08A3BC60;
    case 812u: goto L_08A3BC6C;
    case 813u: goto L_08A3BC7C;
    case 814u: goto L_08A3BC90;
    case 815u: goto L_08A3BCA0;
    case 816u: goto L_08A3BCAC;
    case 817u: goto L_08A3BCB4;
    case 818u: goto L_08A3BCC8;
    case 819u: goto L_08A3BCD0;
    case 820u: goto L_08A3BD14;
    case 821u: goto L_08A3BD2C;
    case 822u: goto L_08A3BD38;
    case 823u: goto L_08A3BD44;
    case 824u: goto L_08A3BD48;
    case 825u: goto L_08A3BD50;
    case 826u: goto L_08A3BD60;
    case 827u: goto L_08A3BD78;
    case 828u: goto L_08A3BD80;
    case 829u: goto L_08A3BD94;
    case 830u: goto L_08A3BDB4;
    case 831u: goto L_08A3BDC8;
    case 832u: goto L_08A3BDD0;
    case 833u: goto L_08A3BDDC;
    case 834u: goto L_08A3BDF0;
    case 835u: goto L_08A3BDFC;
    case 836u: goto L_08A3BE04;
    case 837u: goto L_08A3BE14;
    case 838u: goto L_08A3BE28;
    case 839u: goto L_08A3BE3C;
    case 840u: goto L_08A3BE44;
    case 841u: goto L_08A3BE54;
    case 842u: goto L_08A3BE68;
    case 843u: goto L_08A3BE74;
    case 844u: goto L_08A3BE7C;
    case 845u: goto L_08A3BE94;
    case 846u: goto L_08A3BEA0;
    case 847u: goto L_08A3BEBC;
    case 848u: goto L_08A3BEC8;
    case 849u: goto L_08A3BED4;
    case 850u: goto L_08A3BEE0;
    case 851u: goto L_08A3BEF4;
    case 852u: goto L_08A3BF08;
    case 853u: goto L_08A3BF18;
    case 854u: goto L_08A3BF28;
    case 855u: goto L_08A3BF34;
    case 856u: goto L_08A3BF48;
    case 857u: goto L_08A3BF50;
    case 858u: goto L_08A3BF74;
    case 859u: goto L_08A3BF84;
    case 860u: goto L_08A3BF90;
    case 861u: goto L_08A3BF9C;
    case 862u: goto L_08A3BFC8;
    case 863u: goto L_08A3BFE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A38000:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A38004;
L_08A38004:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 612u, 0x08A37FE4u>(ctx, &aot_mem); return;
      }
      goto L_08A3800C;
    }
L_08A3800C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38044;
      }
      goto L_08A38038;
    }
L_08A38038:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A38140;
      }
      goto L_08A38044;
    }
L_08A38044:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A38140;
      }
      goto L_08A38050;
    }
L_08A38050:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(860)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[16] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08A38118;
    }
    goto L_08A380EC;
L_08A380EC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A380FCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 266u, 0x08A1D5BCu>(ctx, &aot_mem) && ctx.pc == 0x08A380FCu) goto L_08A380FC;
    return;
L_08A380FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A3810C;
      }
      goto L_08A38108;
    }
L_08A38108:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A3810C;
L_08A3810C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A380EC;
      }
      goto L_08A38114;
    }
L_08A38114:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08A38118;
L_08A38118:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A38140;
L_08A38140:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3814C;
L_08A3814C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 596u, 0x08A37EA0u>(ctx, &aot_mem); return;
      }
      goto L_08A381F8;
    }
L_08A381F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
        goto L_08A382D4;
    }
    goto L_08A38204;
L_08A38204:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(856)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A382C0;
      }
      goto L_08A38298;
    }
L_08A38298:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A382A8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 266u, 0x08A1D5BCu>(ctx, &aot_mem) && ctx.pc == 0x08A382A8u) goto L_08A382A8;
    return;
L_08A382A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A382B8;
      }
      goto L_08A382B4;
    }
L_08A382B4:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A382B8;
L_08A382B8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38298;
      }
      goto L_08A382C0;
    }
L_08A382C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    goto L_08A382D4;
L_08A382D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (0u | 0u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3831C;
L_08A3831C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1280)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08A3831C;
      }
      goto L_08A3834C;
    }
L_08A3834C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A38374;
      }
      goto L_08A38368;
    }
L_08A38368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A38374;
L_08A38374:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
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
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A383B4;
    }
    goto L_08A383B4;
L_08A383B4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A383CC;
      }
      goto L_08A383C8;
    }
L_08A383C8:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A383CC;
L_08A383CC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3840C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A38448u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25472));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 569u, 0x0883AB50u>(ctx, &aot_mem) && ctx.pc == 0x08A38448u) goto L_08A38448;
    return;
L_08A38448:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
        goto L_08A38864;
    }
    goto L_08A38450;
L_08A38450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08A38470u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08A38470u) goto L_08A38470;
    return;
L_08A38470:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A38490u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A38490u) goto L_08A38490;
    return;
L_08A38490:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7864)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A384C4;
    }
    goto L_08A384C4;
L_08A384C4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (15363u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[16];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_08A385E8;
      }
      goto L_08A3856C;
    }
L_08A3856C:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
        goto L_08A38840;
    }
    goto L_08A38584;
L_08A38584:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[20] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
        goto L_08A385EC;
    }
    goto L_08A385A0;
L_08A385A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
        goto L_08A385EC;
    }
    goto L_08A385B8;
L_08A385B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
        goto L_08A385EC;
    }
    goto L_08A385D0;
L_08A385D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1164)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
        goto L_08A38840;
    }
    goto L_08A385E8;
L_08A385E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    goto L_08A385EC;
L_08A385EC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 1u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A38624;
      }
      goto L_08A38620;
    }
L_08A38620:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A38624;
L_08A38624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38708;
      }
      goto L_08A38630;
    }
L_08A38630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A38648u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08A38648u) goto L_08A38648;
    return;
L_08A38648:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38660;
      }
      goto L_08A38650;
    }
L_08A38650:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38734;
      }
      goto L_08A38660;
    }
L_08A38660:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[20] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A386C4;
      }
      goto L_08A3867C;
    }
L_08A3867C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A386C4;
      }
      goto L_08A38694;
    }
L_08A38694:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A386C4;
      }
      goto L_08A386AC;
    }
L_08A386AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1164)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A386E8;
      }
      goto L_08A386C4;
    }
L_08A386C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 43u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A386E0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A386E0u) goto L_08A386E0;
    return;
L_08A386E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38734;
      }
      goto L_08A386E8;
    }
L_08A386E8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 43u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A38700u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 77u, 0x08A407CCu>(ctx, &aot_mem) && ctx.pc == 0x08A38700u) goto L_08A38700;
    return;
L_08A38700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38734;
      }
      goto L_08A38708;
    }
L_08A38708:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38734;
      }
      goto L_08A38714;
    }
L_08A38714:
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1444), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 164u);
    ctx.gpr[31] = (0x08A38734u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38734u) goto L_08A38734;
    return;
L_08A38734:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A38838;
      }
      goto L_08A38748;
    }
L_08A38748:
    ctx.gpr[20] = (2229u << 16u);
    goto L_08A3874C;
L_08A3874C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38824;
      }
      goto L_08A38758;
    }
L_08A38758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A38770u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08A38770u) goto L_08A38770;
    return;
L_08A38770:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38788;
      }
      goto L_08A38778;
    }
L_08A38778:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38824;
      }
      goto L_08A38788;
    }
L_08A38788:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A387E8;
      }
      goto L_08A387A0;
    }
L_08A387A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A387E8;
      }
      goto L_08A387B8;
    }
L_08A387B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A387E8;
      }
      goto L_08A387D0;
    }
L_08A387D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1164)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3880C;
      }
      goto L_08A387E8;
    }
L_08A387E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 43u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A38804u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38804u) goto L_08A38804;
    return;
L_08A38804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38824;
      }
      goto L_08A3880C;
    }
L_08A3880C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 43u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A38824u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 77u, 0x08A407CCu>(ctx, &aot_mem) && ctx.pc == 0x08A38824u) goto L_08A38824;
    return;
L_08A38824:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3874C;
      }
      goto L_08A38838;
    }
L_08A38838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3885C;
      }
      goto L_08A38840;
    }
L_08A38840:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A3885C;
L_08A3885C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38894;
      }
      goto L_08A38864;
    }
L_08A38864:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1444), static_cast<std::uint8_t>(0u));
    goto L_08A38894;
L_08A38894:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A388B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2312), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2280), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2284), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2288), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2292), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2308), ctx.gpr[22]);
    ctx.fpr[30] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-9));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2264), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2268), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2272), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2276), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2296), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2300), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2304), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2316), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2320), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A38968;
      }
      goto L_08A3891C;
    }
L_08A3891C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A38968;
      }
      goto L_08A3892C;
    }
L_08A3892C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(88))))));
        goto L_08A3896C;
    }
    goto L_08A38938;
L_08A38938:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(504), 0u);
    ctx.gpr[6] = (0u & 255u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(600), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A38968;
L_08A38968:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(88))))));
    goto L_08A3896C;
L_08A3896C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2232), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2164), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A389B8;
      }
      goto L_08A389A8;
    }
L_08A389A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A389B8;
L_08A389B8:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(598), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(880), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(1340), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(603))))));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(675))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A38A18;
      }
      goto L_08A389F4;
    }
L_08A389F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(676))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(676), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38A18;
      }
      goto L_08A38A10;
    }
L_08A38A10:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(675), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A38A18;
L_08A38A18:
    ctx.gpr[31] = (0x08A38A20u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 72u, 0x088A05C4u>(ctx, &aot_mem) && ctx.pc == 0x08A38A20u) goto L_08A38A20;
    return;
L_08A38A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38AA4;
      }
      goto L_08A38A2C;
    }
L_08A38A2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38A94;
      }
      goto L_08A38A3C;
    }
L_08A38A3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A38A94;
      }
      goto L_08A38A50;
    }
L_08A38A50:
    ctx.gpr[4] = (0u | 1000u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1336)));
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(646), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(648), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7827));
      if (branch_taken) {
          goto L_08A38A80;
      }
      goto L_08A38A74;
    }
L_08A38A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(648)));
    ctx.gpr[31] = (0x08A38A80u);
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(648));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A38A80u) goto L_08A38A80;
    return;
L_08A38A80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A38A94u);
    ctx.gpr[6] = (0u | 93u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38A94u) goto L_08A38A94;
    return;
L_08A38A94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1332), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A38AB0;
      }
      goto L_08A38AA4;
    }
L_08A38AA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1332), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A38AB0;
L_08A38AB0:
    ctx.gpr[31] = (0x08A38AB8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 242u, 0x08A8998Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38AB8u) goto L_08A38AB8;
    return;
L_08A38AB8:
    ctx.gpr[31] = (0x08A38AC0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889ED4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A38AC0u) goto L_08A38AC0;
    return;
L_08A38AC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 496u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[18] >> 4u);
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39328;
      }
      goto L_08A38AF0;
    }
L_08A38AF0:
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[18]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(5608)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A38B08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[31] = (0x08A38B20u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1332), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A38B20u) goto L_08A38B20;
    return;
L_08A38B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A38FFC;
      }
      goto L_08A38B30;
    }
L_08A38B30:
    ctx.gpr[31] = (0x08A38B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A38B38u) goto L_08A38B38;
    return;
L_08A38B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A38FFC;
      }
      goto L_08A38B48;
    }
L_08A38B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A38B64u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A38B64u) goto L_08A38B64;
    return;
L_08A38B64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1316)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A38D18;
      }
      goto L_08A38B78;
    }
L_08A38B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(592)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[30])) && ctx.fpr[15] == ctx.fpr[30]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A38BBC;
      }
      goto L_08A38BA4;
    }
L_08A38BA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38BC8;
      }
      goto L_08A38BBC;
    }
L_08A38BBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1445)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38E08;
      }
      goto L_08A38BC8;
    }
L_08A38BC8:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(88))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[9] = (0u | 210u);
    ctx.gpr[7] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(240));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A38C5C;
      }
      goto L_08A38BF0;
    }
L_08A38BF0:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16025u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A38C20;
    }
    goto L_08A38C20;
L_08A38C20:
    ctx.gpr[7] = (16179u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(588)));
    ctx.gpr[7] = (ctx.gpr[7] | 13107u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1316)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A38CB4;
      }
      goto L_08A38C5C;
    }
L_08A38C5C:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A38C88;
    }
    goto L_08A38C88;
L_08A38C88:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(588)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1316)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A38CB4;
L_08A38CB4:
    ctx.gpr[7] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08A38D10u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A38D10u) goto L_08A38D10;
    return;
L_08A38D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A38E08;
      }
      goto L_08A38D18;
    }
L_08A38D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(592)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[30]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A38D50;
      }
      goto L_08A38D44;
    }
L_08A38D44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1445)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A38E08;
      }
      goto L_08A38D50;
    }
L_08A38D50:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A38D90;
    }
    goto L_08A38D90;
L_08A38D90:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1316)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x08A38E08u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A38E08u) goto L_08A38E08;
    return;
L_08A38E08:
    ctx.gpr[31] = (0x08A38E10u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 720u, 0x0883BA30u>(ctx, &aot_mem) && ctx.pc == 0x08A38E10u) goto L_08A38E10;
    return;
L_08A38E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A38E38;
      }
      goto L_08A38E20;
    }
L_08A38E20:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7812)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A38E38;
      }
      goto L_08A38E30;
    }
L_08A38E30:
    ctx.gpr[31] = (0x08A38E38u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 280u, 0x08861D94u>(ctx, &aot_mem) && ctx.pc == 0x08A38E38u) goto L_08A38E38;
    return;
L_08A38E38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1156)));
        goto L_08A38E68;
    }
    goto L_08A38E50;
L_08A38E50:
    ctx.gpr[31] = (0x08A38E58u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1054)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08A38E58u) goto L_08A38E58;
    return;
L_08A38E58:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A38EE8;
      }
      goto L_08A38E64;
    }
L_08A38E64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1156)));
    goto L_08A38E68;
L_08A38E68:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1160)));
        goto L_08A38E94;
    }
    goto L_08A38E7C;
L_08A38E7C:
    ctx.gpr[31] = (0x08A38E84u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1086)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08A38E84u) goto L_08A38E84;
    return;
L_08A38E84:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A38EE8;
      }
      goto L_08A38E90;
    }
L_08A38E90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1160)));
    goto L_08A38E94;
L_08A38E94:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1164)));
        goto L_08A38EC0;
    }
    goto L_08A38EA8;
L_08A38EA8:
    ctx.gpr[31] = (0x08A38EB0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1118)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08A38EB0u) goto L_08A38EB0;
    return;
L_08A38EB0:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A38EE8;
      }
      goto L_08A38EBC;
    }
L_08A38EBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1164)));
    goto L_08A38EC0;
L_08A38EC0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A38FFC;
      }
      goto L_08A38ED4;
    }
L_08A38ED4:
    ctx.gpr[31] = (0x08A38EDCu);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1150)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08A38EDCu) goto L_08A38EDC;
    return;
L_08A38EDC:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A38FFC;
      }
      goto L_08A38EE8;
    }
L_08A38EE8:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A38FB4;
      }
      goto L_08A38F50;
    }
L_08A38F50:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15800u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A38F80;
      }
      goto L_08A38F7C;
    }
L_08A38F7C:
    ctx.gpr[30] = (0u | 1u);
    goto L_08A38F80;
L_08A38F80:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A38FB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08A38FB4u) goto L_08A38FB4;
    return;
L_08A38FB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (48291u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (0x08A38FFCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08A38FFCu) goto L_08A38FFC;
    return;
L_08A38FFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3932C;
      }
      goto L_08A39004;
    }
L_08A39004:
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A3932C;
      }
      goto L_08A39010;
    }
L_08A39010:
    ctx.gpr[31] = (0x08A39018u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 376u, 0x0891DF64u>(ctx, &aot_mem) && ctx.pc == 0x08A39018u) goto L_08A39018;
    return;
L_08A39018:
    ctx.gpr[31] = (0x08A39020u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 222u, 0x08A0DBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A39020u) goto L_08A39020;
    return;
L_08A39020:
    ctx.gpr[31] = (0x08A39028u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 335u, 0x089F1C10u>(ctx, &aot_mem) && ctx.pc == 0x08A39028u) goto L_08A39028;
    return;
L_08A39028:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1446)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1445), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1447), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1446), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(404)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08A3905Cu);
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(624));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 163u, 0x08A7CD50u>(ctx, &aot_mem) && ctx.pc == 0x08A3905Cu) goto L_08A3905C;
    return;
L_08A3905C:
    ctx.gpr[8] = (16128u << 16u);
    ctx.gpr[7] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[31] = (0x08A3907Cu);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 805u, 0x0889FBC4u>(ctx, &aot_mem) && ctx.pc == 0x08A3907Cu) goto L_08A3907C;
    return;
L_08A3907C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1216)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1220)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A3909Cu);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 375u, 0x08A363FCu>(ctx, &aot_mem) && ctx.pc == 0x08A3909Cu) goto L_08A3909C;
    return;
L_08A3909C:
    ctx.gpr[31] = (0x08A390A4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 372u, 0x08A363E0u>(ctx, &aot_mem) && ctx.pc == 0x08A390A4u) goto L_08A390A4;
    return;
L_08A390A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 251u, 0x08A3D17Cu>(ctx, &aot_mem); return;
      }
      goto L_08A390D4;
    }
L_08A390D4:
    ctx.gpr[31] = (0x08A390DCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 376u, 0x0891DF64u>(ctx, &aot_mem) && ctx.pc == 0x08A390DCu) goto L_08A390DC;
    return;
L_08A390DC:
    ctx.gpr[31] = (0x08A390E4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 179u, 0x089F5C60u>(ctx, &aot_mem) && ctx.pc == 0x08A390E4u) goto L_08A390E4;
    return;
L_08A390E4:
    ctx.gpr[31] = (0x08A390ECu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 375u, 0x08A363FCu>(ctx, &aot_mem) && ctx.pc == 0x08A390ECu) goto L_08A390EC;
    return;
L_08A390EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A39130;
      }
      goto L_08A3910C;
    }
L_08A3910C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A39140;
      }
      goto L_08A39130;
    }
L_08A39130:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1332), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A39140;
L_08A39140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3932C;
      }
      goto L_08A39148;
    }
L_08A39148:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A3918C;
      }
      goto L_08A3917C;
    }
L_08A3917C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A391A0;
      }
      goto L_08A3918C;
    }
L_08A3918C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A391AC;
      }
      goto L_08A391A0;
    }
L_08A391A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A391AC;
L_08A391AC:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(680), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(504)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
        goto L_08A391EC;
    }
    goto L_08A391C0;
L_08A391C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(508)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
        goto L_08A391EC;
    }
    goto L_08A391CC;
L_08A391CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
        goto L_08A391EC;
    }
    goto L_08A391DC;
L_08A391DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(601))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A39200;
      }
      goto L_08A391E8;
    }
L_08A391E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    goto L_08A391EC;
L_08A391EC:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39200;
      }
      goto L_08A391F8;
    }
L_08A391F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A39204;
      }
      goto L_08A39200;
    }
L_08A39200:
    ctx.gpr[21] = (0u | 0u);
    goto L_08A39204;
L_08A39204:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1320), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1324), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(599))))));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39248;
      }
      goto L_08A39228;
    }
L_08A39228:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A39248;
L_08A39248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3932C;
      }
      goto L_08A39250;
    }
L_08A39250:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A392A0;
      }
      goto L_08A39280;
    }
L_08A39280:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A392B0;
      }
      goto L_08A392A0;
    }
L_08A392A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A392B0;
L_08A392B0:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(680), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A3932C;
      }
      goto L_08A392D0;
    }
L_08A392D0:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(597))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(680), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1320), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08A3931Cu);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1324), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 379u, 0x08852464u>(ctx, &aot_mem) && ctx.pc == 0x08A3931Cu) goto L_08A3931C;
    return;
L_08A3931C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1336), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A3932C;
      }
      goto L_08A39328;
    }
L_08A39328:
    ctx.gpr[20] = (2230u << 16u);
    goto L_08A3932C;
L_08A3932C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3938C;
      }
      goto L_08A3933C;
    }
L_08A3933C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A39380;
      }
      goto L_08A39360;
    }
L_08A39360:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3938C;
      }
      goto L_08A39380;
    }
L_08A39380:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A3938C;
L_08A3938C:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A393B4;
      }
      goto L_08A39394;
    }
L_08A39394:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A393B4;
      }
      goto L_08A393A4;
    }
L_08A393A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
        goto L_08A39760;
    }
    goto L_08A393B4;
L_08A393B4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10496)));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22864));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(240));
    ctx.gpr[16] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (49024u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A39578;
      }
      goto L_08A39418;
    }
L_08A39418:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[30])) && ctx.fpr[13] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A394DC;
      }
      goto L_08A3942C;
    }
L_08A3942C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[30])) && ctx.fpr[13] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A394DC;
      }
      goto L_08A39440;
    }
L_08A39440:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1192)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10492)));
      if (branch_taken) {
          goto L_08A3946C;
      }
      goto L_08A39458;
    }
L_08A39458:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[30])) && ctx.fpr[13] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A394CC;
      }
      goto L_08A3946C;
    }
L_08A3946C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A394CC;
      }
      goto L_08A39480;
    }
L_08A39480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (15759u << 16u);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A394BC;
    }
    goto L_08A394BC;
L_08A394BC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A39578;
      }
      goto L_08A394CC;
    }
L_08A394CC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10488)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A39578;
      }
      goto L_08A394DC;
    }
L_08A394DC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1192)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[30])) && ctx.fpr[13] == ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2220), static_cast<std::uint8_t>(ctx.gpr[21]));
        goto L_08A3957C;
    }
    goto L_08A394F0;
L_08A394F0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[30])) && ctx.fpr[13] == ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2220), static_cast<std::uint8_t>(ctx.gpr[21]));
        goto L_08A3957C;
    }
    goto L_08A39504;
L_08A39504:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10492)));
      if (branch_taken) {
          goto L_08A39578;
      }
      goto L_08A3951C;
    }
L_08A3951C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[14] = ctx.fpr[16] - ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
        goto L_08A39560;
    }
    goto L_08A39560;
L_08A39560:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A39578;
L_08A39578:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2220), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08A3957C;
L_08A3957C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2236), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10484)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[19] + ctx.fpr[17];
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[14];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[13] - ctx.fpr[18];
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[31] = (0x08A39648u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A39648u) goto L_08A39648;
    return;
L_08A39648:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3965Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 341u, 0x08A36194u>(ctx, &aot_mem) && ctx.pc == 0x08A3965Cu) goto L_08A3965C;
    return;
L_08A3965C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A3966Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 341u, 0x08A36194u>(ctx, &aot_mem) && ctx.pc == 0x08A3966Cu) goto L_08A3966C;
    return;
L_08A3966C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39678u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A39678u) goto L_08A39678;
    return;
L_08A39678:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3968Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 334u, 0x08A360D0u>(ctx, &aot_mem) && ctx.pc == 0x08A3968Cu) goto L_08A3968C;
    return;
L_08A3968C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3969Cu);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 338u, 0x08A36148u>(ctx, &aot_mem) && ctx.pc == 0x08A3969Cu) goto L_08A3969C;
    return;
L_08A3969C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (0x08A396BCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A396BCu) goto L_08A396BC;
    return;
L_08A396BC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A396CCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 341u, 0x08A36194u>(ctx, &aot_mem) && ctx.pc == 0x08A396CCu) goto L_08A396CC;
    return;
L_08A396CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A396DCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 341u, 0x08A36194u>(ctx, &aot_mem) && ctx.pc == 0x08A396DCu) goto L_08A396DC;
    return;
L_08A396DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A396E8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A396E8u) goto L_08A396E8;
    return;
L_08A396E8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A396F8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 334u, 0x08A360D0u>(ctx, &aot_mem) && ctx.pc == 0x08A396F8u) goto L_08A396F8;
    return;
L_08A396F8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A39708u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 338u, 0x08A36148u>(ctx, &aot_mem) && ctx.pc == 0x08A39708u) goto L_08A39708;
    return;
L_08A39708:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A39714u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A39714u) goto L_08A39714;
    return;
L_08A39714:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (0x08A39734u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x08A39734u) goto L_08A39734;
    return;
L_08A39734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2220)));
      if (branch_taken) {
          goto L_08A39758;
      }
      goto L_08A39748;
    }
L_08A39748:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A39758u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A39758u) goto L_08A39758;
    return;
L_08A39758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3977C;
      }
      goto L_08A39760;
    }
L_08A39760:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3977C;
L_08A3977C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08A39A48;
      }
      goto L_08A39794;
    }
L_08A39794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
        goto L_08A397C0;
    }
    goto L_08A397A8;
L_08A397A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A39A48;
      }
      goto L_08A397BC;
    }
L_08A397BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    goto L_08A397C0;
L_08A397C0:
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39A48;
      }
      goto L_08A397CC;
    }
L_08A397CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_08A39844;
      }
      goto L_08A397E8;
    }
L_08A397E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(112)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39844;
      }
      goto L_08A397FC;
    }
L_08A397FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39844;
      }
      goto L_08A39810;
    }
L_08A39810:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39844;
      }
      goto L_08A39824;
    }
L_08A39824:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1180)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39844;
      }
      goto L_08A39840;
    }
L_08A39840:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A39844;
L_08A39844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (15172u << 16u);
      if (branch_taken) {
          goto L_08A39880;
      }
      goto L_08A39858;
    }
L_08A39858:
    ctx.gpr[4] = (15300u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15044u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A398A0;
      }
      goto L_08A39880;
    }
L_08A39880:
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (14955u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60923u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A398A0;
L_08A398A0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2220), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2237), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2236), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(176));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A398C4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 338u, 0x08A36148u>(ctx, &aot_mem) && ctx.pc == 0x08A398C4u) goto L_08A398C4;
    return;
L_08A398C4:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A398E0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 342u, 0x08A361B0u>(ctx, &aot_mem) && ctx.pc == 0x08A398E0u) goto L_08A398E0;
    return;
L_08A398E0:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A398F8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 338u, 0x08A36148u>(ctx, &aot_mem) && ctx.pc == 0x08A398F8u) goto L_08A398F8;
    return;
L_08A398F8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A39908u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 342u, 0x08A361B0u>(ctx, &aot_mem) && ctx.pc == 0x08A39908u) goto L_08A39908;
    return;
L_08A39908:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39914u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A39914u) goto L_08A39914;
    return;
L_08A39914:
    ctx.gpr[31] = (0x08A3991Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 349u, 0x08A36250u>(ctx, &aot_mem) && ctx.pc == 0x08A3991Cu) goto L_08A3991C;
    return;
L_08A3991C:
    ctx.gpr[31] = (0x08A39924u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A39924u) goto L_08A39924;
    return;
L_08A39924:
    ctx.gpr[31] = (0x08A3992Cu);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 385u, 0x08AF9AD8u>(ctx, &aot_mem) && ctx.pc == 0x08A3992Cu) goto L_08A3992C;
    return;
L_08A3992C:
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[0]));
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2236)));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2237)));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2220)));
      if (branch_taken) {
          goto L_08A39980;
      }
      goto L_08A39940;
    }
L_08A39940:
    ctx.gpr[31] = (0x08A39948u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 349u, 0x08A36250u>(ctx, &aot_mem) && ctx.pc == 0x08A39948u) goto L_08A39948;
    return;
L_08A39948:
    ctx.gpr[31] = (0x08A39950u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A39950u) goto L_08A39950;
    return;
L_08A39950:
    ctx.gpr[31] = (0x08A39958u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 385u, 0x08AF9AD8u>(ctx, &aot_mem) && ctx.pc == 0x08A39958u) goto L_08A39958;
    return;
L_08A39958:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39980;
      }
      goto L_08A39968;
    }
L_08A39968:
    ctx.gpr[31] = (0x08A39970u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 439u, 0x08AF9FC8u>(ctx, &aot_mem) && ctx.pc == 0x08A39970u) goto L_08A39970;
    return;
L_08A39970:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39988;
      }
      goto L_08A39980;
    }
L_08A39980:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39A44;
      }
      goto L_08A39988;
    }
L_08A39988:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(265)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(265)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A399AC;
      }
      goto L_08A399A4;
    }
L_08A399A4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39A48;
      }
      goto L_08A399AC;
    }
L_08A399AC:
    ctx.gpr[31] = (0x08A399B4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A399B4u) goto L_08A399B4;
    return;
L_08A399B4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A399C0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A399C0u) goto L_08A399C0;
    return;
L_08A399C0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A399CCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 428u, 0x089EE5F0u>(ctx, &aot_mem) && ctx.pc == 0x08A399CCu) goto L_08A399CC;
    return;
L_08A399CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39A48;
      }
      goto L_08A399D4;
    }
L_08A399D4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A399EC;
      }
      goto L_08A399DC;
    }
L_08A399DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(265)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A399F4;
      }
      goto L_08A399EC;
    }
L_08A399EC:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A399F4;
L_08A399F4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[22] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A39A10u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A39A10u) goto L_08A39A10;
    return;
L_08A39A10:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A39A1Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A39A1Cu) goto L_08A39A1C;
    return;
L_08A39A1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A39A30u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A39A30u) goto L_08A39A30;
    return;
L_08A39A30:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A39A3Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A39A3Cu) goto L_08A39A3C;
    return;
L_08A39A3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39A48;
      }
      goto L_08A39A44;
    }
L_08A39A44:
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(0u));
    goto L_08A39A48;
L_08A39A48:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    goto L_08A39A50;
L_08A39A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39A84;
      }
      goto L_08A39A5C;
    }
L_08A39A5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-7811)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39A84;
      }
      goto L_08A39A74;
    }
L_08A39A74:
    ctx.gpr[31] = (0x08A39A7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 420u, 0x08AF9DB4u>(ctx, &aot_mem) && ctx.pc == 0x08A39A7Cu) goto L_08A39A7C;
    return;
L_08A39A7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39A9C;
      }
      goto L_08A39A84;
    }
L_08A39A84:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A39A50;
      }
      goto L_08A39A94;
    }
L_08A39A94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A39AB0;
      }
      goto L_08A39A9C;
    }
L_08A39A9C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39AA8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 421u, 0x08AF9DC4u>(ctx, &aot_mem) && ctx.pc == 0x08A39AA8u) goto L_08A39AA8;
    return;
L_08A39AA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 251u, 0x08A3D17Cu>(ctx, &aot_mem); return;
      }
      goto L_08A39AB0;
    }
L_08A39AB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2172), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2200), ctx.gpr[6]);
    ctx.gpr[6] = (15948u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2168), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A39AFC;
      }
      goto L_08A39AF4;
    }
L_08A39AF4:
    ctx.gpr[22] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(0u));
    goto L_08A39AFC;
L_08A39AFC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2236), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2237), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[31] = (0x08A39B10u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 248u, 0x08A417CCu>(ctx, &aot_mem) && ctx.pc == 0x08A39B10u) goto L_08A39B10;
    return;
L_08A39B10:
    if (ctx.gpr[22] == 0u) {
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_08A39CC4;
    }
    goto L_08A39B18;
L_08A39B18:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39B24u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 416u, 0x08AF9D34u>(ctx, &aot_mem) && ctx.pc == 0x08A39B24u) goto L_08A39B24;
    return;
L_08A39B24:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39B30u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 419u, 0x08AF9D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39B30u) goto L_08A39B30;
    return;
L_08A39B30:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39B3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 421u, 0x08AF9DC4u>(ctx, &aot_mem) && ctx.pc == 0x08A39B3Cu) goto L_08A39B3C;
    return;
L_08A39B3C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39B48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 422u, 0x08AF9DECu>(ctx, &aot_mem) && ctx.pc == 0x08A39B48u) goto L_08A39B48;
    return;
L_08A39B48:
    ctx.gpr[31] = (0x08A39B50u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 430u, 0x08AF9E68u>(ctx, &aot_mem) && ctx.pc == 0x08A39B50u) goto L_08A39B50;
    return;
L_08A39B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[6] = (65520u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[31] = (0x08A39B84u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 371u, 0x08A363CCu>(ctx, &aot_mem) && ctx.pc == 0x08A39B84u) goto L_08A39B84;
    return;
L_08A39B84:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(160));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A39BA0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A39BA0u) goto L_08A39BA0;
    return;
L_08A39BA0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39BACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A39BACu) goto L_08A39BAC;
    return;
L_08A39BAC:
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(144));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A39BC4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A39BC4u) goto L_08A39BC4;
    return;
L_08A39BC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39BD0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A39BD0u) goto L_08A39BD0;
    return;
L_08A39BD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16050u << 16u);
      if (branch_taken) {
          goto L_08A39C1C;
      }
      goto L_08A39BE0;
    }
L_08A39BE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    ctx.gpr[4] = (ctx.gpr[4] | 47299u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39C1C;
      }
      goto L_08A39BFC;
    }
L_08A39BFC:
    ctx.gpr[31] = (0x08A39C04u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A39C04u) goto L_08A39C04;
    return;
L_08A39C04:
    ctx.gpr[4] = (15502u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A39C1C;
L_08A39C1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39CBC;
      }
      goto L_08A39C2C;
    }
L_08A39C2C:
    ctx.gpr[4] = (16248u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.gpr[31] = (0x08A39C3Cu);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A39C3Cu) goto L_08A39C3C;
    return;
L_08A39C3C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A39C48u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 387u, 0x08AF9B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39C48u) goto L_08A39C48;
    return;
L_08A39C48:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A39C6Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39C6Cu) goto L_08A39C6C;
    return;
L_08A39C6C:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08A39C78u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x08A39C78u) goto L_08A39C78;
    return;
L_08A39C78:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.gpr[31] = (0x08A39C88u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x08A39C88u) goto L_08A39C88;
    return;
L_08A39C88:
    ctx.fpr[20] = ctx.fpr[26] - ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1312)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A39C9Cu);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 378u, 0x08AF9A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39C9Cu) goto L_08A39C9C;
    return;
L_08A39C9C:
    ctx.gpr[4] = (16006u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A39CBC;
L_08A39CBC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2220), static_cast<std::uint8_t>(ctx.gpr[21]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 41u, 0x08A3C2C0u>(ctx, &aot_mem); return;
      }
      goto L_08A39CC4;
    }
L_08A39CC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(976));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (16051u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2160), ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-29372));
    ctx.gpr[7] = (ctx.gpr[7] | 13107u);
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2208), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A39E28;
      }
      goto L_08A39D08;
    }
L_08A39D08:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39D18u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 481u, 0x08A05DFCu>(ctx, &aot_mem) && ctx.pc == 0x08A39D18u) goto L_08A39D18;
    return;
L_08A39D18:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39D24u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 417u, 0x08AF9D58u>(ctx, &aot_mem) && ctx.pc == 0x08A39D24u) goto L_08A39D24;
    return;
L_08A39D24:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39D30u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 416u, 0x08AF9D34u>(ctx, &aot_mem) && ctx.pc == 0x08A39D30u) goto L_08A39D30;
    return;
L_08A39D30:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39D3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 419u, 0x08AF9D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39D3Cu) goto L_08A39D3C;
    return;
L_08A39D3C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39D48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 421u, 0x08AF9DC4u>(ctx, &aot_mem) && ctx.pc == 0x08A39D48u) goto L_08A39D48;
    return;
L_08A39D48:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39D54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 422u, 0x08AF9DECu>(ctx, &aot_mem) && ctx.pc == 0x08A39D54u) goto L_08A39D54;
    return;
L_08A39D54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(323))))));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(322))))));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A39D88u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39D88u) goto L_08A39D88;
    return;
L_08A39D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A39DA0u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39DA0u) goto L_08A39DA0;
    return;
L_08A39DA0:
    ctx.gpr[16] = (0u | 0u);
    goto L_08A39DA4;
L_08A39DA4:
    ctx.gpr[31] = (0x08A39DACu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 369u, 0x08A0ECE4u>(ctx, &aot_mem) && ctx.pc == 0x08A39DACu) goto L_08A39DAC;
    return;
L_08A39DAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A39E04;
      }
      goto L_08A39DB4;
    }
L_08A39DB4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_08A39E04;
      }
      goto L_08A39DC0;
    }
L_08A39DC0:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39DCCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39DCCu) goto L_08A39DCC;
    return;
L_08A39DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A39DE4u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39DE4u) goto L_08A39DE4;
    return;
L_08A39DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A39DFCu);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A39DFCu) goto L_08A39DFC;
    return;
L_08A39DFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A39DA4;
      }
      goto L_08A39E04;
    }
L_08A39E04:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39E10u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 419u, 0x08AF9D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39E10u) goto L_08A39E10;
    return;
L_08A39E10:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39E1Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 417u, 0x08AF9D58u>(ctx, &aot_mem) && ctx.pc == 0x08A39E1Cu) goto L_08A39E1C;
    return;
L_08A39E1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A39E28u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 358u, 0x08A36310u>(ctx, &aot_mem) && ctx.pc == 0x08A39E28u) goto L_08A39E28;
    return;
L_08A39E28:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2220), static_cast<std::uint8_t>(ctx.gpr[21]));
      if (branch_taken) {
          goto L_08A39EF0;
      }
      goto L_08A39E30;
    }
L_08A39E30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39EF0;
      }
      goto L_08A39E40;
    }
L_08A39E40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A39EF0;
      }
      goto L_08A39E50;
    }
L_08A39E50:
    ctx.gpr[31] = (0x08A39E58u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39E58u) goto L_08A39E58;
    return;
L_08A39E58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39EB0;
      }
      goto L_08A39E6C;
    }
L_08A39E6C:
    ctx.gpr[4] = (48863u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39EF0;
      }
      goto L_08A39E8C;
    }
L_08A39E8C:
    ctx.gpr[31] = (0x08A39E94u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A39E94u) goto L_08A39E94;
    return;
L_08A39E94:
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A39EF0;
      }
      goto L_08A39EB0;
    }
L_08A39EB0:
    ctx.gpr[4] = (16095u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A39EF0;
      }
      goto L_08A39ED0;
    }
L_08A39ED0:
    ctx.gpr[31] = (0x08A39ED8u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A39ED8u) goto L_08A39ED8;
    return;
L_08A39ED8:
    ctx.gpr[4] = (15374u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64053u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A39EF0;
L_08A39EF0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (0x08A39EFCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08A39EFCu) goto L_08A39EFC;
    return;
L_08A39EFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A04C;
      }
      goto L_08A39F04;
    }
L_08A39F04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A04C;
      }
      goto L_08A39F10;
    }
L_08A39F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 188u);
    ctx.gpr[31] = (0x08A39F20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08A39F20u) goto L_08A39F20;
    return;
L_08A39F20:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A04C;
      }
      goto L_08A39F2C;
    }
L_08A39F2C:
    ctx.gpr[31] = (0x08A39F34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 819u, 0x08AFB87Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39F34u) goto L_08A39F34;
    return;
L_08A39F34:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A04C;
      }
      goto L_08A39F44;
    }
L_08A39F44:
    ctx.gpr[31] = (0x08A39F4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 799u, 0x08AFB6B4u>(ctx, &aot_mem) && ctx.pc == 0x08A39F4Cu) goto L_08A39F4C;
    return;
L_08A39F4C:
    ctx.gpr[4] = (15733u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A04C;
      }
      goto L_08A39F68;
    }
L_08A39F68:
    ctx.gpr[31] = (0x08A39F70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 799u, 0x08AFB6B4u>(ctx, &aot_mem) && ctx.pc == 0x08A39F70u) goto L_08A39F70;
    return;
L_08A39F70:
    ctx.gpr[4] = (15887u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08A3A04C;
      }
      goto L_08A39F8C;
    }
L_08A39F8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(220)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A39FA8u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 449u, 0x08AFA07Cu>(ctx, &aot_mem) && ctx.pc == 0x08A39FA8u) goto L_08A39FA8;
    return;
L_08A39FA8:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A04C;
      }
      goto L_08A39FB8;
    }
L_08A39FB8:
    ctx.gpr[31] = (0x08A39FC0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A39FC0u) goto L_08A39FC0;
    return;
L_08A39FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2200)));
    ctx.gpr[31] = (0x08A39FCCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36118u>(ctx, &aot_mem) && ctx.pc == 0x08A39FCCu) goto L_08A39FCC;
    return;
L_08A39FCC:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A04C;
      }
      goto L_08A39FE4;
    }
L_08A39FE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2240), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08A39FF0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A39FF0u) goto L_08A39FF0;
    return;
L_08A39FF0:
    ctx.gpr[4] = (15948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A3A020u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A3A020u) goto L_08A3A020;
    return;
L_08A3A020:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3A030u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A3A030u) goto L_08A3A030;
    return;
L_08A3A030:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3A03Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 433u, 0x08AF9E80u>(ctx, &aot_mem) && ctx.pc == 0x08A3A03Cu) goto L_08A3A03C;
    return;
L_08A3A03C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2240)));
    goto L_08A3A04C;
L_08A3A04C:
    ctx.gpr[31] = (0x08A3A054u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 222u, 0x08A0DBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A054u) goto L_08A3A054;
    return;
L_08A3A054:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A3A060u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08A3840C;
L_08A3A060:
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08A3A068;
L_08A3A068:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1264)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[12]) < 4 ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3A068;
      }
      goto L_08A3A09C;
    }
L_08A3A09C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A3A0BCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A3A0BCu) goto L_08A3A0BC;
    return;
L_08A3A0BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A0C8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36118u>(ctx, &aot_mem) && ctx.pc == 0x08A3A0C8u) goto L_08A3A0C8;
    return;
L_08A3A0C8:
    ctx.gpr[31] = (0x08A3A0D0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 344u, 0x08A361DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3A0D0u) goto L_08A3A0D0;
    return;
L_08A3A0D0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[5] & 65535u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(98));
    goto L_08A3A10C;
L_08A3A10C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[17] = (ctx.gpr[16] << 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[17] = (ctx.gpr[23] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A3A144;
      }
      goto L_08A3A134;
    }
L_08A3A134:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10520)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3A1D0;
      }
      goto L_08A3A144;
    }
L_08A3A144:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3A1D0;
      }
      goto L_08A3A154;
    }
L_08A3A154:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A164;
      }
      goto L_08A3A15C;
    }
L_08A3A15C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A3A188;
      }
      goto L_08A3A164;
    }
L_08A3A164:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08A3A170u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 525u, 0x08A372C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3A170u) goto L_08A3A170;
    return;
L_08A3A170:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A184;
      }
      goto L_08A3A17C;
    }
L_08A3A17C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3A188;
      }
      goto L_08A3A184;
    }
L_08A3A184:
    ctx.gpr[19] = (0u | 0u);
    goto L_08A3A188;
L_08A3A188:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A1D0;
      }
      goto L_08A3A190;
    }
L_08A3A190:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1264)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A1D0;
      }
      goto L_08A3A1C8;
    }
L_08A3A1C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10520)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3A1D0;
L_08A3A1D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A2A0;
      }
      goto L_08A3A1EC;
    }
L_08A3A1EC:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[17] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2244), ctx.gpr[30]);
    ctx.gpr[31] = (0x08A3A208u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x08A3A208u) goto L_08A3A208;
    return;
L_08A3A208:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2248), ctx.gpr[21]);
    ctx.gpr[31] = (0x08A3A218u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3A218u) goto L_08A3A218;
    return;
L_08A3A218:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3A224u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A224u) goto L_08A3A224;
    return;
L_08A3A224:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3A234u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 339u, 0x08A36160u>(ctx, &aot_mem) && ctx.pc == 0x08A3A234u) goto L_08A3A234;
    return;
L_08A3A234:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(560));
    ctx.gpr[31] = (0x08A3A240u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A240u) goto L_08A3A240;
    return;
L_08A3A240:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2164)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(432));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3A254u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 588u, 0x08B068ECu>(ctx, &aot_mem) && ctx.pc == 0x08A3A254u) goto L_08A3A254;
    return;
L_08A3A254:
    ctx.gpr[21] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3A264u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 588u, 0x08B068ECu>(ctx, &aot_mem) && ctx.pc == 0x08A3A264u) goto L_08A3A264;
    return;
L_08A3A264:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3A274u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 339u, 0x08A36160u>(ctx, &aot_mem) && ctx.pc == 0x08A3A274u) goto L_08A3A274;
    return;
L_08A3A274:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3A284u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 334u, 0x08A360D0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A284u) goto L_08A3A284;
    return;
L_08A3A284:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A290u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A290u) goto L_08A3A290;
    return;
L_08A3A290:
    ctx.gpr[31] = (0x08A3A298u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 347u, 0x08A3620Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A298u) goto L_08A3A298;
    return;
L_08A3A298:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2248)));
    goto L_08A3A2A0;
L_08A3A2A0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (0u | 2u);
      if (branch_taken) {
          goto L_08A3A10C;
      }
      goto L_08A3A2B4;
    }
L_08A3A2B4:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1208), 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1204), 0u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1215), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1214), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    ctx.gpr[19] = (ctx.gpr[23] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(1024));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    goto L_08A3A2E0;
L_08A3A2E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A430;
      }
      goto L_08A3A2FC;
    }
L_08A3A2FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_08A3A318;
      }
      goto L_08A3A30C;
    }
L_08A3A30C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3A31C;
      }
      goto L_08A3A318;
    }
L_08A3A318:
    ctx.fpr[20] = ctx.fpr[26] - ctx.fpr[20];
    goto L_08A3A31C;
L_08A3A31C:
    ctx.gpr[31] = (0x08A3A324u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3A324u) goto L_08A3A324;
    return;
L_08A3A324:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A380;
      }
      goto L_08A3A338;
    }
L_08A3A338:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2240), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2252), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x08A3A354u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3A354u) goto L_08A3A354;
    return;
L_08A3A354:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2252)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3A378u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 416u, 0x08A0F2B8u>(ctx, &aot_mem) && ctx.pc == 0x08A3A378u) goto L_08A3A378;
    return;
L_08A3A378:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2240)));
      if (branch_taken) {
          goto L_08A3A3A4;
      }
      goto L_08A3A380;
    }
L_08A3A380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A3A4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 408u, 0x08A0F19Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3A3A4u) goto L_08A3A3A4;
    return;
L_08A3A3A4:
    ctx.gpr[31] = (0x08A3A3ACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08A3A3ACu) goto L_08A3A3AC;
    return;
L_08A3A3AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_08A3A428;
      }
      goto L_08A3A3C4;
    }
L_08A3A3C4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 34 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A3A428;
      }
      goto L_08A3A3D0;
    }
L_08A3A3D0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(5664)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3A3E8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A400;
      }
      goto L_08A3A3F4;
    }
L_08A3A3F4:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1204), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1214), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08A3A408;
      }
      goto L_08A3A400;
    }
L_08A3A400:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1208), ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1215), static_cast<std::uint8_t>(ctx.gpr[9]));
    goto L_08A3A408;
L_08A3A408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A428;
      }
      goto L_08A3A410;
    }
L_08A3A410:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A424;
      }
      goto L_08A3A41C;
    }
L_08A3A41C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1204), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A3A428;
      }
      goto L_08A3A424;
    }
L_08A3A424:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1208), ctx.gpr[8]);
    goto L_08A3A428;
L_08A3A428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A458;
      }
      goto L_08A3A430;
    }
L_08A3A430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2164)));
    ctx.gpr[31] = (0x08A3A43Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 588u, 0x08B068ECu>(ctx, &aot_mem) && ctx.pc == 0x08A3A43Cu) goto L_08A3A43C;
    return;
L_08A3A43C:
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A3A44Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 334u, 0x08A360D0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A44Cu) goto L_08A3A44C;
    return;
L_08A3A44C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A458u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A458u) goto L_08A3A458;
    return;
L_08A3A458:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A3A2E0;
      }
      goto L_08A3A478;
    }
L_08A3A478:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    goto L_08A3A484;
L_08A3A484:
    ctx.gpr[18] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(496));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(560));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3A4A0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 438u, 0x08AF9F48u>(ctx, &aot_mem) && ctx.pc == 0x08A3A4A0u) goto L_08A3A4A0;
    return;
L_08A3A4A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A4ACu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A4ACu) goto L_08A3A4AC;
    return;
L_08A3A4AC:
    ctx.gpr[16] = (ctx.gpr[19] << 2u);
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A4E4;
      }
      goto L_08A3A4C0;
    }
L_08A3A4C0:
    ctx.gpr[6] = (ctx.gpr[23] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1376));
    ctx.gpr[31] = (0x08A3A4D4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 438u, 0x08AF9F48u>(ctx, &aot_mem) && ctx.pc == 0x08A3A4D4u) goto L_08A3A4D4;
    return;
L_08A3A4D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A4E0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3A4E0u) goto L_08A3A4E0;
    return;
L_08A3A4E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1360), 0u);
    goto L_08A3A4E4;
L_08A3A4E4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A484;
      }
      goto L_08A3A4F8;
    }
L_08A3A4F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A52C;
      }
      goto L_08A3A514;
    }
L_08A3A514:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1156)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A64C;
      }
      goto L_08A3A52C;
    }
L_08A3A52C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
      if (branch_taken) {
          goto L_08A3A56C;
      }
      goto L_08A3A544;
    }
L_08A3A544:
    ctx.gpr[31] = (0x08A3A54Cu);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3A54Cu) goto L_08A3A54C;
    return;
L_08A3A54C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.gpr[31] = (0x08A3A558u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3A558u) goto L_08A3A558;
    return;
L_08A3A558:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A564u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A564u) goto L_08A3A564;
    return;
L_08A3A564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A58C;
      }
      goto L_08A3A56C;
    }
L_08A3A56C:
    ctx.gpr[31] = (0x08A3A574u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1056));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3A574u) goto L_08A3A574;
    return;
L_08A3A574:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[31] = (0x08A3A580u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3A580u) goto L_08A3A580;
    return;
L_08A3A580:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A58Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A58Cu) goto L_08A3A58C;
    return;
L_08A3A58C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A5BC;
      }
      goto L_08A3A5A0;
    }
L_08A3A5A0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3A5B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 337u, 0x08A36134u>(ctx, &aot_mem) && ctx.pc == 0x08A3A5B0u) goto L_08A3A5B0;
    return;
L_08A3A5B0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[31] = (0x08A3A5BCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A5BCu) goto L_08A3A5BC;
    return;
L_08A3A5BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1156)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A5FC;
      }
      goto L_08A3A5D4;
    }
L_08A3A5D4:
    ctx.gpr[31] = (0x08A3A5DCu);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1056));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3A5DCu) goto L_08A3A5DC;
    return;
L_08A3A5DC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    ctx.gpr[31] = (0x08A3A5E8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3A5E8u) goto L_08A3A5E8;
    return;
L_08A3A5E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A5F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A5F4u) goto L_08A3A5F4;
    return;
L_08A3A5F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A61C;
      }
      goto L_08A3A5FC;
    }
L_08A3A5FC:
    ctx.gpr[31] = (0x08A3A604u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3A604u) goto L_08A3A604;
    return;
L_08A3A604:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[31] = (0x08A3A610u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3A610u) goto L_08A3A610;
    return;
L_08A3A610:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A61Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A61Cu) goto L_08A3A61C;
    return;
L_08A3A61C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A64C;
      }
      goto L_08A3A630;
    }
L_08A3A630:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3A640u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 337u, 0x08A36134u>(ctx, &aot_mem) && ctx.pc == 0x08A3A640u) goto L_08A3A640;
    return;
L_08A3A640:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[31] = (0x08A3A64Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A64Cu) goto L_08A3A64C;
    return;
L_08A3A64C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A67C;
      }
      goto L_08A3A664;
    }
L_08A3A664:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1164)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A79C;
      }
      goto L_08A3A67C;
    }
L_08A3A67C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
      if (branch_taken) {
          goto L_08A3A6BC;
      }
      goto L_08A3A694;
    }
L_08A3A694:
    ctx.gpr[31] = (0x08A3A69Cu);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1088));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3A69Cu) goto L_08A3A69C;
    return;
L_08A3A69C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08A3A6A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3A6A8u) goto L_08A3A6A8;
    return;
L_08A3A6A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A6B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A6B4u) goto L_08A3A6B4;
    return;
L_08A3A6B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A6DC;
      }
      goto L_08A3A6BC;
    }
L_08A3A6BC:
    ctx.gpr[31] = (0x08A3A6C4u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1120));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3A6C4u) goto L_08A3A6C4;
    return;
L_08A3A6C4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08A3A6D0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3A6D0u) goto L_08A3A6D0;
    return;
L_08A3A6D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A6DCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A6DCu) goto L_08A3A6DC;
    return;
L_08A3A6DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A70C;
      }
      goto L_08A3A6F0;
    }
L_08A3A6F0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3A700u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 337u, 0x08A36134u>(ctx, &aot_mem) && ctx.pc == 0x08A3A700u) goto L_08A3A700;
    return;
L_08A3A700:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[31] = (0x08A3A70Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A70Cu) goto L_08A3A70C;
    return;
L_08A3A70C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1164)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A74C;
      }
      goto L_08A3A724;
    }
L_08A3A724:
    ctx.gpr[31] = (0x08A3A72Cu);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1120));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3A72Cu) goto L_08A3A72C;
    return;
L_08A3A72C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[31] = (0x08A3A738u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3A738u) goto L_08A3A738;
    return;
L_08A3A738:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A744u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A744u) goto L_08A3A744;
    return;
L_08A3A744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A76C;
      }
      goto L_08A3A74C;
    }
L_08A3A74C:
    ctx.gpr[31] = (0x08A3A754u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(1088));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3A754u) goto L_08A3A754;
    return;
L_08A3A754:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[31] = (0x08A3A760u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3A760u) goto L_08A3A760;
    return;
L_08A3A760:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3A76Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A76Cu) goto L_08A3A76C;
    return;
L_08A3A76C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A79C;
      }
      goto L_08A3A780;
    }
L_08A3A780:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A790u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 337u, 0x08A36134u>(ctx, &aot_mem) && ctx.pc == 0x08A3A790u) goto L_08A3A790;
    return;
L_08A3A790:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[31] = (0x08A3A79Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A79Cu) goto L_08A3A79C;
    return;
L_08A3A79C:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2200)));
    ctx.gpr[31] = (0x08A3A7B4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 348u, 0x08A36234u>(ctx, &aot_mem) && ctx.pc == 0x08A3A7B4u) goto L_08A3A7B4;
    return;
L_08A3A7B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[31] = (0x08A3A7C4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(396));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3A7C4u) goto L_08A3A7C4;
    return;
L_08A3A7C4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2229u << 16u);
    goto L_08A3A7CC;
L_08A3A7CC:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3A818;
      }
      goto L_08A3A7EC;
    }
L_08A3A7EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(624)));
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(432));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(560));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(496));
    ctx.gpr[31] = (0x08A3A818u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 428u, 0x08A0F430u>(ctx, &aot_mem) && ctx.pc == 0x08A3A818u) goto L_08A3A818;
    return;
L_08A3A818:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A7CC;
      }
      goto L_08A3A82C;
    }
L_08A3A82C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(1376));
    goto L_08A3A848;
L_08A3A848:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A3A858u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 438u, 0x08AF9F48u>(ctx, &aot_mem) && ctx.pc == 0x08A3A858u) goto L_08A3A858;
    return;
L_08A3A858:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A864u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3A864u) goto L_08A3A864;
    return;
L_08A3A864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A890;
      }
      goto L_08A3A870;
    }
L_08A3A870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3A880u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 438u, 0x08AF9F48u>(ctx, &aot_mem) && ctx.pc == 0x08A3A880u) goto L_08A3A880;
    return;
L_08A3A880:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3A88Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3A88Cu) goto L_08A3A88C;
    return;
L_08A3A88C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1360), 0u);
    goto L_08A3A890;
L_08A3A890:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A3A848;
      }
      goto L_08A3A8AC;
    }
L_08A3A8AC:
    ctx.gpr[31] = (0x08A3A8B4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A3A8B4u) goto L_08A3A8B4;
    return;
L_08A3A8B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2200)));
    ctx.gpr[31] = (0x08A3A8C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36118u>(ctx, &aot_mem) && ctx.pc == 0x08A3A8C0u) goto L_08A3A8C0;
    return;
L_08A3A8C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16174)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1446)));
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(588));
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(624));
    ctx.gpr[7] = (ctx.gpr[23] + static_cast<std::uint32_t>(628));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A3A900u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 170u, 0x08A7CDCCu>(ctx, &aot_mem) && ctx.pc == 0x08A3A900u) goto L_08A3A900;
    return;
L_08A3A900:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(216)));
    ctx.fpr[22] = ctx.fpr[0] / ctx.fpr[22];
    ctx.gpr[31] = (0x08A3A910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3A910u) goto L_08A3A910;
    return;
L_08A3A910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(592)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A3A934u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08A3A934u) goto L_08A3A934;
    return;
L_08A3A934:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A968;
      }
      goto L_08A3A93C;
    }
L_08A3A93C:
    ctx.gpr[31] = (0x08A3A944u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08A3A944u) goto L_08A3A944;
    return;
L_08A3A944:
    ctx.gpr[4] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3A968;
      }
      goto L_08A3A950;
    }
L_08A3A950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3A968;
      }
      goto L_08A3A964;
    }
L_08A3A964:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A3A968;
L_08A3A968:
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
        goto L_08A3A97C;
    }
    goto L_08A3A974;
L_08A3A974:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A3A98C;
      }
      goto L_08A3A97C;
    }
L_08A3A97C:
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    goto L_08A3A98C;
L_08A3A98C:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
        goto L_08A3A99C;
    }
    goto L_08A3A994;
L_08A3A994:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2176), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A3A9B4;
      }
      goto L_08A3A99C;
    }
L_08A3A99C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3A9B4;
L_08A3A9B4:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
        goto L_08A3A9C4;
    }
    goto L_08A3A9BC;
L_08A3A9BC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A3A9D4;
      }
      goto L_08A3A9C4;
    }
L_08A3A9C4:
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A3A9D4;
L_08A3A9D4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_08A3A9E8;
      }
      goto L_08A3A9DC;
    }
L_08A3A9DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2216), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A3A9F8;
      }
      goto L_08A3A9E8;
    }
L_08A3A9E8:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3A9F8;
L_08A3A9F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1446)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1445), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1447), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A3AA14u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1446), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 344u, 0x08A361DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3AA14u) goto L_08A3AA14;
    return;
L_08A3AA14:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3AA3C;
      }
      goto L_08A3AA24;
    }
L_08A3AA24:
    ctx.gpr[31] = (0x08A3AA2Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 344u, 0x08A361DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3AA2Cu) goto L_08A3AA2C;
    return;
L_08A3AA2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(620)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(620), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3AA40;
      }
      goto L_08A3AA3C;
    }
L_08A3AA3C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(620), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08A3AA40;
L_08A3AA40:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1156));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(1024));
    goto L_08A3AA5C;
L_08A3AA5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3AA80;
      }
      goto L_08A3AA78;
    }
L_08A3AA78:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1184), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08A3AAA8;
      }
      goto L_08A3AA80;
    }
L_08A3AA80:
    ctx.gpr[31] = (0x08A3AA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3AA88u) goto L_08A3AA88;
    return;
L_08A3AA88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1156), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3AAA4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AAA4u) goto L_08A3AAA4;
    return;
L_08A3AAA4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1184), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A3AAA8;
L_08A3AAA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3AB3C;
      }
      goto L_08A3AABC;
    }
L_08A3AABC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1445)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1445), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A3AADC;
      }
      goto L_08A3AAD0;
    }
L_08A3AAD0:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3AAE4;
      }
      goto L_08A3AADC;
    }
L_08A3AADC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1446), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A3AAE4;
L_08A3AAE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1445)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3AB1C;
      }
      goto L_08A3AAF4;
    }
L_08A3AAF4:
    ctx.gpr[31] = (0x08A3AAFCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3AAFCu) goto L_08A3AAFC;
    return;
L_08A3AAFC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3AB08u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3AB08u) goto L_08A3AB08;
    return;
L_08A3AB08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2160)));
    ctx.gpr[31] = (0x08A3AB14u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3AB14u) goto L_08A3AB14;
    return;
L_08A3AB14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AB3C;
      }
      goto L_08A3AB1C;
    }
L_08A3AB1C:
    ctx.gpr[31] = (0x08A3AB24u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3AB24u) goto L_08A3AB24;
    return;
L_08A3AB24:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3AB30u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3AB30u) goto L_08A3AB30;
    return;
L_08A3AB30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2160)));
    ctx.gpr[31] = (0x08A3AB3Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08A3AB3Cu) goto L_08A3AB3C;
    return;
L_08A3AB3C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A3AA5C;
      }
      goto L_08A3AB50;
    }
L_08A3AB50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1445)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A3ABCC;
      }
      goto L_08A3AB5C;
    }
L_08A3AB5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1445)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(976));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08A3AB78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 342u, 0x08A361B0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AB78u) goto L_08A3AB78;
    return;
L_08A3AB78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2160)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3AB88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3AB88u) goto L_08A3AB88;
    return;
L_08A3AB88:
    ctx.gpr[31] = (0x08A3AB90u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AB90u) goto L_08A3AB90;
    return;
L_08A3AB90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3AB9Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36118u>(ctx, &aot_mem) && ctx.pc == 0x08A3AB9Cu) goto L_08A3AB9C;
    return;
L_08A3AB9C:
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3ABC4;
      }
      goto L_08A3ABB4;
    }
L_08A3ABB4:
    ctx.gpr[5] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3ABC4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 351u, 0x08A36278u>(ctx, &aot_mem) && ctx.pc == 0x08A3ABC4u) goto L_08A3ABC4;
    return;
L_08A3ABC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ABEC;
      }
      goto L_08A3ABCC;
    }
L_08A3ABCC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08A3ABE0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3ABE0u) goto L_08A3ABE0;
    return;
L_08A3ABE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2160)));
    ctx.gpr[31] = (0x08A3ABECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3ABECu) goto L_08A3ABEC;
    return;
L_08A3ABEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1156)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08A3AC14;
      }
      goto L_08A3AC04;
    }
L_08A3AC04:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2204), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3AC1C;
      }
      goto L_08A3AC14;
    }
L_08A3AC14:
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2204), ctx.gpr[4]);
    goto L_08A3AC1C;
L_08A3AC1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2188), ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3AC34u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 588u, 0x08B068ECu>(ctx, &aot_mem) && ctx.pc == 0x08A3AC34u) goto L_08A3AC34;
    return;
L_08A3AC34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A3AC48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 588u, 0x08B068ECu>(ctx, &aot_mem) && ctx.pc == 0x08A3AC48u) goto L_08A3AC48;
    return;
L_08A3AC48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[31] = (0x08A3AC78u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 334u, 0x08A360D0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AC78u) goto L_08A3AC78;
    return;
L_08A3AC78:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[31] = (0x08A3AC84u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3AC84u) goto L_08A3AC84;
    return;
L_08A3AC84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1164)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A3ACA8;
      }
      goto L_08A3AC9C;
    }
L_08A3AC9C:
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 64u);
      if (branch_taken) {
          goto L_08A3ACAC;
      }
      goto L_08A3ACA8;
    }
L_08A3ACA8:
    ctx.gpr[18] = (0u | 96u);
    goto L_08A3ACAC;
L_08A3ACAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2184), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3ACC0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 588u, 0x08B068ECu>(ctx, &aot_mem) && ctx.pc == 0x08A3ACC0u) goto L_08A3ACC0;
    return;
L_08A3ACC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A3ACD4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 588u, 0x08B068ECu>(ctx, &aot_mem) && ctx.pc == 0x08A3ACD4u) goto L_08A3ACD4;
    return;
L_08A3ACD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[31] = (0x08A3AD04u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 334u, 0x08A360D0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AD04u) goto L_08A3AD04;
    return;
L_08A3AD04:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    ctx.gpr[31] = (0x08A3AD10u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3AD10u) goto L_08A3AD10;
    return;
L_08A3AD10:
    ctx.gpr[31] = (0x08A3AD18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 284u, 0x08A89E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AD18u) goto L_08A3AD18;
    return;
L_08A3AD18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1284)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10532)));
    ctx.gpr[4] = (16000u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A3AD40u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08A3AD40u) goto L_08A3AD40;
    return;
L_08A3AD40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ADB0;
      }
      goto L_08A3AD48;
    }
L_08A3AD48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ADB0;
      }
      goto L_08A3AD58;
    }
L_08A3AD58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3ADB0;
      }
      goto L_08A3AD68;
    }
L_08A3AD68:
    ctx.gpr[4] = (16050u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    ctx.gpr[4] = (ctx.gpr[4] | 47299u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A3B008;
      }
      goto L_08A3AD88;
    }
L_08A3AD88:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
    ctx.gpr[31] = (0x08A3AD94u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3AD94u) goto L_08A3AD94;
    return;
L_08A3AD94:
    ctx.gpr[4] = (15574u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 30544u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3B008;
      }
      goto L_08A3ADB0;
    }
L_08A3ADB0:
    ctx.gpr[31] = (0x08A3ADB8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 344u, 0x08A361DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3ADB8u) goto L_08A3ADB8;
    return;
L_08A3ADB8:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3AE24;
      }
      goto L_08A3ADC8;
    }
L_08A3ADC8:
    ctx.gpr[31] = (0x08A3ADD0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(116)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 344u, 0x08A361DCu>(ctx, &aot_mem) && ctx.pc == 0x08A3ADD0u) goto L_08A3ADD0;
    return;
L_08A3ADD0:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3AE24;
      }
      goto L_08A3ADE0;
    }
L_08A3ADE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[30])) && ctx.fpr[12] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3AE24;
      }
      goto L_08A3ADF4;
    }
L_08A3ADF4:
    ctx.gpr[4] = (16245u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
    ctx.gpr[31] = (0x08A3AE08u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3AE08u) goto L_08A3AE08;
    return;
L_08A3AE08:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A3AE14u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 387u, 0x08AF9B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AE14u) goto L_08A3AE14;
    return;
L_08A3AE14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3B008;
      }
      goto L_08A3AE24;
    }
L_08A3AE24:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3AFE0;
      }
      goto L_08A3AE3C;
    }
L_08A3AE3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
        goto L_08A3AE68;
    }
    goto L_08A3AE50;
L_08A3AE50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A3AFE0;
      }
      goto L_08A3AE64;
    }
L_08A3AE64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
    goto L_08A3AE68;
L_08A3AE68:
    ctx.gpr[31] = (0x08A3AE70u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08A3AE70u) goto L_08A3AE70;
    return;
L_08A3AE70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3AFE0;
      }
      goto L_08A3AE78;
    }
L_08A3AE78:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2196), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3AE8Cu);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 426u, 0x08AF9E48u>(ctx, &aot_mem) && ctx.pc == 0x08A3AE8Cu) goto L_08A3AE8C;
    return;
L_08A3AE8C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3AE98u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 427u, 0x08AF9E50u>(ctx, &aot_mem) && ctx.pc == 0x08A3AE98u) goto L_08A3AE98;
    return;
L_08A3AE98:
    ctx.gpr[31] = (0x08A3AEA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 199u, 0x08925754u>(ctx, &aot_mem) && ctx.pc == 0x08A3AEA0u) goto L_08A3AEA0;
    return;
L_08A3AEA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[18]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1024));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x08A3AEC4u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08A3AEC4u) goto L_08A3AEC4;
    return;
L_08A3AEC4:
    ctx.gpr[31] = (0x08A3AECCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AECCu) goto L_08A3AECC;
    return;
L_08A3AECC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1240));
      if (branch_taken) {
          goto L_08A3AEF4;
      }
      goto L_08A3AED8;
    }
L_08A3AED8:
    ctx.gpr[31] = (0x08A3AEE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08A3AEE0u) goto L_08A3AEE0;
    return;
L_08A3AEE0:
    ctx.gpr[31] = (0x08A3AEE8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08A3AEE8u) goto L_08A3AEE8;
    return;
L_08A3AEE8:
    ctx.gpr[4] = (0u | 4u);
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
        goto L_08A3AF04;
    }
    goto L_08A3AEF4;
L_08A3AEF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    goto L_08A3AF04;
L_08A3AF04:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1236), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1236));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3AF20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x08A3AF20u) goto L_08A3AF20;
    return;
L_08A3AF20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A3AF2Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 378u, 0x08AF9A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3AF2Cu) goto L_08A3AF2C;
    return;
L_08A3AF2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3AF84;
      }
      goto L_08A3AF68;
    }
L_08A3AF68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1308)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3AFB4;
      }
      goto L_08A3AF84;
    }
L_08A3AF84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3AFC8;
      }
      goto L_08A3AFA0;
    }
L_08A3AFA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1308)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3AFC8;
      }
      goto L_08A3AFB4;
    }
L_08A3AFB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1232)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3AFC8;
L_08A3AFC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[31] = (0x08A3AFD8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x08A3AFD8u) goto L_08A3AFD8;
    return;
L_08A3AFD8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A3AFE4;
      }
      goto L_08A3AFE0;
    }
L_08A3AFE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A3AFE4;
L_08A3AFE4:
    ctx.gpr[31] = (0x08A3AFECu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08A3AFECu) goto L_08A3AFEC;
    return;
L_08A3AFEC:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
        goto L_08A3AFFC;
    }
    goto L_08A3AFF4;
L_08A3AFF4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    goto L_08A3AFFC;
L_08A3AFFC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1232)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3B008;
L_08A3B008:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2200)));
    ctx.gpr[31] = (0x08A3B014u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 346u, 0x08A361FCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B014u) goto L_08A3B014;
    return;
L_08A3B014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2180), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3B368;
      }
      goto L_08A3B030;
    }
L_08A3B030:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A3B05C;
    }
    goto L_08A3B044;
L_08A3B044:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16243u << 16u);
      if (branch_taken) {
          goto L_08A3B348;
      }
      goto L_08A3B058;
    }
L_08A3B058:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A3B05C;
L_08A3B05C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2204)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1192)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2212)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2232)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1296));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1024));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1344));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[30] = (ctx.gpr[23] + static_cast<std::uint32_t>(1224));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A3B0B8;
      }
      goto L_08A3B09C;
    }
L_08A3B09C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A3B0B8;
      }
      goto L_08A3B0B0;
    }
L_08A3B0B0:
    ctx.gpr[22] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A3B0B8;
L_08A3B0B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2248), ctx.gpr[20]);
    ctx.gpr[31] = (0x08A3B0C4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B0C4u) goto L_08A3B0C4;
    return;
L_08A3B0C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    ctx.gpr[31] = (0x08A3B0D0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x08A3B0D0u) goto L_08A3B0D0;
    return;
L_08A3B0D0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A3B0E4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B0E4u) goto L_08A3B0E4;
    return;
L_08A3B0E4:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1280));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3B0F8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 334u, 0x08A360D0u>(ctx, &aot_mem) && ctx.pc == 0x08A3B0F8u) goto L_08A3B0F8;
    return;
L_08A3B0F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B104u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3B104u) goto L_08A3B104;
    return;
L_08A3B104:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1312));
    ctx.gpr[31] = (0x08A3B110u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3B110u) goto L_08A3B110;
    return;
L_08A3B110:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B11Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3B11Cu) goto L_08A3B11C;
    return;
L_08A3B11C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B128u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36118u>(ctx, &aot_mem) && ctx.pc == 0x08A3B128u) goto L_08A3B128;
    return;
L_08A3B128:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A3B134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3B134u) goto L_08A3B134;
    return;
L_08A3B134:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B140u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3B140u) goto L_08A3B140;
    return;
L_08A3B140:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A3B150u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A3B150u) goto L_08A3B150;
    return;
L_08A3B150:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B15Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B15Cu) goto L_08A3B15C;
    return;
L_08A3B15C:
    ctx.gpr[31] = (0x08A3B164u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 347u, 0x08A3620Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B164u) goto L_08A3B164;
    return;
L_08A3B164:
    ctx.gpr[31] = (0x08A3B16Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3B16Cu) goto L_08A3B16C;
    return;
L_08A3B16C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B178u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3B178u) goto L_08A3B178;
    return;
L_08A3B178:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B188u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 333u, 0x08A360B8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B188u) goto L_08A3B188;
    return;
L_08A3B188:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3B194u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3B194u) goto L_08A3B194;
    return;
L_08A3B194:
    ctx.gpr[31] = (0x08A3B19Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 347u, 0x08A3620Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B19Cu) goto L_08A3B19C;
    return;
L_08A3B19C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-29376), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3B1ACu);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 426u, 0x08AF9E48u>(ctx, &aot_mem) && ctx.pc == 0x08A3B1ACu) goto L_08A3B1AC;
    return;
L_08A3B1AC:
    ctx.gpr[31] = (0x08A3B1B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 199u, 0x08925754u>(ctx, &aot_mem) && ctx.pc == 0x08A3B1B4u) goto L_08A3B1B4;
    return;
L_08A3B1B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1348)));
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2248)));
      if (branch_taken) {
          goto L_08A3B224;
      }
      goto L_08A3B1D0;
    }
L_08A3B1D0:
    ctx.gpr[31] = (0x08A3B1D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08A3B1D8u) goto L_08A3B1D8;
    return;
L_08A3B1D8:
    ctx.gpr[31] = (0x08A3B1E0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08A3B1E0u) goto L_08A3B1E0;
    return;
L_08A3B1E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3B224;
      }
      goto L_08A3B1EC;
    }
L_08A3B1EC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A3B210;
    }
    goto L_08A3B1F4;
L_08A3B1F4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B218;
      }
      goto L_08A3B200;
    }
L_08A3B200:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3B224;
      }
      goto L_08A3B210;
    }
L_08A3B210:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B224;
      }
      goto L_08A3B218;
    }
L_08A3B218:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A3B224;
L_08A3B224:
    ctx.gpr[31] = (0x08A3B22Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 412u, 0x08AF9D10u>(ctx, &aot_mem) && ctx.pc == 0x08A3B22Cu) goto L_08A3B22C;
    return;
L_08A3B22C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B248;
      }
      goto L_08A3B234;
    }
L_08A3B234:
    ctx.gpr[31] = (0x08A3B23Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08A3B23Cu) goto L_08A3B23C;
    return;
L_08A3B23C:
    ctx.gpr[31] = (0x08A3B244u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 212u, 0x08925814u>(ctx, &aot_mem) && ctx.pc == 0x08A3B244u) goto L_08A3B244;
    return;
L_08A3B244:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A3B248;
L_08A3B248:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3B288;
      }
      goto L_08A3B258;
    }
L_08A3B258:
    ctx.gpr[31] = (0x08A3B260u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A3B260u) goto L_08A3B260;
    return;
L_08A3B260:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10436)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10440)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3B278u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B278u) goto L_08A3B278;
    return;
L_08A3B278:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3B284u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08A3B284u) goto L_08A3B284;
    return;
L_08A3B284:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A3B288;
L_08A3B288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1452)));
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29372), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3B2A8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 438u, 0x08AF9F48u>(ctx, &aot_mem) && ctx.pc == 0x08A3B2A8u) goto L_08A3B2A8;
    return;
L_08A3B2A8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B2B4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3B2B4u) goto L_08A3B2B4;
    return;
L_08A3B2B4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2192)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-29376)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1016)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2208)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3B300u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 343u, 0x088A6414u>(ctx, &aot_mem) && ctx.pc == 0x08A3B300u) goto L_08A3B300;
    return;
L_08A3B300:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A3B334;
      }
      goto L_08A3B30C;
    }
L_08A3B30C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29372)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2224)));
      if (branch_taken) {
          goto L_08A3B32C;
      }
      goto L_08A3B31C;
    }
L_08A3B31C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29372)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A3B334;
      }
      goto L_08A3B32C;
    }
L_08A3B32C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29372), 0u);
    goto L_08A3B334;
L_08A3B334:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2224)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3B368;
      }
      goto L_08A3B348;
    }
L_08A3B348:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1224)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1216)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A3B368;
L_08A3B368:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1192)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A3B390;
      }
      goto L_08A3B37C;
    }
L_08A3B37C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A3B7B4;
      }
      goto L_08A3B390;
    }
L_08A3B390:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1392));
    ctx.gpr[31] = (0x08A3B3A0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A3B3A0u) goto L_08A3B3A0;
    return;
L_08A3B3A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B3ACu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 346u, 0x08A361FCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B3ACu) goto L_08A3B3AC;
    return;
L_08A3B3AC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1408));
    ctx.gpr[31] = (0x08A3B3B8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B3B8u) goto L_08A3B3B8;
    return;
L_08A3B3B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3B3C4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 346u, 0x08A361FCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B3C4u) goto L_08A3B3C4;
    return;
L_08A3B3C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1360));
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08A3B3DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3B3DCu) goto L_08A3B3DC;
    return;
L_08A3B3DC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B3E8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3B3E8u) goto L_08A3B3E8;
    return;
L_08A3B3E8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B3F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36118u>(ctx, &aot_mem) && ctx.pc == 0x08A3B3F4u) goto L_08A3B3F4;
    return;
L_08A3B3F4:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1376));
    ctx.gpr[31] = (0x08A3B404u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3B404u) goto L_08A3B404;
    return;
L_08A3B404:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B410u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3B410u) goto L_08A3B410;
    return;
L_08A3B410:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A3B420u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A3B420u) goto L_08A3B420;
    return;
L_08A3B420:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B42Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B42Cu) goto L_08A3B42C;
    return;
L_08A3B42C:
    ctx.gpr[31] = (0x08A3B434u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 347u, 0x08A3620Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B434u) goto L_08A3B434;
    return;
L_08A3B434:
    ctx.gpr[31] = (0x08A3B43Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3B43Cu) goto L_08A3B43C;
    return;
L_08A3B43C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B448u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3B448u) goto L_08A3B448;
    return;
L_08A3B448:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B458u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 333u, 0x08A360B8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B458u) goto L_08A3B458;
    return;
L_08A3B458:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3B464u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3B464u) goto L_08A3B464;
    return;
L_08A3B464:
    ctx.gpr[31] = (0x08A3B46Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 347u, 0x08A3620Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B46Cu) goto L_08A3B46C;
    return;
L_08A3B46C:
    ctx.gpr[31] = (0x08A3B474u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 446u, 0x08AFA05Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B474u) goto L_08A3B474;
    return;
L_08A3B474:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[20] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A3B4B8;
      }
      goto L_08A3B480;
    }
L_08A3B480:
    ctx.gpr[31] = (0x08A3B488u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3B488u) goto L_08A3B488;
    return;
L_08A3B488:
    ctx.gpr[31] = (0x08A3B490u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 589u, 0x08B068FCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B490u) goto L_08A3B490;
    return;
L_08A3B490:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3B4E0;
      }
      goto L_08A3B49C;
    }
L_08A3B49C:
    ctx.gpr[31] = (0x08A3B4A4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A3B4A4u) goto L_08A3B4A4;
    return;
L_08A3B4A4:
    ctx.gpr[31] = (0x08A3B4ACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 589u, 0x08B068FCu>(ctx, &aot_mem) && ctx.pc == 0x08A3B4ACu) goto L_08A3B4AC;
    return;
L_08A3B4AC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A3B4E0;
      }
      goto L_08A3B4B8;
    }
L_08A3B4B8:
    ctx.gpr[31] = (0x08A3B4C0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 446u, 0x08AFA05Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B4C0u) goto L_08A3B4C0;
    return;
L_08A3B4C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B4FC;
      }
      goto L_08A3B4C8;
    }
L_08A3B4C8:
    ctx.gpr[31] = (0x08A3B4D0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 372u, 0x08AF9994u>(ctx, &aot_mem) && ctx.pc == 0x08A3B4D0u) goto L_08A3B4D0;
    return;
L_08A3B4D0:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B4FC;
      }
      goto L_08A3B4E0;
    }
L_08A3B4E0:
    ctx.gpr[4] = (18076u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2176)));
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1344), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08A3B5EC;
      }
      goto L_08A3B4FC;
    }
L_08A3B4FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2176)));
      if (branch_taken) {
          goto L_08A3B560;
      }
      goto L_08A3B508;
    }
L_08A3B508:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (47940u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1424));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3B538u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B538u) goto L_08A3B538;
    return;
L_08A3B538:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3B548u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A3B548u) goto L_08A3B548;
    return;
L_08A3B548:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x08A3B558u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B558u) goto L_08A3B558;
    return;
L_08A3B558:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08A3B5EC;
      }
      goto L_08A3B560;
    }
L_08A3B560:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2232)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1344)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08A3B5EC;
      }
      goto L_08A3B578;
    }
L_08A3B578:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B5EC;
      }
      goto L_08A3B594;
    }
L_08A3B594:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1344)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (47940u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1440));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A3B5CCu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B5CCu) goto L_08A3B5CC;
    return;
L_08A3B5CC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3B5DCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A3B5DCu) goto L_08A3B5DC;
    return;
L_08A3B5DC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[31] = (0x08A3B5ECu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B5ECu) goto L_08A3B5EC;
    return;
L_08A3B5EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-29376)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B618;
      }
      goto L_08A3B600;
    }
L_08A3B600:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2232)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B618;
      }
      goto L_08A3B614;
    }
L_08A3B614:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2232), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08A3B618;
L_08A3B618:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2224)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-29376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A3B62Cu);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 426u, 0x08AF9E48u>(ctx, &aot_mem) && ctx.pc == 0x08A3B62Cu) goto L_08A3B62C;
    return;
L_08A3B62C:
    ctx.gpr[31] = (0x08A3B634u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 199u, 0x08925754u>(ctx, &aot_mem) && ctx.pc == 0x08A3B634u) goto L_08A3B634;
    return;
L_08A3B634:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1348)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A3B6A0;
      }
      goto L_08A3B64C;
    }
L_08A3B64C:
    ctx.gpr[31] = (0x08A3B654u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08A3B654u) goto L_08A3B654;
    return;
L_08A3B654:
    ctx.gpr[31] = (0x08A3B65Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08A3B65Cu) goto L_08A3B65C;
    return;
L_08A3B65C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3B6A0;
      }
      goto L_08A3B668;
    }
L_08A3B668:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A3B68C;
    }
    goto L_08A3B670;
L_08A3B670:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B694;
      }
      goto L_08A3B67C;
    }
L_08A3B67C:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3B6A0;
      }
      goto L_08A3B68C;
    }
L_08A3B68C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B6A0;
      }
      goto L_08A3B694;
    }
L_08A3B694:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A3B6A0;
L_08A3B6A0:
    ctx.gpr[31] = (0x08A3B6A8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 412u, 0x08AF9D10u>(ctx, &aot_mem) && ctx.pc == 0x08A3B6A8u) goto L_08A3B6A8;
    return;
L_08A3B6A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B6C4;
      }
      goto L_08A3B6B0;
    }
L_08A3B6B0:
    ctx.gpr[31] = (0x08A3B6B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08A3B6B8u) goto L_08A3B6B8;
    return;
L_08A3B6B8:
    ctx.gpr[31] = (0x08A3B6C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 212u, 0x08925814u>(ctx, &aot_mem) && ctx.pc == 0x08A3B6C0u) goto L_08A3B6C0;
    return;
L_08A3B6C0:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A3B6C4;
L_08A3B6C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1017)));
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A3B704;
      }
      goto L_08A3B6D4;
    }
L_08A3B6D4:
    ctx.gpr[31] = (0x08A3B6DCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A3B6DCu) goto L_08A3B6DC;
    return;
L_08A3B6DC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10436)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10440)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3B6F4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B6F4u) goto L_08A3B6F4;
    return;
L_08A3B6F4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3B700u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08A3B700u) goto L_08A3B700;
    return;
L_08A3B700:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A3B704;
L_08A3B704:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3B724u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 438u, 0x08AF9F48u>(ctx, &aot_mem) && ctx.pc == 0x08A3B724u) goto L_08A3B724;
    return;
L_08A3B724:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3B730u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3B730u) goto L_08A3B730;
    return;
L_08A3B730:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2216)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-29376)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1017)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[3] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[11] = (ctx.gpr[23] + static_cast<std::uint32_t>(1228));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08A3B77Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 343u, 0x088A6414u>(ctx, &aot_mem) && ctx.pc == 0x08A3B77Cu) goto L_08A3B77C;
    return;
L_08A3B77C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B7AC;
      }
      goto L_08A3B788;
    }
L_08A3B788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2224)));
      if (branch_taken) {
          goto L_08A3B7A4;
      }
      goto L_08A3B794;
    }
L_08A3B794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A3B7AC;
      }
      goto L_08A3B7A4;
    }
L_08A3B7A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A3B7AC;
L_08A3B7AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B864;
      }
      goto L_08A3B7B4;
    }
L_08A3B7B4:
    ctx.gpr[31] = (0x08A3B7BCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 446u, 0x08AFA05Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3B7BCu) goto L_08A3B7BC;
    return;
L_08A3B7BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2208)));
      if (branch_taken) {
          goto L_08A3B7D0;
      }
      goto L_08A3B7C4;
    }
L_08A3B7C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1228), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08A3B854;
      }
      goto L_08A3B7D0;
    }
L_08A3B7D0:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[30])) && ctx.fpr[22] == ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A3B854;
      }
      goto L_08A3B7E0;
    }
L_08A3B7E0:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A3B824;
      }
      goto L_08A3B7F0;
    }
L_08A3B7F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1228)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08A3B854;
      }
      goto L_08A3B80C;
    }
L_08A3B80C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1228)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3B854;
      }
      goto L_08A3B824;
    }
L_08A3B824:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1228)));
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08A3B854;
      }
      goto L_08A3B840;
    }
L_08A3B840:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1228)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3B854;
L_08A3B854:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1220)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1228)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3B864;
L_08A3B864:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3B8B4;
      }
      goto L_08A3B870;
    }
L_08A3B870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1456)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3B8B4;
      }
      goto L_08A3B880;
    }
L_08A3B880:
    ctx.gpr[31] = (0x08A3B888u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1344)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B888u) goto L_08A3B888;
    return;
L_08A3B888:
    ctx.gpr[4] = (15107u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3B8E8;
      }
      goto L_08A3B8AC;
    }
L_08A3B8AC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1344), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08A3B8E8;
      }
      goto L_08A3B8B4;
    }
L_08A3B8B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1344)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B8E8;
      }
      goto L_08A3B8C8;
    }
L_08A3B8C8:
    ctx.gpr[31] = (0x08A3B8D0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1344)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B8D0u) goto L_08A3B8D0;
    return;
L_08A3B8D0:
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3B8E8;
L_08A3B8E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2180)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BC14;
      }
      goto L_08A3B8F4;
    }
L_08A3B8F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B91C;
      }
      goto L_08A3B908;
    }
L_08A3B908:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16243u << 16u);
      if (branch_taken) {
          goto L_08A3BBF4;
      }
      goto L_08A3B91C;
    }
L_08A3B91C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2204)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1192)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2212)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2232)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1024));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[30] = (ctx.gpr[23] + static_cast<std::uint32_t>(1224));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1504));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1472));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1520));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A3B974;
      }
      goto L_08A3B95C;
    }
L_08A3B95C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3B974;
      }
      goto L_08A3B970;
    }
L_08A3B970:
    ctx.gpr[20] = (0u | 2u);
    goto L_08A3B974;
L_08A3B974:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2256), ctx.gpr[20]);
    ctx.gpr[31] = (0x08A3B980u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x08A3B980u) goto L_08A3B980;
    return;
L_08A3B980:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    ctx.gpr[31] = (0x08A3B98Cu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x08A3B98Cu) goto L_08A3B98C;
    return;
L_08A3B98C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A3B9A0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 345u, 0x08A361E8u>(ctx, &aot_mem) && ctx.pc == 0x08A3B9A0u) goto L_08A3B9A0;
    return;
L_08A3B9A0:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1456));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3B9B4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 334u, 0x08A360D0u>(ctx, &aot_mem) && ctx.pc == 0x08A3B9B4u) goto L_08A3B9B4;
    return;
L_08A3B9B4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B9C0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3B9C0u) goto L_08A3B9C0;
    return;
L_08A3B9C0:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1488));
    ctx.gpr[31] = (0x08A3B9CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3B9CCu) goto L_08A3B9CC;
    return;
L_08A3B9CC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B9D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3B9D8u) goto L_08A3B9D8;
    return;
L_08A3B9D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3B9E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36118u>(ctx, &aot_mem) && ctx.pc == 0x08A3B9E4u) goto L_08A3B9E4;
    return;
L_08A3B9E4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A3B9F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3B9F0u) goto L_08A3B9F0;
    return;
L_08A3B9F0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3B9FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3B9FCu) goto L_08A3B9FC;
    return;
L_08A3B9FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A3BA0Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36178u>(ctx, &aot_mem) && ctx.pc == 0x08A3BA0Cu) goto L_08A3BA0C;
    return;
L_08A3BA0C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3BA18u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BA18u) goto L_08A3BA18;
    return;
L_08A3BA18:
    ctx.gpr[31] = (0x08A3BA20u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 347u, 0x08A3620Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BA20u) goto L_08A3BA20;
    return;
L_08A3BA20:
    ctx.gpr[31] = (0x08A3BA28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 425u, 0x08AF9E40u>(ctx, &aot_mem) && ctx.pc == 0x08A3BA28u) goto L_08A3BA28;
    return;
L_08A3BA28:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A3BA34u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08A3BA34u) goto L_08A3BA34;
    return;
L_08A3BA34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3BA44u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 333u, 0x08A360B8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BA44u) goto L_08A3BA44;
    return;
L_08A3BA44:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A3BA50u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3BA50u) goto L_08A3BA50;
    return;
L_08A3BA50:
    ctx.gpr[31] = (0x08A3BA58u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 347u, 0x08A3620Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BA58u) goto L_08A3BA58;
    return;
L_08A3BA58:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-29376), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BA68u);
    ctx.gpr[5] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 426u, 0x08AF9E48u>(ctx, &aot_mem) && ctx.pc == 0x08A3BA68u) goto L_08A3BA68;
    return;
L_08A3BA68:
    ctx.gpr[31] = (0x08A3BA70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 199u, 0x08925754u>(ctx, &aot_mem) && ctx.pc == 0x08A3BA70u) goto L_08A3BA70;
    return;
L_08A3BA70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1348)));
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2256)));
      if (branch_taken) {
          goto L_08A3BAE0;
      }
      goto L_08A3BA8C;
    }
L_08A3BA8C:
    ctx.gpr[31] = (0x08A3BA94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08A3BA94u) goto L_08A3BA94;
    return;
L_08A3BA94:
    ctx.gpr[31] = (0x08A3BA9Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 202u, 0x089257B0u>(ctx, &aot_mem) && ctx.pc == 0x08A3BA9Cu) goto L_08A3BA9C;
    return;
L_08A3BA9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A3BAE0;
      }
      goto L_08A3BAA8;
    }
L_08A3BAA8:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_08A3BACC;
    }
    goto L_08A3BAB0;
L_08A3BAB0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BAD4;
      }
      goto L_08A3BABC;
    }
L_08A3BABC:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3BAE0;
      }
      goto L_08A3BACC;
    }
L_08A3BACC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BAE0;
      }
      goto L_08A3BAD4;
    }
L_08A3BAD4:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A3BAE0;
L_08A3BAE0:
    ctx.gpr[31] = (0x08A3BAE8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 412u, 0x08AF9D10u>(ctx, &aot_mem) && ctx.pc == 0x08A3BAE8u) goto L_08A3BAE8;
    return;
L_08A3BAE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BB04;
      }
      goto L_08A3BAF0;
    }
L_08A3BAF0:
    ctx.gpr[31] = (0x08A3BAF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 428u, 0x08AF9E58u>(ctx, &aot_mem) && ctx.pc == 0x08A3BAF8u) goto L_08A3BAF8;
    return;
L_08A3BAF8:
    ctx.gpr[31] = (0x08A3BB00u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 212u, 0x08925814u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB00u) goto L_08A3BB00;
    return;
L_08A3BB00:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A3BB04;
L_08A3BB04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3BB44;
      }
      goto L_08A3BB14;
    }
L_08A3BB14:
    ctx.gpr[31] = (0x08A3BB1Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB1Cu) goto L_08A3BB1C;
    return;
L_08A3BB1C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10436)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10440)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3BB34u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB34u) goto L_08A3BB34;
    return;
L_08A3BB34:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3BB40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB40u) goto L_08A3BB40;
    return;
L_08A3BB40:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A3BB44;
L_08A3BB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1452)));
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29372), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3BB64u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 438u, 0x08AF9F48u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB64u) goto L_08A3BB64;
    return;
L_08A3BB64:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A3BB70u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3BB70u) goto L_08A3BB70;
    return;
L_08A3BB70:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2192)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-29376)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1016)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2208)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A3BBBCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 343u, 0x088A6414u>(ctx, &aot_mem) && ctx.pc == 0x08A3BBBCu) goto L_08A3BBBC;
    return;
L_08A3BBBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A3BBEC;
      }
      goto L_08A3BBC8;
    }
L_08A3BBC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29372)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3BBE8;
      }
      goto L_08A3BBD8;
    }
L_08A3BBD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29372)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3BBEC;
      }
      goto L_08A3BBE8;
    }
L_08A3BBE8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29372), 0u);
    goto L_08A3BBEC;
L_08A3BBEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2208)));
      if (branch_taken) {
          goto L_08A3BC14;
      }
      goto L_08A3BBF4;
    }
L_08A3BBF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1224)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1216)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A3BC14;
L_08A3BC14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(504)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A3BC40;
      }
      goto L_08A3BC2C;
    }
L_08A3BC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 184u);
    ctx.gpr[31] = (0x08A3BC3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08A3BC3Cu) goto L_08A3BC3C;
    return;
L_08A3BC3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A3BC40;
L_08A3BC40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BC60;
      }
      goto L_08A3BC48;
    }
L_08A3BC48:
    ctx.gpr[31] = (0x08A3BC50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 819u, 0x08AFB87Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BC50u) goto L_08A3BC50;
    return;
L_08A3BC50:
    ctx.gpr[4] = (15922u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 47299u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08A3BC60;
L_08A3BC60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2220)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BC7C;
      }
      goto L_08A3BC6C;
    }
L_08A3BC6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BF08;
      }
      goto L_08A3BC7C;
    }
L_08A3BC7C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2160)));
    ctx.gpr[16] = (ctx.gpr[23] + static_cast<std::uint32_t>(992));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
    ctx.gpr[31] = (0x08A3BC90u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A3BC90u) goto L_08A3BC90;
    return;
L_08A3BC90:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3BCA0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 333u, 0x08A360B8u>(ctx, &aot_mem) && ctx.pc == 0x08A3BCA0u) goto L_08A3BCA0;
    return;
L_08A3BCA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BCACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3BCACu) goto L_08A3BCAC;
    return;
L_08A3BCAC:
    ctx.gpr[31] = (0x08A3BCB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 347u, 0x08A3620Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BCB4u) goto L_08A3BCB4;
    return;
L_08A3BCB4:
    ctx.gpr[5] = (15363u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1445)));
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A3BD14;
      }
      goto L_08A3BCC8;
    }
L_08A3BCC8:
    ctx.gpr[31] = (0x08A3BCD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BCD0u) goto L_08A3BCD0;
    return;
L_08A3BCD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08A3BD48;
      }
      goto L_08A3BD14;
    }
L_08A3BD14:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1568));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2200)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A3BD2Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 339u, 0x08A36160u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD2Cu) goto L_08A3BD2C;
    return;
L_08A3BD2C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3BD38u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 350u, 0x08A36268u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD38u) goto L_08A3BD38;
    return;
L_08A3BD38:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A3BD44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36118u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD44u) goto L_08A3BD44;
    return;
L_08A3BD44:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A3BD48;
L_08A3BD48:
    ctx.gpr[31] = (0x08A3BD50u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1552), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD50u) goto L_08A3BD50;
    return;
L_08A3BD50:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1556), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1556));
    ctx.gpr[31] = (0x08A3BD60u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1552));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD60u) goto L_08A3BD60;
    return;
L_08A3BD60:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1016)));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A3BE7C;
      }
      goto L_08A3BD78;
    }
L_08A3BD78:
    ctx.gpr[31] = (0x08A3BD80u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD80u) goto L_08A3BD80;
    return;
L_08A3BD80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A3BD94u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A3BD94u) goto L_08A3BD94;
    return;
L_08A3BD94:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10436)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10440)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3BDB4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BDB4u) goto L_08A3BDB4;
    return;
L_08A3BDB4:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BDC8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x08A3BDC8u) goto L_08A3BDC8;
    return;
L_08A3BDC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A3BE04;
      }
      goto L_08A3BDD0;
    }
L_08A3BDD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.gpr[31] = (0x08A3BDDCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A3BDDCu) goto L_08A3BDDC;
    return;
L_08A3BDDC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3BDF0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BDF0u) goto L_08A3BDF0;
    return;
L_08A3BDF0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3BDFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08A3BDFCu) goto L_08A3BDFC;
    return;
L_08A3BDFC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A3BEC8;
      }
      goto L_08A3BE04;
    }
L_08A3BE04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A3BE14u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A3BE14u) goto L_08A3BE14;
    return;
L_08A3BE14:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3BE28u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BE28u) goto L_08A3BE28;
    return;
L_08A3BE28:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A3BE3Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x08A3BE3Cu) goto L_08A3BE3C;
    return;
L_08A3BE3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A3BEC8;
      }
      goto L_08A3BE44;
    }
L_08A3BE44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A3BE54u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A3BE54u) goto L_08A3BE54;
    return;
L_08A3BE54:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A3BE68u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BE68u) goto L_08A3BE68;
    return;
L_08A3BE68:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A3BE74u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08A3BE74u) goto L_08A3BE74;
    return;
L_08A3BE74:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A3BEC8;
      }
      goto L_08A3BE7C;
    }
L_08A3BE7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3BEA0;
      }
      goto L_08A3BE94;
    }
L_08A3BE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A3BEC8;
      }
      goto L_08A3BEA0;
    }
L_08A3BEA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A3BEC8;
      }
      goto L_08A3BEBC;
    }
L_08A3BEBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    goto L_08A3BEC8;
L_08A3BEC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1008)));
    ctx.gpr[31] = (0x08A3BED4u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BED4u) goto L_08A3BED4;
    return;
L_08A3BED4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A3BEE0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 387u, 0x08AF9B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BEE0u) goto L_08A3BEE0;
    return;
L_08A3BEE0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1312)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = ctx.fpr[26] - ctx.fpr[0];
    ctx.gpr[31] = (0x08A3BEF4u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 378u, 0x08AF9A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BEF4u) goto L_08A3BEF4;
    return;
L_08A3BEF4:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[24];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3BF9C;
      }
      goto L_08A3BF08;
    }
L_08A3BF08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3BF74;
      }
      goto L_08A3BF18;
    }
L_08A3BF18:
    ctx.gpr[4] = (16248u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.gpr[31] = (0x08A3BF28u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF28u) goto L_08A3BF28;
    return;
L_08A3BF28:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A3BF34u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 387u, 0x08AF9B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BF34u) goto L_08A3BF34;
    return;
L_08A3BF34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1312)));
    ctx.fpr[22] = ctx.fpr[26] - ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A3BF48u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BF48u) goto L_08A3BF48;
    return;
L_08A3BF48:
    ctx.gpr[31] = (0x08A3BF50u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 378u, 0x08AF9A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BF50u) goto L_08A3BF50;
    return;
L_08A3BF50:
    ctx.gpr[4] = (16006u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[24];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A3BF9C;
      }
      goto L_08A3BF74;
    }
L_08A3BF74:
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[31] = (0x08A3BF84u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A3BF84u) goto L_08A3BF84;
    return;
L_08A3BF84:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A3BF90u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 387u, 0x08AF9B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3BF90u) goto L_08A3BF90;
    return;
L_08A3BF90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1312)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A3BF9C;
L_08A3BF9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1312)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10520)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A3BFE0;
      }
      goto L_08A3BFC8;
    }
L_08A3BFC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1156)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-10520)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 23u, 0x08A3C18Cu>(ctx, &aot_mem); return;
      }
      goto L_08A3BFE0;
    }
L_08A3BFE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(592)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    ctx.pc = 0x08A3C000u; return;
}

void recomp_unit_0141(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0141_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_141(Runtime &runtime) {
    runtime.register_generated_unit(141u, 0x08A38000u, 16384u, &recomp_unit_0141, &recomp_unit_0141_entry);
    runtime.register_function(0x08A38000u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38004u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3800Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38038u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38044u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38050u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A380FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38108u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3810Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38114u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38118u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38140u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3814Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A381F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38204u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38298u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A382D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3831Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3834Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38368u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38374u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A383CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3840Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38448u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38450u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38470u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38490u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A384C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3856Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38584u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A385ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38620u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38624u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38630u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38648u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38650u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38660u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3867Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38694u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A386E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38700u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38708u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38714u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38734u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38748u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3874Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38758u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38770u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38778u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38788u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A387E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38804u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3880Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38824u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38838u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38840u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3885Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38864u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38894u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A388B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3891Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3892Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38938u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38968u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3896Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A389F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38A94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38AF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38B78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38BF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38C88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38CB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38D90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38E94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38ED4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EDCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38EE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38F80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A38FFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39004u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39010u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39018u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39020u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39028u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3905Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3907Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3909Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A390ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3910Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39130u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39140u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39148u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3917Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3918Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A391F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39200u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39204u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39228u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39248u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39250u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39280u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A392D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3931Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39328u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3932Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3933Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39360u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39380u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3938Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39394u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A393B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39418u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3942Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39440u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39458u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3946Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39480u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A394F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39504u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3951Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39560u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39578u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3957Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39648u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3965Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3966Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39678u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3968Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3969Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A396F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39708u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39714u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39734u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39748u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39758u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39760u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3977Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39794u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A397A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A397BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A397C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A397CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A397E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A397FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39810u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39824u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39840u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39844u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39858u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39880u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A398A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A398C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A398E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A398F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39908u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39914u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3991Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39924u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3992Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39940u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39948u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39950u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39958u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39968u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39970u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39980u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39988u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A399A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A399ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A399B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A399C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A399CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A399D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A399DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A399ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A399F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39A9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39AFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39B84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39BFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39C9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39CC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39D88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39DFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39E94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39EB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39ED0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39ED8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39EF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39EFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F4Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39F8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A39FF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A020u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A030u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A03Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A04Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A054u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A060u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A068u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A09Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A0D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A10Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A134u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A144u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A154u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A15Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A164u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A170u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A17Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A184u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A188u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A190u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A1ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A208u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A218u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A224u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A234u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A240u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A254u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A264u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A274u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A284u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A290u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A298u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A2FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A30Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A318u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A31Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A324u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A338u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A354u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A378u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A380u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A3F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A400u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A408u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A410u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A41Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A424u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A428u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A430u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A43Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A44Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A458u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A478u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A484u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A4F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A514u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A52Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A544u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A54Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A558u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A564u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A56Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A574u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A580u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A58Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A5FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A604u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A610u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A61Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A630u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A640u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A64Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A664u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A67Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A694u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A69Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A6F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A700u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A70Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A724u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A72Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A738u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A744u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A74Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A754u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A760u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A76Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A780u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A790u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A79Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A7ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A818u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A82Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A848u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A858u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A864u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A870u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A880u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A88Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A890u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A8C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A900u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A910u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A934u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A93Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A944u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A950u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A964u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A968u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A974u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A97Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A98Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A994u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A99Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3A9F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AA88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAA4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AABCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AADCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AAFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB30u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB5Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AB9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABCCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ABECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AC9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACC0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ACD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD10u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD88u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AD94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADB8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3ADF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE24u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AE98u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEC4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AECCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AED8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AEF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AF84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFE4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3AFFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B008u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B014u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B030u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B044u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B058u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B05Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B09Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B0F8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B104u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B110u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B11Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B128u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B134u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B140u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B150u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B15Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B164u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B16Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B178u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B188u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B194u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B19Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B1F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B200u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B210u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B218u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B224u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B22Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B234u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B23Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B244u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B248u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B258u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B260u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B278u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B284u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B288u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B2B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B300u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B30Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B31Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B32Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B334u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B348u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B368u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B37Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B390u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B3F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B404u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B410u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B420u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B42Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B434u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B43Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B448u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B458u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B464u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B46Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B474u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B480u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B488u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B490u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B49Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B4FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B508u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B538u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B548u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B558u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B560u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B578u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B594u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B5ECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B600u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B614u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B618u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B62Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B634u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B64Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B654u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B65Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B668u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B670u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B67Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B68Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B694u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6A8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6B0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6B8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6D4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6DCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B6F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B700u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B704u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B724u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B730u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B77Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B788u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B794u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7A4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7BCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7C4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7E0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B7F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B80Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B824u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B840u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B854u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B864u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B870u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B880u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B888u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8ACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8C8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8D0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8E8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B8F4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B908u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B91Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B95Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B970u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B974u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B980u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B98Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9A0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9B4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9C0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9CCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9D8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9E4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9F0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3B9FCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA0Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA20u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA58u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA8Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BA9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAA8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAB0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BABCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BACCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAD4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BAF8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB00u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB1Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB64u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BB70u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBD8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBE8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBECu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BBF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC40u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC6Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BC90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCACu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BCD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD2Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD38u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD60u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD78u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD80u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BD94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDB4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDD0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDDCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDF0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BDFCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE04u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE14u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE3Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE44u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE54u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE68u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE7Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BE94u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEA0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEBCu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BED4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEE0u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BEF4u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF08u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF18u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF28u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF34u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF48u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF50u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF74u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF84u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF90u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BF9Cu, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFC8u, &recomp_unit_0141, "recomp_unit_0141");
    runtime.register_function(0x08A3BFE0u, &recomp_unit_0141, "recomp_unit_0141");
}
} // namespace psprecomp
