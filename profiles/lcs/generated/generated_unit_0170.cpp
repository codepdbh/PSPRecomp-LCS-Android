#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0170[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0,
    9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 15,
    0, 0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 22, 0,
    0, 23, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30,
    0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 45,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0,
    0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 68, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72,
    0, 73, 0, 74, 0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 80, 0, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0,
    84, 0, 85, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 92, 0,
    93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101,
    0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 105, 106, 0, 0, 0, 0, 107, 0, 0, 0, 108, 109, 0,
    110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0,
    116, 117, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0,
    124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133,
    0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 146,
    0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0,
    155, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0,
    0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179,
    0, 180, 0, 181, 0, 182, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0,
    0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 193,
    194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202,
    0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210,
    211, 0, 0, 212, 0, 0, 0, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0,
    0, 0, 222, 0, 0, 0, 223, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 0,
    0, 231, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0,
    0, 240, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 248, 0, 0,
    249, 0, 0, 0, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 0, 257, 0, 0, 0, 258, 0, 259, 0, 260, 0, 261, 0,
    0, 0, 0, 0, 0, 262, 0, 263, 0, 264, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 271, 272, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 276, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0,
    0, 0, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 0, 0, 282, 283, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0,
    0, 286, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0,
    291, 0, 0, 0, 0, 292, 293, 0, 0, 0, 294, 0, 0, 0, 0, 295, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0,
    0, 299, 0, 300, 0, 0, 301, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 0, 307, 0, 308, 0,
    309, 0, 310, 311, 0, 0, 0, 312, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 316, 0, 0,
    0, 317, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 330, 331, 0, 0, 0, 0, 0,
    0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0,
    341, 0, 342, 343, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0,
    357, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 0, 361, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0,
    371, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0,
    375, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0,
    0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 394, 0, 0,
    0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 401, 0,
    0, 0, 0, 402, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0,
    0, 409, 0, 0, 410, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 416,
    0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424,
    0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0,
    0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0,
    435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0,
    0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0,
    447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 452, 0, 453, 0, 454, 0, 455, 0, 456,
    0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0,
    0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 469, 0,
    0, 0, 0, 470, 0, 0, 0, 471, 0, 472, 0, 473, 474, 0, 0, 475, 0, 0, 476, 0, 477, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 486, 0, 487,
    0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0,
    499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0,
    0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0,
    0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 520, 0, 521, 522,
    0, 0, 523, 0, 0, 524, 0, 525, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0,
    0, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 534, 0, 535, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 541,
    0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0,
    0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0,
    0, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0, 557, 0,
    0, 558, 0, 0, 559, 560, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0,
    0, 566, 0, 0, 567, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 571, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 582, 583, 0, 0, 584,
    0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 588, 589, 0, 590, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 594, 595, 0, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0, 598, 599, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 603, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608, 609, 0, 610,
    0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 614, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0,
    0, 0, 0, 0, 0, 617, 0, 618, 0, 619, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0,
    0, 0, 0, 0, 623, 0, 624, 0, 625, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 628, 0, 629,
    0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 635, 636, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 643, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 645, 0, 646, 0, 647, 0, 0, 648, 0, 0, 649, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 653, 654, 0, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 657,
    658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 662, 0, 0, 0, 0, 0, 663, 0,
    0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 669, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0,
    0, 0, 0, 0, 672, 0, 673, 674, 0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0, 0, 679, 680, 0, 0, 681, 0,
    682, 0, 683, 0, 684, 0, 0, 0, 0, 0, 685, 0, 686, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0,
    0, 690, 0, 0, 0, 0, 0, 0, 0, 691, 0, 692, 0, 693, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0,
    0, 0, 0, 696, 0, 697, 0, 698, 699, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 702, 0,
    703, 0, 704, 0, 705, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 712, 713, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 716, 717, 0, 0, 0,
    718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 720, 0, 721, 0, 722, 0, 0, 723, 0, 724, 0, 725, 0, 726,
    0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 728, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 732, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0,
    0, 735, 0, 736, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 741, 742, 0, 0, 743, 0, 0, 0,
    744, 0, 0, 745, 0, 0, 0, 0, 0, 0, 746, 0, 0, 747, 0, 0, 0, 0, 0, 0, 748, 0, 0, 749, 0, 0, 0, 0, 0, 750, 0, 0,
    0, 0, 0, 0, 751, 0, 752, 753, 0, 0, 754, 0, 755, 0, 756, 0, 757, 0, 758, 0, 0, 0, 0, 0, 0, 759, 0, 0, 760, 0, 0, 761,
    0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 766, 0, 767,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 769, 0, 770, 0, 771, 0, 772, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 774, 0, 775, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0,
    0, 0, 0, 0, 0, 0, 779, 0, 780, 0, 781, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0,
    784, 0, 785, 0, 786, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 789, 0, 790, 0, 791, 0,
    792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 794, 0, 795, 0, 796, 0, 797, 0, 0, 0, 0, 798,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 800, 0, 801, 0, 802, 0, 803, 0, 804, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 806, 0, 807, 808, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 810, 0, 0, 0, 811,
};
void recomp_unit_0170_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AAC000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0170[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AAC000;
    case 2u: goto L_08AAC0D4;
    case 3u: goto L_08AAC1B0;
    case 4u: goto L_08AAC1C4;
    case 5u: goto L_08AAC1F4;
    case 6u: goto L_08AAC1FC;
    case 7u: goto L_08AAC270;
    case 8u: goto L_08AAC278;
    case 9u: goto L_08AAC280;
    case 10u: goto L_08AAC29C;
    case 11u: goto L_08AAC2BC;
    case 12u: goto L_08AAC2C4;
    case 13u: goto L_08AAC2DC;
    case 14u: goto L_08AAC2E8;
    case 15u: goto L_08AAC2FC;
    case 16u: goto L_08AAC308;
    case 17u: goto L_08AAC31C;
    case 18u: goto L_08AAC324;
    case 19u: goto L_08AAC338;
    case 20u: goto L_08AAC358;
    case 21u: goto L_08AAC360;
    case 22u: goto L_08AAC378;
    case 23u: goto L_08AAC384;
    case 24u: goto L_08AAC398;
    case 25u: goto L_08AAC3A4;
    case 26u: goto L_08AAC3B8;
    case 27u: goto L_08AAC3C0;
    case 28u: goto L_08AAC3D4;
    case 29u: goto L_08AAC3F4;
    case 30u: goto L_08AAC3FC;
    case 31u: goto L_08AAC414;
    case 32u: goto L_08AAC420;
    case 33u: goto L_08AAC434;
    case 34u: goto L_08AAC440;
    case 35u: goto L_08AAC454;
    case 36u: goto L_08AAC45C;
    case 37u: goto L_08AAC470;
    case 38u: goto L_08AAC490;
    case 39u: goto L_08AAC498;
    case 40u: goto L_08AAC4B0;
    case 41u: goto L_08AAC4BC;
    case 42u: goto L_08AAC4D0;
    case 43u: goto L_08AAC4DC;
    case 44u: goto L_08AAC4F0;
    case 45u: goto L_08AAC4FC;
    case 46u: goto L_08AAC520;
    case 47u: goto L_08AAC544;
    case 48u: goto L_08AAC56C;
    case 49u: goto L_08AAC590;
    case 50u: goto L_08AAC59C;
    case 51u: goto L_08AAC5AC;
    case 52u: goto L_08AAC5CC;
    case 53u: goto L_08AAC5D8;
    case 54u: goto L_08AAC5E8;
    case 55u: goto L_08AAC5F8;
    case 56u: goto L_08AAC630;
    case 57u: goto L_08AAC668;
    case 58u: goto L_08AAC67C;
    case 59u: goto L_08AAC68C;
    case 60u: goto L_08AAC6A8;
    case 61u: goto L_08AAC6C4;
    case 62u: goto L_08AAC6E0;
    case 63u: goto L_08AAC6F4;
    case 64u: goto L_08AAC70C;
    case 65u: goto L_08AAC720;
    case 66u: goto L_08AAC728;
    case 67u: goto L_08AAC738;
    case 68u: goto L_08AAC740;
    case 69u: goto L_08AAC744;
    case 70u: goto L_08AAC754;
    case 71u: goto L_08AAC760;
    case 72u: goto L_08AAC77C;
    case 73u: goto L_08AAC784;
    case 74u: goto L_08AAC78C;
    case 75u: goto L_08AAC79C;
    case 76u: goto L_08AAC7A4;
    case 77u: goto L_08AAC7AC;
    case 78u: goto L_08AAC7B4;
    case 79u: goto L_08AAC7BC;
    case 80u: goto L_08AAC7C0;
    case 81u: goto L_08AAC7D0;
    case 82u: goto L_08AAC7D8;
    case 83u: goto L_08AAC7E8;
    case 84u: goto L_08AAC800;
    case 85u: goto L_08AAC808;
    case 86u: goto L_08AAC814;
    case 87u: goto L_08AAC824;
    case 88u: goto L_08AAC838;
    case 89u: goto L_08AAC850;
    case 90u: goto L_08AAC858;
    case 91u: goto L_08AAC860;
    case 92u: goto L_08AAC878;
    case 93u: goto L_08AAC880;
    case 94u: goto L_08AAC88C;
    case 95u: goto L_08AAC89C;
    case 96u: goto L_08AAC8B0;
    case 97u: goto L_08AAC8C8;
    case 98u: goto L_08AAC8D0;
    case 99u: goto L_08AAC8DC;
    case 100u: goto L_08AAC8EC;
    case 101u: goto L_08AAC8FC;
    case 102u: goto L_08AAC90C;
    case 103u: goto L_08AAC928;
    case 104u: goto L_08AAC930;
    case 105u: goto L_08AAC94C;
    case 106u: goto L_08AAC950;
    case 107u: goto L_08AAC964;
    case 108u: goto L_08AAC974;
    case 109u: goto L_08AAC978;
    case 110u: goto L_08AAC980;
    case 111u: goto L_08AAC994;
    case 112u: goto L_08AAC9AC;
    case 113u: goto L_08AAC9B0;
    case 114u: goto L_08AAC9BC;
    case 115u: goto L_08AAC9F8;
    case 116u: goto L_08AACA00;
    case 117u: goto L_08AACA04;
    case 118u: goto L_08AACA0C;
    case 119u: goto L_08AACA18;
    case 120u: goto L_08AACA50;
    case 121u: goto L_08AACA58;
    case 122u: goto L_08AACA68;
    case 123u: goto L_08AACA70;
    case 124u: goto L_08AACA80;
    case 125u: goto L_08AACA8C;
    case 126u: goto L_08AACA9C;
    case 127u: goto L_08AACAAC;
    case 128u: goto L_08AACABC;
    case 129u: goto L_08AACACC;
    case 130u: goto L_08AACAD4;
    case 131u: goto L_08AACADC;
    case 132u: goto L_08AACAF0;
    case 133u: goto L_08AACAFC;
    case 134u: goto L_08AACB0C;
    case 135u: goto L_08AACB1C;
    case 136u: goto L_08AACB2C;
    case 137u: goto L_08AACB3C;
    case 138u: goto L_08AACB5C;
    case 139u: goto L_08AACB64;
    case 140u: goto L_08AACB6C;
    case 141u: goto L_08AACB74;
    case 142u: goto L_08AACBAC;
    case 143u: goto L_08AACBDC;
    case 144u: goto L_08AACBE4;
    case 145u: goto L_08AACBF4;
    case 146u: goto L_08AACBFC;
    case 147u: goto L_08AACC0C;
    case 148u: goto L_08AACC18;
    case 149u: goto L_08AACC28;
    case 150u: goto L_08AACC38;
    case 151u: goto L_08AACC48;
    case 152u: goto L_08AACC58;
    case 153u: goto L_08AACC60;
    case 154u: goto L_08AACC78;
    case 155u: goto L_08AACC80;
    case 156u: goto L_08AACC88;
    case 157u: goto L_08AACC9C;
    case 158u: goto L_08AACCA8;
    case 159u: goto L_08AACCB8;
    case 160u: goto L_08AACCC8;
    case 161u: goto L_08AACCD8;
    case 162u: goto L_08AACCE8;
    case 163u: goto L_08AACD08;
    case 164u: goto L_08AACD14;
    case 165u: goto L_08AACD28;
    case 166u: goto L_08AACD30;
    case 167u: goto L_08AACD38;
    case 168u: goto L_08AACD40;
    case 169u: goto L_08AACD48;
    case 170u: goto L_08AACD58;
    case 171u: goto L_08AACD60;
    case 172u: goto L_08AACD68;
    case 173u: goto L_08AACD70;
    case 174u: goto L_08AACDAC;
    case 175u: goto L_08AACDC4;
    case 176u: goto L_08AACDD4;
    case 177u: goto L_08AACDE0;
    case 178u: goto L_08AACDF4;
    case 179u: goto L_08AACDFC;
    case 180u: goto L_08AACE04;
    case 181u: goto L_08AACE0C;
    case 182u: goto L_08AACE14;
    case 183u: goto L_08AACE24;
    case 184u: goto L_08AACE2C;
    case 185u: goto L_08AACE34;
    case 186u: goto L_08AACE3C;
    case 187u: goto L_08AACE78;
    case 188u: goto L_08AACE90;
    case 189u: goto L_08AACEB0;
    case 190u: goto L_08AACEDC;
    case 191u: goto L_08AACEE4;
    case 192u: goto L_08AACEF4;
    case 193u: goto L_08AACEFC;
    case 194u: goto L_08AACF00;
    case 195u: goto L_08AACF1C;
    case 196u: goto L_08AACF30;
    case 197u: goto L_08AACF3C;
    case 198u: goto L_08AACF4C;
    case 199u: goto L_08AACF58;
    case 200u: goto L_08AACF64;
    case 201u: goto L_08AACF70;
    case 202u: goto L_08AACF7C;
    case 203u: goto L_08AACF8C;
    case 204u: goto L_08AACF98;
    case 205u: goto L_08AACFA4;
    case 206u: goto L_08AACFBC;
    case 207u: goto L_08AACFD0;
    case 208u: goto L_08AACFDC;
    case 209u: goto L_08AACFEC;
    case 210u: goto L_08AACFFC;
    case 211u: goto L_08AAD000;
    case 212u: goto L_08AAD00C;
    case 213u: goto L_08AAD020;
    case 214u: goto L_08AAD028;
    case 215u: goto L_08AAD030;
    case 216u: goto L_08AAD038;
    case 217u: goto L_08AAD040;
    case 218u: goto L_08AAD050;
    case 219u: goto L_08AAD060;
    case 220u: goto L_08AAD068;
    case 221u: goto L_08AAD074;
    case 222u: goto L_08AAD088;
    case 223u: goto L_08AAD098;
    case 224u: goto L_08AAD0A0;
    case 225u: goto L_08AAD0AC;
    case 226u: goto L_08AAD0B8;
    case 227u: goto L_08AAD0D0;
    case 228u: goto L_08AAD0D8;
    case 229u: goto L_08AAD0E8;
    case 230u: goto L_08AAD0F4;
    case 231u: goto L_08AAD104;
    case 232u: goto L_08AAD110;
    case 233u: goto L_08AAD118;
    case 234u: goto L_08AAD134;
    case 235u: goto L_08AAD13C;
    case 236u: goto L_08AAD144;
    case 237u: goto L_08AAD158;
    case 238u: goto L_08AAD164;
    case 239u: goto L_08AAD174;
    case 240u: goto L_08AAD184;
    case 241u: goto L_08AAD18C;
    case 242u: goto L_08AAD198;
    case 243u: goto L_08AAD1B0;
    case 244u: goto L_08AAD1C4;
    case 245u: goto L_08AAD1D0;
    case 246u: goto L_08AAD1E0;
    case 247u: goto L_08AAD1F0;
    case 248u: goto L_08AAD1F4;
    case 249u: goto L_08AAD200;
    case 250u: goto L_08AAD214;
    case 251u: goto L_08AAD21C;
    case 252u: goto L_08AAD224;
    case 253u: goto L_08AAD22C;
    case 254u: goto L_08AAD234;
    case 255u: goto L_08AAD23C;
    case 256u: goto L_08AAD244;
    case 257u: goto L_08AAD250;
    case 258u: goto L_08AAD260;
    case 259u: goto L_08AAD268;
    case 260u: goto L_08AAD270;
    case 261u: goto L_08AAD278;
    case 262u: goto L_08AAD294;
    case 263u: goto L_08AAD29C;
    case 264u: goto L_08AAD2A4;
    case 265u: goto L_08AAD2A8;
    case 266u: goto L_08AAD2C8;
    case 267u: goto L_08AAD33C;
    case 268u: goto L_08AAD344;
    case 269u: goto L_08AAD358;
    case 270u: goto L_08AAD364;
    case 271u: goto L_08AAD374;
    case 272u: goto L_08AAD378;
    case 273u: goto L_08AAD388;
    case 274u: goto L_08AAD3AC;
    case 275u: goto L_08AAD3C8;
    case 276u: goto L_08AAD3CC;
    case 277u: goto L_08AAD3E4;
    case 278u: goto L_08AAD3EC;
    case 279u: goto L_08AAD410;
    case 280u: goto L_08AAD418;
    case 281u: goto L_08AAD420;
    case 282u: goto L_08AAD438;
    case 283u: goto L_08AAD43C;
    case 284u: goto L_08AAD454;
    case 285u: goto L_08AAD460;
    case 286u: goto L_08AAD484;
    case 287u: goto L_08AAD48C;
    case 288u: goto L_08AAD4A4;
    case 289u: goto L_08AAD4D4;
    case 290u: goto L_08AAD4EC;
    case 291u: goto L_08AAD500;
    case 292u: goto L_08AAD514;
    case 293u: goto L_08AAD518;
    case 294u: goto L_08AAD528;
    case 295u: goto L_08AAD53C;
    case 296u: goto L_08AAD540;
    case 297u: goto L_08AAD550;
    case 298u: goto L_08AAD574;
    case 299u: goto L_08AAD584;
    case 300u: goto L_08AAD58C;
    case 301u: goto L_08AAD598;
    case 302u: goto L_08AAD5A0;
    case 303u: goto L_08AAD5AC;
    case 304u: goto L_08AAD5CC;
    case 305u: goto L_08AAD5D4;
    case 306u: goto L_08AAD5E4;
    case 307u: goto L_08AAD5F0;
    case 308u: goto L_08AAD5F8;
    case 309u: goto L_08AAD600;
    case 310u: goto L_08AAD608;
    case 311u: goto L_08AAD60C;
    case 312u: goto L_08AAD61C;
    case 313u: goto L_08AAD620;
    case 314u: goto L_08AAD658;
    case 315u: goto L_08AAD664;
    case 316u: goto L_08AAD674;
    case 317u: goto L_08AAD684;
    case 318u: goto L_08AAD68C;
    case 319u: goto L_08AAD69C;
    case 320u: goto L_08AAD6A4;
    case 321u: goto L_08AAD6C0;
    case 322u: goto L_08AAD6C8;
    case 323u: goto L_08AAD6E0;
    case 324u: goto L_08AAD6EC;
    case 325u: goto L_08AAD71C;
    case 326u: goto L_08AAD730;
    case 327u: goto L_08AAD738;
    case 328u: goto L_08AAD74C;
    case 329u: goto L_08AAD758;
    case 330u: goto L_08AAD764;
    case 331u: goto L_08AAD768;
    case 332u: goto L_08AAD788;
    case 333u: goto L_08AAD790;
    case 334u: goto L_08AAD7A0;
    case 335u: goto L_08AAD7B4;
    case 336u: goto L_08AAD7C0;
    case 337u: goto L_08AAD7CC;
    case 338u: goto L_08AAD7D4;
    case 339u: goto L_08AAD7E0;
    case 340u: goto L_08AAD7F0;
    case 341u: goto L_08AAD800;
    case 342u: goto L_08AAD808;
    case 343u: goto L_08AAD80C;
    case 344u: goto L_08AAD81C;
    case 345u: goto L_08AAD824;
    case 346u: goto L_08AAD840;
    case 347u: goto L_08AAD848;
    case 348u: goto L_08AAD860;
    case 349u: goto L_08AAD86C;
    case 350u: goto L_08AAD890;
    case 351u: goto L_08AAD8A4;
    case 352u: goto L_08AAD8AC;
    case 353u: goto L_08AAD8BC;
    case 354u: goto L_08AAD8C8;
    case 355u: goto L_08AAD8DC;
    case 356u: goto L_08AAD8E4;
    case 357u: goto L_08AAD900;
    case 358u: goto L_08AAD908;
    case 359u: goto L_08AAD914;
    case 360u: goto L_08AAD924;
    case 361u: goto L_08AAD930;
    case 362u: goto L_08AAD938;
    case 363u: goto L_08AAD948;
    case 364u: goto L_08AAD98C;
    case 365u: goto L_08AAD9DC;
    case 366u: goto L_08AAD9E8;
    case 367u: goto L_08AADA84;
    case 368u: goto L_08AADA98;
    case 369u: goto L_08AADAE8;
    case 370u: goto L_08AADAF8;
    case 371u: goto L_08AADB00;
    case 372u: goto L_08AADB08;
    case 373u: goto L_08AADB44;
    case 374u: goto L_08AADB74;
    case 375u: goto L_08AADB80;
    case 376u: goto L_08AADB84;
    case 377u: goto L_08AADBAC;
    case 378u: goto L_08AADC28;
    case 379u: goto L_08AADCA4;
    case 380u: goto L_08AADD0C;
    case 381u: goto L_08AADD44;
    case 382u: goto L_08AADD4C;
    case 383u: goto L_08AADD54;
    case 384u: goto L_08AADD60;
    case 385u: goto L_08AADD78;
    case 386u: goto L_08AADDEC;
    case 387u: goto L_08AADDF4;
    case 388u: goto L_08AADE08;
    case 389u: goto L_08AADE7C;
    case 390u: goto L_08AADEEC;
    case 391u: goto L_08AADEF4;
    case 392u: goto L_08AADF64;
    case 393u: goto L_08AADF6C;
    case 394u: goto L_08AADF74;
    case 395u: goto L_08AADF8C;
    case 396u: goto L_08AADFAC;
    case 397u: goto L_08AADFB4;
    case 398u: goto L_08AADFCC;
    case 399u: goto L_08AADFD8;
    case 400u: goto L_08AADFEC;
    case 401u: goto L_08AADFF8;
    case 402u: goto L_08AAE00C;
    case 403u: goto L_08AAE014;
    case 404u: goto L_08AAE024;
    case 405u: goto L_08AAE044;
    case 406u: goto L_08AAE04C;
    case 407u: goto L_08AAE064;
    case 408u: goto L_08AAE070;
    case 409u: goto L_08AAE084;
    case 410u: goto L_08AAE090;
    case 411u: goto L_08AAE0A4;
    case 412u: goto L_08AAE0AC;
    case 413u: goto L_08AAE0BC;
    case 414u: goto L_08AAE0DC;
    case 415u: goto L_08AAE0E4;
    case 416u: goto L_08AAE0FC;
    case 417u: goto L_08AAE108;
    case 418u: goto L_08AAE11C;
    case 419u: goto L_08AAE128;
    case 420u: goto L_08AAE13C;
    case 421u: goto L_08AAE144;
    case 422u: goto L_08AAE154;
    case 423u: goto L_08AAE174;
    case 424u: goto L_08AAE17C;
    case 425u: goto L_08AAE194;
    case 426u: goto L_08AAE1A0;
    case 427u: goto L_08AAE1B4;
    case 428u: goto L_08AAE1C0;
    case 429u: goto L_08AAE1D4;
    case 430u: goto L_08AAE1E0;
    case 431u: goto L_08AAE204;
    case 432u: goto L_08AAE228;
    case 433u: goto L_08AAE250;
    case 434u: goto L_08AAE274;
    case 435u: goto L_08AAE280;
    case 436u: goto L_08AAE290;
    case 437u: goto L_08AAE2B0;
    case 438u: goto L_08AAE2BC;
    case 439u: goto L_08AAE2CC;
    case 440u: goto L_08AAE2DC;
    case 441u: goto L_08AAE320;
    case 442u: goto L_08AAE370;
    case 443u: goto L_08AAE378;
    case 444u: goto L_08AAE38C;
    case 445u: goto L_08AAE3D4;
    case 446u: goto L_08AAE3E8;
    case 447u: goto L_08AAE400;
    case 448u: goto L_08AAE41C;
    case 449u: goto L_08AAE42C;
    case 450u: goto L_08AAE448;
    case 451u: goto L_08AAE454;
    case 452u: goto L_08AAE45C;
    case 453u: goto L_08AAE464;
    case 454u: goto L_08AAE46C;
    case 455u: goto L_08AAE474;
    case 456u: goto L_08AAE47C;
    case 457u: goto L_08AAE48C;
    case 458u: goto L_08AAE49C;
    case 459u: goto L_08AAE4AC;
    case 460u: goto L_08AAE4B8;
    case 461u: goto L_08AAE4C0;
    case 462u: goto L_08AAE4DC;
    case 463u: goto L_08AAE4F8;
    case 464u: goto L_08AAE508;
    case 465u: goto L_08AAE51C;
    case 466u: goto L_08AAE53C;
    case 467u: goto L_08AAE558;
    case 468u: goto L_08AAE560;
    case 469u: goto L_08AAE578;
    case 470u: goto L_08AAE58C;
    case 471u: goto L_08AAE59C;
    case 472u: goto L_08AAE5A4;
    case 473u: goto L_08AAE5AC;
    case 474u: goto L_08AAE5B0;
    case 475u: goto L_08AAE5BC;
    case 476u: goto L_08AAE5C8;
    case 477u: goto L_08AAE5D0;
    case 478u: goto L_08AAE5D8;
    case 479u: goto L_08AAE5E0;
    case 480u: goto L_08AAE60C;
    case 481u: goto L_08AAE61C;
    case 482u: goto L_08AAE638;
    case 483u: goto L_08AAE648;
    case 484u: goto L_08AAE658;
    case 485u: goto L_08AAE66C;
    case 486u: goto L_08AAE674;
    case 487u: goto L_08AAE67C;
    case 488u: goto L_08AAE694;
    case 489u: goto L_08AAE6CC;
    case 490u: goto L_08AAE71C;
    case 491u: goto L_08AAE724;
    case 492u: goto L_08AAE738;
    case 493u: goto L_08AAE780;
    case 494u: goto L_08AAE794;
    case 495u: goto L_08AAE7AC;
    case 496u: goto L_08AAE7C8;
    case 497u: goto L_08AAE7D8;
    case 498u: goto L_08AAE7F4;
    case 499u: goto L_08AAE800;
    case 500u: goto L_08AAE808;
    case 501u: goto L_08AAE810;
    case 502u: goto L_08AAE818;
    case 503u: goto L_08AAE820;
    case 504u: goto L_08AAE828;
    case 505u: goto L_08AAE838;
    case 506u: goto L_08AAE844;
    case 507u: goto L_08AAE878;
    case 508u: goto L_08AAE884;
    case 509u: goto L_08AAE88C;
    case 510u: goto L_08AAE8A8;
    case 511u: goto L_08AAE8C4;
    case 512u: goto L_08AAE8D4;
    case 513u: goto L_08AAE8E8;
    case 514u: goto L_08AAE908;
    case 515u: goto L_08AAE924;
    case 516u: goto L_08AAE92C;
    case 517u: goto L_08AAE944;
    case 518u: goto L_08AAE958;
    case 519u: goto L_08AAE968;
    case 520u: goto L_08AAE970;
    case 521u: goto L_08AAE978;
    case 522u: goto L_08AAE97C;
    case 523u: goto L_08AAE988;
    case 524u: goto L_08AAE994;
    case 525u: goto L_08AAE99C;
    case 526u: goto L_08AAE9A4;
    case 527u: goto L_08AAE9AC;
    case 528u: goto L_08AAE9D8;
    case 529u: goto L_08AAE9E8;
    case 530u: goto L_08AAEA04;
    case 531u: goto L_08AAEA14;
    case 532u: goto L_08AAEA24;
    case 533u: goto L_08AAEA38;
    case 534u: goto L_08AAEA40;
    case 535u: goto L_08AAEA48;
    case 536u: goto L_08AAEA60;
    case 537u: goto L_08AAEA98;
    case 538u: goto L_08AAEB38;
    case 539u: goto L_08AAEB60;
    case 540u: goto L_08AAEB6C;
    case 541u: goto L_08AAEB7C;
    case 542u: goto L_08AAEB9C;
    case 543u: goto L_08AAEBB8;
    case 544u: goto L_08AAEBCC;
    case 545u: goto L_08AAEBEC;
    case 546u: goto L_08AAEBF8;
    case 547u: goto L_08AAEC04;
    case 548u: goto L_08AAEC48;
    case 549u: goto L_08AAEC68;
    case 550u: goto L_08AAEC74;
    case 551u: goto L_08AAEC94;
    case 552u: goto L_08AAECA4;
    case 553u: goto L_08AAECB0;
    case 554u: goto L_08AAECD8;
    case 555u: goto L_08AAECE4;
    case 556u: goto L_08AAECF0;
    case 557u: goto L_08AAECF8;
    case 558u: goto L_08AAED04;
    case 559u: goto L_08AAED10;
    case 560u: goto L_08AAED14;
    case 561u: goto L_08AAED24;
    case 562u: goto L_08AAED38;
    case 563u: goto L_08AAED54;
    case 564u: goto L_08AAED68;
    case 565u: goto L_08AAED70;
    case 566u: goto L_08AAED84;
    case 567u: goto L_08AAED90;
    case 568u: goto L_08AAEDA4;
    case 569u: goto L_08AAEDB4;
    case 570u: goto L_08AAEDC4;
    case 571u: goto L_08AAEDCC;
    case 572u: goto L_08AAEDD8;
    case 573u: goto L_08AAEDE4;
    case 574u: goto L_08AAEE0C;
    case 575u: goto L_08AAEE30;
    case 576u: goto L_08AAEE38;
    case 577u: goto L_08AAEE44;
    case 578u: goto L_08AAEE68;
    case 579u: goto L_08AAEE78;
    case 580u: goto L_08AAEEC8;
    case 581u: goto L_08AAEEE4;
    case 582u: goto L_08AAEEEC;
    case 583u: goto L_08AAEEF0;
    case 584u: goto L_08AAEEFC;
    case 585u: goto L_08AAEF04;
    case 586u: goto L_08AAEF1C;
    case 587u: goto L_08AAEF38;
    case 588u: goto L_08AAEF40;
    case 589u: goto L_08AAEF44;
    case 590u: goto L_08AAEF4C;
    case 591u: goto L_08AAEF54;
    case 592u: goto L_08AAEF6C;
    case 593u: goto L_08AAEF9C;
    case 594u: goto L_08AAEFAC;
    case 595u: goto L_08AAEFB0;
    case 596u: goto L_08AAEFC0;
    case 597u: goto L_08AAEFD4;
    case 598u: goto L_08AAEFE0;
    case 599u: goto L_08AAEFE4;
    case 600u: goto L_08AAF010;
    case 601u: goto L_08AAF030;
    case 602u: goto L_08AAF038;
    case 603u: goto L_08AAF040;
    case 604u: goto L_08AAF058;
    case 605u: goto L_08AAF060;
    case 606u: goto L_08AAF090;
    case 607u: goto L_08AAF0E0;
    case 608u: goto L_08AAF0F0;
    case 609u: goto L_08AAF0F4;
    case 610u: goto L_08AAF0FC;
    case 611u: goto L_08AAF10C;
    case 612u: goto L_08AAF124;
    case 613u: goto L_08AAF138;
    case 614u: goto L_08AAF144;
    case 615u: goto L_08AAF148;
    case 616u: goto L_08AAF174;
    case 617u: goto L_08AAF194;
    case 618u: goto L_08AAF19C;
    case 619u: goto L_08AAF1A4;
    case 620u: goto L_08AAF1BC;
    case 621u: goto L_08AAF1C4;
    case 622u: goto L_08AAF1F0;
    case 623u: goto L_08AAF210;
    case 624u: goto L_08AAF218;
    case 625u: goto L_08AAF220;
    case 626u: goto L_08AAF228;
    case 627u: goto L_08AAF254;
    case 628u: goto L_08AAF274;
    case 629u: goto L_08AAF27C;
    case 630u: goto L_08AAF284;
    case 631u: goto L_08AAF2AC;
    case 632u: goto L_08AAF2B4;
    case 633u: goto L_08AAF2C8;
    case 634u: goto L_08AAF2DC;
    case 635u: goto L_08AAF2E8;
    case 636u: goto L_08AAF2EC;
    case 637u: goto L_08AAF318;
    case 638u: goto L_08AAF338;
    case 639u: goto L_08AAF340;
    case 640u: goto L_08AAF348;
    case 641u: goto L_08AAF360;
    case 642u: goto L_08AAF36C;
    case 643u: goto L_08AAF374;
    case 644u: goto L_08AAF3A0;
    case 645u: goto L_08AAF3C0;
    case 646u: goto L_08AAF3C8;
    case 647u: goto L_08AAF3D0;
    case 648u: goto L_08AAF3DC;
    case 649u: goto L_08AAF3E8;
    case 650u: goto L_08AAF414;
    case 651u: goto L_08AAF434;
    case 652u: goto L_08AAF43C;
    case 653u: goto L_08AAF444;
    case 654u: goto L_08AAF448;
    case 655u: goto L_08AAF45C;
    case 656u: goto L_08AAF470;
    case 657u: goto L_08AAF47C;
    case 658u: goto L_08AAF480;
    case 659u: goto L_08AAF4B0;
    case 660u: goto L_08AAF4D0;
    case 661u: goto L_08AAF4D8;
    case 662u: goto L_08AAF4E0;
    case 663u: goto L_08AAF4F8;
    case 664u: goto L_08AAF514;
    case 665u: goto L_08AAF51C;
    case 666u: goto L_08AAF530;
    case 667u: goto L_08AAF554;
    case 668u: goto L_08AAF5A4;
    case 669u: goto L_08AAF5B4;
    case 670u: goto L_08AAF5B8;
    case 671u: goto L_08AAF5F4;
    case 672u: goto L_08AAF610;
    case 673u: goto L_08AAF618;
    case 674u: goto L_08AAF61C;
    case 675u: goto L_08AAF624;
    case 676u: goto L_08AAF62C;
    case 677u: goto L_08AAF654;
    case 678u: goto L_08AAF65C;
    case 679u: goto L_08AAF668;
    case 680u: goto L_08AAF66C;
    case 681u: goto L_08AAF678;
    case 682u: goto L_08AAF680;
    case 683u: goto L_08AAF688;
    case 684u: goto L_08AAF690;
    case 685u: goto L_08AAF6A8;
    case 686u: goto L_08AAF6B0;
    case 687u: goto L_08AAF6B4;
    case 688u: goto L_08AAF6CC;
    case 689u: goto L_08AAF6E0;
    case 690u: goto L_08AAF704;
    case 691u: goto L_08AAF724;
    case 692u: goto L_08AAF72C;
    case 693u: goto L_08AAF734;
    case 694u: goto L_08AAF73C;
    case 695u: goto L_08AAF76C;
    case 696u: goto L_08AAF78C;
    case 697u: goto L_08AAF794;
    case 698u: goto L_08AAF79C;
    case 699u: goto L_08AAF7A0;
    case 700u: goto L_08AAF7B0;
    case 701u: goto L_08AAF7D8;
    case 702u: goto L_08AAF7F8;
    case 703u: goto L_08AAF800;
    case 704u: goto L_08AAF808;
    case 705u: goto L_08AAF810;
    case 706u: goto L_08AAF818;
    case 707u: goto L_08AAF83C;
    case 708u: goto L_08AAF85C;
    case 709u: goto L_08AAF888;
    case 710u: goto L_08AAF8A8;
    case 711u: goto L_08AAF8B0;
    case 712u: goto L_08AAF8B8;
    case 713u: goto L_08AAF8BC;
    case 714u: goto L_08AAF8CC;
    case 715u: goto L_08AAF8E0;
    case 716u: goto L_08AAF8EC;
    case 717u: goto L_08AAF8F0;
    case 718u: goto L_08AAF900;
    case 719u: goto L_08AAF928;
    case 720u: goto L_08AAF948;
    case 721u: goto L_08AAF950;
    case 722u: goto L_08AAF958;
    case 723u: goto L_08AAF964;
    case 724u: goto L_08AAF96C;
    case 725u: goto L_08AAF974;
    case 726u: goto L_08AAF97C;
    case 727u: goto L_08AAF990;
    case 728u: goto L_08AAF9AC;
    case 729u: goto L_08AAF9B0;
    case 730u: goto L_08AAF9E0;
    case 731u: goto L_08AAFA28;
    case 732u: goto L_08AAFA38;
    case 733u: goto L_08AAFA3C;
    case 734u: goto L_08AAFA64;
    case 735u: goto L_08AAFA84;
    case 736u: goto L_08AAFA8C;
    case 737u: goto L_08AAFA94;
    case 738u: goto L_08AAFAA4;
    case 739u: goto L_08AAFAC0;
    case 740u: goto L_08AAFAD4;
    case 741u: goto L_08AAFAE0;
    case 742u: goto L_08AAFAE4;
    case 743u: goto L_08AAFAF0;
    case 744u: goto L_08AAFB00;
    case 745u: goto L_08AAFB0C;
    case 746u: goto L_08AAFB28;
    case 747u: goto L_08AAFB34;
    case 748u: goto L_08AAFB50;
    case 749u: goto L_08AAFB5C;
    case 750u: goto L_08AAFB74;
    case 751u: goto L_08AAFB90;
    case 752u: goto L_08AAFB98;
    case 753u: goto L_08AAFB9C;
    case 754u: goto L_08AAFBA8;
    case 755u: goto L_08AAFBB0;
    case 756u: goto L_08AAFBB8;
    case 757u: goto L_08AAFBC0;
    case 758u: goto L_08AAFBC8;
    case 759u: goto L_08AAFBE4;
    case 760u: goto L_08AAFBF0;
    case 761u: goto L_08AAFBFC;
    case 762u: goto L_08AAFC14;
    case 763u: goto L_08AAFC44;
    case 764u: goto L_08AAFC64;
    case 765u: goto L_08AAFC6C;
    case 766u: goto L_08AAFC74;
    case 767u: goto L_08AAFC7C;
    case 768u: goto L_08AAFCAC;
    case 769u: goto L_08AAFCCC;
    case 770u: goto L_08AAFCD4;
    case 771u: goto L_08AAFCDC;
    case 772u: goto L_08AAFCE4;
    case 773u: goto L_08AAFD14;
    case 774u: goto L_08AAFD34;
    case 775u: goto L_08AAFD3C;
    case 776u: goto L_08AAFD44;
    case 777u: goto L_08AAFD4C;
    case 778u: goto L_08AAFD78;
    case 779u: goto L_08AAFD98;
    case 780u: goto L_08AAFDA0;
    case 781u: goto L_08AAFDA8;
    case 782u: goto L_08AAFDB0;
    case 783u: goto L_08AAFDE0;
    case 784u: goto L_08AAFE00;
    case 785u: goto L_08AAFE08;
    case 786u: goto L_08AAFE10;
    case 787u: goto L_08AAFE18;
    case 788u: goto L_08AAFE48;
    case 789u: goto L_08AAFE68;
    case 790u: goto L_08AAFE70;
    case 791u: goto L_08AAFE78;
    case 792u: goto L_08AAFE80;
    case 793u: goto L_08AAFEB0;
    case 794u: goto L_08AAFED0;
    case 795u: goto L_08AAFED8;
    case 796u: goto L_08AAFEE0;
    case 797u: goto L_08AAFEE8;
    case 798u: goto L_08AAFEFC;
    case 799u: goto L_08AAFF28;
    case 800u: goto L_08AAFF48;
    case 801u: goto L_08AAFF50;
    case 802u: goto L_08AAFF58;
    case 803u: goto L_08AAFF60;
    case 804u: goto L_08AAFF68;
    case 805u: goto L_08AAFF94;
    case 806u: goto L_08AAFFB0;
    case 807u: goto L_08AAFFB8;
    case 808u: goto L_08AAFFBC;
    case 809u: goto L_08AAFFD0;
    case 810u: goto L_08AAFFE8;
    case 811u: goto L_08AAFFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AAC000:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC1B0;
      }
      goto L_08AAC0D4;
    }
L_08AAC0D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08AAC1B0;
L_08AAC1B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x08AAC1C4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 637u, 0x088B7E18u>(ctx, &aot_mem) && ctx.pc == 0x08AAC1C4u) goto L_08AAC1C4;
    return;
L_08AAC1C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 37u);
      if (branch_taken) {
          goto L_08AAC278;
      }
      goto L_08AAC1F4;
    }
L_08AAC1F4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAC278;
      }
      goto L_08AAC1FC;
    }
L_08AAC1FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21616));
    ctx.gpr[5] = (0u | 3u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[24];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[24];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[24];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[24];
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[24];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[26];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AAC270u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08AAD2C8;
L_08AAC270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC5F8;
      }
      goto L_08AAC278;
    }
L_08AAC278:
    ctx.gpr[31] = (0x08AAC280u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 132u, 0x089FD348u>(ctx, &aot_mem) && ctx.pc == 0x08AAC280u) goto L_08AAC280;
    return;
L_08AAC280:
    ctx.gpr[6] = (49864u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AAC29Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 219u, 0x08AA9858u>(ctx, &aot_mem) && ctx.pc == 0x08AAC29Cu) goto L_08AAC29C;
    return;
L_08AAC29C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AAC2C4;
      }
      goto L_08AAC2BC;
    }
L_08AAC2BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC2C4;
L_08AAC2C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AAC2E8;
    }
    goto L_08AAC2DC;
L_08AAC2DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AAC2E8;
L_08AAC2E8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AAC308;
    }
    goto L_08AAC2FC;
L_08AAC2FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AAC308;
L_08AAC308:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAC324;
      }
      goto L_08AAC31C;
    }
L_08AAC31C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC324;
L_08AAC324:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAC338u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 219u, 0x08AA9858u>(ctx, &aot_mem) && ctx.pc == 0x08AAC338u) goto L_08AAC338;
    return;
L_08AAC338:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AAC360;
      }
      goto L_08AAC358;
    }
L_08AAC358:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC360;
L_08AAC360:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AAC384;
    }
    goto L_08AAC378;
L_08AAC378:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AAC384;
L_08AAC384:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AAC3A4;
    }
    goto L_08AAC398;
L_08AAC398:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AAC3A4;
L_08AAC3A4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAC3C0;
      }
      goto L_08AAC3B8;
    }
L_08AAC3B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC3C0;
L_08AAC3C0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAC3D4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 219u, 0x08AA9858u>(ctx, &aot_mem) && ctx.pc == 0x08AAC3D4u) goto L_08AAC3D4;
    return;
L_08AAC3D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AAC3FC;
      }
      goto L_08AAC3F4;
    }
L_08AAC3F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC3FC;
L_08AAC3FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AAC420;
    }
    goto L_08AAC414;
L_08AAC414:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AAC420;
L_08AAC420:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AAC440;
    }
    goto L_08AAC434;
L_08AAC434:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AAC440;
L_08AAC440:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAC45C;
      }
      goto L_08AAC454;
    }
L_08AAC454:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC45C;
L_08AAC45C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAC470u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 219u, 0x08AA9858u>(ctx, &aot_mem) && ctx.pc == 0x08AAC470u) goto L_08AAC470;
    return;
L_08AAC470:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AAC498;
      }
      goto L_08AAC490;
    }
L_08AAC490:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAC498;
L_08AAC498:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AAC4BC;
    }
    goto L_08AAC4B0;
L_08AAC4B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AAC4BC;
L_08AAC4BC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
        goto L_08AAC4DC;
    }
    goto L_08AAC4D0;
L_08AAC4D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    goto L_08AAC4DC;
L_08AAC4DC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AAC4FC;
    }
    goto L_08AAC4F0;
L_08AAC4F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AAC4FC;
L_08AAC4FC:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08AAC520;
    }
    goto L_08AAC520;
L_08AAC520:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.gpr[16] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08AAC544;
    }
    goto L_08AAC544;
L_08AAC544:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08AAC56C;
    }
    goto L_08AAC56C;
L_08AAC56C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.gpr[18] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_08AAC590;
    }
    goto L_08AAC590;
L_08AAC590:
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AAC5F8;
      }
      goto L_08AAC59C;
    }
L_08AAC59C:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
      if (branch_taken) {
          goto L_08AAC5E8;
      }
      goto L_08AAC5AC;
    }
L_08AAC5AC:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[22]);
    goto L_08AAC5CC;
L_08AAC5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[31] = (0x08AAC5D8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 450u, 0x08AAAB90u>(ctx, &aot_mem) && ctx.pc == 0x08AAC5D8u) goto L_08AAC5D8;
    return;
L_08AAC5D8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_08AAC5CC;
      }
      goto L_08AAC5E8;
    }
L_08AAC5E8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC59C;
      }
      goto L_08AAC5F8;
    }
L_08AAC5F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAC630:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAC67C;
      }
      goto L_08AAC668;
    }
L_08AAC668:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AAC67C;
L_08AAC67C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AAC7D8;
      }
      goto L_08AAC68C;
    }
L_08AAC68C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 10u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC6C4;
      }
      goto L_08AAC6A8;
    }
L_08AAC6A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC7D8;
      }
      goto L_08AAC6C4;
    }
L_08AAC6C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAC728;
      }
      goto L_08AAC6E0;
    }
L_08AAC6E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC728;
      }
      goto L_08AAC6F4;
    }
L_08AAC6F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAC720;
      }
      goto L_08AAC70C;
    }
L_08AAC70C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AAC720;
L_08AAC720:
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(54)));
    ctx.gpr[18] = (ctx.gpr[18] & 3u);
    goto L_08AAC728;
L_08AAC728:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
        goto L_08AAC744;
    }
    goto L_08AAC738;
L_08AAC738:
    ctx.gpr[31] = (0x08AAC740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08AAC740u) goto L_08AAC740;
    return;
L_08AAC740:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    goto L_08AAC744;
L_08AAC744:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[31] = (0x08AAC754u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 86u, 0x0895076Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAC754u) goto L_08AAC754;
    return;
L_08AAC754:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC7D8;
      }
      goto L_08AAC760;
    }
L_08AAC760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC7AC;
      }
      goto L_08AAC77C;
    }
L_08AAC77C:
    ctx.gpr[31] = (0x08AAC784u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAC784u) goto L_08AAC784;
    return;
L_08AAC784:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC7A4;
      }
      goto L_08AAC78C;
    }
L_08AAC78C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC7B4;
      }
      goto L_08AAC79C;
    }
L_08AAC79C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AAC7C0;
      }
      goto L_08AAC7A4;
    }
L_08AAC7A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AAC7AC;
    }
L_08AAC7AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AAC7B4;
    }
L_08AAC7B4:
    ctx.gpr[31] = (0x08AAC7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08AAC7BCu) goto L_08AAC7BC;
    return;
L_08AAC7BC:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08AAC7C0;
L_08AAC7C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AAC7D0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 103u, 0x0895082Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAC7D0u) goto L_08AAC7D0;
    return;
L_08AAC7D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AAC7D8;
    }
L_08AAC7D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAC8DC;
      }
      goto L_08AAC7E8;
    }
L_08AAC7E8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08AAC800u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 81u, 0x0883C5F8u>(ctx, &aot_mem) && ctx.pc == 0x08AAC800u) goto L_08AAC800;
    return;
L_08AAC800:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC880;
      }
      goto L_08AAC808;
    }
L_08AAC808:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AAC860;
      }
      goto L_08AAC814;
    }
L_08AAC814:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAC838;
      }
      goto L_08AAC824;
    }
L_08AAC824:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AAC838;
L_08AAC838:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AAC850u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAC850u) goto L_08AAC850;
    return;
L_08AAC850:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAC860;
      }
      goto L_08AAC858;
    }
L_08AAC858:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08AACE90;
      }
      goto L_08AAC860;
    }
L_08AAC860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AAC878u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAC878u) goto L_08AAC878;
    return;
L_08AAC878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AAC880;
    }
L_08AAC880:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AACE90;
      }
      goto L_08AAC88C;
    }
L_08AAC88C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAC8B0;
      }
      goto L_08AAC89C;
    }
L_08AAC89C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AAC8B0;
L_08AAC8B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AAC8C8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAC8C8u) goto L_08AAC8C8;
    return;
L_08AAC8C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACE90;
      }
      goto L_08AAC8D0;
    }
L_08AAC8D0:
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AACE90;
      }
      goto L_08AAC8DC;
    }
L_08AAC8DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACDC4;
      }
      goto L_08AAC8EC;
    }
L_08AAC8EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACDC4;
      }
      goto L_08AAC8FC;
    }
L_08AAC8FC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACB64;
      }
      goto L_08AAC90C;
    }
L_08AAC90C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACB64;
      }
      goto L_08AAC928;
    }
L_08AAC928:
    ctx.gpr[31] = (0x08AAC930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08AAC930u) goto L_08AAC930;
    return;
L_08AAC930:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AAC980;
      }
      goto L_08AAC94C;
    }
L_08AAC94C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    goto L_08AAC950;
L_08AAC950:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08AAC974;
    }
    goto L_08AAC964;
L_08AAC964:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAC978;
      }
      goto L_08AAC974;
    }
L_08AAC974:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AAC978;
L_08AAC978:
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
        goto L_08AAC950;
    }
    goto L_08AAC980;
L_08AAC980:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (2232u << 16u);
        goto L_08AAC9B0;
    }
    goto L_08AAC994;
L_08AAC994:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AAC9BC;
      }
      goto L_08AAC9AC;
    }
L_08AAC9AC:
    ctx.gpr[4] = (2232u << 16u);
    goto L_08AAC9B0;
L_08AAC9B0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (2232u << 16u);
    goto L_08AAC9BC;
L_08AAC9BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08AACA00;
    }
    goto L_08AAC9F8;
L_08AAC9F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AACA04;
      }
      goto L_08AACA00;
    }
L_08AACA00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08AACA04;
L_08AACA04:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACB5C;
      }
      goto L_08AACA0C;
    }
L_08AACA0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AACB5C;
      }
      goto L_08AACA18;
    }
L_08AACA18:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACB5C;
      }
      goto L_08AACA50;
    }
L_08AACA50:
    ctx.gpr[31] = (0x08AACA58u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08AACA58u) goto L_08AACA58;
    return;
L_08AACA58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACA80;
      }
      goto L_08AACA68;
    }
L_08AACA68:
    ctx.gpr[31] = (0x08AACA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08AACA70u) goto L_08AACA70;
    return;
L_08AACA70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACB5C;
      }
      goto L_08AACA80;
    }
L_08AACA80:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AACADC;
      }
      goto L_08AACA8C;
    }
L_08AACA8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACADC;
      }
      goto L_08AACA9C;
    }
L_08AACA9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 165u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACADC;
      }
      goto L_08AACAAC;
    }
L_08AACAAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 161u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AACADC;
      }
      goto L_08AACABC;
    }
L_08AACABC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(90)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACADC;
      }
      goto L_08AACACC;
    }
L_08AACACC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACB3C;
      }
      goto L_08AACAD4;
    }
L_08AACAD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
      if (branch_taken) {
          goto L_08AACAF0;
      }
      goto L_08AACADC;
    }
L_08AACADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AACAF0;
    }
L_08AACAF0:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACB3C;
      }
      goto L_08AACAFC;
    }
L_08AACAFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 195u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACB3C;
      }
      goto L_08AACB0C;
    }
L_08AACB0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-992));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACB3C;
      }
      goto L_08AACB1C;
    }
L_08AACB1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACB3C;
      }
      goto L_08AACB2C;
    }
L_08AACB2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACB5C;
      }
      goto L_08AACB3C;
    }
L_08AACB3C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5736), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AACB5C;
    }
L_08AACB5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACD08;
      }
      goto L_08AACB64;
    }
L_08AACB64:
    ctx.gpr[31] = (0x08AACB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08AACB6Cu) goto L_08AACB6C;
    return;
L_08AACB6C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AACD08;
      }
      goto L_08AACB74;
    }
L_08AACB74:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AACD08;
      }
      goto L_08AACBAC;
    }
L_08AACBAC:
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
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACD08;
      }
      goto L_08AACBDC;
    }
L_08AACBDC:
    ctx.gpr[31] = (0x08AACBE4u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08AACBE4u) goto L_08AACBE4;
    return;
L_08AACBE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACC0C;
      }
      goto L_08AACBF4;
    }
L_08AACBF4:
    ctx.gpr[31] = (0x08AACBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08AACBFCu) goto L_08AACBFC;
    return;
L_08AACBFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACD08;
      }
      goto L_08AACC0C;
    }
L_08AACC0C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AACC88;
      }
      goto L_08AACC18;
    }
L_08AACC18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACC88;
      }
      goto L_08AACC28;
    }
L_08AACC28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 165u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACC88;
      }
      goto L_08AACC38;
    }
L_08AACC38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 161u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AACC88;
      }
      goto L_08AACC48;
    }
L_08AACC48:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(90)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACC88;
      }
      goto L_08AACC58;
    }
L_08AACC58:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACC78;
      }
      goto L_08AACC60;
    }
L_08AACC60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACC88;
      }
      goto L_08AACC78;
    }
L_08AACC78:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACCE8;
      }
      goto L_08AACC80;
    }
L_08AACC80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
      if (branch_taken) {
          goto L_08AACC9C;
      }
      goto L_08AACC88;
    }
L_08AACC88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AACC9C;
    }
L_08AACC9C:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACCE8;
      }
      goto L_08AACCA8;
    }
L_08AACCA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 195u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACCE8;
      }
      goto L_08AACCB8;
    }
L_08AACCB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-992));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACCE8;
      }
      goto L_08AACCC8;
    }
L_08AACCC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACCE8;
      }
      goto L_08AACCD8;
    }
L_08AACCD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AACD08;
      }
      goto L_08AACCE8;
    }
L_08AACCE8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5736), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AACD08;
    }
L_08AACD08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACD68;
      }
      goto L_08AACD14;
    }
L_08AACD14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACD68;
      }
      goto L_08AACD28;
    }
L_08AACD28:
    ctx.gpr[31] = (0x08AACD30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x08AACD30u) goto L_08AACD30;
    return;
L_08AACD30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACD60;
      }
      goto L_08AACD38;
    }
L_08AACD38:
    ctx.gpr[31] = (0x08AACD40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 196u, 0x08AB0DECu>(ctx, &aot_mem) && ctx.pc == 0x08AACD40u) goto L_08AACD40;
    return;
L_08AACD40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACD60;
      }
      goto L_08AACD48;
    }
L_08AACD48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACD70;
      }
      goto L_08AACD58;
    }
L_08AACD58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AACD60;
    }
L_08AACD60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AACD68;
    }
L_08AACD68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AACD70;
    }
L_08AACD70:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26672));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AACDACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 293u, 0x08925E08u>(ctx, &aot_mem) && ctx.pc == 0x08AACDACu) goto L_08AACDAC;
    return;
L_08AACDAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AACDC4;
    }
L_08AACDC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACE90;
      }
      goto L_08AACDD4;
    }
L_08AACDD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACE34;
      }
      goto L_08AACDE0;
    }
L_08AACDE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACE34;
      }
      goto L_08AACDF4;
    }
L_08AACDF4:
    ctx.gpr[31] = (0x08AACDFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x08AACDFCu) goto L_08AACDFC;
    return;
L_08AACDFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACE2C;
      }
      goto L_08AACE04;
    }
L_08AACE04:
    ctx.gpr[31] = (0x08AACE0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 196u, 0x08AB0DECu>(ctx, &aot_mem) && ctx.pc == 0x08AACE0Cu) goto L_08AACE0C;
    return;
L_08AACE0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACE2C;
      }
      goto L_08AACE14;
    }
L_08AACE14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACE3C;
      }
      goto L_08AACE24;
    }
L_08AACE24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AACE2C;
    }
L_08AACE2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AACE34;
    }
L_08AACE34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AACE3C;
    }
L_08AACE3C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26672));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AACE78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 293u, 0x08925E08u>(ctx, &aot_mem) && ctx.pc == 0x08AACE78u) goto L_08AACE78;
    return;
L_08AACE78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AACE90;
    }
L_08AACE90:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26672));
    ctx.gpr[31] = (0x08AACEB0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08AACEB0u) goto L_08AACEB0;
    return;
L_08AACEB0:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17317u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AACF00;
      }
      goto L_08AACEDC;
    }
L_08AACEDC:
    ctx.gpr[31] = (0x08AACEE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 22u, 0x08A8C128u>(ctx, &aot_mem) && ctx.pc == 0x08AACEE4u) goto L_08AACEE4;
    return;
L_08AACEE4:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AACF00;
      }
      goto L_08AACEF4;
    }
L_08AACEF4:
    ctx.gpr[31] = (0x08AACEFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 22u, 0x08A8C128u>(ctx, &aot_mem) && ctx.pc == 0x08AACEFCu) goto L_08AACEFC;
    return;
L_08AACEFC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AACF00;
L_08AACF00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACF58;
      }
      goto L_08AACF1C;
    }
L_08AACF1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AACF58;
      }
      goto L_08AACF30;
    }
L_08AACF30:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
        goto L_08AACF4C;
    }
    goto L_08AACF3C;
L_08AACF3C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AACF58;
      }
      goto L_08AACF4C;
    }
L_08AACF4C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AACF58;
L_08AACF58:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AACF64u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 10u, 0x08A8C094u>(ctx, &aot_mem) && ctx.pc == 0x08AACF64u) goto L_08AACF64;
    return;
L_08AACF64:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD0D8;
      }
      goto L_08AACF70;
    }
L_08AACF70:
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
        goto L_08AACF8C;
    }
    goto L_08AACF7C;
L_08AACF7C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AACF98;
      }
      goto L_08AACF8C;
    }
L_08AACF8C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AACF98;
L_08AACF98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AACFBC;
      }
      goto L_08AACFA4;
    }
L_08AACFA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AACFBCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AACFBCu) goto L_08AACFBC;
    return;
L_08AACFBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AACFDC;
      }
      goto L_08AACFD0;
    }
L_08AACFD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AACFDCu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 160u, 0x08AC8D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AACFDCu) goto L_08AACFDC;
    return;
L_08AACFDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(53)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 239 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_08AACFFC;
      }
      goto L_08AACFEC;
    }
L_08AACFEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(53)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAD000;
      }
      goto L_08AACFFC;
    }
L_08AACFFC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AAD000;
L_08AAD000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD098;
      }
      goto L_08AAD00C;
    }
L_08AAD00C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD098;
      }
      goto L_08AAD020;
    }
L_08AAD020:
    ctx.gpr[31] = (0x08AAD028u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD028u) goto L_08AAD028;
    return;
L_08AAD028:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD088;
      }
      goto L_08AAD030;
    }
L_08AAD030:
    ctx.gpr[31] = (0x08AAD038u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 196u, 0x08AB0DECu>(ctx, &aot_mem) && ctx.pc == 0x08AAD038u) goto L_08AAD038;
    return;
L_08AAD038:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD088;
      }
      goto L_08AAD040;
    }
L_08AAD040:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(53)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AAD068;
      }
      goto L_08AAD050;
    }
L_08AAD050:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD0AC;
      }
      goto L_08AAD060;
    }
L_08AAD060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08AAD0A0;
      }
      goto L_08AAD068;
    }
L_08AAD068:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAD074u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 293u, 0x08925E08u>(ctx, &aot_mem) && ctx.pc == 0x08AAD074u) goto L_08AAD074;
    return;
L_08AAD074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AAD088;
    }
L_08AAD088:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AAD098;
    }
L_08AAD098:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AAD0A0;
    }
L_08AAD0A0:
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD0D0;
      }
      goto L_08AAD0AC;
    }
L_08AAD0AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAD0B8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 293u, 0x08925E08u>(ctx, &aot_mem) && ctx.pc == 0x08AAD0B8u) goto L_08AAD0B8;
    return;
L_08AAD0B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AAD0D0;
    }
L_08AAD0D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AAD0D8;
    }
L_08AAD0D8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD144;
      }
      goto L_08AAD0E8;
    }
L_08AAD0E8:
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
        goto L_08AAD104;
    }
    goto L_08AAD0F4;
L_08AAD0F4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAD110;
      }
      goto L_08AAD104;
    }
L_08AAD104:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AAD110;
L_08AAD110:
    ctx.gpr[31] = (0x08AAD118u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 22u, 0x08A8C128u>(ctx, &aot_mem) && ctx.pc == 0x08AAD118u) goto L_08AAD118;
    return;
L_08AAD118:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAD2A4;
      }
      goto L_08AAD134;
    }
L_08AAD134:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD2A4;
      }
      goto L_08AAD13C;
    }
L_08AAD13C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AAD144;
    }
L_08AAD144:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AAD158u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 27u, 0x08A8C17Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD158u) goto L_08AAD158;
    return;
L_08AAD158:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AAD174;
      }
      goto L_08AAD164;
    }
L_08AAD164:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAD184;
      }
      goto L_08AAD174;
    }
L_08AAD174:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(54)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AAD184;
L_08AAD184:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD270;
      }
      goto L_08AAD18C;
    }
L_08AAD18C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD1B0;
      }
      goto L_08AAD198;
    }
L_08AAD198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AAD1B0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAD1B0u) goto L_08AAD1B0;
    return;
L_08AAD1B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AAD1D0;
      }
      goto L_08AAD1C4;
    }
L_08AAD1C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AAD1D0u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 160u, 0x08AC8D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD1D0u) goto L_08AAD1D0;
    return;
L_08AAD1D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(53)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 239 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 255u);
      if (branch_taken) {
          goto L_08AAD1F0;
      }
      goto L_08AAD1E0;
    }
L_08AAD1E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(53)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AAD1F4;
      }
      goto L_08AAD1F0;
    }
L_08AAD1F0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AAD1F4;
L_08AAD1F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD22C;
      }
      goto L_08AAD200;
    }
L_08AAD200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD22C;
      }
      goto L_08AAD214;
    }
L_08AAD214:
    ctx.gpr[31] = (0x08AAD21Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAD21Cu) goto L_08AAD21C;
    return;
L_08AAD21C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD234;
      }
      goto L_08AAD224;
    }
L_08AAD224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD260;
      }
      goto L_08AAD22C;
    }
L_08AAD22C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AAD234;
    }
L_08AAD234:
    ctx.gpr[31] = (0x08AAD23Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 196u, 0x08AB0DECu>(ctx, &aot_mem) && ctx.pc == 0x08AAD23Cu) goto L_08AAD23C;
    return;
L_08AAD23C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD260;
      }
      goto L_08AAD244;
    }
L_08AAD244:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAD250u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 293u, 0x08925E08u>(ctx, &aot_mem) && ctx.pc == 0x08AAD250u) goto L_08AAD250;
    return;
L_08AAD250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAD268;
      }
      goto L_08AAD260;
    }
L_08AAD260:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AAD268;
L_08AAD268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AAD270;
    }
L_08AAD270:
    ctx.gpr[31] = (0x08AAD278u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 22u, 0x08A8C128u>(ctx, &aot_mem) && ctx.pc == 0x08AAD278u) goto L_08AAD278;
    return;
L_08AAD278:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAD2A4;
      }
      goto L_08AAD294;
    }
L_08AAD294:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD2A4;
      }
      goto L_08AAD29C;
    }
L_08AAD29C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_08AAD2A8;
      }
      goto L_08AAD2A4;
    }
L_08AAD2A4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AAD2A8;
L_08AAD2A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD2C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (0u | 9999u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-9999));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AAD388;
      }
      goto L_08AAD33C;
    }
L_08AAD33C:
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08AAD344;
L_08AAD344:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAD364;
      }
      goto L_08AAD358;
    }
L_08AAD358:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08AAD378;
      }
      goto L_08AAD364;
    }
L_08AAD364:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAD378;
      }
      goto L_08AAD374;
    }
L_08AAD374:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AAD378;
L_08AAD378:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AAD344;
      }
      goto L_08AAD388;
    }
L_08AAD388:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AAD3AC;
L_08AAD3AC:
    ctx.gpr[6] = (ctx.gpr[18] << 3u);
    ctx.gpr[16] = (ctx.gpr[21] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AAD3CC;
      }
      goto L_08AAD3C8;
    }
L_08AAD3C8:
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    goto L_08AAD3CC;
L_08AAD3CC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[23]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[18] << 3u);
      if (branch_taken) {
          goto L_08AAD3EC;
      }
      goto L_08AAD3E4;
    }
L_08AAD3E4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAD3EC;
L_08AAD3EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[30] = (ctx.gpr[21] + ctx.gpr[17]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAD418;
      }
      goto L_08AAD410;
    }
L_08AAD410:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD3AC;
      }
      goto L_08AAD418;
    }
L_08AAD418:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AAD420;
L_08AAD420:
    ctx.gpr[6] = (ctx.gpr[19] << 3u);
    ctx.gpr[22] = (ctx.gpr[21] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[7];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAD43C;
      }
      goto L_08AAD438;
    }
L_08AAD438:
    ctx.gpr[19] = (0u | 0u);
    goto L_08AAD43C;
L_08AAD43C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
        goto L_08AAD460;
    }
    goto L_08AAD454;
L_08AAD454:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    goto L_08AAD460;
L_08AAD460:
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    ctx.gpr[22] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAD48C;
      }
      goto L_08AAD484;
    }
L_08AAD484:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD420;
      }
      goto L_08AAD48C;
    }
L_08AAD48C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[12]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[24] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08AAD4A4u);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 218u, 0x08AA9834u>(ctx, &aot_mem) && ctx.pc == 0x08AAD4A4u) goto L_08AAD4A4;
    return;
L_08AAD4A4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[13]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[28] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[17]);
    ctx.gpr[31] = (0x08AAD4D4u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 218u, 0x08AA9834u>(ctx, &aot_mem) && ctx.pc == 0x08AAD4D4u) goto L_08AAD4D4;
    return;
L_08AAD4D4:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AAD540;
      }
      goto L_08AAD4EC;
    }
L_08AAD4EC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAD518;
      }
      goto L_08AAD500;
    }
L_08AAD500:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD518;
      }
      goto L_08AAD514;
    }
L_08AAD514:
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    goto L_08AAD518;
L_08AAD518:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAD540;
      }
      goto L_08AAD528;
    }
L_08AAD528:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD540;
      }
      goto L_08AAD53C;
    }
L_08AAD53C:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    goto L_08AAD540;
L_08AAD540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_08AAD948;
      }
      goto L_08AAD550;
    }
L_08AAD550:
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[7] << 5u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_08AAD574;
L_08AAD574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD58C;
      }
      goto L_08AAD584;
    }
L_08AAD584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD948;
      }
      goto L_08AAD58C;
    }
L_08AAD58C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 100 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAD61C;
      }
      goto L_08AAD598;
    }
L_08AAD598:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08AAD620;
    }
    goto L_08AAD5A0;
L_08AAD5A0:
    ctx.gpr[17] = (2227u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) < 0;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20972)));
      if (branch_taken) {
          goto L_08AAD5CC;
      }
      goto L_08AAD5AC;
    }
L_08AAD5AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAD5D4;
      }
      goto L_08AAD5CC;
    }
L_08AAD5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_08AAD5D4;
L_08AAD5D4:
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AAD61C;
      }
      goto L_08AAD5E4;
    }
L_08AAD5E4:
    ctx.gpr[4] = (0u | 100u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAD5F8;
      }
      goto L_08AAD5F0;
    }
L_08AAD5F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD61C;
      }
      goto L_08AAD5F8;
    }
L_08AAD5F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAD60C;
      }
      goto L_08AAD600;
    }
L_08AAD600:
    jump_target = ctx.gpr[23];
    ctx.gpr[31] = (0x08AAD608u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AAD608u) goto L_08AAD608;
    return;
L_08AAD608:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
    goto L_08AAD60C;
L_08AAD60C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD5E4;
      }
      goto L_08AAD61C;
    }
L_08AAD61C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08AAD620;
L_08AAD620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[20] = ctx.fpr[22] + ctx.fpr[20];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = ctx.fpr[26] + ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AAD7A0;
      }
      goto L_08AAD658;
    }
L_08AAD658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AAD738;
      }
      goto L_08AAD664;
    }
L_08AAD664:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
        goto L_08AAD684;
    }
    goto L_08AAD674;
L_08AAD674:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AAD68C;
      }
      goto L_08AAD684;
    }
L_08AAD684:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAD68C;
L_08AAD68C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    if (static_cast<std::int32_t>(ctx.gpr[18]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
        goto L_08AAD6A4;
    }
    goto L_08AAD69C;
L_08AAD69C:
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    goto L_08AAD6A4;
L_08AAD6A4:
    ctx.gpr[16] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
        goto L_08AAD6C8;
    }
    goto L_08AAD6C0;
L_08AAD6C0:
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    goto L_08AAD6C8;
L_08AAD6C8:
    ctx.gpr[30] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AAD68C;
      }
      goto L_08AAD6E0;
    }
L_08AAD6E0:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AAD6ECu);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 218u, 0x08AA9834u>(ctx, &aot_mem) && ctx.pc == 0x08AAD6ECu) goto L_08AAD6EC;
    return;
L_08AAD6EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[12]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AAD7CC;
      }
      goto L_08AAD71C;
    }
L_08AAD71C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD7CC;
      }
      goto L_08AAD730;
    }
L_08AAD730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AAD7CC;
      }
      goto L_08AAD738;
    }
L_08AAD738:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AAD790;
      }
      goto L_08AAD74C;
    }
L_08AAD74C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAD758;
L_08AAD758:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AAD768;
      }
      goto L_08AAD764;
    }
L_08AAD764:
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    goto L_08AAD768;
L_08AAD768:
    ctx.gpr[30] = (ctx.gpr[18] << 3u);
    ctx.gpr[30] = (ctx.gpr[21] + ctx.gpr[30]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD758;
      }
      goto L_08AAD788;
    }
L_08AAD788:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD7CC;
      }
      goto L_08AAD790;
    }
L_08AAD790:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AAD7CC;
      }
      goto L_08AAD7A0;
    }
L_08AAD7A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AAD7C0;
      }
      goto L_08AAD7B4;
    }
L_08AAD7B4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AAD7CC;
      }
      goto L_08AAD7C0;
    }
L_08AAD7C0:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAD7CC;
L_08AAD7CC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AAD914;
      }
      goto L_08AAD7D4;
    }
L_08AAD7D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AAD8AC;
      }
      goto L_08AAD7E0;
    }
L_08AAD7E0:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_08AAD800;
    }
    goto L_08AAD7F0;
L_08AAD7F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AAD808;
      }
      goto L_08AAD800;
    }
L_08AAD800:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAD808;
L_08AAD808:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08AAD80C;
L_08AAD80C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[19] != ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
        goto L_08AAD824;
    }
    goto L_08AAD81C;
L_08AAD81C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    goto L_08AAD824;
L_08AAD824:
    ctx.gpr[16] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
        goto L_08AAD848;
    }
    goto L_08AAD840;
L_08AAD840:
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    goto L_08AAD848;
L_08AAD848:
    ctx.gpr[22] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AAD80C;
      }
      goto L_08AAD860;
    }
L_08AAD860:
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AAD86Cu);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 218u, 0x08AA9834u>(ctx, &aot_mem) && ctx.pc == 0x08AAD86Cu) goto L_08AAD86C;
    return;
L_08AAD86C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[12]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[28]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08AAD938;
      }
      goto L_08AAD890;
    }
L_08AAD890:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD938;
      }
      goto L_08AAD8A4;
    }
L_08AAD8A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAD938;
      }
      goto L_08AAD8AC;
    }
L_08AAD8AC:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_08AAD908;
    }
    goto L_08AAD8BC;
L_08AAD8BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAD8C8;
L_08AAD8C8:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[22] = (ctx.gpr[19] << 3u);
      if (branch_taken) {
          goto L_08AAD8E4;
      }
      goto L_08AAD8DC;
    }
L_08AAD8DC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[19] << 3u);
    goto L_08AAD8E4;
L_08AAD8E4:
    ctx.gpr[22] = (ctx.gpr[21] + ctx.gpr[22]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD8C8;
      }
      goto L_08AAD900;
    }
L_08AAD900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAD938;
      }
      goto L_08AAD908;
    }
L_08AAD908:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AAD938;
      }
      goto L_08AAD914;
    }
L_08AAD914:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
        goto L_08AAD930;
    }
    goto L_08AAD924;
L_08AAD924:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AAD938;
      }
      goto L_08AAD930;
    }
L_08AAD930:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAD938;
L_08AAD938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AAD574;
      }
      goto L_08AAD948;
    }
L_08AAD948:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAD98C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-528));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[17]);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAD9DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 641u, 0x08873938u>(ctx, &aot_mem) && ctx.pc == 0x08AAD9DCu) goto L_08AAD9DC;
    return;
L_08AAD9DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2736)));
    ctx.gpr[31] = (0x08AAD9E8u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 601u, 0x08873574u>(ctx, &aot_mem) && ctx.pc == 0x08AAD9E8u) goto L_08AAD9E8;
    return;
L_08AAD9E8:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2736)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AADA84u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 606u, 0x088735BCu>(ctx, &aot_mem) && ctx.pc == 0x08AADA84u) goto L_08AADA84;
    return;
L_08AADA84:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AADA98u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5736), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 269u, 0x08925C50u>(ctx, &aot_mem) && ctx.pc == 0x08AADA98u) goto L_08AADA98;
    return;
L_08AADA98:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[4] = (0u | 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[5] = (17302u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[5] = (16968u << 16u);
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-13408));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-13392));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2232u << 16u);
      if (branch_taken) {
          goto L_08AADAF8;
      }
      goto L_08AADAE8;
    }
L_08AADAE8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20976)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AADB08;
      }
      goto L_08AADAF8;
    }
L_08AADAF8:
    ctx.gpr[31] = (0x08AADB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 155u, 0x088C4C18u>(ctx, &aot_mem) && ctx.pc == 0x08AADB00u) goto L_08AADB00;
    return;
L_08AADB00:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(20976), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AADB08;
L_08AADB08:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AADB80;
      }
      goto L_08AADB44;
    }
L_08AADB44:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16250u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57672u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AADB80;
      }
      goto L_08AADB74;
    }
L_08AADB74:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-13424), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AADB84;
      }
      goto L_08AADB80;
    }
L_08AADB80:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(-13424), static_cast<std::uint8_t>(0u));
    goto L_08AADB84;
L_08AADB84:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AADC28;
      }
      goto L_08AADBAC;
    }
L_08AADBAC:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AADCA4;
      }
      goto L_08AADC28;
    }
L_08AADC28:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    goto L_08AADCA4;
L_08AADCA4:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AADD0Cu);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 643u, 0x088B7F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AADD0Cu) goto L_08AADD0C;
    return;
L_08AADD0C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6887), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 37u);
      if (branch_taken) {
          goto L_08AADF6C;
      }
      goto L_08AADD44;
    }
L_08AADD44:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AADF6C;
      }
      goto L_08AADD4C;
    }
L_08AADD4C:
    ctx.gpr[31] = (0x08AADD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 186u, 0x089D5860u>(ctx, &aot_mem) && ctx.pc == 0x08AADD54u) goto L_08AADD54;
    return;
L_08AADD54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_08AADDF4;
      }
      goto L_08AADD60;
    }
L_08AADD60:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AADDF4;
      }
      goto L_08AADD78;
    }
L_08AADD78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[6] = (2219u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22312));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[26];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[26];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[26];
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[26];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[28];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[28];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AADDECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08AAD2C8;
L_08AADDEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AADF64;
      }
      goto L_08AADDF4;
    }
L_08AADDF4:
    ctx.gpr[17] = (2219u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7392));
      if (branch_taken) {
          goto L_08AADEF4;
      }
      goto L_08AADE08;
    }
L_08AADE08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[6] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6452));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[26];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[26];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[26];
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[26];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[28];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[28];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AADE7Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08AAD2C8;
L_08AADE7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[26];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[26];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[26];
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[26];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[28];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[28];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AADEECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08AAD2C8;
L_08AADEEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AADF64;
      }
      goto L_08AADEF4;
    }
L_08AADEF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[26];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[26];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[26];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[26];
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[26];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[28];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[28];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[17] + ctx.fpr[28];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AADF64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08AAD2C8;
L_08AADF64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE2DC;
      }
      goto L_08AADF6C;
    }
L_08AADF6C:
    ctx.gpr[31] = (0x08AADF74u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 132u, 0x089FD348u>(ctx, &aot_mem) && ctx.pc == 0x08AADF74u) goto L_08AADF74;
    return;
L_08AADF74:
    ctx.gpr[6] = (49864u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AADF8Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 219u, 0x08AA9858u>(ctx, &aot_mem) && ctx.pc == 0x08AADF8Cu) goto L_08AADF8C;
    return;
L_08AADF8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AADFB4;
      }
      goto L_08AADFAC;
    }
L_08AADFAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AADFB4;
L_08AADFB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AADFD8;
    }
    goto L_08AADFCC;
L_08AADFCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AADFD8;
L_08AADFD8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AADFF8;
    }
    goto L_08AADFEC;
L_08AADFEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AADFF8;
L_08AADFF8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE014;
      }
      goto L_08AAE00C;
    }
L_08AAE00C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAE014;
L_08AAE014:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AAE024u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 219u, 0x08AA9858u>(ctx, &aot_mem) && ctx.pc == 0x08AAE024u) goto L_08AAE024;
    return;
L_08AAE024:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AAE04C;
      }
      goto L_08AAE044;
    }
L_08AAE044:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAE04C;
L_08AAE04C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AAE070;
    }
    goto L_08AAE064;
L_08AAE064:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AAE070;
L_08AAE070:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AAE090;
    }
    goto L_08AAE084;
L_08AAE084:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AAE090;
L_08AAE090:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE0AC;
      }
      goto L_08AAE0A4;
    }
L_08AAE0A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAE0AC;
L_08AAE0AC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AAE0BCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 219u, 0x08AA9858u>(ctx, &aot_mem) && ctx.pc == 0x08AAE0BCu) goto L_08AAE0BC;
    return;
L_08AAE0BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AAE0E4;
      }
      goto L_08AAE0DC;
    }
L_08AAE0DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAE0E4;
L_08AAE0E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AAE108;
    }
    goto L_08AAE0FC;
L_08AAE0FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AAE108;
L_08AAE108:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AAE128;
    }
    goto L_08AAE11C;
L_08AAE11C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AAE128;
L_08AAE128:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE144;
      }
      goto L_08AAE13C;
    }
L_08AAE13C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAE144;
L_08AAE144:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AAE154u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 219u, 0x08AA9858u>(ctx, &aot_mem) && ctx.pc == 0x08AAE154u) goto L_08AAE154;
    return;
L_08AAE154:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08AAE17C;
      }
      goto L_08AAE174;
    }
L_08AAE174:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AAE17C;
L_08AAE17C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AAE1A0;
    }
    goto L_08AAE194;
L_08AAE194:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AAE1A0;
L_08AAE1A0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
        goto L_08AAE1C0;
    }
    goto L_08AAE1B4;
L_08AAE1B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    goto L_08AAE1C0;
L_08AAE1C0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
        goto L_08AAE1E0;
    }
    goto L_08AAE1D4;
L_08AAE1D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    goto L_08AAE1E0;
L_08AAE1E0:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_08AAE204;
    }
    goto L_08AAE204;
L_08AAE204:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.gpr[16] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_08AAE228;
    }
    goto L_08AAE228;
L_08AAE228:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08AAE250;
    }
    goto L_08AAE250;
L_08AAE250:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.gpr[18] = (0u | 99u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 99 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_08AAE274;
    }
    goto L_08AAE274;
L_08AAE274:
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AAE2DC;
      }
      goto L_08AAE280;
    }
L_08AAE280:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
      if (branch_taken) {
          goto L_08AAE2CC;
      }
      goto L_08AAE290;
    }
L_08AAE290:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[22]);
    goto L_08AAE2B0;
L_08AAE2B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[31] = (0x08AAE2BCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08AAE320;
L_08AAE2BC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4400));
      if (branch_taken) {
          goto L_08AAE2B0;
      }
      goto L_08AAE2CC;
    }
L_08AAE2CC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE280;
      }
      goto L_08AAE2DC;
    }
L_08AAE2DC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE320:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAE378;
      }
      goto L_08AAE370;
    }
L_08AAE370:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08AAE378;
L_08AAE378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AAE694;
      }
      goto L_08AAE38C;
    }
L_08AAE38C:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (49648u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26688));
    ctx.gpr[22] = (2277u << 16u);
    ctx.gpr[4] = (16880u << 16u);
    ctx.gpr[23] = (2278u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[22] + static_cast<std::uint32_t>(26672));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-30848));
    ctx.gpr[21] = (8u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    goto L_08AAE3D4;
L_08AAE3D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAE67C;
      }
      goto L_08AAE3E8;
    }
L_08AAE3E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AAE674;
      }
      goto L_08AAE400;
    }
L_08AAE400:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AAE41Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AAC630;
L_08AAE41C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AAE448;
      }
      goto L_08AAE42C;
    }
L_08AAE42C:
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08AAE448;
L_08AAE448:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAE46C;
      }
      goto L_08AAE454;
    }
L_08AAE454:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAE674;
      }
      goto L_08AAE45C;
    }
L_08AAE45C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AAE560;
      }
      goto L_08AAE464;
    }
L_08AAE464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE4C0;
      }
      goto L_08AAE46C;
    }
L_08AAE46C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAE5E0;
      }
      goto L_08AAE474;
    }
L_08AAE474:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE674;
      }
      goto L_08AAE47C;
    }
L_08AAE47C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7788)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE4B8;
      }
      goto L_08AAE48C;
    }
L_08AAE48C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6887)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AAE4AC;
      }
      goto L_08AAE49C;
    }
L_08AAE49C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7780)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE4B8;
      }
      goto L_08AAE4AC;
    }
L_08AAE4AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x08AAE4B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AAE4B8u) goto L_08AAE4B8;
    return;
L_08AAE4B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE674;
      }
      goto L_08AAE4C0;
    }
L_08AAE4C0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    ctx.gpr[4] = (ctx.gpr[7] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE51C;
      }
      goto L_08AAE4DC;
    }
L_08AAE4DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[7] ^ 6u);
      if (branch_taken) {
          goto L_08AAE51C;
      }
      goto L_08AAE4F8;
    }
L_08AAE4F8:
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (4u << 16u);
      if (branch_taken) {
          goto L_08AAE51C;
      }
      goto L_08AAE508;
    }
L_08AAE508:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE53C;
      }
      goto L_08AAE51C;
    }
L_08AAE51C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5740)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5740), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AAE558;
      }
      goto L_08AAE53C;
    }
L_08AAE53C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-5748)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-5748), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08AAE558;
L_08AAE558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE674;
      }
      goto L_08AAE560;
    }
L_08AAE560:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE58C;
      }
      goto L_08AAE578;
    }
L_08AAE578:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AAE58C;
L_08AAE58C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08AAE5AC;
      }
      goto L_08AAE59C;
    }
L_08AAE59C:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(54)));
        goto L_08AAE5B0;
    }
    goto L_08AAE5A4;
L_08AAE5A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE5D0;
      }
      goto L_08AAE5AC;
    }
L_08AAE5AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(54)));
    goto L_08AAE5B0;
L_08AAE5B0:
    ctx.gpr[5] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE5C8;
      }
      goto L_08AAE5BC;
    }
L_08AAE5BC:
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08AAE5D0;
      }
      goto L_08AAE5C8;
    }
L_08AAE5C8:
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    goto L_08AAE5D0;
L_08AAE5D0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE5E0;
      }
      goto L_08AAE5D8;
    }
L_08AAE5D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE674;
      }
      goto L_08AAE5E0;
    }
L_08AAE5E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[5] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(26672)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE66C;
      }
      goto L_08AAE60C;
    }
L_08AAE60C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE66C;
      }
      goto L_08AAE61C;
    }
L_08AAE61C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE66C;
      }
      goto L_08AAE638;
    }
L_08AAE638:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAE66C;
      }
      goto L_08AAE648;
    }
L_08AAE648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5744)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 149 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE66C;
      }
      goto L_08AAE658;
    }
L_08AAE658:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5744), ctx.gpr[4]);
    goto L_08AAE66C;
L_08AAE66C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE674;
      }
      goto L_08AAE674;
    }
L_08AAE674:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE3E8;
      }
      goto L_08AAE67C;
    }
L_08AAE67C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAE3D4;
      }
      goto L_08AAE694;
    }
L_08AAE694:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAE6CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAE724;
      }
      goto L_08AAE71C;
    }
L_08AAE71C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08AAE724;
L_08AAE724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AAEA60;
      }
      goto L_08AAE738;
    }
L_08AAE738:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (49648u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26688));
    ctx.gpr[22] = (2277u << 16u);
    ctx.gpr[4] = (16880u << 16u);
    ctx.gpr[23] = (2278u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[22] + static_cast<std::uint32_t>(26672));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-30848));
    ctx.gpr[21] = (8u << 16u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    goto L_08AAE780;
L_08AAE780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAEA48;
      }
      goto L_08AAE794;
    }
L_08AAE794:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AAEA40;
      }
      goto L_08AAE7AC;
    }
L_08AAE7AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AAE7C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AAC630;
L_08AAE7C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AAE7F4;
      }
      goto L_08AAE7D8;
    }
L_08AAE7D8:
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08AAE7F4;
L_08AAE7F4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAE818;
      }
      goto L_08AAE800;
    }
L_08AAE800:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AAEA40;
      }
      goto L_08AAE808;
    }
L_08AAE808:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AAE92C;
      }
      goto L_08AAE810;
    }
L_08AAE810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE88C;
      }
      goto L_08AAE818;
    }
L_08AAE818:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAE9AC;
      }
      goto L_08AAE820;
    }
L_08AAE820:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEA40;
      }
      goto L_08AAE828;
    }
L_08AAE828:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7788)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE884;
      }
      goto L_08AAE838;
    }
L_08AAE838:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x08AAE844u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08AAE844u) goto L_08AAE844;
    return;
L_08AAE844:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE884;
      }
      goto L_08AAE878;
    }
L_08AAE878:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6887), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AAE884;
L_08AAE884:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEA40;
      }
      goto L_08AAE88C;
    }
L_08AAE88C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    ctx.gpr[4] = (ctx.gpr[7] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE8E8;
      }
      goto L_08AAE8A8;
    }
L_08AAE8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[7] ^ 6u);
      if (branch_taken) {
          goto L_08AAE8E8;
      }
      goto L_08AAE8C4;
    }
L_08AAE8C4:
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (4u << 16u);
      if (branch_taken) {
          goto L_08AAE8E8;
      }
      goto L_08AAE8D4;
    }
L_08AAE8D4:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE908;
      }
      goto L_08AAE8E8;
    }
L_08AAE8E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5740)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-5740), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AAE924;
      }
      goto L_08AAE908;
    }
L_08AAE908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-5748)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-5748), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08AAE924;
L_08AAE924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEA40;
      }
      goto L_08AAE92C;
    }
L_08AAE92C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE958;
      }
      goto L_08AAE944;
    }
L_08AAE944:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AAE958;
L_08AAE958:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08AAE978;
      }
      goto L_08AAE968;
    }
L_08AAE968:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(54)));
        goto L_08AAE97C;
    }
    goto L_08AAE970;
L_08AAE970:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE99C;
      }
      goto L_08AAE978;
    }
L_08AAE978:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(54)));
    goto L_08AAE97C;
L_08AAE97C:
    ctx.gpr[5] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAE994;
      }
      goto L_08AAE988;
    }
L_08AAE988:
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08AAE99C;
      }
      goto L_08AAE994;
    }
L_08AAE994:
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    goto L_08AAE99C;
L_08AAE99C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE9AC;
      }
      goto L_08AAE9A4;
    }
L_08AAE9A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEA40;
      }
      goto L_08AAE9AC;
    }
L_08AAE9AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[5] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(26672)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAEA38;
      }
      goto L_08AAE9D8;
    }
L_08AAE9D8:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAEA38;
      }
      goto L_08AAE9E8;
    }
L_08AAE9E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAEA38;
      }
      goto L_08AAEA04;
    }
L_08AAEA04:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AAEA38;
      }
      goto L_08AAEA14;
    }
L_08AAEA14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-5744)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 149 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEA38;
      }
      goto L_08AAEA24;
    }
L_08AAEA24:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5744), ctx.gpr[4]);
    goto L_08AAEA38;
L_08AAEA38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEA40;
      }
      goto L_08AAEA40;
    }
L_08AAEA40:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAE794;
      }
      goto L_08AAEA48;
    }
L_08AAEA48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAE780;
      }
      goto L_08AAEA60;
    }
L_08AAEA60:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEA98:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26708)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26704)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26732)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26740));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(26712), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(26720), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(26716), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(26724), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(26728), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(26736), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEB38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(26976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_08AAEB60;
L_08AAEB60:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AAEB6Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08AAEB6Cu) goto L_08AAEB6C;
    return;
L_08AAEB6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AAEB7Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 555u, 0x0891713Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAEB7Cu) goto L_08AAEB7C;
    return;
L_08AAEB7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(5)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AAEB60;
      }
      goto L_08AAEB9C;
    }
L_08AAEB9C:
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
L_08AAEBB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEBF8;
      }
      goto L_08AAEBCC;
    }
L_08AAEBCC:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18260));
    ctx.gpr[31] = (0x08AAEBECu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 218u, 0x08A5932Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAEBECu) goto L_08AAEBEC;
    return;
L_08AAEBEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AAEBF8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08AAECB0;
L_08AAEBF8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEC04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAEC48u);
    ctx.gpr[6] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 220u, 0x08A5936Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAEC48u) goto L_08AAEC48;
    return;
L_08AAEC48:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AAEC68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18236));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 218u, 0x08A5932Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAEC68u) goto L_08AAEC68;
    return;
L_08AAEC68:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AAEC74u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 238u, 0x088B93ECu>(ctx, &aot_mem) && ctx.pc == 0x08AAEC74u) goto L_08AAEC74;
    return;
L_08AAEC74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEC94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AAECA4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08AAEC04;
L_08AAECA4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAECB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 286 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 288 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAECF0;
      }
      goto L_08AAECD8;
    }
L_08AAECD8:
    ctx.gpr[5] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AAED04;
      }
      goto L_08AAECE4;
    }
L_08AAECE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AAED14;
      }
      goto L_08AAECF0;
    }
L_08AAECF0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAED04;
      }
      goto L_08AAECF8;
    }
L_08AAECF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAED14;
      }
      goto L_08AAED04;
    }
L_08AAED04:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AAED10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AAED38;
L_08AAED10:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AAED14;
L_08AAED14:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AAED24u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AAEC94;
L_08AAED24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAED38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 257 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AAED70;
      }
      goto L_08AAED54;
    }
L_08AAED54:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[31] = (0x08AAED68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18216));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 218u, 0x08A5932Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAED68u) goto L_08AAED68;
    return;
L_08AAED68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAED84;
      }
      goto L_08AAED70;
    }
L_08AAED70:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26976));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1028)));
    goto L_08AAED84;
L_08AAED84:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAED90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (0u | 288u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AAEDCC;
      }
      goto L_08AAEDA4;
    }
L_08AAEDA4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AAEDB4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08AAED38;
L_08AAEDB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AAEDC4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08AAEC94;
L_08AAEDC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEDD8;
      }
      goto L_08AAEDCC;
    }
L_08AAEDCC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08AAEDD8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08AAEC94;
L_08AAEDD8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEDE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAEE30;
      }
      goto L_08AAEE0C;
    }
L_08AAEE0C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAEE44;
      }
      goto L_08AAEE30;
    }
L_08AAEE30:
    ctx.gpr[31] = (0x08AAEE38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAEE38u) goto L_08AAEE38;
    return;
L_08AAEE38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AAEE44;
L_08AAEE44:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3));
    ctx.gpr[31] = (0x08AAEE68u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-18212));
    goto L_08AAEBB8;
L_08AAEE68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAEE78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 288u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAEEE4;
      }
      goto L_08AAEEC8;
    }
L_08AAEEC8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAEEF0;
      }
      goto L_08AAEEE4;
    }
L_08AAEEE4:
    ctx.gpr[31] = (0x08AAEEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAEEECu) goto L_08AAEEEC;
    return;
L_08AAEEEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AAEEF0;
L_08AAEEF0:
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAEF54;
      }
      goto L_08AAEEFC;
    }
L_08AAEEFC:
    ctx.gpr[18] = (0u | 10u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AAEF04;
L_08AAEF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAEF38;
      }
      goto L_08AAEF1C;
    }
L_08AAEF1C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAEF44;
      }
      goto L_08AAEF38;
    }
L_08AAEF38:
    ctx.gpr[31] = (0x08AAEF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAEF40u) goto L_08AAEF40;
    return;
L_08AAEF40:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AAEF44;
L_08AAEF44:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAEF54;
      }
      goto L_08AAEF4C;
    }
L_08AAEF4C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AAEF04;
      }
      goto L_08AAEF54;
    }
L_08AAEF54:
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
L_08AAEF6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AAEFB0;
      }
      goto L_08AAEF9C;
    }
L_08AAEF9C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AAEFACu);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAEFACu) goto L_08AAEFAC;
    return;
L_08AAEFAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAEFB0;
L_08AAEFB0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[17] = (0u | 95u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08AAEFC0;
L_08AAEFC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(5));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAEFE4;
      }
      goto L_08AAEFD4;
    }
L_08AAEFD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AAEFE0u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAEFE0u) goto L_08AAEFE0;
    return;
L_08AAEFE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAEFE4;
L_08AAEFE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF030;
      }
      goto L_08AAF010;
    }
L_08AAF010:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF040;
      }
      goto L_08AAF030;
    }
L_08AAF030:
    ctx.gpr[31] = (0x08AAF038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAF038u) goto L_08AAF038;
    return;
L_08AAF038:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF040;
L_08AAF040:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAEFC0;
      }
      goto L_08AAF058;
    }
L_08AAF058:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AAEFC0;
      }
      goto L_08AAF060;
    }
L_08AAF060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
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
L_08AAF090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[8] + static_cast<std::uint32_t>(-24896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 46u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AAF0F4;
      }
      goto L_08AAF0E0;
    }
L_08AAF0E0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AAF0F0u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAF0F0u) goto L_08AAF0F0;
    return;
L_08AAF0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF0F4;
L_08AAF0F4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF10C;
      }
      goto L_08AAF0FC;
    }
L_08AAF0FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF10C;
L_08AAF10C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF1BC;
      }
      goto L_08AAF124;
    }
L_08AAF124:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(5));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAF148;
      }
      goto L_08AAF138;
    }
L_08AAF138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AAF144u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAF144u) goto L_08AAF144;
    return;
L_08AAF144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF148;
L_08AAF148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF194;
      }
      goto L_08AAF174;
    }
L_08AAF174:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF1A4;
      }
      goto L_08AAF194;
    }
L_08AAF194:
    ctx.gpr[31] = (0x08AAF19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAF19Cu) goto L_08AAF19C;
    return;
L_08AAF19C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF1A4;
L_08AAF1A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF124;
      }
      goto L_08AAF1BC;
    }
L_08AAF1BC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AAF2B4;
      }
      goto L_08AAF1C4;
    }
L_08AAF1C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF210;
      }
      goto L_08AAF1F0;
    }
L_08AAF1F0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF220;
      }
      goto L_08AAF210;
    }
L_08AAF210:
    ctx.gpr[31] = (0x08AAF218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAF218u) goto L_08AAF218;
    return;
L_08AAF218:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF220;
L_08AAF220:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AAF2B4;
      }
      goto L_08AAF228;
    }
L_08AAF228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF274;
      }
      goto L_08AAF254;
    }
L_08AAF254:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF284;
      }
      goto L_08AAF274;
    }
L_08AAF274:
    ctx.gpr[31] = (0x08AAF27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAF27Cu) goto L_08AAF27C;
    return;
L_08AAF27C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF284;
L_08AAF284:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 286u);
    ctx.gpr[31] = (0x08AAF2ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18192));
    goto L_08AAED90;
L_08AAF2AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AAF2B4;
L_08AAF2B4:
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF360;
      }
      goto L_08AAF2C8;
    }
L_08AAF2C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(5));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAF2EC;
      }
      goto L_08AAF2DC;
    }
L_08AAF2DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AAF2E8u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAF2E8u) goto L_08AAF2E8;
    return;
L_08AAF2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF2EC;
L_08AAF2EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF338;
      }
      goto L_08AAF318;
    }
L_08AAF318:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF348;
      }
      goto L_08AAF338;
    }
L_08AAF338:
    ctx.gpr[31] = (0x08AAF340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAF340u) goto L_08AAF340;
    return;
L_08AAF340:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF348;
L_08AAF348:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF2C8;
      }
      goto L_08AAF360;
    }
L_08AAF360:
    ctx.gpr[6] = (0u | 101u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 69u);
      if (branch_taken) {
          goto L_08AAF374;
      }
      goto L_08AAF36C;
    }
L_08AAF36C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AAF4F8;
      }
      goto L_08AAF374;
    }
L_08AAF374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF3C0;
      }
      goto L_08AAF3A0;
    }
L_08AAF3A0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF3D0;
      }
      goto L_08AAF3C0;
    }
L_08AAF3C0:
    ctx.gpr[31] = (0x08AAF3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAF3C8u) goto L_08AAF3C8;
    return;
L_08AAF3C8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF3D0;
L_08AAF3D0:
    ctx.gpr[6] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AAF3E8;
      }
      goto L_08AAF3DC;
    }
L_08AAF3DC:
    ctx.gpr[6] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AAF448;
      }
      goto L_08AAF3E8;
    }
L_08AAF3E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF434;
      }
      goto L_08AAF414;
    }
L_08AAF414:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF444;
      }
      goto L_08AAF434;
    }
L_08AAF434:
    ctx.gpr[31] = (0x08AAF43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAF43Cu) goto L_08AAF43C;
    return;
L_08AAF43C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF444;
L_08AAF444:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AAF448;
L_08AAF448:
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF4F8;
      }
      goto L_08AAF45C;
    }
L_08AAF45C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAF480;
      }
      goto L_08AAF470;
    }
L_08AAF470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AAF47Cu);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAF47Cu) goto L_08AAF47C;
    return;
L_08AAF47C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF480;
L_08AAF480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF4D0;
      }
      goto L_08AAF4B0;
    }
L_08AAF4B0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF4E0;
      }
      goto L_08AAF4D0;
    }
L_08AAF4D0:
    ctx.gpr[31] = (0x08AAF4D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAF4D8u) goto L_08AAF4D8;
    return;
L_08AAF4D8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF4E0;
L_08AAF4E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF45C;
      }
      goto L_08AAF4F8;
    }
L_08AAF4F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08AAF514u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 201u, 0x08A591E0u>(ctx, &aot_mem) && ctx.pc == 0x08AAF514u) goto L_08AAF514;
    return;
L_08AAF514:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF530;
      }
      goto L_08AAF51C;
    }
L_08AAF51C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 286u);
    ctx.gpr[31] = (0x08AAF530u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18136));
    goto L_08AAED90;
L_08AAF530:
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
L_08AAF554:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[23] = (0u | 91u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AAF5B8;
      }
      goto L_08AAF5A4;
    }
L_08AAF5A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08AAF5B4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAF5B4u) goto L_08AAF5B4;
    return;
L_08AAF5B4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF5B8;
L_08AAF5B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF610;
      }
      goto L_08AAF5F4;
    }
L_08AAF5F4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAF61C;
      }
      goto L_08AAF610;
    }
L_08AAF610:
    ctx.gpr[31] = (0x08AAF618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAF618u) goto L_08AAF618;
    return;
L_08AAF618:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AAF61C;
L_08AAF61C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAF62C;
      }
      goto L_08AAF624;
    }
L_08AAF624:
    ctx.gpr[31] = (0x08AAF62Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AAEDE4;
L_08AAF62C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18116));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-18092));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[21] = (0u | 93u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[18] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    goto L_08AAF654;
L_08AAF654:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AAF66C;
      }
      goto L_08AAF65C;
    }
L_08AAF65C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AAF668u);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAF668u) goto L_08AAF668;
    return;
L_08AAF668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF66C;
L_08AAF66C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[21];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAF7B0;
      }
      goto L_08AAF678;
    }
L_08AAF678:
    if (ctx.gpr[18] == ctx.gpr[23]) {
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
        goto L_08AAF6E0;
    }
    goto L_08AAF680;
L_08AAF680:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[22];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AAF8CC;
      }
      goto L_08AAF688;
    }
L_08AAF688:
    if (ctx.gpr[18] != ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
        goto L_08AAF900;
    }
    goto L_08AAF690;
L_08AAF690:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAF6B0;
      }
      goto L_08AAF6A8;
    }
L_08AAF6A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AAF6B4;
      }
      goto L_08AAF6B0;
    }
L_08AAF6B0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08AAF6B4;
L_08AAF6B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AAF6CCu);
    ctx.gpr[6] = (0u | 288u);
    goto L_08AAED90;
L_08AAF6CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AAF964;
      }
      goto L_08AAF6E0;
    }
L_08AAF6E0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF724;
      }
      goto L_08AAF704;
    }
L_08AAF704:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AAF734;
      }
      goto L_08AAF724;
    }
L_08AAF724:
    ctx.gpr[31] = (0x08AAF72Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAF72Cu) goto L_08AAF72C;
    return;
L_08AAF72C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF734;
L_08AAF734:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[23];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AAF7A0;
      }
      goto L_08AAF73C;
    }
L_08AAF73C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF78C;
      }
      goto L_08AAF76C;
    }
L_08AAF76C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AAF79C;
      }
      goto L_08AAF78C;
    }
L_08AAF78C:
    ctx.gpr[31] = (0x08AAF794u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAF794u) goto L_08AAF794;
    return;
L_08AAF794:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF79C;
L_08AAF79C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08AAF7A0;
L_08AAF7A0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAF964;
      }
      goto L_08AAF7B0;
    }
L_08AAF7B0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF7F8;
      }
      goto L_08AAF7D8;
    }
L_08AAF7D8:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08AAF808;
      }
      goto L_08AAF7F8;
    }
L_08AAF7F8:
    ctx.gpr[31] = (0x08AAF800u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAF800u) goto L_08AAF800;
    return;
L_08AAF800:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF808;
L_08AAF808:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[21];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AAF8BC;
      }
      goto L_08AAF810;
    }
L_08AAF810:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAF85C;
      }
      goto L_08AAF818;
    }
L_08AAF818:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF96C;
      }
      goto L_08AAF83C;
    }
L_08AAF83C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF97C;
      }
      goto L_08AAF85C;
    }
L_08AAF85C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF8A8;
      }
      goto L_08AAF888;
    }
L_08AAF888:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF8B8;
      }
      goto L_08AAF8A8;
    }
L_08AAF8A8:
    ctx.gpr[31] = (0x08AAF8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAF8B0u) goto L_08AAF8B0;
    return;
L_08AAF8B0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF8B8;
L_08AAF8B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AAF8BC;
L_08AAF8BC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAF964;
      }
      goto L_08AAF8CC;
    }
L_08AAF8CC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AAF8E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AAEDE4;
L_08AAF8E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AAF8F0;
      }
      goto L_08AAF8EC;
    }
L_08AAF8EC:
    ctx.gpr[17] = (0u | 0u);
    goto L_08AAF8F0;
L_08AAF8F0:
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[18] = (ctx.gpr[19] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAF964;
      }
      goto L_08AAF900;
    }
L_08AAF900:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAF948;
      }
      goto L_08AAF928;
    }
L_08AAF928:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AAF958;
      }
      goto L_08AAF948;
    }
L_08AAF948:
    ctx.gpr[31] = (0x08AAF950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAF950u) goto L_08AAF950;
    return;
L_08AAF950:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF958;
L_08AAF958:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[5] < ctx.gpr[18] ? 1u : 0u);
    goto L_08AAF964;
L_08AAF964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAF654;
      }
      goto L_08AAF96C;
    }
L_08AAF96C:
    ctx.gpr[31] = (0x08AAF974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAF974u) goto L_08AAF974;
    return;
L_08AAF974:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08AAF97C;
L_08AAF97C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AAF9B0;
      }
      goto L_08AAF990;
    }
L_08AAF990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[31] = (0x08AAF9ACu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 555u, 0x0891713Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAF9ACu) goto L_08AAF9AC;
    return;
L_08AAF9AC:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08AAF9B0;
L_08AAF9B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAF9E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AAFA3C;
      }
      goto L_08AAFA28;
    }
L_08AAFA28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x08AAFA38u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAFA38u) goto L_08AAFA38;
    return;
L_08AAFA38:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFA3C;
L_08AAFA3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFA84;
      }
      goto L_08AAFA64;
    }
L_08AAFA64:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFA94;
      }
      goto L_08AAFA84;
    }
L_08AAFA84:
    ctx.gpr[31] = (0x08AAFA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAFA8Cu) goto L_08AAFA8C;
    return;
L_08AAFA8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFA94;
L_08AAFA94:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 11u, 0x08AB009Cu>(ctx, &aot_mem); return;
      }
      goto L_08AAFAA4;
    }
L_08AAFAA4:
    ctx.gpr[21] = (ctx.gpr[6] + static_cast<std::uint32_t>(-24896));
    ctx.gpr[23] = (2227u << 16u);
    ctx.gpr[30] = (2227u << 16u);
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-18068));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-18048));
    goto L_08AAFAC0;
L_08AAFAC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(5));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFAE4;
      }
      goto L_08AAFAD4;
    }
L_08AAFAD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AAFAE0u);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 75u, 0x08875B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AAFAE0u) goto L_08AAFAE0;
    return;
L_08AAFAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08AAFAE4;
L_08AAFAE4:
    ctx.gpr[5] = (0u | 92u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AAFB5C;
      }
      goto L_08AAFAF0;
    }
L_08AAFAF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AAFB34;
      }
      goto L_08AAFB00;
    }
L_08AAFB00:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != ctx.gpr[7]) {
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[19]);
        (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 5u, 0x08AB003Cu>(ctx, &aot_mem); return;
    }
    goto L_08AAFB0C;
L_08AAFB0C:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AAFB28u);
    ctx.gpr[6] = (0u | 288u);
    goto L_08AAED90;
L_08AAFB28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 10u, 0x08AB0090u>(ctx, &aot_mem); return;
      }
      goto L_08AAFB34;
    }
L_08AAFB34:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AAFB50u);
    ctx.gpr[6] = (0u | 287u);
    goto L_08AAED90;
L_08AAFB50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 10u, 0x08AB0090u>(ctx, &aot_mem); return;
      }
      goto L_08AAFB5C;
    }
L_08AAFB5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFB90;
      }
      goto L_08AAFB74;
    }
L_08AAFB74:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFB9C;
      }
      goto L_08AAFB90;
    }
L_08AAFB90:
    ctx.gpr[31] = (0x08AAFB98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAFB98u) goto L_08AAFB98;
    return;
L_08AAFB98:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AAFB9C;
L_08AAFB9C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 97 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AAFBF0;
      }
      goto L_08AAFBA8;
    }
L_08AAFBA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AAFBC0;
      }
      goto L_08AAFBB0;
    }
L_08AAFBB0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFEE8;
      }
      goto L_08AAFBB8;
    }
L_08AAFBB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 4u, 0x08AB0034u>(ctx, &aot_mem); return;
      }
      goto L_08AAFBC0;
    }
L_08AAFBC0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AAFEE8;
      }
      goto L_08AAFBC8;
    }
L_08AAFBC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08AAFBE4u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_08AAEDE4;
L_08AAFBE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 4u, 0x08AB0034u>(ctx, &aot_mem); return;
      }
      goto L_08AAFBF0;
    }
L_08AAFBF0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 119 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-97));
      if (branch_taken) {
          goto L_08AAFEE8;
      }
      goto L_08AAFBFC;
    }
L_08AAFBFC:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-17984)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AAFC14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFC64;
      }
      goto L_08AAFC44;
    }
L_08AAFC44:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFC74;
      }
      goto L_08AAFC64;
    }
L_08AAFC64:
    ctx.gpr[31] = (0x08AAFC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAFC6Cu) goto L_08AAFC6C;
    return;
L_08AAFC6C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFC74;
L_08AAFC74:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 4u, 0x08AB0034u>(ctx, &aot_mem); return;
      }
      goto L_08AAFC7C;
    }
L_08AAFC7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFCCC;
      }
      goto L_08AAFCAC;
    }
L_08AAFCAC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFCDC;
      }
      goto L_08AAFCCC;
    }
L_08AAFCCC:
    ctx.gpr[31] = (0x08AAFCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAFCD4u) goto L_08AAFCD4;
    return;
L_08AAFCD4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFCDC;
L_08AAFCDC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 4u, 0x08AB0034u>(ctx, &aot_mem); return;
      }
      goto L_08AAFCE4;
    }
L_08AAFCE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFD34;
      }
      goto L_08AAFD14;
    }
L_08AAFD14:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFD44;
      }
      goto L_08AAFD34;
    }
L_08AAFD34:
    ctx.gpr[31] = (0x08AAFD3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAFD3Cu) goto L_08AAFD3C;
    return;
L_08AAFD3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFD44;
L_08AAFD44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 4u, 0x08AB0034u>(ctx, &aot_mem); return;
      }
      goto L_08AAFD4C;
    }
L_08AAFD4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFD98;
      }
      goto L_08AAFD78;
    }
L_08AAFD78:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFDA8;
      }
      goto L_08AAFD98;
    }
L_08AAFD98:
    ctx.gpr[31] = (0x08AAFDA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAFDA0u) goto L_08AAFDA0;
    return;
L_08AAFDA0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFDA8;
L_08AAFDA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 4u, 0x08AB0034u>(ctx, &aot_mem); return;
      }
      goto L_08AAFDB0;
    }
L_08AAFDB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFE00;
      }
      goto L_08AAFDE0;
    }
L_08AAFDE0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFE10;
      }
      goto L_08AAFE00;
    }
L_08AAFE00:
    ctx.gpr[31] = (0x08AAFE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAFE08u) goto L_08AAFE08;
    return;
L_08AAFE08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFE10;
L_08AAFE10:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 4u, 0x08AB0034u>(ctx, &aot_mem); return;
      }
      goto L_08AAFE18;
    }
L_08AAFE18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFE68;
      }
      goto L_08AAFE48;
    }
L_08AAFE48:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFE78;
      }
      goto L_08AAFE68;
    }
L_08AAFE68:
    ctx.gpr[31] = (0x08AAFE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAFE70u) goto L_08AAFE70;
    return;
L_08AAFE70:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFE78;
L_08AAFE78:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 4u, 0x08AB0034u>(ctx, &aot_mem); return;
      }
      goto L_08AAFE80;
    }
L_08AAFE80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFED0;
      }
      goto L_08AAFEB0;
    }
L_08AAFEB0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFEE0;
      }
      goto L_08AAFED0;
    }
L_08AAFED0:
    ctx.gpr[31] = (0x08AAFED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAFED8u) goto L_08AAFED8;
    return;
L_08AAFED8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFEE0;
L_08AAFEE0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 4u, 0x08AB0034u>(ctx, &aot_mem); return;
      }
      goto L_08AAFEE8;
    }
L_08AAFEE8:
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AAFF60;
      }
      goto L_08AAFEFC;
    }
L_08AAFEFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFF48;
      }
      goto L_08AAFF28;
    }
L_08AAFF28:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFF58;
      }
      goto L_08AAFF48;
    }
L_08AAFF48:
    ctx.gpr[31] = (0x08AAFF50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAFF50u) goto L_08AAFF50;
    return;
L_08AAFF50:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    goto L_08AAFF58;
L_08AAFF58:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 4u, 0x08AB0034u>(ctx, &aot_mem); return;
      }
      goto L_08AAFF60;
    }
L_08AAFF60:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_08AAFF68;
L_08AAFF68:
    ctx.gpr[5] = (ctx.gpr[17] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-48));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AAFFB0;
      }
      goto L_08AAFF94;
    }
L_08AAFF94:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AAFFBC;
      }
      goto L_08AAFFB0;
    }
L_08AAFFB0:
    ctx.gpr[31] = (0x08AAFFB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 49u, 0x08875960u>(ctx, &aot_mem) && ctx.pc == 0x08AAFFB8u) goto L_08AAFFB8;
    return;
L_08AAFFB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AAFFBC;
L_08AAFFBC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFFE8;
      }
      goto L_08AAFFD0;
    }
L_08AAFFD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AAFF68;
      }
      goto L_08AAFFE8;
    }
L_08AAFFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 3u, 0x08AB0020u>(ctx, &aot_mem); return;
      }
      goto L_08AAFFF8;
    }
L_08AAFFF8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.pc = 0x08AB0000u; return;
}

void recomp_unit_0170(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0170_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_170(Runtime &runtime) {
    runtime.register_generated_unit(170u, 0x08AAC000u, 16384u, &recomp_unit_0170, &recomp_unit_0170_entry);
    runtime.register_function(0x08AAC000u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC0D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC1FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC270u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC278u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC280u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC29Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC2FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC308u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC31Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC324u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC338u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC358u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC360u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC378u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC384u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC398u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC3FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC414u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC420u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC434u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC440u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC454u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC45Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC470u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC490u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC498u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC4FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC520u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC544u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC56Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC590u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC59Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC5F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC630u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC668u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC67Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC68Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC6F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC70Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC720u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC728u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC738u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC740u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC744u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC754u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC760u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC77Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC784u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC78Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC79Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC7E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC800u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC808u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC814u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC824u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC838u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC850u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC858u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC860u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC878u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC880u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC88Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC89Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC8FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC90Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC928u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC930u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC94Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC950u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC964u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC974u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC978u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC980u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC994u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAC9F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACA9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACABCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACACCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACADCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACAFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACB74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBDCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACBFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC88u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACC9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACCE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACD70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACDFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE2Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACE90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEDCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACEFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACF98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFD0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFDCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AACFFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD000u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD00Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD020u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD028u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD030u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD038u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD040u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD050u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD060u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD068u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD074u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD088u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD098u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD0F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD104u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD110u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD118u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD134u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD13Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD144u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD158u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD164u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD174u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD184u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD18Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD198u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD1F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD200u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD214u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD21Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD224u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD22Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD234u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD23Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD244u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD250u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD260u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD268u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD270u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD278u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD294u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD29Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD2C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD33Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD344u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD358u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD364u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD374u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD378u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD388u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD3ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD410u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD418u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD420u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD438u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD43Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD454u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD460u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD484u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD48Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD4ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD500u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD514u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD518u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD528u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD53Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD540u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD550u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD574u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD584u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD58Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD598u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD5F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD600u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD608u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD60Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD61Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD620u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD658u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD664u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD674u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD684u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD68Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD69Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD6ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD71Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD730u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD738u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD74Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD758u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD764u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD768u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD788u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD790u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD7F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD800u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD808u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD80Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD81Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD824u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD840u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD848u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD860u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD86Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD890u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD8E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD900u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD908u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD914u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD924u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD930u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD938u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD948u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD98Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAD9E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADA98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADAF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADB84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADBACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADC28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADCA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADD78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADDF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADE7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADEECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADEF4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADF8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFCCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AADFF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE00Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE014u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE024u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE044u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE04Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE064u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE070u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE084u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE090u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0E4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE0FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE108u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE11Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE128u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE13Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE144u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE154u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE174u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE17Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE194u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE1E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE204u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE228u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE250u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE274u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE280u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE290u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE2B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE2BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE2CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE2DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE320u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE370u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE378u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE38Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE3E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE400u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE41Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE42Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE448u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE454u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE45Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE464u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE46Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE474u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE47Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE48Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE49Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE4F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE508u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE51Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE53Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE558u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE560u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE578u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE58Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE59Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE5E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE60Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE61Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE638u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE648u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE658u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE66Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE674u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE67Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE694u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE6CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE71Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE724u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE738u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE780u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE794u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE7F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE800u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE808u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE810u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE818u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE820u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE828u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE838u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE844u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE878u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE884u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE88Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8D4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE8E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE908u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE924u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE92Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE944u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE958u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE968u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE970u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE978u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE97Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE988u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE994u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE99Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAE9E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEA98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEB9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBCCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEBF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEC94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAECF8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED24u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAED90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDB4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDC4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDCCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDD8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEDE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE30u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEE78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEEFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF04u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF1Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF40u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF54u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEF9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAEFE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF010u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF030u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF038u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF040u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF058u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF060u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF090u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF0FCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF10Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF124u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF138u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF144u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF148u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF174u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF194u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF19Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1C4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF1F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF210u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF218u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF220u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF228u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF254u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF274u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF27Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF284u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF2ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF318u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF338u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF340u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF348u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF360u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF36Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF374u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3C0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3C8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3DCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF3E8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF414u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF434u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF43Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF444u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF448u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF45Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF470u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF47Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF480u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4D0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF4F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF514u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF51Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF530u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF554u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5A4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF5F4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF610u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF618u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF61Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF624u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF62Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF654u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF65Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF668u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF66Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF678u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF680u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF688u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF690u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6B4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF6E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF704u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF724u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF72Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF734u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF73Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF76Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF78Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF794u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF79Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7A0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7D8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF7F8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF800u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF808u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF810u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF818u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF83Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF85Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF888u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8A8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8B8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8BCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8CCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8ECu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF8F0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF900u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF928u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF948u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF950u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF958u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF964u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF96Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF974u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF97Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF990u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9ACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9B0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAF9E0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA38u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA84u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA8Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFA94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAA4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFAF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB0Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB5Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB90u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFB9Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBC0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBC8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBF0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFBFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC64u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC6Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC74u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFC7Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCACu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCCCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCD4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCDCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFCE4u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD14u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD34u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD3Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD44u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD4Cu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFD98u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDA0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDA8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFDE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE00u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE08u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE10u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE18u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE70u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE78u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFE80u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFED0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFED8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEE0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFEFCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF28u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF48u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF50u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF58u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF60u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF68u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFF94u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFB0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFB8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFBCu, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFD0u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFE8u, &recomp_unit_0170, "recomp_unit_0170");
    runtime.register_function(0x08AAFFF8u, &recomp_unit_0170, "recomp_unit_0170");
}
} // namespace psprecomp
