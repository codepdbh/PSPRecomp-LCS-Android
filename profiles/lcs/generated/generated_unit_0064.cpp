#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0064[4045] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 6, 0,
    0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 11, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0,
    27, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 31, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 37, 0,
    38, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 43, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0,
    0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0,
    0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0,
    0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 0,
    0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79,
    80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 85, 0, 86, 0, 87, 0, 0, 88, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 94, 0,
    0, 0, 95, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0,
    110, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 127, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 130, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 134, 0, 0, 135, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0,
    143, 0, 0, 144, 0, 145, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0,
    0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0,
    0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0,
    0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 189, 0, 0,
    0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 0, 198,
    199, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 230,
    0, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250,
    0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0,
    257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 0, 262, 0, 263, 0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 275,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 0, 282,
    0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 294,
    0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 301, 0, 0, 0, 302, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 308,
    0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313, 0, 314, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0,
    0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0,
    0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0,
    0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348,
    0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 359, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0,
    0, 0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0,
    0, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0,
    384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0,
    392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 400,
    0, 0, 401, 402, 0, 0, 403, 0, 404, 0, 405, 0, 406, 0, 0, 407, 0, 408, 0, 409, 0, 410, 0, 411, 0, 0, 412, 0, 413, 0, 0, 414,
    0, 415, 0, 416, 0, 417, 0, 418, 0, 0, 419, 0, 0, 420, 421, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0,
    0, 0, 426, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 432, 0, 0,
    433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 436, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 439, 0,
    440, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 0, 448, 0,
    0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 460, 0, 461, 462, 0, 0, 0, 463, 0, 0,
    0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 474, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0,
    0, 479, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0,
    0, 487, 0, 488, 0, 489, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 505, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 515, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 534, 0, 535, 0,
    0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 553, 0,
    0, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0,
    0, 562, 563, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 568, 0, 569, 0,
    0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575,
    576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 579, 0, 0,
    580, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 585, 0, 586, 0, 587, 0,
    0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 590, 0, 0, 591, 0, 0, 592, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0,
    602, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 607, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 613, 614, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0,
    623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 627, 628, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 631, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 635,
    0, 636, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 643, 0, 644, 0,
    0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 648, 0, 0, 0, 649, 650, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 653,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0,
    0, 658, 0, 0, 659, 0, 0, 0, 660, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0,
    665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0,
    0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 673, 0, 674, 0, 675, 0, 676, 0, 0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 681, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0,
    686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 0, 692, 0,
    0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 695, 0, 0, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0,
    699, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 709,
    710, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 714,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 717, 0, 718, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 727, 0, 728, 0, 0, 0, 0, 729,
    0, 0, 730, 0, 0, 0, 731, 0, 0, 732, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 735, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 738, 0, 739, 0, 740, 0, 741, 0, 742, 0, 0, 0,
    743, 0, 0, 0, 744, 745, 0, 746, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752,
};
void recomp_unit_0064_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08904004u;
        entry_id = (entry_delta < 16180u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0064[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08904004;
    case 2u: goto L_08904034;
    case 3u: goto L_08904040;
    case 4u: goto L_08904070;
    case 5u: goto L_08904074;
    case 6u: goto L_0890407C;
    case 7u: goto L_08904088;
    case 8u: goto L_089040A0;
    case 9u: goto L_089040D4;
    case 10u: goto L_089040E0;
    case 11u: goto L_08904114;
    case 12u: goto L_08904118;
    case 13u: goto L_08904134;
    case 14u: goto L_0890414C;
    case 15u: goto L_08904154;
    case 16u: goto L_0890419C;
    case 17u: goto L_089041C8;
    case 18u: goto L_089041D0;
    case 19u: goto L_089041D8;
    case 20u: goto L_08904218;
    case 21u: goto L_0890422C;
    case 22u: goto L_08904240;
    case 23u: goto L_0890424C;
    case 24u: goto L_08904254;
    case 25u: goto L_08904274;
    case 26u: goto L_0890427C;
    case 27u: goto L_08904284;
    case 28u: goto L_0890428C;
    case 29u: goto L_0890429C;
    case 30u: goto L_089042AC;
    case 31u: goto L_089042B0;
    case 32u: goto L_089042B8;
    case 33u: goto L_089042C4;
    case 34u: goto L_089042D0;
    case 35u: goto L_089042DC;
    case 36u: goto L_089042E8;
    case 37u: goto L_089042FC;
    case 38u: goto L_08904304;
    case 39u: goto L_0890430C;
    case 40u: goto L_08904314;
    case 41u: goto L_08904324;
    case 42u: goto L_08904334;
    case 43u: goto L_08904338;
    case 44u: goto L_08904340;
    case 45u: goto L_0890434C;
    case 46u: goto L_08904358;
    case 47u: goto L_0890436C;
    case 48u: goto L_08904388;
    case 49u: goto L_08904398;
    case 50u: goto L_089043B4;
    case 51u: goto L_089043C0;
    case 52u: goto L_089043E8;
    case 53u: goto L_089043F4;
    case 54u: goto L_08904410;
    case 55u: goto L_08904420;
    case 56u: goto L_0890443C;
    case 57u: goto L_08904448;
    case 58u: goto L_08904450;
    case 59u: goto L_08904460;
    case 60u: goto L_08904468;
    case 61u: goto L_0890447C;
    case 62u: goto L_08904488;
    case 63u: goto L_08904498;
    case 64u: goto L_089044B0;
    case 65u: goto L_089044E4;
    case 66u: goto L_089044F0;
    case 67u: goto L_08904524;
    case 68u: goto L_08904530;
    case 69u: goto L_0890453C;
    case 70u: goto L_08904568;
    case 71u: goto L_0890459C;
    case 72u: goto L_089045A8;
    case 73u: goto L_089045DC;
    case 74u: goto L_089045E8;
    case 75u: goto L_089045F4;
    case 76u: goto L_0890460C;
    case 77u: goto L_08904640;
    case 78u: goto L_0890464C;
    case 79u: goto L_08904680;
    case 80u: goto L_08904684;
    case 81u: goto L_089046A0;
    case 82u: goto L_089046B8;
    case 83u: goto L_089046C0;
    case 84u: goto L_0890470C;
    case 85u: goto L_08904718;
    case 86u: goto L_08904720;
    case 87u: goto L_08904728;
    case 88u: goto L_08904734;
    case 89u: goto L_08904738;
    case 90u: goto L_08904740;
    case 91u: goto L_08904754;
    case 92u: goto L_08904760;
    case 93u: goto L_0890476C;
    case 94u: goto L_0890477C;
    case 95u: goto L_0890478C;
    case 96u: goto L_08904798;
    case 97u: goto L_089047A0;
    case 98u: goto L_089047BC;
    case 99u: goto L_08904804;
    case 100u: goto L_0890480C;
    case 101u: goto L_0890481C;
    case 102u: goto L_08904824;
    case 103u: goto L_08904830;
    case 104u: goto L_08904840;
    case 105u: goto L_08904854;
    case 106u: goto L_08904884;
    case 107u: goto L_0890488C;
    case 108u: goto L_089048E8;
    case 109u: goto L_089048F4;
    case 110u: goto L_08904904;
    case 111u: goto L_0890490C;
    case 112u: goto L_08904924;
    case 113u: goto L_08904938;
    case 114u: goto L_08904948;
    case 115u: goto L_08904958;
    case 116u: goto L_08904988;
    case 117u: goto L_0890499C;
    case 118u: goto L_089049BC;
    case 119u: goto L_089049CC;
    case 120u: goto L_089049D4;
    case 121u: goto L_08904A04;
    case 122u: goto L_08904A10;
    case 123u: goto L_08904A30;
    case 124u: goto L_08904A50;
    case 125u: goto L_08904A60;
    case 126u: goto L_08904A6C;
    case 127u: goto L_08904A74;
    case 128u: goto L_08904AA4;
    case 129u: goto L_08904AB0;
    case 130u: goto L_08904AB4;
    case 131u: goto L_08904ABC;
    case 132u: goto L_08904AC8;
    case 133u: goto L_08904AD4;
    case 134u: goto L_08904B0C;
    case 135u: goto L_08904B18;
    case 136u: goto L_08904B20;
    case 137u: goto L_08904B30;
    case 138u: goto L_08904B38;
    case 139u: goto L_08904B44;
    case 140u: goto L_08904B58;
    case 141u: goto L_08904B64;
    case 142u: goto L_08904B70;
    case 143u: goto L_08904B84;
    case 144u: goto L_08904B90;
    case 145u: goto L_08904B98;
    case 146u: goto L_08904BAC;
    case 147u: goto L_08904BB8;
    case 148u: goto L_08904BCC;
    case 149u: goto L_08904BD8;
    case 150u: goto L_08904BEC;
    case 151u: goto L_08904BFC;
    case 152u: goto L_08904C10;
    case 153u: goto L_08904C24;
    case 154u: goto L_08904C30;
    case 155u: goto L_08904C38;
    case 156u: goto L_08904C40;
    case 157u: goto L_08904C48;
    case 158u: goto L_08904C74;
    case 159u: goto L_08904CAC;
    case 160u: goto L_08904CBC;
    case 161u: goto L_08904CC8;
    case 162u: goto L_08904CD0;
    case 163u: goto L_08904CEC;
    case 164u: goto L_08904CFC;
    case 165u: goto L_08904D08;
    case 166u: goto L_08904D10;
    case 167u: goto L_08904D1C;
    case 168u: goto L_08904D34;
    case 169u: goto L_08904D44;
    case 170u: goto L_08904D50;
    case 171u: goto L_08904D58;
    case 172u: goto L_08904D64;
    case 173u: goto L_08904D7C;
    case 174u: goto L_08904D8C;
    case 175u: goto L_08904D98;
    case 176u: goto L_08904DB4;
    case 177u: goto L_08904DBC;
    case 178u: goto L_08904DC8;
    case 179u: goto L_08904DD0;
    case 180u: goto L_08904DD8;
    case 181u: goto L_08904E04;
    case 182u: goto L_08904E20;
    case 183u: goto L_08904E30;
    case 184u: goto L_08904E38;
    case 185u: goto L_08904E4C;
    case 186u: goto L_08904E5C;
    case 187u: goto L_08904E64;
    case 188u: goto L_08904E6C;
    case 189u: goto L_08904E78;
    case 190u: goto L_08904E88;
    case 191u: goto L_08904E98;
    case 192u: goto L_08904EA8;
    case 193u: goto L_08904EC0;
    case 194u: goto L_08904ECC;
    case 195u: goto L_08904ED8;
    case 196u: goto L_08904EE8;
    case 197u: goto L_08904EF4;
    case 198u: goto L_08904F00;
    case 199u: goto L_08904F04;
    case 200u: goto L_08904F10;
    case 201u: goto L_08904F18;
    case 202u: goto L_08904F40;
    case 203u: goto L_08904F50;
    case 204u: goto L_08904F58;
    case 205u: goto L_08904F70;
    case 206u: goto L_08904F78;
    case 207u: goto L_08904FA0;
    case 208u: goto L_08904FB0;
    case 209u: goto L_08904FB8;
    case 210u: goto L_08904FD4;
    case 211u: goto L_08904FDC;
    case 212u: goto L_08904FF8;
    case 213u: goto L_08905004;
    case 214u: goto L_08905030;
    case 215u: goto L_08905038;
    case 216u: goto L_08905060;
    case 217u: goto L_0890506C;
    case 218u: goto L_08905078;
    case 219u: goto L_08905094;
    case 220u: goto L_0890509C;
    case 221u: goto L_089050A4;
    case 222u: goto L_089050AC;
    case 223u: goto L_089050B4;
    case 224u: goto L_089050BC;
    case 225u: goto L_089050C4;
    case 226u: goto L_089050D0;
    case 227u: goto L_089050DC;
    case 228u: goto L_089050E8;
    case 229u: goto L_089050F4;
    case 230u: goto L_08905100;
    case 231u: goto L_0890510C;
    case 232u: goto L_08905114;
    case 233u: goto L_08905124;
    case 234u: goto L_08905134;
    case 235u: goto L_08905144;
    case 236u: goto L_08905154;
    case 237u: goto L_08905164;
    case 238u: goto L_08905174;
    case 239u: goto L_0890519C;
    case 240u: goto L_089051A4;
    case 241u: goto L_089051D4;
    case 242u: goto L_089051E0;
    case 243u: goto L_089051F4;
    case 244u: goto L_0890521C;
    case 245u: goto L_08905224;
    case 246u: goto L_08905234;
    case 247u: goto L_08905244;
    case 248u: goto L_08905254;
    case 249u: goto L_08905268;
    case 250u: goto L_08905280;
    case 251u: goto L_0890528C;
    case 252u: goto L_0890529C;
    case 253u: goto L_089052CC;
    case 254u: goto L_089052D8;
    case 255u: goto L_089052E0;
    case 256u: goto L_089052FC;
    case 257u: goto L_08905304;
    case 258u: goto L_0890530C;
    case 259u: goto L_08905314;
    case 260u: goto L_0890531C;
    case 261u: goto L_08905324;
    case 262u: goto L_08905330;
    case 263u: goto L_08905338;
    case 264u: goto L_08905344;
    case 265u: goto L_0890534C;
    case 266u: goto L_08905358;
    case 267u: goto L_08905364;
    case 268u: goto L_0890536C;
    case 269u: goto L_08905384;
    case 270u: goto L_089053A0;
    case 271u: goto L_089053AC;
    case 272u: goto L_089053BC;
    case 273u: goto L_089053DC;
    case 274u: goto L_089053EC;
    case 275u: goto L_08905400;
    case 276u: goto L_08905430;
    case 277u: goto L_08905440;
    case 278u: goto L_08905448;
    case 279u: goto L_0890545C;
    case 280u: goto L_08905468;
    case 281u: goto L_08905474;
    case 282u: goto L_08905480;
    case 283u: goto L_08905494;
    case 284u: goto L_089054A4;
    case 285u: goto L_089054B4;
    case 286u: goto L_089054C0;
    case 287u: goto L_089054CC;
    case 288u: goto L_089054E4;
    case 289u: goto L_08905510;
    case 290u: goto L_0890554C;
    case 291u: goto L_08905554;
    case 292u: goto L_0890555C;
    case 293u: goto L_08905568;
    case 294u: goto L_08905580;
    case 295u: goto L_08905590;
    case 296u: goto L_08905598;
    case 297u: goto L_089055AC;
    case 298u: goto L_089055BC;
    case 299u: goto L_089055D0;
    case 300u: goto L_089055D8;
    case 301u: goto L_089055E8;
    case 302u: goto L_089055F8;
    case 303u: goto L_08905634;
    case 304u: goto L_08905640;
    case 305u: goto L_08905650;
    case 306u: goto L_08905660;
    case 307u: goto L_0890566C;
    case 308u: goto L_08905680;
    case 309u: goto L_08905688;
    case 310u: goto L_08905694;
    case 311u: goto L_089056AC;
    case 312u: goto L_089056B4;
    case 313u: goto L_089056BC;
    case 314u: goto L_089056C4;
    case 315u: goto L_089056C8;
    case 316u: goto L_089056D0;
    case 317u: goto L_089056E4;
    case 318u: goto L_08905728;
    case 319u: goto L_08905730;
    case 320u: goto L_0890573C;
    case 321u: goto L_0890574C;
    case 322u: goto L_0890577C;
    case 323u: goto L_08905788;
    case 324u: goto L_089057B8;
    case 325u: goto L_089057C8;
    case 326u: goto L_089057D4;
    case 327u: goto L_089057DC;
    case 328u: goto L_089057F4;
    case 329u: goto L_08905808;
    case 330u: goto L_08905814;
    case 331u: goto L_08905820;
    case 332u: goto L_08905830;
    case 333u: goto L_0890583C;
    case 334u: goto L_0890584C;
    case 335u: goto L_08905854;
    case 336u: goto L_0890586C;
    case 337u: goto L_089058AC;
    case 338u: goto L_089058C0;
    case 339u: goto L_089058C8;
    case 340u: goto L_089058FC;
    case 341u: goto L_0890590C;
    case 342u: goto L_08905920;
    case 343u: goto L_08905930;
    case 344u: goto L_08905940;
    case 345u: goto L_08905950;
    case 346u: goto L_08905960;
    case 347u: goto L_08905970;
    case 348u: goto L_08905980;
    case 349u: goto L_08905990;
    case 350u: goto L_089059A0;
    case 351u: goto L_089059B0;
    case 352u: goto L_089059BC;
    case 353u: goto L_089059C8;
    case 354u: goto L_08905A3C;
    case 355u: goto L_08905A70;
    case 356u: goto L_08905A9C;
    case 357u: goto L_08905ACC;
    case 358u: goto L_08905AD8;
    case 359u: goto L_08905B0C;
    case 360u: goto L_08905B18;
    case 361u: goto L_08905B20;
    case 362u: goto L_08905B4C;
    case 363u: goto L_08905B58;
    case 364u: goto L_08905B5C;
    case 365u: goto L_08905B88;
    case 366u: goto L_08905BC8;
    case 367u: goto L_08905BF4;
    case 368u: goto L_08905C0C;
    case 369u: goto L_08905C1C;
    case 370u: goto L_08905C28;
    case 371u: goto L_08905C38;
    case 372u: goto L_08905C40;
    case 373u: goto L_08905C48;
    case 374u: goto L_08905C64;
    case 375u: goto L_08905C70;
    case 376u: goto L_08905C8C;
    case 377u: goto L_08905C94;
    case 378u: goto L_08905CA4;
    case 379u: goto L_08905CB4;
    case 380u: goto L_08905CC4;
    case 381u: goto L_08905CD4;
    case 382u: goto L_08905CE4;
    case 383u: goto L_08905CF4;
    case 384u: goto L_08905D04;
    case 385u: goto L_08905D14;
    case 386u: goto L_08905D24;
    case 387u: goto L_08905D34;
    case 388u: goto L_08905D44;
    case 389u: goto L_08905D54;
    case 390u: goto L_08905D64;
    case 391u: goto L_08905D74;
    case 392u: goto L_08905D84;
    case 393u: goto L_08905D94;
    case 394u: goto L_08905DA4;
    case 395u: goto L_08905DB4;
    case 396u: goto L_08905DC4;
    case 397u: goto L_08905DD4;
    case 398u: goto L_08905DE4;
    case 399u: goto L_08905DF4;
    case 400u: goto L_08905E00;
    case 401u: goto L_08905E0C;
    case 402u: goto L_08905E10;
    case 403u: goto L_08905E1C;
    case 404u: goto L_08905E24;
    case 405u: goto L_08905E2C;
    case 406u: goto L_08905E34;
    case 407u: goto L_08905E40;
    case 408u: goto L_08905E48;
    case 409u: goto L_08905E50;
    case 410u: goto L_08905E58;
    case 411u: goto L_08905E60;
    case 412u: goto L_08905E6C;
    case 413u: goto L_08905E74;
    case 414u: goto L_08905E80;
    case 415u: goto L_08905E88;
    case 416u: goto L_08905E90;
    case 417u: goto L_08905E98;
    case 418u: goto L_08905EA0;
    case 419u: goto L_08905EAC;
    case 420u: goto L_08905EB8;
    case 421u: goto L_08905EBC;
    case 422u: goto L_08905EC8;
    case 423u: goto L_08905ED8;
    case 424u: goto L_08905EEC;
    case 425u: goto L_08905EFC;
    case 426u: goto L_08905F0C;
    case 427u: goto L_08905F14;
    case 428u: goto L_08905F28;
    case 429u: goto L_08905F38;
    case 430u: goto L_08905F68;
    case 431u: goto L_08905F70;
    case 432u: goto L_08905F78;
    case 433u: goto L_08905F84;
    case 434u: goto L_08905F98;
    case 435u: goto L_08905FC8;
    case 436u: goto L_08905FCC;
    case 437u: goto L_08905FE0;
    case 438u: goto L_08905FF0;
    case 439u: goto L_08905FFC;
    case 440u: goto L_08906004;
    case 441u: goto L_0890600C;
    case 442u: goto L_08906020;
    case 443u: goto L_08906050;
    case 444u: goto L_08906058;
    case 445u: goto L_08906060;
    case 446u: goto L_08906068;
    case 447u: goto L_08906070;
    case 448u: goto L_0890607C;
    case 449u: goto L_0890608C;
    case 450u: goto L_0890609C;
    case 451u: goto L_089060B4;
    case 452u: goto L_089060BC;
    case 453u: goto L_089060CC;
    case 454u: goto L_08906110;
    case 455u: goto L_08906124;
    case 456u: goto L_08906168;
    case 457u: goto L_08906178;
    case 458u: goto L_089061A4;
    case 459u: goto L_089061D8;
    case 460u: goto L_089061DC;
    case 461u: goto L_089061E4;
    case 462u: goto L_089061E8;
    case 463u: goto L_089061F8;
    case 464u: goto L_08906208;
    case 465u: goto L_08906238;
    case 466u: goto L_08906240;
    case 467u: goto L_08906254;
    case 468u: goto L_08906284;
    case 469u: goto L_089062B4;
    case 470u: goto L_089062BC;
    case 471u: goto L_089062D0;
    case 472u: goto L_08906300;
    case 473u: goto L_08906330;
    case 474u: goto L_08906334;
    case 475u: goto L_08906348;
    case 476u: goto L_08906358;
    case 477u: goto L_08906368;
    case 478u: goto L_08906378;
    case 479u: goto L_08906388;
    case 480u: goto L_08906398;
    case 481u: goto L_089063A8;
    case 482u: goto L_089063B8;
    case 483u: goto L_089063C8;
    case 484u: goto L_089063D8;
    case 485u: goto L_089063E8;
    case 486u: goto L_089063F8;
    case 487u: goto L_08906408;
    case 488u: goto L_08906410;
    case 489u: goto L_08906418;
    case 490u: goto L_08906420;
    case 491u: goto L_08906434;
    case 492u: goto L_08906444;
    case 493u: goto L_08906474;
    case 494u: goto L_089064A4;
    case 495u: goto L_089064D4;
    case 496u: goto L_08906504;
    case 497u: goto L_08906534;
    case 498u: goto L_0890653C;
    case 499u: goto L_0890656C;
    case 500u: goto L_0890659C;
    case 501u: goto L_089065CC;
    case 502u: goto L_089065FC;
    case 503u: goto L_0890662C;
    case 504u: goto L_0890665C;
    case 505u: goto L_0890668C;
    case 506u: goto L_08906690;
    case 507u: goto L_08906698;
    case 508u: goto L_089066A0;
    case 509u: goto L_089066A8;
    case 510u: goto L_089066B0;
    case 511u: goto L_089066C4;
    case 512u: goto L_089066F8;
    case 513u: goto L_08906728;
    case 514u: goto L_08906730;
    case 515u: goto L_08906738;
    case 516u: goto L_0890673C;
    case 517u: goto L_0890676C;
    case 518u: goto L_0890679C;
    case 519u: goto L_089067CC;
    case 520u: goto L_089067FC;
    case 521u: goto L_0890682C;
    case 522u: goto L_0890685C;
    case 523u: goto L_0890688C;
    case 524u: goto L_089068BC;
    case 525u: goto L_089068EC;
    case 526u: goto L_0890691C;
    case 527u: goto L_0890694C;
    case 528u: goto L_0890697C;
    case 529u: goto L_089069AC;
    case 530u: goto L_089069DC;
    case 531u: goto L_08906A0C;
    case 532u: goto L_08906A3C;
    case 533u: goto L_08906A6C;
    case 534u: goto L_08906A74;
    case 535u: goto L_08906A7C;
    case 536u: goto L_08906A88;
    case 537u: goto L_08906AB8;
    case 538u: goto L_08906AE8;
    case 539u: goto L_08906B18;
    case 540u: goto L_08906B48;
    case 541u: goto L_08906B78;
    case 542u: goto L_08906BA8;
    case 543u: goto L_08906BD8;
    case 544u: goto L_08906C08;
    case 545u: goto L_08906C38;
    case 546u: goto L_08906C68;
    case 547u: goto L_08906C98;
    case 548u: goto L_08906CC4;
    case 549u: goto L_08906CEC;
    case 550u: goto L_08906D30;
    case 551u: goto L_08906D64;
    case 552u: goto L_08906D6C;
    case 553u: goto L_08906D7C;
    case 554u: goto L_08906D8C;
    case 555u: goto L_08906DA8;
    case 556u: goto L_08906DC8;
    case 557u: goto L_08906DD4;
    case 558u: goto L_08906DE0;
    case 559u: goto L_08906E14;
    case 560u: goto L_08906E40;
    case 561u: goto L_08906E7C;
    case 562u: goto L_08906E88;
    case 563u: goto L_08906E8C;
    case 564u: goto L_08906E94;
    case 565u: goto L_08906EA8;
    case 566u: goto L_08906ED8;
    case 567u: goto L_08906EE0;
    case 568u: goto L_08906EF4;
    case 569u: goto L_08906EFC;
    case 570u: goto L_08906F10;
    case 571u: goto L_08906F20;
    case 572u: goto L_08906F30;
    case 573u: goto L_08906F38;
    case 574u: goto L_08906F70;
    case 575u: goto L_08906F80;
    case 576u: goto L_08906F84;
    case 577u: goto L_08906FC0;
    case 578u: goto L_08906FF4;
    case 579u: goto L_08906FF8;
    case 580u: goto L_08907004;
    case 581u: goto L_08907018;
    case 582u: goto L_08907034;
    case 583u: goto L_0890704C;
    case 584u: goto L_08907064;
    case 585u: goto L_0890706C;
    case 586u: goto L_08907074;
    case 587u: goto L_0890707C;
    case 588u: goto L_08907088;
    case 589u: goto L_089070BC;
    case 590u: goto L_089070C0;
    case 591u: goto L_089070CC;
    case 592u: goto L_089070D8;
    case 593u: goto L_089070DC;
    case 594u: goto L_0890710C;
    case 595u: goto L_08907118;
    case 596u: goto L_08907124;
    case 597u: goto L_08907130;
    case 598u: goto L_08907144;
    case 599u: goto L_08907154;
    case 600u: goto L_08907164;
    case 601u: goto L_08907174;
    case 602u: goto L_08907184;
    case 603u: goto L_08907194;
    case 604u: goto L_089071A4;
    case 605u: goto L_089071B4;
    case 606u: goto L_089071C4;
    case 607u: goto L_089071D0;
    case 608u: goto L_089071DC;
    case 609u: goto L_08907244;
    case 610u: goto L_08907278;
    case 611u: goto L_089072A4;
    case 612u: goto L_089072D8;
    case 613u: goto L_089072E4;
    case 614u: goto L_089072E8;
    case 615u: goto L_08907314;
    case 616u: goto L_0890736C;
    case 617u: goto L_08907398;
    case 618u: goto L_089073A0;
    case 619u: goto L_089073AC;
    case 620u: goto L_089073BC;
    case 621u: goto L_089073D0;
    case 622u: goto L_089073FC;
    case 623u: goto L_08907404;
    case 624u: goto L_08907410;
    case 625u: goto L_08907440;
    case 626u: goto L_08907458;
    case 627u: goto L_08907488;
    case 628u: goto L_0890748C;
    case 629u: goto L_089074A0;
    case 630u: goto L_089074D0;
    case 631u: goto L_089074D4;
    case 632u: goto L_089074E0;
    case 633u: goto L_089074EC;
    case 634u: goto L_089074F8;
    case 635u: goto L_08907500;
    case 636u: goto L_08907508;
    case 637u: goto L_08907520;
    case 638u: goto L_08907528;
    case 639u: goto L_08907540;
    case 640u: goto L_08907548;
    case 641u: goto L_08907564;
    case 642u: goto L_0890756C;
    case 643u: goto L_08907574;
    case 644u: goto L_0890757C;
    case 645u: goto L_08907594;
    case 646u: goto L_089075A8;
    case 647u: goto L_089075B8;
    case 648u: goto L_089075C0;
    case 649u: goto L_089075D0;
    case 650u: goto L_089075D4;
    case 651u: goto L_089075DC;
    case 652u: goto L_089075EC;
    case 653u: goto L_08907600;
    case 654u: goto L_0890762C;
    case 655u: goto L_08907634;
    case 656u: goto L_08907648;
    case 657u: goto L_0890767C;
    case 658u: goto L_08907688;
    case 659u: goto L_08907694;
    case 660u: goto L_089076A4;
    case 661u: goto L_089076AC;
    case 662u: goto L_089076BC;
    case 663u: goto L_089076D0;
    case 664u: goto L_089076FC;
    case 665u: goto L_08907704;
    case 666u: goto L_0890771C;
    case 667u: goto L_0890772C;
    case 668u: goto L_08907740;
    case 669u: goto L_08907774;
    case 670u: goto L_0890777C;
    case 671u: goto L_0890778C;
    case 672u: goto L_0890779C;
    case 673u: goto L_089077AC;
    case 674u: goto L_089077B4;
    case 675u: goto L_089077BC;
    case 676u: goto L_089077C4;
    case 677u: goto L_089077D0;
    case 678u: goto L_089077DC;
    case 679u: goto L_0890780C;
    case 680u: goto L_08907824;
    case 681u: goto L_0890782C;
    case 682u: goto L_08907838;
    case 683u: goto L_08907848;
    case 684u: goto L_08907858;
    case 685u: goto L_08907870;
    case 686u: goto L_08907884;
    case 687u: goto L_089078B0;
    case 688u: goto L_089078B8;
    case 689u: goto L_089078C4;
    case 690u: goto L_089078D4;
    case 691u: goto L_089078E4;
    case 692u: goto L_089078FC;
    case 693u: goto L_08907910;
    case 694u: goto L_0890793C;
    case 695u: goto L_08907944;
    case 696u: goto L_08907954;
    case 697u: goto L_08907964;
    case 698u: goto L_0890796C;
    case 699u: goto L_08907984;
    case 700u: goto L_08907994;
    case 701u: goto L_089079C4;
    case 702u: goto L_089079CC;
    case 703u: goto L_089079F8;
    case 704u: goto L_08907A20;
    case 705u: goto L_08907A60;
    case 706u: goto L_08907A94;
    case 707u: goto L_08907AC0;
    case 708u: goto L_08907AF4;
    case 709u: goto L_08907B00;
    case 710u: goto L_08907B04;
    case 711u: goto L_08907B28;
    case 712u: goto L_08907B44;
    case 713u: goto L_08907B70;
    case 714u: goto L_08907B80;
    case 715u: goto L_08907BB0;
    case 716u: goto L_08907BE0;
    case 717u: goto L_08907C10;
    case 718u: goto L_08907C18;
    case 719u: goto L_08907C20;
    case 720u: goto L_08907C50;
    case 721u: goto L_08907C80;
    case 722u: goto L_08907CB0;
    case 723u: goto L_08907CE0;
    case 724u: goto L_08907D10;
    case 725u: goto L_08907D40;
    case 726u: goto L_08907D48;
    case 727u: goto L_08907D64;
    case 728u: goto L_08907D6C;
    case 729u: goto L_08907D80;
    case 730u: goto L_08907D8C;
    case 731u: goto L_08907D9C;
    case 732u: goto L_08907DA8;
    case 733u: goto L_08907DB4;
    case 734u: goto L_08907DE4;
    case 735u: goto L_08907DEC;
    case 736u: goto L_08907E1C;
    case 737u: goto L_08907E4C;
    case 738u: goto L_08907E54;
    case 739u: goto L_08907E5C;
    case 740u: goto L_08907E64;
    case 741u: goto L_08907E6C;
    case 742u: goto L_08907E74;
    case 743u: goto L_08907E84;
    case 744u: goto L_08907E94;
    case 745u: goto L_08907E98;
    case 746u: goto L_08907EA0;
    case 747u: goto L_08907EB0;
    case 748u: goto L_08907EC4;
    case 749u: goto L_08907ED8;
    case 750u: goto L_08907EE0;
    case 751u: goto L_08907EF4;
    case 752u: goto L_08907F34;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08904004:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08904034;
    }
    goto L_08904034;
L_08904034:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904074;
      }
      goto L_08904040;
    }
L_08904040:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08904070;
    }
    goto L_08904070;
L_08904070:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08904074;
L_08904074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904154;
      }
      goto L_0890407C;
    }
L_0890407C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(113)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904154;
      }
      goto L_08904088;
    }
L_08904088:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089040E0;
      }
      goto L_089040A0;
    }
L_089040A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
        goto L_089040D4;
    }
    goto L_089040D4;
L_089040D4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904118;
      }
      goto L_089040E0;
    }
L_089040E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
        goto L_08904114;
    }
    goto L_08904114;
L_08904114:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08904118;
L_08904118:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904154;
      }
      goto L_08904134;
    }
L_08904134:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904154;
      }
      goto L_0890414C;
    }
L_0890414C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08904154;
L_08904154:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(516));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(520));
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0890419Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 450u, 0x088EA7BCu>(ctx, &aot_mem) && ctx.pc == 0x0890419Cu) goto L_0890419C;
    return;
L_0890419C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(400));
    ctx.gpr[31] = (0x089041C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(832));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 616u, 0x088EBD70u>(ctx, &aot_mem) && ctx.pc == 0x089041C8u) goto L_089041C8;
    return;
L_089041C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890424C;
      }
      goto L_089041D0;
    }
L_089041D0:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890424C;
      }
      goto L_089041D8;
    }
L_089041D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890424C;
      }
      goto L_08904218;
    }
L_08904218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890424C;
      }
      goto L_0890422C;
    }
L_0890422C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-986));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890424C;
      }
      goto L_08904240;
    }
L_08904240:
    ctx.gpr[4] = (0u | 23u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0890424C;
L_0890424C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089055D8;
      }
      goto L_08904254;
    }
L_08904254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089055D8;
      }
      goto L_08904274;
    }
L_08904274:
    ctx.gpr[31] = (0x0890427Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0890427Cu) goto L_0890427C;
    return;
L_0890427C:
    ctx.gpr[31] = (0x08904284u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 11u, 0x08A9804Cu>(ctx, &aot_mem) && ctx.pc == 0x08904284u) goto L_08904284;
    return;
L_08904284:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089042FC;
      }
      goto L_0890428C;
    }
L_0890428C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(117)));
        goto L_089042B0;
    }
    goto L_0890429C;
L_0890429C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089042FC;
      }
      goto L_089042AC;
    }
L_089042AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(117)));
    goto L_089042B0;
L_089042B0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089042FC;
      }
      goto L_089042B8;
    }
L_089042B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089042FC;
      }
      goto L_089042C4;
    }
L_089042C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(87)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089042FC;
      }
      goto L_089042D0;
    }
L_089042D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(123)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089042FC;
      }
      goto L_089042DC;
    }
L_089042DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29200)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089042FC;
      }
      goto L_089042E8;
    }
L_089042E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089042FC;
L_089042FC:
    ctx.gpr[31] = (0x08904304u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08904304u) goto L_08904304;
    return;
L_08904304:
    ctx.gpr[31] = (0x0890430Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 28u, 0x08A980ECu>(ctx, &aot_mem) && ctx.pc == 0x0890430Cu) goto L_0890430C;
    return;
L_0890430C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890436C;
      }
      goto L_08904314;
    }
L_08904314:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(117)));
        goto L_08904338;
    }
    goto L_08904324;
L_08904324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890436C;
      }
      goto L_08904334;
    }
L_08904334:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(117)));
    goto L_08904338;
L_08904338:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890436C;
      }
      goto L_08904340;
    }
L_08904340:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890436C;
      }
      goto L_0890434C;
    }
L_0890434C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(87)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890436C;
      }
      goto L_08904358;
    }
L_08904358:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890436C;
L_0890436C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904398;
      }
      goto L_08904388;
    }
L_08904388:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089043C0;
      }
      goto L_08904398;
    }
L_08904398:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089043C0;
      }
      goto L_089043B4;
    }
L_089043B4:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089043C0;
L_089043C0:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089043F4;
      }
      goto L_089043E8;
    }
L_089043E8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08904448;
      }
      goto L_089043F4;
    }
L_089043F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904420;
      }
      goto L_08904410;
    }
L_08904410:
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08904448;
      }
      goto L_08904420;
    }
L_08904420:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904448;
      }
      goto L_0890443C;
    }
L_0890443C:
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08904448;
L_08904448:
    ctx.gpr[31] = (0x08904450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08904450u) goto L_08904450;
    return;
L_08904450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08904488;
      }
      goto L_08904460;
    }
L_08904460:
    ctx.gpr[31] = (0x08904468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08904468u) goto L_08904468;
    return;
L_08904468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08904488;
      }
      goto L_0890447C;
    }
L_0890447C:
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08904488;
L_08904488:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08904530;
      }
      goto L_08904498;
    }
L_08904498:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089044F0;
      }
      goto L_089044B0;
    }
L_089044B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
        goto L_089044E4;
    }
    goto L_089044E4;
L_089044E4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089046C0;
      }
      goto L_089044F0;
    }
L_089044F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
        goto L_08904524;
    }
    goto L_08904524;
L_08904524:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089046C0;
      }
      goto L_08904530;
    }
L_08904530:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089045E8;
      }
      goto L_0890453C;
    }
L_0890453C:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089045A8;
      }
      goto L_08904568;
    }
L_08904568:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
        goto L_0890459C;
    }
    goto L_0890459C;
L_0890459C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089046C0;
      }
      goto L_089045A8;
    }
L_089045A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
        goto L_089045DC;
    }
    goto L_089045DC;
L_089045DC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089046C0;
      }
      goto L_089045E8;
    }
L_089045E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089046C0;
      }
      goto L_089045F4;
    }
L_089045F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890464C;
      }
      goto L_0890460C;
    }
L_0890460C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
        goto L_08904640;
    }
    goto L_08904640;
L_08904640:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904684;
      }
      goto L_0890464C;
    }
L_0890464C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
        goto L_08904680;
    }
    goto L_08904680;
L_08904680:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08904684;
L_08904684:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089046C0;
      }
      goto L_089046A0;
    }
L_089046A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089046C0;
      }
      goto L_089046B8;
    }
L_089046B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089046C0;
L_089046C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(508));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(512));
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (15564u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0890470Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 450u, 0x088EA7BCu>(ctx, &aot_mem) && ctx.pc == 0x0890470Cu) goto L_0890470C;
    return;
L_0890470C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08904718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 401u, 0x08ACA80Cu>(ctx, &aot_mem) && ctx.pc == 0x08904718u) goto L_08904718;
    return;
L_08904718:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904738;
      }
      goto L_08904720;
    }
L_08904720:
    ctx.gpr[31] = (0x08904728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 354u, 0x08ACA4D4u>(ctx, &aot_mem) && ctx.pc == 0x08904728u) goto L_08904728;
    return;
L_08904728:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904738;
      }
      goto L_08904734;
    }
L_08904734:
    ctx.gpr[23] = (0u | 1u);
    goto L_08904738;
L_08904738:
    ctx.gpr[31] = (0x08904740u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x08904740u) goto L_08904740;
    return;
L_08904740:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08904754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 31u, 0x0893C25Cu>(ctx, &aot_mem) && ctx.pc == 0x08904754u) goto L_08904754;
    return;
L_08904754:
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904EE8;
      }
      goto L_08904760;
    }
L_08904760:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6856)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904E64;
      }
      goto L_0890476C;
    }
L_0890476C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08904E64;
      }
      goto L_0890477C;
    }
L_0890477C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904E64;
      }
      goto L_0890478C;
    }
L_0890478C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904854;
      }
      goto L_08904798;
    }
L_08904798:
    ctx.gpr[31] = (0x089047A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x089047A0u) goto L_089047A0;
    return;
L_089047A0:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890480C;
      }
      goto L_089047BC;
    }
L_089047BC:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08904804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 477u, 0x088EAA28u>(ctx, &aot_mem) && ctx.pc == 0x08904804u) goto L_08904804;
    return;
L_08904804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904AC8;
      }
      goto L_0890480C;
    }
L_0890480C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904824;
      }
      goto L_0890481C;
    }
L_0890481C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_08904AC8;
      }
      goto L_08904824;
    }
L_08904824:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x08904830u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x08904830u) goto L_08904830;
    return;
L_08904830:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08904840u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x08904840u) goto L_08904840;
    return;
L_08904840:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08904AC8;
      }
      goto L_08904854;
    }
L_08904854:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08904884u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(832));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904884u) goto L_08904884;
    return;
L_08904884:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904AC8;
      }
      goto L_0890488C;
    }
L_0890488C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x089048E8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 474u, 0x088EA9DCu>(ctx, &aot_mem) && ctx.pc == 0x089048E8u) goto L_089048E8;
    return;
L_089048E8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089048F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x089048F4u) goto L_089048F4;
    return;
L_089048F4:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08904904u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 399u, 0x088EA3FCu>(ctx, &aot_mem) && ctx.pc == 0x08904904u) goto L_08904904;
    return;
L_08904904:
    ctx.gpr[31] = (0x0890490Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 478u, 0x088EAA44u>(ctx, &aot_mem) && ctx.pc == 0x0890490Cu) goto L_0890490C;
    return;
L_0890490C:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904AC8;
      }
      goto L_08904924;
    }
L_08904924:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x08904938u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x08904938u) goto L_08904938;
    return;
L_08904938:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08904948u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 399u, 0x088EA3FCu>(ctx, &aot_mem) && ctx.pc == 0x08904948u) goto L_08904948;
    return;
L_08904948:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08904958u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 476u, 0x088EAA00u>(ctx, &aot_mem) && ctx.pc == 0x08904958u) goto L_08904958;
    return;
L_08904958:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2040), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[5]);
    ctx.gpr[31] = (0x08904988u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1076));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 333u, 0x08AF979Cu>(ctx, &aot_mem) && ctx.pc == 0x08904988u) goto L_08904988;
    return;
L_08904988:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x0890499Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x0890499Cu) goto L_0890499C;
    return;
L_0890499C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089049BCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 400u, 0x088EA414u>(ctx, &aot_mem) && ctx.pc == 0x089049BCu) goto L_089049BC;
    return;
L_089049BC:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089049CCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 398u, 0x088EA3E4u>(ctx, &aot_mem) && ctx.pc == 0x089049CCu) goto L_089049CC;
    return;
L_089049CC:
    ctx.gpr[31] = (0x089049D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x089049D4u) goto L_089049D4;
    return;
L_089049D4:
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[31] = (0x08904A04u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x08904A04u) goto L_08904A04;
    return;
L_08904A04:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2040)));
      if (branch_taken) {
          goto L_08904AB4;
      }
      goto L_08904A10;
    }
L_08904A10:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2040), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2044), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x08904A30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x08904A30u) goto L_08904A30;
    return;
L_08904A30:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[31] = (0x08904A50u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 400u, 0x088EA414u>(ctx, &aot_mem) && ctx.pc == 0x08904A50u) goto L_08904A50;
    return;
L_08904A50:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08904A60u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 399u, 0x088EA3FCu>(ctx, &aot_mem) && ctx.pc == 0x08904A60u) goto L_08904A60;
    return;
L_08904A60:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08904A6Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904A6Cu) goto L_08904A6C;
    return;
L_08904A6C:
    ctx.gpr[31] = (0x08904A74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x08904A74u) goto L_08904A74;
    return;
L_08904A74:
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[31] = (0x08904AA4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x08904AA4u) goto L_08904AA4;
    return;
L_08904AA4:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2044)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2040)));
      if (branch_taken) {
          goto L_08904AB4;
      }
      goto L_08904AB0;
    }
L_08904AB0:
    ctx.gpr[19] = (0u | 0u);
    goto L_08904AB4;
L_08904AB4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904AC8;
      }
      goto L_08904ABC;
    }
L_08904ABC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08904AC8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904AC8u) goto L_08904AC8;
    return;
L_08904AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904B20;
      }
      goto L_08904AD4;
    }
L_08904AD4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08904B0Cu);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 474u, 0x088EA9DCu>(ctx, &aot_mem) && ctx.pc == 0x08904B0Cu) goto L_08904B0C;
    return;
L_08904B0C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08904B18u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904B18u) goto L_08904B18;
    return;
L_08904B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904B64;
      }
      goto L_08904B20;
    }
L_08904B20:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904B64;
      }
      goto L_08904B30;
    }
L_08904B30:
    ctx.gpr[31] = (0x08904B38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x08904B38u) goto L_08904B38;
    return;
L_08904B38:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08904B44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x08904B44u) goto L_08904B44;
    return;
L_08904B44:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[31] = (0x08904B58u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 474u, 0x088EA9DCu>(ctx, &aot_mem) && ctx.pc == 0x08904B58u) goto L_08904B58;
    return;
L_08904B58:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08904B64u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904B64u) goto L_08904B64;
    return;
L_08904B64:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08904B98;
      }
      goto L_08904B70;
    }
L_08904B70:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08904B84u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 399u, 0x088EA3FCu>(ctx, &aot_mem) && ctx.pc == 0x08904B84u) goto L_08904B84;
    return;
L_08904B84:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08904B90u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904B90u) goto L_08904B90;
    return;
L_08904B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904BB8;
      }
      goto L_08904B98;
    }
L_08904B98:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08904BACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 399u, 0x088EA3FCu>(ctx, &aot_mem) && ctx.pc == 0x08904BACu) goto L_08904BAC;
    return;
L_08904BAC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08904BB8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904BB8u) goto L_08904BB8;
    return;
L_08904BB8:
    ctx.gpr[4] = (16454u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08904BCCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x08904BCCu) goto L_08904BCC;
    return;
L_08904BCC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08904BD8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904BD8u) goto L_08904BD8;
    return;
L_08904BD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x08904BECu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08904BECu) goto L_08904BEC;
    return;
L_08904BEC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1008)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904C10;
      }
      goto L_08904BFC;
    }
L_08904BFC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    goto L_08904C10;
L_08904C10:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08904D58;
      }
      goto L_08904C24;
    }
L_08904C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904D10;
      }
      goto L_08904C30;
    }
L_08904C30:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904D10;
      }
      goto L_08904C38;
    }
L_08904C38:
    ctx.gpr[31] = (0x08904C40u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 476u, 0x088EAA00u>(ctx, &aot_mem) && ctx.pc == 0x08904C40u) goto L_08904C40;
    return;
L_08904C40:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904CD0;
      }
      goto L_08904C48;
    }
L_08904C48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1236), ctx.gpr[5]);
    ctx.gpr[31] = (0x08904C74u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1236));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 333u, 0x08AF979Cu>(ctx, &aot_mem) && ctx.pc == 0x08904C74u) goto L_08904C74;
    return;
L_08904C74:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16496u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1264));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08904CACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 400u, 0x088EA414u>(ctx, &aot_mem) && ctx.pc == 0x08904CACu) goto L_08904CAC;
    return;
L_08904CAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08904CBCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 398u, 0x088EA3E4u>(ctx, &aot_mem) && ctx.pc == 0x08904CBCu) goto L_08904CBC;
    return;
L_08904CBC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08904CC8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904CC8u) goto L_08904CC8;
    return;
L_08904CC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904D98;
      }
      goto L_08904CD0;
    }
L_08904CD0:
    ctx.gpr[4] = (16496u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1280));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1296));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08904CECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 400u, 0x088EA414u>(ctx, &aot_mem) && ctx.pc == 0x08904CECu) goto L_08904CEC;
    return;
L_08904CEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08904CFCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 398u, 0x088EA3E4u>(ctx, &aot_mem) && ctx.pc == 0x08904CFCu) goto L_08904CFC;
    return;
L_08904CFC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08904D08u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904D08u) goto L_08904D08;
    return;
L_08904D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904D98;
      }
      goto L_08904D10;
    }
L_08904D10:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08904D1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 476u, 0x088EAA00u>(ctx, &aot_mem) && ctx.pc == 0x08904D1Cu) goto L_08904D1C;
    return;
L_08904D1C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1312));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08904D34u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 400u, 0x088EA414u>(ctx, &aot_mem) && ctx.pc == 0x08904D34u) goto L_08904D34;
    return;
L_08904D34:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08904D44u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 398u, 0x088EA3E4u>(ctx, &aot_mem) && ctx.pc == 0x08904D44u) goto L_08904D44;
    return;
L_08904D44:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08904D50u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904D50u) goto L_08904D50;
    return;
L_08904D50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904D98;
      }
      goto L_08904D58;
    }
L_08904D58:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08904D64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 476u, 0x088EAA00u>(ctx, &aot_mem) && ctx.pc == 0x08904D64u) goto L_08904D64;
    return;
L_08904D64:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1344));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1360));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08904D7Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 400u, 0x088EA414u>(ctx, &aot_mem) && ctx.pc == 0x08904D7Cu) goto L_08904D7C;
    return;
L_08904D7C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08904D8Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 398u, 0x088EA3E4u>(ctx, &aot_mem) && ctx.pc == 0x08904D8Cu) goto L_08904D8C;
    return;
L_08904D8C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08904D98u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904D98u) goto L_08904D98;
    return;
L_08904D98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904E30;
      }
      goto L_08904DB4;
    }
L_08904DB4:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904E30;
      }
      goto L_08904DBC;
    }
L_08904DBC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08904DC8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904DC8u) goto L_08904DC8;
    return;
L_08904DC8:
    ctx.gpr[31] = (0x08904DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08904DD0u) goto L_08904DD0;
    return;
L_08904DD0:
    ctx.gpr[31] = (0x08904DD8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08904DD8u) goto L_08904DD8;
    return;
L_08904DD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16390u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904E38;
      }
      goto L_08904E04;
    }
L_08904E04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904E38;
      }
      goto L_08904E20;
    }
L_08904E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08904E38;
      }
      goto L_08904E30;
    }
L_08904E30:
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08904E38;
L_08904E38:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08904E4Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 474u, 0x088EA9DCu>(ctx, &aot_mem) && ctx.pc == 0x08904E4Cu) goto L_08904E4C;
    return;
L_08904E4C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08904E5Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 343u, 0x088EE3C0u>(ctx, &aot_mem) && ctx.pc == 0x08904E5Cu) goto L_08904E5C;
    return;
L_08904E5C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6856), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08904E64;
L_08904E64:
    ctx.gpr[31] = (0x08904E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 47u, 0x0893C380u>(ctx, &aot_mem) && ctx.pc == 0x08904E6Cu) goto L_08904E6C;
    return;
L_08904E6C:
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904EC0;
      }
      goto L_08904E78;
    }
L_08904E78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08904EC0;
      }
      goto L_08904E88;
    }
L_08904E88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6856)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08904EC0;
      }
      goto L_08904E98;
    }
L_08904E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904F04;
      }
      goto L_08904EA8;
    }
L_08904EA8:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08904F04;
      }
      goto L_08904EC0;
    }
L_08904EC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904ED8;
      }
      goto L_08904ECC;
    }
L_08904ECC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(0u));
    goto L_08904ED8;
L_08904ED8:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2231u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08904F04;
      }
      goto L_08904EE8;
    }
L_08904EE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904F00;
      }
      goto L_08904EF4;
    }
L_08904EF4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(0u));
    goto L_08904F00;
L_08904F00:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6856), static_cast<std::uint8_t>(0u));
    goto L_08904F04;
L_08904F04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(87)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
      if (branch_taken) {
          goto L_08905004;
      }
      goto L_08904F10;
    }
L_08904F10:
    ctx.gpr[31] = (0x08904F18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x08904F18u) goto L_08904F18;
    return;
L_08904F18:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[5] = (17389u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9830u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (50390u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 45875u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08904F40u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 474u, 0x088EA9DCu>(ctx, &aot_mem) && ctx.pc == 0x08904F40u) goto L_08904F40;
    return;
L_08904F40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08904F50u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 399u, 0x088EA3FCu>(ctx, &aot_mem) && ctx.pc == 0x08904F50u) goto L_08904F50;
    return;
L_08904F50:
    ctx.gpr[31] = (0x08904F58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 478u, 0x088EAA44u>(ctx, &aot_mem) && ctx.pc == 0x08904F58u) goto L_08904F58;
    return;
L_08904F58:
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
      if (branch_taken) {
          goto L_08905004;
      }
      goto L_08904F70;
    }
L_08904F70:
    ctx.gpr[31] = (0x08904F78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x08904F78u) goto L_08904F78;
    return;
L_08904F78:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[5] = (17389u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9830u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (50390u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 45875u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08904FA0u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 474u, 0x088EA9DCu>(ctx, &aot_mem) && ctx.pc == 0x08904FA0u) goto L_08904FA0;
    return;
L_08904FA0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08904FB0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 399u, 0x088EA3FCu>(ctx, &aot_mem) && ctx.pc == 0x08904FB0u) goto L_08904FB0;
    return;
L_08904FB0:
    ctx.gpr[31] = (0x08904FB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 478u, 0x088EAA44u>(ctx, &aot_mem) && ctx.pc == 0x08904FB8u) goto L_08904FB8;
    return;
L_08904FB8:
    ctx.gpr[4] = (16499u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904FF8;
      }
      goto L_08904FD4;
    }
L_08904FD4:
    ctx.gpr[31] = (0x08904FDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x08904FDCu) goto L_08904FDC;
    return;
L_08904FDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08905004;
      }
      goto L_08904FF8;
    }
L_08904FF8:
    ctx.gpr[4] = (0u | 38u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08905004;
L_08905004:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(400));
    ctx.gpr[31] = (0x08905030u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(832));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 616u, 0x088EBD70u>(ctx, &aot_mem) && ctx.pc == 0x08905030u) goto L_08905030;
    return;
L_08905030:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905078;
      }
      goto L_08905038;
    }
L_08905038:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08905060u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 406u, 0x08AF9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08905060u) goto L_08905060;
    return;
L_08905060:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905078;
      }
      goto L_0890506C;
    }
L_0890506C:
    ctx.gpr[4] = (0u | 23u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08905078;
L_08905078:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089050E8;
      }
      goto L_08905094;
    }
L_08905094:
    ctx.gpr[31] = (0x0890509Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 405u, 0x08ACA834u>(ctx, &aot_mem) && ctx.pc == 0x0890509Cu) goto L_0890509C;
    return;
L_0890509C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089050E8;
      }
      goto L_089050A4;
    }
L_089050A4:
    ctx.gpr[31] = (0x089050ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 421u, 0x08ACA8D4u>(ctx, &aot_mem) && ctx.pc == 0x089050ACu) goto L_089050AC;
    return;
L_089050AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089050E8;
      }
      goto L_089050B4;
    }
L_089050B4:
    ctx.gpr[31] = (0x089050BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 425u, 0x08ACA8FCu>(ctx, &aot_mem) && ctx.pc == 0x089050BCu) goto L_089050BC;
    return;
L_089050BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089050E8;
      }
      goto L_089050C4;
    }
L_089050C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(87)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089050E8;
      }
      goto L_089050D0;
    }
L_089050D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089050E8;
      }
      goto L_089050DC;
    }
L_089050DC:
    ctx.gpr[4] = (0u | 37u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089050E8;
L_089050E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2376))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905100;
      }
      goto L_089050F4;
    }
L_089050F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2376))))));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08905100;
L_08905100:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089055D8;
      }
      goto L_0890510C;
    }
L_0890510C:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089055D8;
      }
      goto L_08905114;
    }
L_08905114:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089051A4;
      }
      goto L_08905124;
    }
L_08905124:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089051A4;
      }
      goto L_08905134;
    }
L_08905134:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089051A4;
      }
      goto L_08905144;
    }
L_08905144:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089051A4;
      }
      goto L_08905154;
    }
L_08905154:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089051A4;
      }
      goto L_08905164;
    }
L_08905164:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089051A4;
      }
      goto L_08905174;
    }
L_08905174:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0890519Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 526u, 0x088EAE40u>(ctx, &aot_mem) && ctx.pc == 0x0890519Cu) goto L_0890519C;
    return;
L_0890519C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905254;
      }
      goto L_089051A4;
    }
L_089051A4:
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
    ctx.gpr[31] = (0x089051D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x089051D4u) goto L_089051D4;
    return;
L_089051D4:
    ctx.gpr[4] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905244;
      }
      goto L_089051E0;
    }
L_089051E0:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905234;
      }
      goto L_089051F4;
    }
L_089051F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0890521Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 526u, 0x088EAE40u>(ctx, &aot_mem) && ctx.pc == 0x0890521Cu) goto L_0890521C;
    return;
L_0890521C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905234;
      }
      goto L_08905224;
    }
L_08905224:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2231u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089055D8;
      }
      goto L_08905234;
    }
L_08905234:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (2231u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089055D8;
      }
      goto L_08905244;
    }
L_08905244:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (2231u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089055D8;
      }
      goto L_08905254;
    }
L_08905254:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089055D8;
      }
      goto L_08905268;
    }
L_08905268:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1376));
    ctx.gpr[31] = (0x08905280u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x08905280u) goto L_08905280;
    return;
L_08905280:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0890528Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 475u, 0x088EA9F0u>(ctx, &aot_mem) && ctx.pc == 0x0890528Cu) goto L_0890528C;
    return;
L_0890528C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1392));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2432));
    ctx.gpr[31] = (0x0890529Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 399u, 0x088EA3FCu>(ctx, &aot_mem) && ctx.pc == 0x0890529Cu) goto L_0890529C;
    return;
L_0890529C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1408));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(832));
    ctx.gpr[31] = (0x089052CCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 399u, 0x088EA3FCu>(ctx, &aot_mem) && ctx.pc == 0x089052CCu) goto L_089052CC;
    return;
L_089052CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089052E0;
      }
      goto L_089052D8;
    }
L_089052D8:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089055D8;
      }
      goto L_089052E0;
    }
L_089052E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08905304;
      }
      goto L_089052FC;
    }
L_089052FC:
    ctx.gpr[4] = (16400u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08905304;
L_08905304:
    ctx.gpr[31] = (0x0890530Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0890530Cu) goto L_0890530C;
    return;
L_0890530C:
    ctx.gpr[31] = (0x08905314u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 821u, 0x08AFB890u>(ctx, &aot_mem) && ctx.pc == 0x08905314u) goto L_08905314;
    return;
L_08905314:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089055D8;
      }
      goto L_0890531C;
    }
L_0890531C:
    ctx.gpr[31] = (0x08905324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08905324u) goto L_08905324;
    return;
L_08905324:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905364;
      }
      goto L_08905330;
    }
L_08905330:
    ctx.gpr[31] = (0x08905338u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08905338u) goto L_08905338;
    return;
L_08905338:
    ctx.gpr[4] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905358;
      }
      goto L_08905344;
    }
L_08905344:
    ctx.gpr[31] = (0x0890534Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x0890534Cu) goto L_0890534C;
    return;
L_0890534C:
    ctx.gpr[4] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905364;
      }
      goto L_08905358;
    }
L_08905358:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890536C;
      }
      goto L_08905364;
    }
L_08905364:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24148)));
    goto L_0890536C;
L_0890536C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1392)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1396)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08905384u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 473u, 0x088EA9D0u>(ctx, &aot_mem) && ctx.pc == 0x08905384u) goto L_08905384;
    return;
L_08905384:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1408)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1412)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[31] = (0x089053A0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 473u, 0x088EA9D0u>(ctx, &aot_mem) && ctx.pc == 0x089053A0u) goto L_089053A0;
    return;
L_089053A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[31] = (0x089053ACu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1412)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 496u, 0x088EABB0u>(ctx, &aot_mem) && ctx.pc == 0x089053ACu) goto L_089053AC;
    return;
L_089053AC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[31] = (0x089053BCu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1396)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 496u, 0x088EABB0u>(ctx, &aot_mem) && ctx.pc == 0x089053BCu) goto L_089053BC;
    return;
L_089053BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089053EC;
      }
      goto L_089053DC;
    }
L_089053DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905480;
      }
      goto L_089053EC;
    }
L_089053EC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905430;
      }
      goto L_08905400;
    }
L_08905400:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905480;
      }
      goto L_08905430;
    }
L_08905430:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08905480;
      }
      goto L_08905440;
    }
L_08905440:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905480;
      }
      goto L_08905448;
    }
L_08905448:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905468;
      }
      goto L_0890545C;
    }
L_0890545C:
    ctx.gpr[4] = (16544u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08905474;
      }
      goto L_08905468;
    }
L_08905468:
    ctx.gpr[4] = (16563u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08905474;
L_08905474:
    ctx.gpr[4] = (0u | 35u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08905480;
L_08905480:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089055D0;
      }
      goto L_08905494;
    }
L_08905494:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24145)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089055D8;
      }
      goto L_089054A4;
    }
L_089054A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1472), 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1424));
    ctx.gpr[31] = (0x089054B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x089054B4u) goto L_089054B4;
    return;
L_089054B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089054C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x089054C0u) goto L_089054C0;
    return;
L_089054C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1424)));
    ctx.gpr[31] = (0x089054CCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 377u, 0x08AF9A08u>(ctx, &aot_mem) && ctx.pc == 0x089054CCu) goto L_089054CC;
    return;
L_089054CC:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[31] = (0x089054E4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x089054E4u) goto L_089054E4;
    return;
L_089054E4:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1428), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1432)));
    ctx.gpr[4] = (16275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08905510u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 402u, 0x088EA44Cu>(ctx, &aot_mem) && ctx.pc == 0x08905510u) goto L_08905510;
    return;
L_08905510:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1440));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1472));
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x0890554Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 478u, 0x088C68F4u>(ctx, &aot_mem) && ctx.pc == 0x0890554Cu) goto L_0890554C;
    return;
L_0890554C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905598;
      }
      goto L_08905554;
    }
L_08905554:
    ctx.gpr[31] = (0x0890555Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1440));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 424u, 0x08AF9E38u>(ctx, &aot_mem) && ctx.pc == 0x0890555Cu) goto L_0890555C;
    return;
L_0890555C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1488));
    ctx.gpr[31] = (0x08905568u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 389u, 0x08AF9B48u>(ctx, &aot_mem) && ctx.pc == 0x08905568u) goto L_08905568;
    return;
L_08905568:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1504));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08905580u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 474u, 0x088EA9DCu>(ctx, &aot_mem) && ctx.pc == 0x08905580u) goto L_08905580;
    return;
L_08905580:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08905590u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 343u, 0x088EE3C0u>(ctx, &aot_mem) && ctx.pc == 0x08905590u) goto L_08905590;
    return;
L_08905590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089055BC;
      }
      goto L_08905598;
    }
L_08905598:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1520));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089055ACu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 474u, 0x088EA9DCu>(ctx, &aot_mem) && ctx.pc == 0x089055ACu) goto L_089055AC;
    return;
L_089055AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1424));
    ctx.gpr[31] = (0x089055BCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 343u, 0x088EE3C0u>(ctx, &aot_mem) && ctx.pc == 0x089055BCu) goto L_089055BC;
    return;
L_089055BC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24145), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089055D8;
      }
      goto L_089055D0;
    }
L_089055D0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24145), static_cast<std::uint8_t>(0u));
    goto L_089055D8;
L_089055D8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22558))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089055F8;
      }
      goto L_089055E8;
    }
L_089055E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22558))))));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089055F8;
L_089055F8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
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
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08905634u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08905634u) goto L_08905634;
    return;
L_08905634:
    ctx.gpr[4] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905650;
      }
      goto L_08905640;
    }
L_08905640:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24146), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0890566C;
      }
      goto L_08905650;
    }
L_08905650:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24146)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890566C;
      }
      goto L_08905660;
    }
L_08905660:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24146), static_cast<std::uint8_t>(0u));
    goto L_0890566C;
L_0890566C:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32184)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089056C4;
      }
      goto L_08905680;
    }
L_08905680:
    ctx.gpr[31] = (0x08905688u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08905688u) goto L_08905688;
    return;
L_08905688:
    ctx.gpr[4] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089056C4;
      }
      goto L_08905694;
    }
L_08905694:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089056BC;
      }
      goto L_089056AC;
    }
L_089056AC:
    ctx.gpr[31] = (0x089056B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 405u, 0x08AF9C88u>(ctx, &aot_mem) && ctx.pc == 0x089056B4u) goto L_089056B4;
    return;
L_089056B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089056C8;
      }
      goto L_089056BC;
    }
L_089056BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089056C8;
      }
      goto L_089056C4;
    }
L_089056C4:
    ctx.gpr[18] = (0u | 0u);
    goto L_089056C8;
L_089056C8:
    ctx.gpr[31] = (0x089056D0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x089056D0u) goto L_089056D0;
    return;
L_089056D0:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-32184), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905728;
      }
      goto L_089056E4;
    }
L_089056E4:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-32180), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0890574C;
      }
      goto L_08905728;
    }
L_08905728:
    ctx.gpr[31] = (0x08905730u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08905730u) goto L_08905730;
    return;
L_08905730:
    ctx.gpr[4] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0890574C;
      }
      goto L_0890573C;
    }
L_0890573C:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32180)));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0890574C;
L_0890574C:
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
    ctx.gpr[31] = (0x0890577Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x0890577Cu) goto L_0890577C;
    return;
L_0890577C:
    ctx.gpr[4] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089058FC;
      }
      goto L_08905788;
    }
L_08905788:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089057C8;
      }
      goto L_089057B8;
    }
L_089057B8:
    ctx.gpr[4] = (0u | 29u);
    ctx.gpr[5] = (2231u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089058FC;
      }
      goto L_089057C8;
    }
L_089057C8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089057D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 406u, 0x08AF9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089057D4u) goto L_089057D4;
    return;
L_089057D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089058C0;
      }
      goto L_089057DC;
    }
L_089057DC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089058C0;
      }
      goto L_089057F4;
    }
L_089057F4:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
      if (branch_taken) {
          goto L_089058AC;
      }
      goto L_08905808;
    }
L_08905808:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08905814u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 461u, 0x08AFA10Cu>(ctx, &aot_mem) && ctx.pc == 0x08905814u) goto L_08905814;
    return;
L_08905814:
    ctx.gpr[4] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
      if (branch_taken) {
          goto L_089058AC;
      }
      goto L_08905820;
    }
L_08905820:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08905830u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08905830u) goto L_08905830;
    return;
L_08905830:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890583Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0890583Cu) goto L_0890583C;
    return;
L_0890583C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0890584Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 399u, 0x088EA3FCu>(ctx, &aot_mem) && ctx.pc == 0x0890584Cu) goto L_0890584C;
    return;
L_0890584C:
    ctx.gpr[31] = (0x08905854u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 477u, 0x088EAA28u>(ctx, &aot_mem) && ctx.pc == 0x08905854u) goto L_08905854;
    return;
L_08905854:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089058AC;
      }
      goto L_0890586C;
    }
L_0890586C:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089058C0;
      }
      goto L_089058AC;
    }
L_089058AC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089057F4;
      }
      goto L_089058C0;
    }
L_089058C0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089058FC;
      }
      goto L_089058C8;
    }
L_089058C8:
    ctx.gpr[4] = (0u | 29u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089058FC;
L_089058FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905C0C;
      }
      goto L_0890590C;
    }
L_0890590C:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089059C8;
      }
      goto L_08905920;
    }
L_08905920:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089059C8;
      }
      goto L_08905930;
    }
L_08905930:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089059C8;
      }
      goto L_08905940;
    }
L_08905940:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089059C8;
      }
      goto L_08905950;
    }
L_08905950:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089059C8;
      }
      goto L_08905960;
    }
L_08905960:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089059C8;
      }
      goto L_08905970;
    }
L_08905970:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089059C8;
      }
      goto L_08905980;
    }
L_08905980:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089059C8;
      }
      goto L_08905990;
    }
L_08905990:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089059C8;
      }
      goto L_089059A0;
    }
L_089059A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089059C8;
      }
      goto L_089059B0;
    }
L_089059B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089059C8;
      }
      goto L_089059BC;
    }
L_089059BC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089059C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 494u, 0x088EF0C0u>(ctx, &aot_mem) && ctx.pc == 0x089059C8u) goto L_089059C8;
    return;
L_089059C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7112))))));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(428), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(736));
    ctx.gpr[31] = (0x08905A3Cu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(2448));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08905A3Cu) goto L_08905A3C;
    return;
L_08905A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(996), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(752));
    ctx.gpr[31] = (0x08905A70u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(2464));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08905A70u) goto L_08905A70;
    return;
L_08905A70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(768));
    ctx.gpr[31] = (0x08905A9Cu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(2480));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08905A9Cu) goto L_08905A9C;
    return;
L_08905A9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(418), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
        goto L_08905AD8;
    }
    goto L_08905ACC;
L_08905ACC:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08905AD8;
      }
      goto L_08905AD8;
    }
L_08905AD8:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1552));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08905B0Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 474u, 0x088EA9DCu>(ctx, &aot_mem) && ctx.pc == 0x08905B0Cu) goto L_08905B0C;
    return;
L_08905B0C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08905B18u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 563u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x08905B18u) goto L_08905B18;
    return;
L_08905B18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905B88;
      }
      goto L_08905B20;
    }
L_08905B20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(784));
      if (branch_taken) {
          goto L_08905B58;
      }
      goto L_08905B4C;
    }
L_08905B4C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08905B5C;
      }
      goto L_08905B58;
    }
L_08905B58:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    goto L_08905B5C;
L_08905B5C:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08905B88u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08905B88u) goto L_08905B88;
    return;
L_08905B88:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[31] = (0x08905BC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2740));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08905BC8u) goto L_08905BC8;
    return;
L_08905BC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x08905BF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08905BF4u) goto L_08905BF4;
    return;
L_08905BF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6857), static_cast<std::uint8_t>(0u));
    goto L_08905C0C;
L_08905C0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28895)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905C28;
      }
      goto L_08905C1C;
    }
L_08905C1C:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08905C28;
L_08905C28:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905C94;
      }
      goto L_08905C38;
    }
L_08905C38:
    ctx.gpr[31] = (0x08905C40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 405u, 0x08AF9C88u>(ctx, &aot_mem) && ctx.pc == 0x08905C40u) goto L_08905C40;
    return;
L_08905C40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905C70;
      }
      goto L_08905C48;
    }
L_08905C48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08905C94;
      }
      goto L_08905C64;
    }
L_08905C64:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(102), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08905C94;
      }
      goto L_08905C70;
    }
L_08905C70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08905C94;
      }
      goto L_08905C8C;
    }
L_08905C8C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(103), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08905C94;
L_08905C94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905CA4;
    }
L_08905CA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905CB4;
    }
L_08905CB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905CC4;
    }
L_08905CC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905CD4;
    }
L_08905CD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905CE4;
    }
L_08905CE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905CF4;
    }
L_08905CF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905D04;
    }
L_08905D04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905D14;
    }
L_08905D14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905D24;
    }
L_08905D24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905D34;
    }
L_08905D34:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905D44;
    }
L_08905D44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905D54;
    }
L_08905D54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905D64;
    }
L_08905D64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905D74;
    }
L_08905D74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905D84;
    }
L_08905D84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905D94;
    }
L_08905D94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905DA4;
    }
L_08905DA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905DB4;
    }
L_08905DB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905DC4;
    }
L_08905DC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905DD4;
    }
L_08905DD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905DE4;
    }
L_08905DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905DF4;
    }
L_08905DF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905E0C;
      }
      goto L_08905E00;
    }
L_08905E00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905E10;
      }
      goto L_08905E0C;
    }
L_08905E0C:
    ctx.gpr[18] = (0u | 0u);
    goto L_08905E10;
L_08905E10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(102)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08905E34;
      }
      goto L_08905E1C;
    }
L_08905E1C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905E34;
      }
      goto L_08905E24;
    }
L_08905E24:
    ctx.gpr[31] = (0x08905E2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 508u, 0x088EF198u>(ctx, &aot_mem) && ctx.pc == 0x08905E2Cu) goto L_08905E2C;
    return;
L_08905E2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905EC8;
      }
      goto L_08905E34;
    }
L_08905E34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(103)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08905EA0;
      }
      goto L_08905E40;
    }
L_08905E40:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905EA0;
      }
      goto L_08905E48;
    }
L_08905E48:
    ctx.gpr[31] = (0x08905E50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 405u, 0x08AF9C88u>(ctx, &aot_mem) && ctx.pc == 0x08905E50u) goto L_08905E50;
    return;
L_08905E50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905E90;
      }
      goto L_08905E58;
    }
L_08905E58:
    ctx.gpr[31] = (0x08905E60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x08905E60u) goto L_08905E60;
    return;
L_08905E60:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905E80;
      }
      goto L_08905E6C;
    }
L_08905E6C:
    ctx.gpr[31] = (0x08905E74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 451u, 0x08AFA08Cu>(ctx, &aot_mem) && ctx.pc == 0x08905E74u) goto L_08905E74;
    return;
L_08905E74:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905E90;
      }
      goto L_08905E80;
    }
L_08905E80:
    ctx.gpr[31] = (0x08905E88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 534u, 0x088EF3F4u>(ctx, &aot_mem) && ctx.pc == 0x08905E88u) goto L_08905E88;
    return;
L_08905E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905EC8;
      }
      goto L_08905E90;
    }
L_08905E90:
    ctx.gpr[31] = (0x08905E98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 520u, 0x088EF2A0u>(ctx, &aot_mem) && ctx.pc == 0x08905E98u) goto L_08905E98;
    return;
L_08905E98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905EC8;
      }
      goto L_08905EA0;
    }
L_08905EA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905EBC;
      }
      goto L_08905EAC;
    }
L_08905EAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(103)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905EBC;
      }
      goto L_08905EB8;
    }
L_08905EB8:
    ctx.gpr[22] = (0u | 1u);
    goto L_08905EBC;
L_08905EBC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08905EC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 554u, 0x088EF58Cu>(ctx, &aot_mem) && ctx.pc == 0x08905EC8u) goto L_08905EC8;
    return;
L_08905EC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907704;
      }
      goto L_08905ED8;
    }
L_08905ED8:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905F0C;
      }
      goto L_08905EEC;
    }
L_08905EEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905F0C;
      }
      goto L_08905EFC;
    }
L_08905EFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905F14;
      }
      goto L_08905F0C;
    }
L_08905F0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08905FCC;
      }
      goto L_08905F14;
    }
L_08905F14:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905F38;
      }
      goto L_08905F28;
    }
L_08905F28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905F84;
      }
      goto L_08905F38;
    }
L_08905F38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_08905F78;
      }
      goto L_08905F68;
    }
L_08905F68:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08905F78;
      }
      goto L_08905F70;
    }
L_08905F70:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905FCC;
      }
      goto L_08905F78;
    }
L_08905F78:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905FCC;
      }
      goto L_08905F84;
    }
L_08905F84:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905FCC;
      }
      goto L_08905F98;
    }
L_08905F98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905FCC;
      }
      goto L_08905FC8;
    }
L_08905FC8:
    ctx.gpr[22] = (0u | 1u);
    goto L_08905FCC;
L_08905FCC:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905FF0;
      }
      goto L_08905FE0;
    }
L_08905FE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089061E8;
      }
      goto L_08905FF0;
    }
L_08905FF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089061E8;
      }
      goto L_08905FFC;
    }
L_08905FFC:
    ctx.gpr[31] = (0x08906004u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 406u, 0x08AF9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08906004u) goto L_08906004;
    return;
L_08906004:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089061E8;
      }
      goto L_0890600C;
    }
L_0890600C:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089061E4;
      }
      goto L_08906020;
    }
L_08906020:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089061E4;
      }
      goto L_08906050;
    }
L_08906050:
    ctx.gpr[31] = (0x08906058u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 822u, 0x08AFB89Cu>(ctx, &aot_mem) && ctx.pc == 0x08906058u) goto L_08906058;
    return;
L_08906058:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089060B4;
      }
      goto L_08906060;
    }
L_08906060:
    ctx.gpr[31] = (0x08906068u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 822u, 0x08AFB89Cu>(ctx, &aot_mem) && ctx.pc == 0x08906068u) goto L_08906068;
    return;
L_08906068:
    ctx.gpr[31] = (0x08906070u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08906070u) goto L_08906070;
    return;
L_08906070:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0890607Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x0890607Cu) goto L_0890607C;
    return;
L_0890607C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1568));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0890608Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 399u, 0x088EA3FCu>(ctx, &aot_mem) && ctx.pc == 0x0890608Cu) goto L_0890608C;
    return;
L_0890608C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1568)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x0890609Cu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1572)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 380u, 0x08AF9A80u>(ctx, &aot_mem) && ctx.pc == 0x0890609Cu) goto L_0890609C;
    return;
L_0890609C:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089060CC;
      }
      goto L_089060B4;
    }
L_089060B4:
    ctx.gpr[31] = (0x089060BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 392u, 0x08AF9B8Cu>(ctx, &aot_mem) && ctx.pc == 0x089060BCu) goto L_089060BC;
    return;
L_089060BC:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    goto L_089060CC;
L_089060CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08906124;
      }
      goto L_08906110;
    }
L_08906110:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08906178;
      }
      goto L_08906124;
    }
L_08906124:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08906178;
      }
      goto L_08906168;
    }
L_08906168:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08906178;
L_08906178:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    ctx.gpr[31] = (0x089061A4u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 449u, 0x088EA7B0u>(ctx, &aot_mem) && ctx.pc == 0x089061A4u) goto L_089061A4;
    return;
L_089061A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22544)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089061DC;
      }
      goto L_089061D8;
    }
L_089061D8:
    ctx.gpr[22] = (0u | 1u);
    goto L_089061DC;
L_089061DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089061E8;
      }
      goto L_089061E4;
    }
L_089061E4:
    ctx.gpr[22] = (0u | 1u);
    goto L_089061E8;
L_089061E8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906240;
      }
      goto L_089061F8;
    }
L_089061F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906240;
      }
      goto L_08906208;
    }
L_08906208:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906240;
      }
      goto L_08906238;
    }
L_08906238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08906334;
      }
      goto L_08906240;
    }
L_08906240:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089062BC;
      }
      goto L_08906254;
    }
L_08906254:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089062B4;
      }
      goto L_08906284;
    }
L_08906284:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906334;
      }
      goto L_089062B4;
    }
L_089062B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08906334;
      }
      goto L_089062BC;
    }
L_089062BC:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906334;
      }
      goto L_089062D0;
    }
L_089062D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906330;
      }
      goto L_08906300;
    }
L_08906300:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906334;
      }
      goto L_08906330;
    }
L_08906330:
    ctx.gpr[22] = (0u | 0u);
    goto L_08906334;
L_08906334:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906408;
      }
      goto L_08906348;
    }
L_08906348:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906408;
      }
      goto L_08906358;
    }
L_08906358:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906408;
      }
      goto L_08906368;
    }
L_08906368:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906408;
      }
      goto L_08906378;
    }
L_08906378:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906408;
      }
      goto L_08906388;
    }
L_08906388:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906408;
      }
      goto L_08906398;
    }
L_08906398:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906408;
      }
      goto L_089063A8;
    }
L_089063A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906408;
      }
      goto L_089063B8;
    }
L_089063B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906408;
      }
      goto L_089063C8;
    }
L_089063C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906408;
      }
      goto L_089063D8;
    }
L_089063D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906408;
      }
      goto L_089063E8;
    }
L_089063E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906408;
      }
      goto L_089063F8;
    }
L_089063F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906420;
      }
      goto L_08906408;
    }
L_08906408:
    ctx.gpr[31] = (0x08906410u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 406u, 0x08AF9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08906410u) goto L_08906410;
    return;
L_08906410:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906420;
      }
      goto L_08906418;
    }
L_08906418:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08906F84;
      }
      goto L_08906420;
    }
L_08906420:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089066B0;
      }
      goto L_08906434;
    }
L_08906434:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089066B0;
      }
      goto L_08906444;
    }
L_08906444:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 7u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_08906690;
    }
    goto L_08906474;
L_08906474:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 45u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_08906690;
    }
    goto L_089064A4;
L_089064A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 8u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_08906690;
    }
    goto L_089064D4;
L_089064D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 34u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_08906690;
    }
    goto L_08906504;
L_08906504:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 37u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_08906690;
    }
    goto L_08906534;
L_08906534:
    if (ctx.gpr[23] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_08906690;
    }
    goto L_0890653C;
L_0890653C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 16u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_08906690;
    }
    goto L_0890656C;
L_0890656C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 39u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_08906690;
    }
    goto L_0890659C;
L_0890659C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 40u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_08906690;
    }
    goto L_089065CC;
L_089065CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 42u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_08906690;
    }
    goto L_089065FC;
L_089065FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 43u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_08906690;
    }
    goto L_0890662C;
L_0890662C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 41u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_08906690;
    }
    goto L_0890665C;
L_0890665C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906F84;
      }
      goto L_0890668C;
    }
L_0890668C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    goto L_08906690;
L_08906690:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906F84;
      }
      goto L_08906698;
    }
L_08906698:
    ctx.gpr[31] = (0x089066A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 405u, 0x08AF9C88u>(ctx, &aot_mem) && ctx.pc == 0x089066A0u) goto L_089066A0;
    return;
L_089066A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906F84;
      }
      goto L_089066A8;
    }
L_089066A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08906F84;
      }
      goto L_089066B0;
    }
L_089066B0:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906E94;
      }
      goto L_089066C4;
    }
L_089066C4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906728;
      }
      goto L_089066F8;
    }
L_089066F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890673C;
      }
      goto L_08906728;
    }
L_08906728:
    ctx.gpr[31] = (0x08906730u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 265u, 0x0899DB50u>(ctx, &aot_mem) && ctx.pc == 0x08906730u) goto L_08906730;
    return;
L_08906730:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890673C;
      }
      goto L_08906738;
    }
L_08906738:
    ctx.gpr[19] = (0u | 1u);
    goto L_0890673C;
L_0890673C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_0890676C;
    }
L_0890676C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_0890679C;
    }
L_0890679C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_089067CC;
    }
L_089067CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_089067FC;
    }
L_089067FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_0890682C;
    }
L_0890682C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_0890685C;
    }
L_0890685C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_0890688C;
    }
L_0890688C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_089068BC;
    }
L_089068BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_089068EC;
    }
L_089068EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_0890691C;
    }
L_0890691C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_0890694C;
    }
L_0890694C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_0890697C;
    }
L_0890697C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_089069AC;
    }
L_089069AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_089069DC;
    }
L_089069DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_08906A0C;
    }
L_08906A0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_08906A3C;
    }
L_08906A3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_08906A6C;
    }
L_08906A6C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906A7C;
      }
      goto L_08906A74;
    }
L_08906A74:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906E7C;
      }
      goto L_08906A7C;
    }
L_08906A7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906E7C;
      }
      goto L_08906A88;
    }
L_08906A88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906C98;
      }
      goto L_08906AB8;
    }
L_08906AB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906C98;
      }
      goto L_08906AE8;
    }
L_08906AE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906C98;
      }
      goto L_08906B18;
    }
L_08906B18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906C98;
      }
      goto L_08906B48;
    }
L_08906B48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906C98;
      }
      goto L_08906B78;
    }
L_08906B78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906C98;
      }
      goto L_08906BA8;
    }
L_08906BA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906C98;
      }
      goto L_08906BD8;
    }
L_08906BD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906C98;
      }
      goto L_08906C08;
    }
L_08906C08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906C98;
      }
      goto L_08906C38;
    }
L_08906C38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906C98;
      }
      goto L_08906C68;
    }
L_08906C68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906CEC;
      }
      goto L_08906C98;
    }
L_08906C98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    ctx.gpr[31] = (0x08906CC4u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(820)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 496u, 0x088EABB0u>(ctx, &aot_mem) && ctx.pc == 0x08906CC4u) goto L_08906CC4;
    return;
L_08906CC4:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2740)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2740)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08906CEC;
L_08906CEC:
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906E14;
      }
      goto L_08906D30;
    }
L_08906D30:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1584));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(832));
    ctx.gpr[31] = (0x08906D64u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08906D64u) goto L_08906D64;
    return;
L_08906D64:
    ctx.gpr[31] = (0x08906D6Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08906D6Cu) goto L_08906D6C;
    return;
L_08906D6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08906D7Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 399u, 0x088EA3FCu>(ctx, &aot_mem) && ctx.pc == 0x08906D7Cu) goto L_08906D7C;
    return;
L_08906D7C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1592), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08906D8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 476u, 0x088EAA00u>(ctx, &aot_mem) && ctx.pc == 0x08906D8Cu) goto L_08906D8C;
    return;
L_08906D8C:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08906DD4;
      }
      goto L_08906DA8;
    }
L_08906DA8:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08906DD4;
      }
      goto L_08906DC8;
    }
L_08906DC8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08906DD4;
L_08906DD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1584)));
    ctx.gpr[31] = (0x08906DE0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1588)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 496u, 0x088EABB0u>(ctx, &aot_mem) && ctx.pc == 0x08906DE0u) goto L_08906DE0;
    return;
L_08906DE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08906E7C;
      }
      goto L_08906E14;
    }
L_08906E14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    ctx.gpr[31] = (0x08906E40u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(820)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 496u, 0x088EABB0u>(ctx, &aot_mem) && ctx.pc == 0x08906E40u) goto L_08906E40;
    return;
L_08906E40:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08906E7C;
L_08906E7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906E8C;
      }
      goto L_08906E88;
    }
L_08906E88:
    ctx.gpr[22] = (0u | 1u);
    goto L_08906E8C;
L_08906E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08906F84;
      }
      goto L_08906E94;
    }
L_08906E94:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906EE0;
      }
      goto L_08906EA8;
    }
L_08906EA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906F84;
      }
      goto L_08906ED8;
    }
L_08906ED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08906F84;
      }
      goto L_08906EE0;
    }
L_08906EE0:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906EFC;
      }
      goto L_08906EF4;
    }
L_08906EF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08906F84;
      }
      goto L_08906EFC;
    }
L_08906EFC:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906F30;
      }
      goto L_08906F10;
    }
L_08906F10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906F30;
      }
      goto L_08906F20;
    }
L_08906F20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906F38;
      }
      goto L_08906F30;
    }
L_08906F30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08906F84;
      }
      goto L_08906F38;
    }
L_08906F38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906F84;
      }
      goto L_08906F70;
    }
L_08906F70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906F84;
      }
      goto L_08906F80;
    }
L_08906F80:
    ctx.gpr[22] = (0u | 1u);
    goto L_08906F84;
L_08906F84:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906FF8;
      }
      goto L_08906FC0;
    }
L_08906FC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906FF8;
      }
      goto L_08906FF4;
    }
L_08906FF4:
    ctx.gpr[22] = (0u | 1u);
    goto L_08906FF8;
L_08906FF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089070C0;
      }
      goto L_08907004;
    }
L_08907004:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2368)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089070C0;
      }
      goto L_08907018;
    }
L_08907018:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08907064;
      }
      goto L_08907034;
    }
L_08907034:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08907064;
      }
      goto L_0890704C;
    }
L_0890704C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089070C0;
      }
      goto L_08907064;
    }
L_08907064:
    ctx.gpr[31] = (0x0890706Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 405u, 0x08AF9C88u>(ctx, &aot_mem) && ctx.pc == 0x0890706Cu) goto L_0890706C;
    return;
L_0890706C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089070C0;
      }
      goto L_08907074;
    }
L_08907074:
    ctx.gpr[31] = (0x0890707Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x0890707Cu) goto L_0890707C;
    return;
L_0890707C:
    ctx.gpr[4] = (0u | 154u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089070C0;
      }
      goto L_08907088;
    }
L_08907088:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089070C0;
      }
      goto L_089070BC;
    }
L_089070BC:
    ctx.gpr[22] = (0u | 1u);
    goto L_089070C0;
L_089070C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089070DC;
      }
      goto L_089070CC;
    }
L_089070CC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08907404;
      }
      goto L_089070D8;
    }
L_089070D8:
    ctx.gpr[4] = (2231u << 16u);
    goto L_089070DC;
L_089070DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907404;
      }
      goto L_0890710C;
    }
L_0890710C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089073A0;
      }
      goto L_08907118;
    }
L_08907118:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907130;
      }
      goto L_08907124;
    }
L_08907124:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089071DC;
      }
      goto L_08907130;
    }
L_08907130:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089071DC;
      }
      goto L_08907144;
    }
L_08907144:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089071DC;
      }
      goto L_08907154;
    }
L_08907154:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089071DC;
      }
      goto L_08907164;
    }
L_08907164:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089071DC;
      }
      goto L_08907174;
    }
L_08907174:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089071DC;
      }
      goto L_08907184;
    }
L_08907184:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089071DC;
      }
      goto L_08907194;
    }
L_08907194:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089071DC;
      }
      goto L_089071A4;
    }
L_089071A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089071DC;
      }
      goto L_089071B4;
    }
L_089071B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_089071DC;
      }
      goto L_089071C4;
    }
L_089071C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089071DC;
      }
      goto L_089071D0;
    }
L_089071D0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089071DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 494u, 0x088EF0C0u>(ctx, &aot_mem) && ctx.pc == 0x089071DCu) goto L_089071DC;
    return;
L_089071DC:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(428), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(736));
    ctx.gpr[31] = (0x08907244u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2448));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08907244u) goto L_08907244;
    return;
L_08907244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(996), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(752));
    ctx.gpr[31] = (0x08907278u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2464));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08907278u) goto L_08907278;
    return;
L_08907278:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(768));
    ctx.gpr[31] = (0x089072A4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2480));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x089072A4u) goto L_089072A4;
    return;
L_089072A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(418), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(784));
      if (branch_taken) {
          goto L_089072E4;
      }
      goto L_089072D8;
    }
L_089072D8:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_089072E8;
      }
      goto L_089072E4;
    }
L_089072E4:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    goto L_089072E8;
L_089072E8:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08907314u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08907314u) goto L_08907314;
    return;
L_08907314:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6857), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[31] = (0x0890736Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2740));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0890736Cu) goto L_0890736C;
    return;
L_0890736C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x08907398u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08907398u) goto L_08907398;
    return;
L_08907398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907B80;
      }
      goto L_089073A0;
    }
L_089073A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(114)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907B80;
      }
      goto L_089073AC;
    }
L_089073AC:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[31] = (0x089073BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08907F34;
L_089073BC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[31] = (0x089073D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2740));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089073D0u) goto L_089073D0;
    return;
L_089073D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x089073FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089073FCu) goto L_089073FC;
    return;
L_089073FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907B80;
      }
      goto L_08907404;
    }
L_08907404:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08907634;
      }
      goto L_08907410;
    }
L_08907410:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907634;
      }
      goto L_08907440;
    }
L_08907440:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907488;
      }
      goto L_08907458;
    }
L_08907458:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890748C;
      }
      goto L_08907488;
    }
L_08907488:
    ctx.gpr[16] = (0u | 0u);
    goto L_0890748C;
L_0890748C:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089074D4;
      }
      goto L_089074A0;
    }
L_089074A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089074D4;
      }
      goto L_089074D0;
    }
L_089074D0:
    ctx.gpr[16] = (0u | 0u);
    goto L_089074D4;
L_089074D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(114)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089075C0;
      }
      goto L_089074E0;
    }
L_089074E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089075C0;
      }
      goto L_089074EC;
    }
L_089074EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089075C0;
      }
      goto L_089074F8;
    }
L_089074F8:
    ctx.gpr[31] = (0x08907500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08907500u) goto L_08907500;
    return;
L_08907500:
    ctx.gpr[31] = (0x08907508u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08907508u) goto L_08907508;
    return;
L_08907508:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08907520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08907520u) goto L_08907520;
    return;
L_08907520:
    ctx.gpr[31] = (0x08907528u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08907528u) goto L_08907528;
    return;
L_08907528:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1604), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08907540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08907540u) goto L_08907540;
    return;
L_08907540:
    ctx.gpr[31] = (0x08907548u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08907548u) goto L_08907548;
    return;
L_08907548:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089075C0;
      }
      goto L_08907564;
    }
L_08907564:
    ctx.gpr[31] = (0x0890756Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 406u, 0x08AF9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0890756Cu) goto L_0890756C;
    return;
L_0890756C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089075C0;
      }
      goto L_08907574;
    }
L_08907574:
    ctx.gpr[31] = (0x0890757Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1600));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 477u, 0x088EAA28u>(ctx, &aot_mem) && ctx.pc == 0x0890757Cu) goto L_0890757C;
    return;
L_0890757C:
    ctx.gpr[4] = (16780u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089075C0;
      }
      goto L_08907594;
    }
L_08907594:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089075B8;
      }
      goto L_089075A8;
    }
L_089075A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089075C0;
      }
      goto L_089075B8;
    }
L_089075B8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089075C0;
L_089075C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(114)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089075D4;
      }
      goto L_089075D0;
    }
L_089075D0:
    ctx.gpr[16] = (0u | 0u);
    goto L_089075D4;
L_089075D4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890762C;
      }
      goto L_089075DC;
    }
L_089075DC:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[31] = (0x089075ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 286u, 0x088EDFC8u>(ctx, &aot_mem) && ctx.pc == 0x089075ECu) goto L_089075EC;
    return;
L_089075EC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[31] = (0x08907600u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2740));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08907600u) goto L_08907600;
    return;
L_08907600:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x0890762Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0890762Cu) goto L_0890762C;
    return;
L_0890762C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907B80;
      }
      goto L_08907634;
    }
L_08907634:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08907B80;
      }
      goto L_08907648;
    }
L_08907648:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08907B80;
      }
      goto L_0890767C;
    }
L_0890767C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907B80;
      }
      goto L_08907688;
    }
L_08907688:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089076AC;
      }
      goto L_08907694;
    }
L_08907694:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[31] = (0x089076A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08907F34;
L_089076A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089076BC;
      }
      goto L_089076AC;
    }
L_089076AC:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[31] = (0x089076BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 286u, 0x088EDFC8u>(ctx, &aot_mem) && ctx.pc == 0x089076BCu) goto L_089076BC;
    return;
L_089076BC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[31] = (0x089076D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2740));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089076D0u) goto L_089076D0;
    return;
L_089076D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x089076FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089076FCu) goto L_089076FC;
    return;
L_089076FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907B80;
      }
      goto L_08907704;
    }
L_08907704:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(121)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890772C;
      }
      goto L_0890771C;
    }
L_0890771C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(122)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890782C;
      }
      goto L_0890772C;
    }
L_0890772C:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890777C;
      }
      goto L_08907740;
    }
L_08907740:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890782C;
      }
      goto L_08907774;
    }
L_08907774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0890782C;
      }
      goto L_0890777C;
    }
L_0890777C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089077AC;
      }
      goto L_0890778C;
    }
L_0890778C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089077AC;
      }
      goto L_0890779C;
    }
L_0890779C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089077DC;
      }
      goto L_089077AC;
    }
L_089077AC:
    ctx.gpr[31] = (0x089077B4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x089077B4u) goto L_089077B4;
    return;
L_089077B4:
    ctx.gpr[31] = (0x089077BCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 59u, 0x08A98240u>(ctx, &aot_mem) && ctx.pc == 0x089077BCu) goto L_089077BC;
    return;
L_089077BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089077DC;
      }
      goto L_089077C4;
    }
L_089077C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(122)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089077DC;
      }
      goto L_089077D0;
    }
L_089077D0:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0890782C;
      }
      goto L_089077DC;
    }
L_089077DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7112))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890782C;
      }
      goto L_0890780C;
    }
L_0890780C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(7116), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08907824u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08907824u) goto L_08907824;
    return;
L_08907824:
    ctx.gpr[31] = (0x0890782Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 215u, 0x08B00DE8u>(ctx, &aot_mem) && ctx.pc == 0x0890782Cu) goto L_0890782C;
    return;
L_0890782C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089078B8;
      }
      goto L_08907838;
    }
L_08907838:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(106)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089078B8;
      }
      goto L_08907848;
    }
L_08907848:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7116))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089078B8;
      }
      goto L_08907858;
    }
L_08907858:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7112))))));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[31] = (0x08907870u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08907F34;
L_08907870:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[31] = (0x08907884u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2740));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08907884u) goto L_08907884;
    return;
L_08907884:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x089078B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089078B0u) goto L_089078B0;
    return;
L_089078B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907B80;
      }
      goto L_089078B8;
    }
L_089078B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907944;
      }
      goto L_089078C4;
    }
L_089078C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(106)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907944;
      }
      goto L_089078D4;
    }
L_089078D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7116))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907944;
      }
      goto L_089078E4;
    }
L_089078E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7112))))));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[31] = (0x089078FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 286u, 0x088EDFC8u>(ctx, &aot_mem) && ctx.pc == 0x089078FCu) goto L_089078FC;
    return;
L_089078FC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[31] = (0x08907910u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2740));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08907910u) goto L_08907910;
    return;
L_08907910:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x0890793Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0890793Cu) goto L_0890793C;
    return;
L_0890793C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907B80;
      }
      goto L_08907944;
    }
L_08907944:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(106)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907964;
      }
      goto L_08907954;
    }
L_08907954:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7116))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890796C;
      }
      goto L_08907964;
    }
L_08907964:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907B80;
      }
      goto L_0890796C;
    }
L_0890796C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6857), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(121)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089079C4;
      }
      goto L_08907984;
    }
L_08907984:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089079C4;
      }
      goto L_08907994;
    }
L_08907994:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32190))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(428), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08907A20;
      }
      goto L_089079C4;
    }
L_089079C4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089079F8;
      }
      goto L_089079CC;
    }
L_089079CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(428), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08907A20;
      }
      goto L_089079F8;
    }
L_089079F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7112))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(428), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08907A20;
L_08907A20:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(736));
    ctx.gpr[31] = (0x08907A60u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2448));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08907A60u) goto L_08907A60;
    return;
L_08907A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(996), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(752));
    ctx.gpr[31] = (0x08907A94u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2464));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08907A94u) goto L_08907A94;
    return;
L_08907A94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(768));
    ctx.gpr[31] = (0x08907AC0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2480));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08907AC0u) goto L_08907AC0;
    return;
L_08907AC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(418), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(784));
      if (branch_taken) {
          goto L_08907B00;
      }
      goto L_08907AF4;
    }
L_08907AF4:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08907B04;
      }
      goto L_08907B00;
    }
L_08907B00:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    goto L_08907B04;
L_08907B04:
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08907B28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(784));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 480u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08907B28u) goto L_08907B28;
    return;
L_08907B28:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[31] = (0x08907B44u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2740));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08907B44u) goto L_08907B44;
    return;
L_08907B44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x08907B70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08907B70u) goto L_08907B70;
    return;
L_08907B70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08907B80;
L_08907B80:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907BE0;
      }
      goto L_08907BB0;
    }
L_08907BB0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(996), ctx.gpr[4]);
    goto L_08907BE0;
L_08907BE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907D40;
      }
      goto L_08907C10;
    }
L_08907C10:
    ctx.gpr[31] = (0x08907C18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 406u, 0x08AF9C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08907C18u) goto L_08907C18;
    return;
L_08907C18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907D64;
      }
      goto L_08907C20;
    }
L_08907C20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907D40;
      }
      goto L_08907C50;
    }
L_08907C50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907D40;
      }
      goto L_08907C80;
    }
L_08907C80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907D40;
      }
      goto L_08907CB0;
    }
L_08907CB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907D40;
      }
      goto L_08907CE0;
    }
L_08907CE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907D40;
      }
      goto L_08907D10;
    }
L_08907D10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907D64;
      }
      goto L_08907D40;
    }
L_08907D40:
    ctx.gpr[31] = (0x08907D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08907D48u) goto L_08907D48;
    return;
L_08907D48:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (65528u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08907D80;
      }
      goto L_08907D64;
    }
L_08907D64:
    ctx.gpr[31] = (0x08907D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08907D6Cu) goto L_08907D6C;
    return;
L_08907D6C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08907D80;
L_08907D80:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907DB4;
      }
      goto L_08907D8C;
    }
L_08907D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907DB4;
      }
      goto L_08907D9C;
    }
L_08907D9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08907DA8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 248u, 0x088EDC30u>(ctx, &aot_mem) && ctx.pc == 0x08907DA8u) goto L_08907DA8;
    return;
L_08907DA8:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x08907DB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 494u, 0x088EF0C0u>(ctx, &aot_mem) && ctx.pc == 0x08907DB4u) goto L_08907DB4;
    return;
L_08907DB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2020)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08907E4C;
      }
      goto L_08907DE4;
    }
L_08907DE4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907E4C;
      }
      goto L_08907DEC;
    }
L_08907DEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907E4C;
      }
      goto L_08907E1C;
    }
L_08907E1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907EF4;
      }
      goto L_08907E4C;
    }
L_08907E4C:
    ctx.gpr[31] = (0x08907E54u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08907E54u) goto L_08907E54;
    return;
L_08907E54:
    ctx.gpr[31] = (0x08907E5Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 29u, 0x08A980F4u>(ctx, &aot_mem) && ctx.pc == 0x08907E5Cu) goto L_08907E5C;
    return;
L_08907E5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907EF4;
      }
      goto L_08907E64;
    }
L_08907E64:
    ctx.gpr[31] = (0x08907E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 780u, 0x08AFB488u>(ctx, &aot_mem) && ctx.pc == 0x08907E6Cu) goto L_08907E6C;
    return;
L_08907E6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907EF4;
      }
      goto L_08907E74;
    }
L_08907E74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(117)));
        goto L_08907E98;
    }
    goto L_08907E84;
L_08907E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907EF4;
      }
      goto L_08907E94;
    }
L_08907E94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(117)));
    goto L_08907E98;
L_08907E98:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907EF4;
      }
      goto L_08907EA0;
    }
L_08907EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907EE0;
      }
      goto L_08907EB0;
    }
L_08907EB0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22556)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907EF4;
      }
      goto L_08907EC4;
    }
L_08907EC4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (0u | 179u);
    ctx.gpr[31] = (0x08907ED8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08907ED8u) goto L_08907ED8;
    return;
L_08907ED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907EF4;
      }
      goto L_08907EE0;
    }
L_08907EE0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (0u | 179u);
    ctx.gpr[31] = (0x08907EF4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08907EF4u) goto L_08907EF4;
    return;
L_08907EF4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2048)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2052)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2056)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2060)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2064)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2076)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2080)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2084)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2088)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2092)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907F34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[5] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(115), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(7072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(7076), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13216));
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(2448));
    ctx.gpr[7] = (ctx.gpr[20] + static_cast<std::uint32_t>(2464));
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(2480));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[22] = (0u | 18u);
    ctx.gpr[23] = (0u | 4u);
    ctx.gpr[30] = (0u | 11u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2512));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(2528));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(2544));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.pc = 0x08908000u; return;
}

void recomp_unit_0064(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0064_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_64(Runtime &runtime) {
    runtime.register_generated_unit(64u, 0x08904000u, 16384u, &recomp_unit_0064, &recomp_unit_0064_entry);
    runtime.register_function(0x08904004u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904034u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904040u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904070u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904074u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890407Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904088u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904114u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904118u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904134u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890414Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904154u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890419Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904218u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890422Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904240u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890424Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904254u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904274u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890427Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904284u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890428Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890429Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904304u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890430Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904314u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904324u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904334u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904338u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904340u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890434Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904358u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890436Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904388u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904398u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904410u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904420u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890443Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904448u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904450u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904460u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904468u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890447Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904488u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904498u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904524u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904530u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890453Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904568u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890459Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890460Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904640u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890464Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904680u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904684u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890470Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904718u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904720u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904728u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904734u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904738u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904740u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904754u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904760u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890476Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890477Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890478Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904798u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904804u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890480Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890481Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904824u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904830u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904840u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904854u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904884u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890488Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904904u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890490Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904924u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904938u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904948u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904958u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904988u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890499Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A60u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904ABCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BCCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C40u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CD0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DD0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E4Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904EA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904EC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904ECCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904ED8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904EE8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904EF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F40u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FDCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FF8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905004u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905030u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905038u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905060u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890506Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905078u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905094u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890509Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905100u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890510Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905114u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905124u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905134u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905144u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905154u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905164u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905174u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890519Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890521Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905224u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905234u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905244u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905254u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905268u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905280u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890528Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890529Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905304u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890530Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905314u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890531Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905324u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905330u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905338u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905344u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890534Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905358u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905364u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890536Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905384u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905400u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905430u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905440u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905448u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890545Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905468u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905474u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905480u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905494u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905510u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890554Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905554u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890555Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905568u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905580u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905590u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905598u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089055ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089055BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089055D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089055D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089055E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089055F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905634u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905640u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905650u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905660u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890566Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905680u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905688u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905694u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905728u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905730u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890573Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890574Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890577Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905788u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089057B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089057C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089057D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089057DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089057F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905808u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905814u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905820u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905830u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890583Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890584Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905854u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890586Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890590Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905920u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905930u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905940u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905950u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905960u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905970u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905980u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905990u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905ACCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905AD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B4Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C40u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D14u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E40u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E60u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905ED8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F14u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FCCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FF0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906004u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890600Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906020u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906050u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906058u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906060u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906068u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906070u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890607Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890608Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890609Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906110u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906124u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906168u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906178u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906208u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906238u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906240u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906254u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906284u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906300u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906330u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906334u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906348u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906358u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906368u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906378u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906388u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906398u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906408u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906410u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906418u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906420u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906434u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906444u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906474u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906504u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906534u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890653Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890656Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890659Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890662Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890665Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890668Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906690u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906698u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906728u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906730u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906738u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890673Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890676Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890679Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890682Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890685Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890688Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089068BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089068ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890691Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890694Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890697Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089069ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089069DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906AB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906AE8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906BA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906BD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906CC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906CECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E14u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E40u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906EA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906ED8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906EE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906EF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906EFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FF8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907004u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907018u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907034u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890704Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907064u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890706Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907074u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890707Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907088u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890710Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907118u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907124u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907130u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907144u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907154u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907164u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907174u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907184u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907194u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907244u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907278u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907314u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890736Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907398u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907404u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907410u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907440u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907458u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907488u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890748Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907500u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907508u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907520u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907528u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907540u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907548u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907564u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890756Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907574u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890757Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907594u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907600u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890762Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907634u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907648u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890767Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907688u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907694u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907704u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890771Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890772Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907740u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907774u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890777Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890778Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890779Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890780Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907824u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890782Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907838u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907848u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907858u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907870u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907884u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907910u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890793Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907944u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907954u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907964u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890796Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907984u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907994u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A60u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907AC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907AF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D40u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D8Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E4Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907ED8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F34u, &recomp_unit_0064, "recomp_unit_0064");
}
} // namespace psprecomp
