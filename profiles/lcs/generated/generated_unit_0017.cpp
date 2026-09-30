#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0017[4092] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 17, 0, 0, 0, 18, 0, 0,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0,
    0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49,
    50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0,
    0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66,
    0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82,
    0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98,
    0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0,
    110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0,
    0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0,
    0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 177, 0, 178, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 198, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 213,
    0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0,
    219, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230,
    0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 244,
    0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0,
    0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 256, 257, 0, 258, 0, 0, 259, 0, 260, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0,
    269, 0, 270, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 275, 0, 276, 0, 0, 277, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 282, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 0, 287,
    0, 0, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0, 296, 0,
    297, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 301, 0, 302, 0, 0, 303, 0, 0, 304, 0, 305, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 0, 316, 0, 317, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 323, 0, 0, 324, 0, 325,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    329, 0, 330, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333,
    0, 334, 0, 335, 0, 0, 336, 0, 337, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 343, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346,
    0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0,
    0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 359, 360, 0, 361, 0,
    0, 0, 0, 362, 0, 0, 363, 0, 364, 0, 365, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 370, 371, 0, 372, 0, 0,
    0, 0, 373, 0, 0, 374, 0, 375, 0, 376, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 381, 382, 0, 383, 0, 0, 0,
    0, 384, 0, 0, 385, 0, 386, 0, 387, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 392, 393, 0, 394, 0, 0, 0, 0,
    395, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 402, 0, 403, 404, 0, 405, 0, 0, 0, 0, 406,
    0, 0, 407, 0, 408, 0, 409, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 414, 415, 0, 416, 0, 0, 0, 0, 417, 0,
    0, 418, 0, 419, 0, 420, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 424, 0, 425, 426, 0, 427, 0, 0, 0, 0, 428, 0, 0,
    429, 0, 430, 0, 431, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 436, 437, 0, 438, 0, 0, 0, 0, 439, 0, 0, 440,
    0, 441, 0, 442, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0, 447, 448, 0, 449, 0, 0, 0, 0, 450, 0, 0, 451, 0,
    452, 453, 0, 454, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 461, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 468, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471,
    0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 475, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 487, 0, 488, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 490, 0, 491, 0, 0, 0, 492, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 497, 0, 498,
    0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 507, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0,
    512, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 517, 0, 518, 0, 519, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 522, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0,
    0, 0, 527, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 532, 0, 533, 0, 534, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 537, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540,
    0, 541, 0, 0, 0, 542, 0, 543, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 547, 0, 548, 0,
    549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 552, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0,
    0, 0, 562, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 568, 0, 569, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 572, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575,
    0, 576, 0, 0, 0, 577, 0, 578, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 582, 0, 0, 583, 0,
    0, 584, 0, 585, 0, 586, 0, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 589, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 592, 0, 593, 0, 0, 0, 594, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 598, 0, 0, 0, 599,
    0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0, 604, 0, 605, 0, 606, 0, 0, 607, 0, 0, 608,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 614, 0, 615, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0,
    0, 0, 621, 0, 622, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 627, 0, 628, 0, 0, 629, 0, 630,
    0, 0, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 635, 0, 636,
    0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0,
    0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 0, 652, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 658, 0, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 662,
    663, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 668, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0,
    670, 0, 671, 0, 0, 0, 0, 672, 0, 673, 0, 0, 674, 0, 675, 0, 0, 0, 0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 0, 678, 0,
    0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0, 690, 0, 691, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 693, 0, 694, 0, 0, 0, 695, 0, 696, 0, 697, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0,
    0, 0, 0, 0, 702, 0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 707, 0, 708, 0,
    709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 0, 0, 717, 0, 718, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    720, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 723, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0,
    0, 0, 727, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 731, 0, 0, 0, 0, 0, 0, 732, 0, 733, 0,
    734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 737, 0, 738, 0, 739, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 740, 0, 741, 0, 0, 0, 0, 742, 0, 743, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745,
    0, 746, 0, 0, 0, 747, 0, 748, 0, 749, 0, 0, 750, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 753, 0, 0, 0, 0,
    754, 0, 755, 0, 756, 0, 0, 0, 757, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 761, 0, 762, 0,
    763, 0, 0, 0, 764, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 768, 0, 769, 0, 770, 0, 0, 0,
    771, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 774, 0, 0, 0, 0, 775, 0, 776, 0, 777, 0, 0, 0, 778, 0, 0, 779,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 781, 0, 0, 0, 0, 782, 0, 783, 0, 784, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 787, 0, 788, 0, 0, 0, 0, 789, 0, 790, 0, 791, 0, 0, 0, 792, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 794, 0, 795, 0, 0, 0, 0, 796, 0, 797, 0, 798, 0, 0, 0, 799, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 0, 0, 801, 0, 802,
    0, 0, 0, 0, 803, 0, 804, 0, 805, 0, 0, 0, 806, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 809, 0, 0, 0, 0,
    810, 0, 811, 0, 812, 0, 0, 0, 813, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 817, 0, 818, 0,
    819, 0, 0, 0, 820, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 823, 0, 0, 0, 0, 824, 0, 825, 0, 826, 0, 0, 0,
    827, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 830, 0, 0, 0, 0, 831, 0, 832, 0, 833, 0, 0, 0, 834, 0, 0, 835,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 837, 0, 0, 0, 0, 838, 0, 839, 0, 840, 0, 0, 0, 841, 0, 0, 842, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 843, 0, 844, 0, 0, 0, 0, 845, 0, 846, 0, 847, 0, 0, 0, 848, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 850, 0, 851, 0, 0, 0, 0, 852, 0, 853, 0, 854, 0, 0, 0, 855, 0, 0, 856, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 858,
    0, 0, 0, 0, 859, 0, 860, 0, 861, 0, 0, 0, 862, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 865,
};
void recomp_unit_0017_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08848004u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0017[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08848004;
    case 2u: goto L_0884801C;
    case 3u: goto L_08848034;
    case 4u: goto L_0884804C;
    case 5u: goto L_08848064;
    case 6u: goto L_0884807C;
    case 7u: goto L_08848094;
    case 8u: goto L_088480AC;
    case 9u: goto L_088480C4;
    case 10u: goto L_088480DC;
    case 11u: goto L_088480F4;
    case 12u: goto L_0884810C;
    case 13u: goto L_08848124;
    case 14u: goto L_0884813C;
    case 15u: goto L_08848154;
    case 16u: goto L_0884815C;
    case 17u: goto L_08848168;
    case 18u: goto L_08848178;
    case 19u: goto L_0884818C;
    case 20u: goto L_088481A8;
    case 21u: goto L_088481E0;
    case 22u: goto L_088481F8;
    case 23u: goto L_08848210;
    case 24u: goto L_08848228;
    case 25u: goto L_08848240;
    case 26u: goto L_08848258;
    case 27u: goto L_08848270;
    case 28u: goto L_08848288;
    case 29u: goto L_088482A0;
    case 30u: goto L_088482B8;
    case 31u: goto L_088482D0;
    case 32u: goto L_088482E8;
    case 33u: goto L_08848300;
    case 34u: goto L_08848318;
    case 35u: goto L_08848330;
    case 36u: goto L_08848348;
    case 37u: goto L_08848360;
    case 38u: goto L_08848378;
    case 39u: goto L_08848390;
    case 40u: goto L_088483A8;
    case 41u: goto L_088483C0;
    case 42u: goto L_088483D8;
    case 43u: goto L_088483F0;
    case 44u: goto L_08848408;
    case 45u: goto L_08848420;
    case 46u: goto L_08848438;
    case 47u: goto L_08848450;
    case 48u: goto L_08848468;
    case 49u: goto L_08848480;
    case 50u: goto L_08848484;
    case 51u: goto L_08848498;
    case 52u: goto L_088484B0;
    case 53u: goto L_088484C8;
    case 54u: goto L_088484E0;
    case 55u: goto L_088484F8;
    case 56u: goto L_08848510;
    case 57u: goto L_08848528;
    case 58u: goto L_08848540;
    case 59u: goto L_08848558;
    case 60u: goto L_08848570;
    case 61u: goto L_08848588;
    case 62u: goto L_088485A0;
    case 63u: goto L_088485B8;
    case 64u: goto L_088485D0;
    case 65u: goto L_088485E8;
    case 66u: goto L_08848600;
    case 67u: goto L_08848618;
    case 68u: goto L_08848630;
    case 69u: goto L_08848648;
    case 70u: goto L_08848660;
    case 71u: goto L_08848678;
    case 72u: goto L_08848690;
    case 73u: goto L_088486A8;
    case 74u: goto L_088486C0;
    case 75u: goto L_088486D8;
    case 76u: goto L_088486F0;
    case 77u: goto L_08848708;
    case 78u: goto L_08848720;
    case 79u: goto L_08848738;
    case 80u: goto L_08848750;
    case 81u: goto L_08848768;
    case 82u: goto L_08848780;
    case 83u: goto L_08848798;
    case 84u: goto L_088487B0;
    case 85u: goto L_088487C8;
    case 86u: goto L_088487E0;
    case 87u: goto L_088487F8;
    case 88u: goto L_08848810;
    case 89u: goto L_08848828;
    case 90u: goto L_08848840;
    case 91u: goto L_08848858;
    case 92u: goto L_08848870;
    case 93u: goto L_08848888;
    case 94u: goto L_088488A0;
    case 95u: goto L_088488B8;
    case 96u: goto L_088488D0;
    case 97u: goto L_088488E8;
    case 98u: goto L_08848900;
    case 99u: goto L_08848918;
    case 100u: goto L_08848930;
    case 101u: goto L_08848948;
    case 102u: goto L_08848960;
    case 103u: goto L_08848978;
    case 104u: goto L_08848990;
    case 105u: goto L_088489A0;
    case 106u: goto L_088489B0;
    case 107u: goto L_088489C0;
    case 108u: goto L_088489D4;
    case 109u: goto L_088489EC;
    case 110u: goto L_08848A04;
    case 111u: goto L_08848A1C;
    case 112u: goto L_08848A34;
    case 113u: goto L_08848A4C;
    case 114u: goto L_08848A64;
    case 115u: goto L_08848A7C;
    case 116u: goto L_08848A94;
    case 117u: goto L_08848AAC;
    case 118u: goto L_08848AC4;
    case 119u: goto L_08848ADC;
    case 120u: goto L_08848AF4;
    case 121u: goto L_08848B0C;
    case 122u: goto L_08848B24;
    case 123u: goto L_08848B3C;
    case 124u: goto L_08848B54;
    case 125u: goto L_08848B6C;
    case 126u: goto L_08848B84;
    case 127u: goto L_08848B9C;
    case 128u: goto L_08848BB4;
    case 129u: goto L_08848BCC;
    case 130u: goto L_08848BE4;
    case 131u: goto L_08848BFC;
    case 132u: goto L_08848C14;
    case 133u: goto L_08848C2C;
    case 134u: goto L_08848C44;
    case 135u: goto L_08848C5C;
    case 136u: goto L_08848C74;
    case 137u: goto L_08848C8C;
    case 138u: goto L_08848CA4;
    case 139u: goto L_08848CBC;
    case 140u: goto L_08848CD4;
    case 141u: goto L_08848CEC;
    case 142u: goto L_08848D04;
    case 143u: goto L_08848D1C;
    case 144u: goto L_08848D34;
    case 145u: goto L_08848D4C;
    case 146u: goto L_08848D64;
    case 147u: goto L_08848D7C;
    case 148u: goto L_08848D94;
    case 149u: goto L_08848DAC;
    case 150u: goto L_08848DBC;
    case 151u: goto L_08848DCC;
    case 152u: goto L_08848DE0;
    case 153u: goto L_08848DFC;
    case 154u: goto L_08848E2C;
    case 155u: goto L_08848E50;
    case 156u: goto L_08848E5C;
    case 157u: goto L_08848E64;
    case 158u: goto L_08848E8C;
    case 159u: goto L_08848E94;
    case 160u: goto L_08848EC4;
    case 161u: goto L_08848ECC;
    case 162u: goto L_08848F0C;
    case 163u: goto L_08848F5C;
    case 164u: goto L_08848F64;
    case 165u: goto L_08848F90;
    case 166u: goto L_08848F98;
    case 167u: goto L_08848FC4;
    case 168u: goto L_08848FCC;
    case 169u: goto L_08848FD8;
    case 170u: goto L_08848FE4;
    case 171u: goto L_08848FEC;
    case 172u: goto L_0884901C;
    case 173u: goto L_08849024;
    case 174u: goto L_08849054;
    case 175u: goto L_0884905C;
    case 176u: goto L_08849068;
    case 177u: goto L_08849074;
    case 178u: goto L_0884907C;
    case 179u: goto L_088490B8;
    case 180u: goto L_088490C0;
    case 181u: goto L_08849118;
    case 182u: goto L_08849120;
    case 183u: goto L_08849130;
    case 184u: goto L_08849138;
    case 185u: goto L_08849144;
    case 186u: goto L_0884914C;
    case 187u: goto L_0884917C;
    case 188u: goto L_08849184;
    case 189u: goto L_088491B4;
    case 190u: goto L_088491BC;
    case 191u: goto L_088491C4;
    case 192u: goto L_088491D0;
    case 193u: goto L_088491D8;
    case 194u: goto L_08849208;
    case 195u: goto L_08849210;
    case 196u: goto L_08849240;
    case 197u: goto L_08849248;
    case 198u: goto L_08849254;
    case 199u: goto L_08849260;
    case 200u: goto L_08849268;
    case 201u: goto L_08849298;
    case 202u: goto L_088492A0;
    case 203u: goto L_088492D0;
    case 204u: goto L_088492D8;
    case 205u: goto L_088492E4;
    case 206u: goto L_088492F0;
    case 207u: goto L_088492F8;
    case 208u: goto L_08849328;
    case 209u: goto L_08849330;
    case 210u: goto L_08849360;
    case 211u: goto L_08849368;
    case 212u: goto L_08849374;
    case 213u: goto L_08849380;
    case 214u: goto L_08849388;
    case 215u: goto L_088493B8;
    case 216u: goto L_088493C0;
    case 217u: goto L_088493F0;
    case 218u: goto L_088493F8;
    case 219u: goto L_08849404;
    case 220u: goto L_0884941C;
    case 221u: goto L_08849424;
    case 222u: goto L_08849454;
    case 223u: goto L_0884945C;
    case 224u: goto L_08849488;
    case 225u: goto L_08849494;
    case 226u: goto L_088494B4;
    case 227u: goto L_088494BC;
    case 228u: goto L_088494C4;
    case 229u: goto L_088494F8;
    case 230u: goto L_08849500;
    case 231u: goto L_08849514;
    case 232u: goto L_08849534;
    case 233u: goto L_0884954C;
    case 234u: goto L_0884955C;
    case 235u: goto L_08849564;
    case 236u: goto L_0884956C;
    case 237u: goto L_0884957C;
    case 238u: goto L_08849594;
    case 239u: goto L_088495B0;
    case 240u: goto L_088495B8;
    case 241u: goto L_088495D4;
    case 242u: goto L_088495DC;
    case 243u: goto L_088495F8;
    case 244u: goto L_08849600;
    case 245u: goto L_0884961C;
    case 246u: goto L_08849624;
    case 247u: goto L_08849640;
    case 248u: goto L_08849648;
    case 249u: goto L_08849664;
    case 250u: goto L_0884966C;
    case 251u: goto L_08849688;
    case 252u: goto L_08849690;
    case 253u: goto L_088496AC;
    case 254u: goto L_088496B4;
    case 255u: goto L_088496D0;
    case 256u: goto L_088496D8;
    case 257u: goto L_088496DC;
    case 258u: goto L_088496E4;
    case 259u: goto L_088496F0;
    case 260u: goto L_088496F8;
    case 261u: goto L_08849768;
    case 262u: goto L_08849770;
    case 263u: goto L_088497A4;
    case 264u: goto L_088497AC;
    case 265u: goto L_088497BC;
    case 266u: goto L_088497C4;
    case 267u: goto L_088497CC;
    case 268u: goto L_088497FC;
    case 269u: goto L_08849804;
    case 270u: goto L_0884980C;
    case 271u: goto L_08849818;
    case 272u: goto L_08849820;
    case 273u: goto L_08849850;
    case 274u: goto L_08849858;
    case 275u: goto L_08849888;
    case 276u: goto L_08849890;
    case 277u: goto L_0884989C;
    case 278u: goto L_088498A8;
    case 279u: goto L_088498B0;
    case 280u: goto L_088498E0;
    case 281u: goto L_088498E8;
    case 282u: goto L_088498F8;
    case 283u: goto L_08849930;
    case 284u: goto L_08849958;
    case 285u: goto L_08849960;
    case 286u: goto L_0884996C;
    case 287u: goto L_08849980;
    case 288u: goto L_08849990;
    case 289u: goto L_08849998;
    case 290u: goto L_088499A0;
    case 291u: goto L_088499A8;
    case 292u: goto L_088499B0;
    case 293u: goto L_088499E0;
    case 294u: goto L_088499E8;
    case 295u: goto L_088499F0;
    case 296u: goto L_088499FC;
    case 297u: goto L_08849A04;
    case 298u: goto L_08849A08;
    case 299u: goto L_08849A44;
    case 300u: goto L_08849A4C;
    case 301u: goto L_08849A88;
    case 302u: goto L_08849A90;
    case 303u: goto L_08849A9C;
    case 304u: goto L_08849AA8;
    case 305u: goto L_08849AB0;
    case 306u: goto L_08849AB4;
    case 307u: goto L_08849AF0;
    case 308u: goto L_08849AF8;
    case 309u: goto L_08849B34;
    case 310u: goto L_08849B3C;
    case 311u: goto L_08849B48;
    case 312u: goto L_08849B50;
    case 313u: goto L_08849BB0;
    case 314u: goto L_08849BB8;
    case 315u: goto L_08849BC0;
    case 316u: goto L_08849BCC;
    case 317u: goto L_08849BD4;
    case 318u: goto L_08849BD8;
    case 319u: goto L_08849C14;
    case 320u: goto L_08849C1C;
    case 321u: goto L_08849C58;
    case 322u: goto L_08849C60;
    case 323u: goto L_08849C6C;
    case 324u: goto L_08849C78;
    case 325u: goto L_08849C80;
    case 326u: goto L_08849C84;
    case 327u: goto L_08849CC0;
    case 328u: goto L_08849CC8;
    case 329u: goto L_08849D04;
    case 330u: goto L_08849D0C;
    case 331u: goto L_08849D18;
    case 332u: goto L_08849D20;
    case 333u: goto L_08849D80;
    case 334u: goto L_08849D88;
    case 335u: goto L_08849D90;
    case 336u: goto L_08849D9C;
    case 337u: goto L_08849DA4;
    case 338u: goto L_08849DA8;
    case 339u: goto L_08849DE4;
    case 340u: goto L_08849DEC;
    case 341u: goto L_08849E28;
    case 342u: goto L_08849E30;
    case 343u: goto L_08849E3C;
    case 344u: goto L_08849E48;
    case 345u: goto L_08849E50;
    case 346u: goto L_08849E80;
    case 347u: goto L_08849E88;
    case 348u: goto L_08849EB8;
    case 349u: goto L_08849EC0;
    case 350u: goto L_08849ECC;
    case 351u: goto L_08849EE4;
    case 352u: goto L_08849F08;
    case 353u: goto L_08849F28;
    case 354u: goto L_08849F30;
    case 355u: goto L_08849F38;
    case 356u: goto L_08849F50;
    case 357u: goto L_08849F5C;
    case 358u: goto L_08849F68;
    case 359u: goto L_08849F70;
    case 360u: goto L_08849F74;
    case 361u: goto L_08849F7C;
    case 362u: goto L_08849F90;
    case 363u: goto L_08849F9C;
    case 364u: goto L_08849FA4;
    case 365u: goto L_08849FAC;
    case 366u: goto L_08849FB4;
    case 367u: goto L_08849FCC;
    case 368u: goto L_08849FD8;
    case 369u: goto L_08849FE4;
    case 370u: goto L_08849FEC;
    case 371u: goto L_08849FF0;
    case 372u: goto L_08849FF8;
    case 373u: goto L_0884A00C;
    case 374u: goto L_0884A018;
    case 375u: goto L_0884A020;
    case 376u: goto L_0884A028;
    case 377u: goto L_0884A030;
    case 378u: goto L_0884A048;
    case 379u: goto L_0884A054;
    case 380u: goto L_0884A060;
    case 381u: goto L_0884A068;
    case 382u: goto L_0884A06C;
    case 383u: goto L_0884A074;
    case 384u: goto L_0884A088;
    case 385u: goto L_0884A094;
    case 386u: goto L_0884A09C;
    case 387u: goto L_0884A0A4;
    case 388u: goto L_0884A0AC;
    case 389u: goto L_0884A0C4;
    case 390u: goto L_0884A0D0;
    case 391u: goto L_0884A0DC;
    case 392u: goto L_0884A0E4;
    case 393u: goto L_0884A0E8;
    case 394u: goto L_0884A0F0;
    case 395u: goto L_0884A104;
    case 396u: goto L_0884A110;
    case 397u: goto L_0884A118;
    case 398u: goto L_0884A120;
    case 399u: goto L_0884A128;
    case 400u: goto L_0884A140;
    case 401u: goto L_0884A14C;
    case 402u: goto L_0884A158;
    case 403u: goto L_0884A160;
    case 404u: goto L_0884A164;
    case 405u: goto L_0884A16C;
    case 406u: goto L_0884A180;
    case 407u: goto L_0884A18C;
    case 408u: goto L_0884A194;
    case 409u: goto L_0884A19C;
    case 410u: goto L_0884A1A4;
    case 411u: goto L_0884A1BC;
    case 412u: goto L_0884A1C8;
    case 413u: goto L_0884A1D4;
    case 414u: goto L_0884A1DC;
    case 415u: goto L_0884A1E0;
    case 416u: goto L_0884A1E8;
    case 417u: goto L_0884A1FC;
    case 418u: goto L_0884A208;
    case 419u: goto L_0884A210;
    case 420u: goto L_0884A218;
    case 421u: goto L_0884A220;
    case 422u: goto L_0884A238;
    case 423u: goto L_0884A244;
    case 424u: goto L_0884A250;
    case 425u: goto L_0884A258;
    case 426u: goto L_0884A25C;
    case 427u: goto L_0884A264;
    case 428u: goto L_0884A278;
    case 429u: goto L_0884A284;
    case 430u: goto L_0884A28C;
    case 431u: goto L_0884A294;
    case 432u: goto L_0884A29C;
    case 433u: goto L_0884A2B4;
    case 434u: goto L_0884A2C0;
    case 435u: goto L_0884A2CC;
    case 436u: goto L_0884A2D4;
    case 437u: goto L_0884A2D8;
    case 438u: goto L_0884A2E0;
    case 439u: goto L_0884A2F4;
    case 440u: goto L_0884A300;
    case 441u: goto L_0884A308;
    case 442u: goto L_0884A310;
    case 443u: goto L_0884A318;
    case 444u: goto L_0884A330;
    case 445u: goto L_0884A33C;
    case 446u: goto L_0884A348;
    case 447u: goto L_0884A350;
    case 448u: goto L_0884A354;
    case 449u: goto L_0884A35C;
    case 450u: goto L_0884A370;
    case 451u: goto L_0884A37C;
    case 452u: goto L_0884A384;
    case 453u: goto L_0884A388;
    case 454u: goto L_0884A390;
    case 455u: goto L_0884A39C;
    case 456u: goto L_0884A3A4;
    case 457u: goto L_0884A3E0;
    case 458u: goto L_0884A3E8;
    case 459u: goto L_0884A418;
    case 460u: goto L_0884A420;
    case 461u: goto L_0884A42C;
    case 462u: goto L_0884A438;
    case 463u: goto L_0884A440;
    case 464u: goto L_0884A470;
    case 465u: goto L_0884A478;
    case 466u: goto L_0884A4A8;
    case 467u: goto L_0884A4B0;
    case 468u: goto L_0884A4BC;
    case 469u: goto L_0884A4C8;
    case 470u: goto L_0884A4D0;
    case 471u: goto L_0884A500;
    case 472u: goto L_0884A508;
    case 473u: goto L_0884A538;
    case 474u: goto L_0884A540;
    case 475u: goto L_0884A54C;
    case 476u: goto L_0884A558;
    case 477u: goto L_0884A560;
    case 478u: goto L_0884A590;
    case 479u: goto L_0884A598;
    case 480u: goto L_0884A5C8;
    case 481u: goto L_0884A5D0;
    case 482u: goto L_0884A5EC;
    case 483u: goto L_0884A5F4;
    case 484u: goto L_0884A5FC;
    case 485u: goto L_0884A630;
    case 486u: goto L_0884A638;
    case 487u: goto L_0884A648;
    case 488u: goto L_0884A650;
    case 489u: goto L_0884A658;
    case 490u: goto L_0884A688;
    case 491u: goto L_0884A690;
    case 492u: goto L_0884A6A0;
    case 493u: goto L_0884A6A8;
    case 494u: goto L_0884A6B0;
    case 495u: goto L_0884A6E0;
    case 496u: goto L_0884A6E8;
    case 497u: goto L_0884A6F8;
    case 498u: goto L_0884A700;
    case 499u: goto L_0884A708;
    case 500u: goto L_0884A738;
    case 501u: goto L_0884A740;
    case 502u: goto L_0884A750;
    case 503u: goto L_0884A758;
    case 504u: goto L_0884A760;
    case 505u: goto L_0884A794;
    case 506u: goto L_0884A79C;
    case 507u: goto L_0884A7AC;
    case 508u: goto L_0884A7B4;
    case 509u: goto L_0884A7BC;
    case 510u: goto L_0884A7EC;
    case 511u: goto L_0884A7F4;
    case 512u: goto L_0884A804;
    case 513u: goto L_0884A80C;
    case 514u: goto L_0884A814;
    case 515u: goto L_0884A844;
    case 516u: goto L_0884A84C;
    case 517u: goto L_0884A85C;
    case 518u: goto L_0884A864;
    case 519u: goto L_0884A86C;
    case 520u: goto L_0884A89C;
    case 521u: goto L_0884A8A4;
    case 522u: goto L_0884A8B4;
    case 523u: goto L_0884A8BC;
    case 524u: goto L_0884A8C4;
    case 525u: goto L_0884A8F4;
    case 526u: goto L_0884A8FC;
    case 527u: goto L_0884A90C;
    case 528u: goto L_0884A914;
    case 529u: goto L_0884A91C;
    case 530u: goto L_0884A94C;
    case 531u: goto L_0884A954;
    case 532u: goto L_0884A964;
    case 533u: goto L_0884A96C;
    case 534u: goto L_0884A974;
    case 535u: goto L_0884A9A8;
    case 536u: goto L_0884A9B0;
    case 537u: goto L_0884A9C0;
    case 538u: goto L_0884A9C8;
    case 539u: goto L_0884A9D0;
    case 540u: goto L_0884AA00;
    case 541u: goto L_0884AA08;
    case 542u: goto L_0884AA18;
    case 543u: goto L_0884AA20;
    case 544u: goto L_0884AA28;
    case 545u: goto L_0884AA5C;
    case 546u: goto L_0884AA64;
    case 547u: goto L_0884AA74;
    case 548u: goto L_0884AA7C;
    case 549u: goto L_0884AA84;
    case 550u: goto L_0884AAC0;
    case 551u: goto L_0884AAC8;
    case 552u: goto L_0884AAD8;
    case 553u: goto L_0884AAE0;
    case 554u: goto L_0884AAE8;
    case 555u: goto L_0884AB18;
    case 556u: goto L_0884AB20;
    case 557u: goto L_0884AB30;
    case 558u: goto L_0884AB38;
    case 559u: goto L_0884AB40;
    case 560u: goto L_0884AB74;
    case 561u: goto L_0884AB7C;
    case 562u: goto L_0884AB8C;
    case 563u: goto L_0884AB94;
    case 564u: goto L_0884AB9C;
    case 565u: goto L_0884ABCC;
    case 566u: goto L_0884ABD4;
    case 567u: goto L_0884ABE4;
    case 568u: goto L_0884ABEC;
    case 569u: goto L_0884ABF4;
    case 570u: goto L_0884AC28;
    case 571u: goto L_0884AC30;
    case 572u: goto L_0884AC40;
    case 573u: goto L_0884AC48;
    case 574u: goto L_0884AC50;
    case 575u: goto L_0884AC80;
    case 576u: goto L_0884AC88;
    case 577u: goto L_0884AC98;
    case 578u: goto L_0884ACA0;
    case 579u: goto L_0884ACA8;
    case 580u: goto L_0884ACD8;
    case 581u: goto L_0884ACE0;
    case 582u: goto L_0884ACF0;
    case 583u: goto L_0884ACFC;
    case 584u: goto L_0884AD08;
    case 585u: goto L_0884AD10;
    case 586u: goto L_0884AD18;
    case 587u: goto L_0884AD38;
    case 588u: goto L_0884AD40;
    case 589u: goto L_0884AD50;
    case 590u: goto L_0884AD58;
    case 591u: goto L_0884AD60;
    case 592u: goto L_0884AD90;
    case 593u: goto L_0884AD98;
    case 594u: goto L_0884ADA8;
    case 595u: goto L_0884ADB0;
    case 596u: goto L_0884ADB8;
    case 597u: goto L_0884ADE8;
    case 598u: goto L_0884ADF0;
    case 599u: goto L_0884AE00;
    case 600u: goto L_0884AE08;
    case 601u: goto L_0884AE10;
    case 602u: goto L_0884AE40;
    case 603u: goto L_0884AE48;
    case 604u: goto L_0884AE58;
    case 605u: goto L_0884AE60;
    case 606u: goto L_0884AE68;
    case 607u: goto L_0884AE74;
    case 608u: goto L_0884AE80;
    case 609u: goto L_0884AEA8;
    case 610u: goto L_0884AEB0;
    case 611u: goto L_0884AEC8;
    case 612u: goto L_0884AED0;
    case 613u: goto L_0884AED8;
    case 614u: goto L_0884AF08;
    case 615u: goto L_0884AF10;
    case 616u: goto L_0884AF18;
    case 617u: goto L_0884AF20;
    case 618u: goto L_0884AF50;
    case 619u: goto L_0884AF58;
    case 620u: goto L_0884AF68;
    case 621u: goto L_0884AF8C;
    case 622u: goto L_0884AF94;
    case 623u: goto L_0884AF9C;
    case 624u: goto L_0884AFA8;
    case 625u: goto L_0884AFC8;
    case 626u: goto L_0884AFD0;
    case 627u: goto L_0884AFE4;
    case 628u: goto L_0884AFEC;
    case 629u: goto L_0884AFF8;
    case 630u: goto L_0884B000;
    case 631u: goto L_0884B020;
    case 632u: goto L_0884B028;
    case 633u: goto L_0884B064;
    case 634u: goto L_0884B06C;
    case 635u: goto L_0884B078;
    case 636u: goto L_0884B080;
    case 637u: goto L_0884B098;
    case 638u: goto L_0884B0A4;
    case 639u: goto L_0884B0CC;
    case 640u: goto L_0884B0D4;
    case 641u: goto L_0884B0E4;
    case 642u: goto L_0884B0F4;
    case 643u: goto L_0884B118;
    case 644u: goto L_0884B12C;
    case 645u: goto L_0884B138;
    case 646u: goto L_0884B144;
    case 647u: goto L_0884B14C;
    case 648u: goto L_0884B16C;
    case 649u: goto L_0884B174;
    case 650u: goto L_0884B1B0;
    case 651u: goto L_0884B1B8;
    case 652u: goto L_0884B1C4;
    case 653u: goto L_0884B1D0;
    case 654u: goto L_0884B1D8;
    case 655u: goto L_0884B1F0;
    case 656u: goto L_0884B1FC;
    case 657u: goto L_0884B224;
    case 658u: goto L_0884B22C;
    case 659u: goto L_0884B244;
    case 660u: goto L_0884B250;
    case 661u: goto L_0884B278;
    case 662u: goto L_0884B280;
    case 663u: goto L_0884B284;
    case 664u: goto L_0884B294;
    case 665u: goto L_0884B2A8;
    case 666u: goto L_0884B2C4;
    case 667u: goto L_0884B2CC;
    case 668u: goto L_0884B2D4;
    case 669u: goto L_0884B2E4;
    case 670u: goto L_0884B304;
    case 671u: goto L_0884B30C;
    case 672u: goto L_0884B320;
    case 673u: goto L_0884B328;
    case 674u: goto L_0884B334;
    case 675u: goto L_0884B33C;
    case 676u: goto L_0884B35C;
    case 677u: goto L_0884B364;
    case 678u: goto L_0884B37C;
    case 679u: goto L_0884B388;
    case 680u: goto L_0884B3B0;
    case 681u: goto L_0884B3B8;
    case 682u: goto L_0884B3C4;
    case 683u: goto L_0884B3CC;
    case 684u: goto L_0884B3E4;
    case 685u: goto L_0884B3F0;
    case 686u: goto L_0884B418;
    case 687u: goto L_0884B420;
    case 688u: goto L_0884B430;
    case 689u: goto L_0884B440;
    case 690u: goto L_0884B448;
    case 691u: goto L_0884B450;
    case 692u: goto L_0884B458;
    case 693u: goto L_0884B488;
    case 694u: goto L_0884B490;
    case 695u: goto L_0884B4A0;
    case 696u: goto L_0884B4A8;
    case 697u: goto L_0884B4B0;
    case 698u: goto L_0884B4BC;
    case 699u: goto L_0884B4C8;
    case 700u: goto L_0884B4F0;
    case 701u: goto L_0884B4F8;
    case 702u: goto L_0884B514;
    case 703u: goto L_0884B51C;
    case 704u: goto L_0884B524;
    case 705u: goto L_0884B55C;
    case 706u: goto L_0884B564;
    case 707u: goto L_0884B574;
    case 708u: goto L_0884B57C;
    case 709u: goto L_0884B584;
    case 710u: goto L_0884B5B4;
    case 711u: goto L_0884B5BC;
    case 712u: goto L_0884B5D8;
    case 713u: goto L_0884B5E0;
    case 714u: goto L_0884B5E8;
    case 715u: goto L_0884B61C;
    case 716u: goto L_0884B624;
    case 717u: goto L_0884B640;
    case 718u: goto L_0884B648;
    case 719u: goto L_0884B650;
    case 720u: goto L_0884B684;
    case 721u: goto L_0884B68C;
    case 722u: goto L_0884B6A8;
    case 723u: goto L_0884B6B0;
    case 724u: goto L_0884B6B8;
    case 725u: goto L_0884B6E8;
    case 726u: goto L_0884B6F0;
    case 727u: goto L_0884B70C;
    case 728u: goto L_0884B714;
    case 729u: goto L_0884B71C;
    case 730u: goto L_0884B750;
    case 731u: goto L_0884B758;
    case 732u: goto L_0884B774;
    case 733u: goto L_0884B77C;
    case 734u: goto L_0884B784;
    case 735u: goto L_0884B7B8;
    case 736u: goto L_0884B7C0;
    case 737u: goto L_0884B7DC;
    case 738u: goto L_0884B7E4;
    case 739u: goto L_0884B7EC;
    case 740u: goto L_0884B820;
    case 741u: goto L_0884B828;
    case 742u: goto L_0884B83C;
    case 743u: goto L_0884B844;
    case 744u: goto L_0884B84C;
    case 745u: goto L_0884B880;
    case 746u: goto L_0884B888;
    case 747u: goto L_0884B898;
    case 748u: goto L_0884B8A0;
    case 749u: goto L_0884B8A8;
    case 750u: goto L_0884B8B4;
    case 751u: goto L_0884B8C0;
    case 752u: goto L_0884B8E8;
    case 753u: goto L_0884B8F0;
    case 754u: goto L_0884B904;
    case 755u: goto L_0884B90C;
    case 756u: goto L_0884B914;
    case 757u: goto L_0884B924;
    case 758u: goto L_0884B930;
    case 759u: goto L_0884B958;
    case 760u: goto L_0884B960;
    case 761u: goto L_0884B974;
    case 762u: goto L_0884B97C;
    case 763u: goto L_0884B984;
    case 764u: goto L_0884B994;
    case 765u: goto L_0884B9A0;
    case 766u: goto L_0884B9C8;
    case 767u: goto L_0884B9D0;
    case 768u: goto L_0884B9E4;
    case 769u: goto L_0884B9EC;
    case 770u: goto L_0884B9F4;
    case 771u: goto L_0884BA04;
    case 772u: goto L_0884BA10;
    case 773u: goto L_0884BA38;
    case 774u: goto L_0884BA40;
    case 775u: goto L_0884BA54;
    case 776u: goto L_0884BA5C;
    case 777u: goto L_0884BA64;
    case 778u: goto L_0884BA74;
    case 779u: goto L_0884BA80;
    case 780u: goto L_0884BAA8;
    case 781u: goto L_0884BAB0;
    case 782u: goto L_0884BAC4;
    case 783u: goto L_0884BACC;
    case 784u: goto L_0884BAD4;
    case 785u: goto L_0884BAE4;
    case 786u: goto L_0884BAF0;
    case 787u: goto L_0884BB18;
    case 788u: goto L_0884BB20;
    case 789u: goto L_0884BB34;
    case 790u: goto L_0884BB3C;
    case 791u: goto L_0884BB44;
    case 792u: goto L_0884BB54;
    case 793u: goto L_0884BB60;
    case 794u: goto L_0884BB88;
    case 795u: goto L_0884BB90;
    case 796u: goto L_0884BBA4;
    case 797u: goto L_0884BBAC;
    case 798u: goto L_0884BBB4;
    case 799u: goto L_0884BBC4;
    case 800u: goto L_0884BBD0;
    case 801u: goto L_0884BBF8;
    case 802u: goto L_0884BC00;
    case 803u: goto L_0884BC14;
    case 804u: goto L_0884BC1C;
    case 805u: goto L_0884BC24;
    case 806u: goto L_0884BC34;
    case 807u: goto L_0884BC40;
    case 808u: goto L_0884BC68;
    case 809u: goto L_0884BC70;
    case 810u: goto L_0884BC84;
    case 811u: goto L_0884BC8C;
    case 812u: goto L_0884BC94;
    case 813u: goto L_0884BCA4;
    case 814u: goto L_0884BCB0;
    case 815u: goto L_0884BCD8;
    case 816u: goto L_0884BCE0;
    case 817u: goto L_0884BCF4;
    case 818u: goto L_0884BCFC;
    case 819u: goto L_0884BD04;
    case 820u: goto L_0884BD14;
    case 821u: goto L_0884BD20;
    case 822u: goto L_0884BD48;
    case 823u: goto L_0884BD50;
    case 824u: goto L_0884BD64;
    case 825u: goto L_0884BD6C;
    case 826u: goto L_0884BD74;
    case 827u: goto L_0884BD84;
    case 828u: goto L_0884BD90;
    case 829u: goto L_0884BDB8;
    case 830u: goto L_0884BDC0;
    case 831u: goto L_0884BDD4;
    case 832u: goto L_0884BDDC;
    case 833u: goto L_0884BDE4;
    case 834u: goto L_0884BDF4;
    case 835u: goto L_0884BE00;
    case 836u: goto L_0884BE28;
    case 837u: goto L_0884BE30;
    case 838u: goto L_0884BE44;
    case 839u: goto L_0884BE4C;
    case 840u: goto L_0884BE54;
    case 841u: goto L_0884BE64;
    case 842u: goto L_0884BE70;
    case 843u: goto L_0884BE98;
    case 844u: goto L_0884BEA0;
    case 845u: goto L_0884BEB4;
    case 846u: goto L_0884BEBC;
    case 847u: goto L_0884BEC4;
    case 848u: goto L_0884BED4;
    case 849u: goto L_0884BEE0;
    case 850u: goto L_0884BF08;
    case 851u: goto L_0884BF10;
    case 852u: goto L_0884BF24;
    case 853u: goto L_0884BF2C;
    case 854u: goto L_0884BF34;
    case 855u: goto L_0884BF44;
    case 856u: goto L_0884BF50;
    case 857u: goto L_0884BF78;
    case 858u: goto L_0884BF80;
    case 859u: goto L_0884BF94;
    case 860u: goto L_0884BF9C;
    case 861u: goto L_0884BFA4;
    case 862u: goto L_0884BFB4;
    case 863u: goto L_0884BFC0;
    case 864u: goto L_0884BFE8;
    case 865u: goto L_0884BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08848004:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0884801Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7156));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0884801Cu) goto L_0884801C;
    return;
L_0884801C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848034u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7152));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848034u) goto L_08848034;
    return;
L_08848034:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0884804Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7144));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0884804Cu) goto L_0884804C;
    return;
L_0884804C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848064u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7148));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848064u) goto L_08848064;
    return;
L_08848064:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0884807Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7140));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0884807Cu) goto L_0884807C;
    return;
L_0884807C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848094u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7136));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848094u) goto L_08848094;
    return;
L_08848094:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088480ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7132));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088480ACu) goto L_088480AC;
    return;
L_088480AC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x088480C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5832));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088480C4u) goto L_088480C4;
    return;
L_088480C4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x088480DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5816));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088480DCu) goto L_088480DC;
    return;
L_088480DC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 24u);
    ctx.gpr[31] = (0x088480F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5800));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088480F4u) goto L_088480F4;
    return;
L_088480F4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 24u);
    ctx.gpr[31] = (0x0884810Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5776));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0884810Cu) goto L_0884810C;
    return;
L_0884810C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 24u);
    ctx.gpr[31] = (0x08848124u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5752));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848124u) goto L_08848124;
    return;
L_08848124:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[31] = (0x0884813Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5728));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0884813Cu) goto L_0884813C;
    return;
L_0884813C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[31] = (0x08848154u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5688));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848154u) goto L_08848154;
    return;
L_08848154:
    ctx.gpr[31] = (0x0884815Cu);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 243u, 0x08845278u>(ctx, &aot_mem) && ctx.pc == 0x0884815Cu) goto L_0884815C;
    return;
L_0884815C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_08848168;
L_08848168:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08848178u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848178u) goto L_08848178;
    return;
L_08848178:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08848168;
      }
      goto L_0884818C;
    }
L_0884818C:
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
L_088481A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-5872));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088481E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7592));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088481E0u) goto L_088481E0;
    return;
L_088481E0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088481F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7588));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088481F8u) goto L_088481F8;
    return;
L_088481F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848210u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7584));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848210u) goto L_08848210;
    return;
L_08848210:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848228u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7580));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848228u) goto L_08848228;
    return;
L_08848228:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848240u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7824));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848240u) goto L_08848240;
    return;
L_08848240:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848258u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7576));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848258u) goto L_08848258;
    return;
L_08848258:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x08848270u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6104));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848270u) goto L_08848270;
    return;
L_08848270:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848288u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7572));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848288u) goto L_08848288;
    return;
L_08848288:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088482A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7568));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088482A0u) goto L_088482A0;
    return;
L_088482A0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088482B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7564));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088482B8u) goto L_088482B8;
    return;
L_088482B8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088482D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7560));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088482D0u) goto L_088482D0;
    return;
L_088482D0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088482E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7556));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088482E8u) goto L_088482E8;
    return;
L_088482E8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848300u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7552));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848300u) goto L_08848300;
    return;
L_08848300:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848318u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7548));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848318u) goto L_08848318;
    return;
L_08848318:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848330u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7544));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848330u) goto L_08848330;
    return;
L_08848330:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848348u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7540));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848348u) goto L_08848348;
    return;
L_08848348:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848360u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7536));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848360u) goto L_08848360;
    return;
L_08848360:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848378u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7532));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848378u) goto L_08848378;
    return;
L_08848378:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848390u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7644));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848390u) goto L_08848390;
    return;
L_08848390:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088483A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7528));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088483A8u) goto L_088483A8;
    return;
L_088483A8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088483C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7524));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088483C0u) goto L_088483C0;
    return;
L_088483C0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088483D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7520));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088483D8u) goto L_088483D8;
    return;
L_088483D8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088483F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7516));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088483F0u) goto L_088483F0;
    return;
L_088483F0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848408u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7512));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848408u) goto L_08848408;
    return;
L_08848408:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848420u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7508));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848420u) goto L_08848420;
    return;
L_08848420:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848438u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7504));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848438u) goto L_08848438;
    return;
L_08848438:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848450u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7500));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848450u) goto L_08848450;
    return;
L_08848450:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848468u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7496));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848468u) goto L_08848468;
    return;
L_08848468:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848480u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7492));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848480u) goto L_08848480;
    return;
L_08848480:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_08848484;
L_08848484:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848498u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7484));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848498u) goto L_08848498;
    return;
L_08848498:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088484B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7480));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088484B0u) goto L_088484B0;
    return;
L_088484B0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088484C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7264));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088484C8u) goto L_088484C8;
    return;
L_088484C8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088484E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7260));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088484E0u) goto L_088484E0;
    return;
L_088484E0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088484F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7256));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088484F8u) goto L_088484F8;
    return;
L_088484F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848510u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7252));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848510u) goto L_08848510;
    return;
L_08848510:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848528u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7248));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848528u) goto L_08848528;
    return;
L_08848528:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848540u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7476));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848540u) goto L_08848540;
    return;
L_08848540:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848558u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7472));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848558u) goto L_08848558;
    return;
L_08848558:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848570u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7468));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848570u) goto L_08848570;
    return;
L_08848570:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848588u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7464));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848588u) goto L_08848588;
    return;
L_08848588:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088485A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7460));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088485A0u) goto L_088485A0;
    return;
L_088485A0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088485B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7456));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088485B8u) goto L_088485B8;
    return;
L_088485B8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088485D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7452));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088485D0u) goto L_088485D0;
    return;
L_088485D0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088485E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7448));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088485E8u) goto L_088485E8;
    return;
L_088485E8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848600u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7444));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848600u) goto L_08848600;
    return;
L_08848600:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848618u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7440));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848618u) goto L_08848618;
    return;
L_08848618:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848630u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7436));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848630u) goto L_08848630;
    return;
L_08848630:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848648u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7432));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848648u) goto L_08848648;
    return;
L_08848648:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848660u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7428));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848660u) goto L_08848660;
    return;
L_08848660:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848678u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7424));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848678u) goto L_08848678;
    return;
L_08848678:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848690u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7420));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848690u) goto L_08848690;
    return;
L_08848690:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088486A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7416));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088486A8u) goto L_088486A8;
    return;
L_088486A8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088486C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7412));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088486C0u) goto L_088486C0;
    return;
L_088486C0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088486D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7408));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088486D8u) goto L_088486D8;
    return;
L_088486D8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088486F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7404));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088486F0u) goto L_088486F0;
    return;
L_088486F0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848708u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7400));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848708u) goto L_08848708;
    return;
L_08848708:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848720u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7392));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848720u) goto L_08848720;
    return;
L_08848720:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848738u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7388));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848738u) goto L_08848738;
    return;
L_08848738:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848750u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7384));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848750u) goto L_08848750;
    return;
L_08848750:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848768u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7380));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848768u) goto L_08848768;
    return;
L_08848768:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848780u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7376));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848780u) goto L_08848780;
    return;
L_08848780:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848798u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7372));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848798u) goto L_08848798;
    return;
L_08848798:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088487B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7368));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088487B0u) goto L_088487B0;
    return;
L_088487B0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088487C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7364));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088487C8u) goto L_088487C8;
    return;
L_088487C8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088487E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7360));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088487E0u) goto L_088487E0;
    return;
L_088487E0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088487F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7356));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088487F8u) goto L_088487F8;
    return;
L_088487F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848810u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7352));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848810u) goto L_08848810;
    return;
L_08848810:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848828u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7348));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848828u) goto L_08848828;
    return;
L_08848828:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848840u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7344));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848840u) goto L_08848840;
    return;
L_08848840:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848858u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7340));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848858u) goto L_08848858;
    return;
L_08848858:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848870u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7320));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848870u) goto L_08848870;
    return;
L_08848870:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848888u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7316));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848888u) goto L_08848888;
    return;
L_08848888:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088488A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7312));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088488A0u) goto L_088488A0;
    return;
L_088488A0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088488B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7308));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088488B8u) goto L_088488B8;
    return;
L_088488B8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088488D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7304));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088488D0u) goto L_088488D0;
    return;
L_088488D0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088488E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7300));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088488E8u) goto L_088488E8;
    return;
L_088488E8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848900u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7296));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848900u) goto L_08848900;
    return;
L_08848900:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848918u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7396));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848918u) goto L_08848918;
    return;
L_08848918:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848930u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7796));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848930u) goto L_08848930;
    return;
L_08848930:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848948u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7336));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848948u) goto L_08848948;
    return;
L_08848948:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08848960u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7332));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848960u) goto L_08848960;
    return;
L_08848960:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848978u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7328));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848978u) goto L_08848978;
    return;
L_08848978:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848990u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7324));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848990u) goto L_08848990;
    return;
L_08848990:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-6008));
    goto L_088489A0;
L_088489A0:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088489B0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088489B0u) goto L_088489B0;
    return;
L_088489B0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088489A0;
      }
      goto L_088489C0;
    }
L_088489C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x088489D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7288));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088489D4u) goto L_088489D4;
    return;
L_088489D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x088489ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x088489ECu) goto L_088489EC;
    return;
L_088489EC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[31] = (0x08848A04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5896));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848A04u) goto L_08848A04;
    return;
L_08848A04:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848A1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7292));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848A1Cu) goto L_08848A1C;
    return;
L_08848A1C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848A34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7280));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848A34u) goto L_08848A34;
    return;
L_08848A34:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848A4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7276));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848A4Cu) goto L_08848A4C;
    return;
L_08848A4C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08848A64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7272));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848A64u) goto L_08848A64;
    return;
L_08848A64:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848A7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7284));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848A7Cu) goto L_08848A7C;
    return;
L_08848A7C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848A94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7236));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848A94u) goto L_08848A94;
    return;
L_08848A94:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848AACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7232));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848AACu) goto L_08848AAC;
    return;
L_08848AAC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848AC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7228));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848AC4u) goto L_08848AC4;
    return;
L_08848AC4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848ADCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7224));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848ADCu) goto L_08848ADC;
    return;
L_08848ADC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848AF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7220));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848AF4u) goto L_08848AF4;
    return;
L_08848AF4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848B0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7216));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848B0Cu) goto L_08848B0C;
    return;
L_08848B0C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848B24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7212));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848B24u) goto L_08848B24;
    return;
L_08848B24:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848B3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7208));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848B3Cu) goto L_08848B3C;
    return;
L_08848B3C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848B54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7204));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848B54u) goto L_08848B54;
    return;
L_08848B54:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848B6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7200));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848B6Cu) goto L_08848B6C;
    return;
L_08848B6C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848B84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7196));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848B84u) goto L_08848B84;
    return;
L_08848B84:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848B9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7192));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848B9Cu) goto L_08848B9C;
    return;
L_08848B9C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848BB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7188));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848BB4u) goto L_08848BB4;
    return;
L_08848BB4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848BCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7184));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848BCCu) goto L_08848BCC;
    return;
L_08848BCC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848BE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7180));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848BE4u) goto L_08848BE4;
    return;
L_08848BE4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848BFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7176));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848BFCu) goto L_08848BFC;
    return;
L_08848BFC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848C14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7172));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848C14u) goto L_08848C14;
    return;
L_08848C14:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848C2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7168));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848C2Cu) goto L_08848C2C;
    return;
L_08848C2C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848C44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7164));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848C44u) goto L_08848C44;
    return;
L_08848C44:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848C5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7160));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848C5Cu) goto L_08848C5C;
    return;
L_08848C5C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848C74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7156));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848C74u) goto L_08848C74;
    return;
L_08848C74:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848C8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7152));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848C8Cu) goto L_08848C8C;
    return;
L_08848C8C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848CA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7148));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848CA4u) goto L_08848CA4;
    return;
L_08848CA4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848CBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7144));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848CBCu) goto L_08848CBC;
    return;
L_08848CBC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848CD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7140));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848CD4u) goto L_08848CD4;
    return;
L_08848CD4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848CECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7136));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848CECu) goto L_08848CEC;
    return;
L_08848CEC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08848D04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7132));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848D04u) goto L_08848D04;
    return;
L_08848D04:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x08848D1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5832));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848D1Cu) goto L_08848D1C;
    return;
L_08848D1C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x08848D34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5816));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848D34u) goto L_08848D34;
    return;
L_08848D34:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 24u);
    ctx.gpr[31] = (0x08848D4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5800));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848D4Cu) goto L_08848D4C;
    return;
L_08848D4C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 24u);
    ctx.gpr[31] = (0x08848D64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5776));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848D64u) goto L_08848D64;
    return;
L_08848D64:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 24u);
    ctx.gpr[31] = (0x08848D7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5752));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848D7Cu) goto L_08848D7C;
    return;
L_08848D7C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[31] = (0x08848D94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5728));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848D94u) goto L_08848D94;
    return;
L_08848D94:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[31] = (0x08848DACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5688));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848DACu) goto L_08848DAC;
    return;
L_08848DAC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_08848DBC;
L_08848DBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08848DCCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08848DCCu) goto L_08848DCC;
    return;
L_08848DCC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08848DBC;
      }
      goto L_08848DE0;
    }
L_08848DE0:
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
L_08848DFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-816));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(788), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(792), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(796), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(804), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(808), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(812), ctx.gpr[31]);
    ctx.gpr[31] = (0x08848E2Cu);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 177u, 0x08844EE8u>(ctx, &aot_mem) && ctx.pc == 0x08848E2Cu) goto L_08848E2C;
    return;
L_08848E2C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[13]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08848E64;
      }
      goto L_08848E50;
    }
L_08848E50:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08848E94;
      }
      goto L_08848E5C;
    }
L_08848E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08848ECC;
      }
      goto L_08848E64;
    }
L_08848E64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08848E8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7092));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08848E8Cu) goto L_08848E8C;
    return;
L_08848E8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08848E94;
    }
L_08848E94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7492)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08848EC4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7084));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08848EC4u) goto L_08848EC4;
    return;
L_08848EC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08848ECC;
    }
L_08848ECC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (0u | 60000u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08848F64;
      }
      goto L_08848F0C;
    }
L_08848F0C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27584)));
    ctx.gpr[4] = (0u | 60000u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 60u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08848F98;
      }
      goto L_08848F5C;
    }
L_08848F5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08848FCC;
      }
      goto L_08848F64;
    }
L_08848F64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08848F90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7076));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08848F90u) goto L_08848F90;
    return;
L_08848F90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08848F98;
    }
L_08848F98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08848FC4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7068));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08848FC4u) goto L_08848FC4;
    return;
L_08848FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08848FCC;
    }
L_08848FCC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08848FEC;
      }
      goto L_08848FD8;
    }
L_08848FD8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08849024;
      }
      goto L_08848FE4;
    }
L_08848FE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884905C;
      }
      goto L_08848FEC;
    }
L_08848FEC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7644)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884901Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7060));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884901Cu) goto L_0884901C;
    return;
L_0884901C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849024;
    }
L_08849024:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7528)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08849054u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7052));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849054u) goto L_08849054;
    return;
L_08849054:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884905C;
    }
L_0884905C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884907C;
      }
      goto L_08849068;
    }
L_08849068:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088490C0;
      }
      goto L_08849074;
    }
L_08849074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08849120;
      }
      goto L_0884907C;
    }
L_0884907C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7428)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7416)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088490B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7044));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x088490B8u) goto L_088490B8;
    return;
L_088490B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_088490C0;
    }
L_088490C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[5] = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08849118u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7036));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849118u) goto L_08849118;
    return;
L_08849118:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849120;
    }
L_08849120:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088491BC;
      }
      goto L_08849130;
    }
L_08849130:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884914C;
      }
      goto L_08849138;
    }
L_08849138:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08849184;
      }
      goto L_08849144;
    }
L_08849144:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088491BC;
      }
      goto L_0884914C;
    }
L_0884914C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7592)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884917Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7028));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884917Cu) goto L_0884917C;
    return;
L_0884917C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849184;
    }
L_08849184:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7588)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088491B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7020));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x088491B4u) goto L_088491B4;
    return;
L_088491B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_088491BC;
    }
L_088491BC:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088491D8;
      }
      goto L_088491C4;
    }
L_088491C4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08849210;
      }
      goto L_088491D0;
    }
L_088491D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08849248;
      }
      goto L_088491D8;
    }
L_088491D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7584)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08849208u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7012));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849208u) goto L_08849208;
    return;
L_08849208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849210;
    }
L_08849210:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7580)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08849240u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7004));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849240u) goto L_08849240;
    return;
L_08849240:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849248;
    }
L_08849248:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08849268;
      }
      goto L_08849254;
    }
L_08849254:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088492A0;
      }
      goto L_08849260;
    }
L_08849260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088492D8;
      }
      goto L_08849268;
    }
L_08849268:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7572)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08849298u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6996));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849298u) goto L_08849298;
    return;
L_08849298:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_088492A0;
    }
L_088492A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7824)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088492D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6988));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x088492D0u) goto L_088492D0;
    return;
L_088492D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_088492D8;
    }
L_088492D8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088492F8;
      }
      goto L_088492E4;
    }
L_088492E4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08849330;
      }
      goto L_088492F0;
    }
L_088492F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08849368;
      }
      goto L_088492F8;
    }
L_088492F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7544)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08849328u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6980));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849328u) goto L_08849328;
    return;
L_08849328:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849330;
    }
L_08849330:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7540)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08849360u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6972));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849360u) goto L_08849360;
    return;
L_08849360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849368;
    }
L_08849368:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08849388;
      }
      goto L_08849374;
    }
L_08849374:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088493C0;
      }
      goto L_08849380;
    }
L_08849380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088493F8;
      }
      goto L_08849388;
    }
L_08849388:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7536)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088493B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6964));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x088493B8u) goto L_088493B8;
    return;
L_088493B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_088493C0;
    }
L_088493C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7532)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088493F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6956));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x088493F0u) goto L_088493F0;
    return;
L_088493F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_088493F8;
    }
L_088493F8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08849424;
      }
      goto L_08849404;
    }
L_08849404:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5148)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7644)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884945C;
      }
      goto L_0884941C;
    }
L_0884941C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088494B4;
      }
      goto L_08849424;
    }
L_08849424:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7548)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08849454u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6948));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849454u) goto L_08849454;
    return;
L_08849454:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884945C;
    }
L_0884945C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7644)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(5148), ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08849494;
      }
      goto L_08849488;
    }
L_08849488:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08849494;
L_08849494:
    ctx.gpr[4] = (17279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5152), ctx.gpr[5]);
    goto L_088494B4;
L_088494B4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088494C4;
      }
      goto L_088494BC;
    }
L_088494BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08849500;
      }
      goto L_088494C4;
    }
L_088494C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5152)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088494F8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6940));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x088494F8u) goto L_088494F8;
    return;
L_088494F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849500;
    }
L_08849500:
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0884955C;
      }
      goto L_08849514;
    }
L_08849514:
    ctx.gpr[8] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-6104));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884954C;
      }
      goto L_08849534;
    }
L_08849534:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6104));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_0884954C;
L_0884954C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08849514;
      }
      goto L_0884955C;
    }
L_0884955C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088496DC;
      }
      goto L_08849564;
    }
L_08849564:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088496D8;
      }
      goto L_0884956C;
    }
L_0884956C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7));
      if (branch_taken) {
          goto L_088496D0;
      }
      goto L_0884957C;
    }
L_0884957C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-5424)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849594:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6932));
    ctx.gpr[31] = (0x088495B0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6924));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x088495B0u) goto L_088495B0;
    return;
L_088495B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088496D0;
      }
      goto L_088495B8;
    }
L_088495B8:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6932));
    ctx.gpr[31] = (0x088495D4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6916));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x088495D4u) goto L_088495D4;
    return;
L_088495D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088496D0;
      }
      goto L_088495DC;
    }
L_088495DC:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6932));
    ctx.gpr[31] = (0x088495F8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6908));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x088495F8u) goto L_088495F8;
    return;
L_088495F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088496D0;
      }
      goto L_08849600;
    }
L_08849600:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6932));
    ctx.gpr[31] = (0x0884961Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6900));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x0884961Cu) goto L_0884961C;
    return;
L_0884961C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088496D0;
      }
      goto L_08849624;
    }
L_08849624:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6932));
    ctx.gpr[31] = (0x08849640u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6892));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x08849640u) goto L_08849640;
    return;
L_08849640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088496D0;
      }
      goto L_08849648;
    }
L_08849648:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6932));
    ctx.gpr[31] = (0x08849664u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6884));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x08849664u) goto L_08849664;
    return;
L_08849664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088496D0;
      }
      goto L_0884966C;
    }
L_0884966C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6932));
    ctx.gpr[31] = (0x08849688u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6876));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x08849688u) goto L_08849688;
    return;
L_08849688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088496D0;
      }
      goto L_08849690;
    }
L_08849690:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6932));
    ctx.gpr[31] = (0x088496ACu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6868));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x088496ACu) goto L_088496AC;
    return;
L_088496AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088496D0;
      }
      goto L_088496B4;
    }
L_088496B4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6932));
    ctx.gpr[31] = (0x088496D0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6860));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 281u, 0x088454D8u>(ctx, &aot_mem) && ctx.pc == 0x088496D0u) goto L_088496D0;
    return;
L_088496D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_088496D8;
    }
L_088496D8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088496DC;
L_088496DC:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_088496F8;
      }
      goto L_088496E4;
    }
L_088496E4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08849770;
      }
      goto L_088496F0;
    }
L_088496F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088497AC;
      }
      goto L_088496F8;
    }
L_088496F8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6104));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08849768u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6852));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849768u) goto L_08849768;
    return;
L_08849768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849770;
    }
L_08849770:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6104));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088497A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6844));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x088497A4u) goto L_088497A4;
    return;
L_088497A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_088497AC;
    }
L_088497AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7180)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08849804;
      }
      goto L_088497BC;
    }
L_088497BC:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088497CC;
      }
      goto L_088497C4;
    }
L_088497C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08849804;
      }
      goto L_088497CC;
    }
L_088497CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7180)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088497FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6836));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x088497FCu) goto L_088497FC;
    return;
L_088497FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849804;
    }
L_08849804:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08849820;
      }
      goto L_0884980C;
    }
L_0884980C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08849858;
      }
      goto L_08849818;
    }
L_08849818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08849890;
      }
      goto L_08849820;
    }
L_08849820:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7560)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08849850u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6828));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849850u) goto L_08849850;
    return;
L_08849850:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849858;
    }
L_08849858:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7576)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08849888u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6820));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849888u) goto L_08849888;
    return;
L_08849888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849890;
    }
L_08849890:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088498B0;
      }
      goto L_0884989C;
    }
L_0884989C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088498E8;
      }
      goto L_088498A8;
    }
L_088498A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08849960;
      }
      goto L_088498B0;
    }
L_088498B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7556)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088498E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6812));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x088498E0u) goto L_088498E0;
    return;
L_088498E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_088498E8;
    }
L_088498E8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7576)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08849930;
      }
      goto L_088498F8;
    }
L_088498F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7556)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7576)));
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08849930;
L_08849930:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08849958u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6804));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849958u) goto L_08849958;
    return;
L_08849958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849960;
    }
L_08849960:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088499B0;
      }
      goto L_0884996C;
    }
L_0884996C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25444)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08849D88;
      }
      goto L_08849980;
    }
L_08849980:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25444)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088499E8;
      }
      goto L_08849990;
    }
L_08849990:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08849BB8;
      }
      goto L_08849998;
    }
L_08849998:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08849BB8;
      }
      goto L_088499A0;
    }
L_088499A0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08849BB8;
      }
      goto L_088499A8;
    }
L_088499A8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08849BB8;
      }
      goto L_088499B0;
    }
L_088499B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7552)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088499E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6796));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x088499E0u) goto L_088499E0;
    return;
L_088499E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_088499E8;
    }
L_088499E8:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (17616u << 16u);
      if (branch_taken) {
          goto L_08849A08;
      }
      goto L_088499F0;
    }
L_088499F0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (17616u << 16u);
      if (branch_taken) {
          goto L_08849A4C;
      }
      goto L_088499FC;
    }
L_088499FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08849A90;
      }
      goto L_08849A04;
    }
L_08849A04:
    ctx.gpr[4] = (17616u << 16u);
    goto L_08849A08;
L_08849A08:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7476)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6788));
    ctx.gpr[31] = (0x08849A44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849A44u) goto L_08849A44;
    return;
L_08849A44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849A4C;
    }
L_08849A4C:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7472)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6780));
    ctx.gpr[31] = (0x08849A88u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849A88u) goto L_08849A88;
    return;
L_08849A88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849A90;
    }
L_08849A90:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (17616u << 16u);
      if (branch_taken) {
          goto L_08849AB4;
      }
      goto L_08849A9C;
    }
L_08849A9C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (17616u << 16u);
      if (branch_taken) {
          goto L_08849AF8;
      }
      goto L_08849AA8;
    }
L_08849AA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08849B3C;
      }
      goto L_08849AB0;
    }
L_08849AB0:
    ctx.gpr[4] = (17616u << 16u);
    goto L_08849AB4;
L_08849AB4:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7468)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6772));
    ctx.gpr[31] = (0x08849AF0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849AF0u) goto L_08849AF0;
    return;
L_08849AF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849AF8;
    }
L_08849AF8:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7464)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6764));
    ctx.gpr[31] = (0x08849B34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849B34u) goto L_08849B34;
    return;
L_08849B34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849B3C;
    }
L_08849B3C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08849B50;
      }
      goto L_08849B48;
    }
L_08849B48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08849D88;
      }
      goto L_08849B50;
    }
L_08849B50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7472)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7476)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7464)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7468)));
    ctx.gpr[4] = (17616u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6756));
    ctx.gpr[31] = (0x08849BB0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849BB0u) goto L_08849BB0;
    return;
L_08849BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849BB8;
    }
L_08849BB8:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08849BD8;
      }
      goto L_08849BC0;
    }
L_08849BC0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08849C1C;
      }
      goto L_08849BCC;
    }
L_08849BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08849C60;
      }
      goto L_08849BD4;
    }
L_08849BD4:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08849BD8;
L_08849BD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7476)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6748));
    ctx.gpr[31] = (0x08849C14u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849C14u) goto L_08849C14;
    return;
L_08849C14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849C1C;
    }
L_08849C1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7472)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6740));
    ctx.gpr[31] = (0x08849C58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849C58u) goto L_08849C58;
    return;
L_08849C58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849C60;
    }
L_08849C60:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08849C84;
      }
      goto L_08849C6C;
    }
L_08849C6C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08849CC8;
      }
      goto L_08849C78;
    }
L_08849C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08849D0C;
      }
      goto L_08849C80;
    }
L_08849C80:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08849C84;
L_08849C84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7468)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6732));
    ctx.gpr[31] = (0x08849CC0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849CC0u) goto L_08849CC0;
    return;
L_08849CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849CC8;
    }
L_08849CC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7464)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6724));
    ctx.gpr[31] = (0x08849D04u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849D04u) goto L_08849D04;
    return;
L_08849D04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849D0C;
    }
L_08849D0C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08849D20;
      }
      goto L_08849D18;
    }
L_08849D18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08849D88;
      }
      goto L_08849D20;
    }
L_08849D20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7472)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7476)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7464)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7468)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6716));
    ctx.gpr[31] = (0x08849D80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849D80u) goto L_08849D80;
    return;
L_08849D80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849D88;
    }
L_08849D88:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08849DA8;
      }
      goto L_08849D90;
    }
L_08849D90:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08849DEC;
      }
      goto L_08849D9C;
    }
L_08849D9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08849E30;
      }
      goto L_08849DA4;
    }
L_08849DA4:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08849DA8;
L_08849DA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7520)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6708));
    ctx.gpr[31] = (0x08849DE4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849DE4u) goto L_08849DE4;
    return;
L_08849DE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849DEC;
    }
L_08849DEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7516)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6700));
    ctx.gpr[31] = (0x08849E28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849E28u) goto L_08849E28;
    return;
L_08849E28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849E30;
    }
L_08849E30:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08849E50;
      }
      goto L_08849E3C;
    }
L_08849E3C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08849E88;
      }
      goto L_08849E48;
    }
L_08849E48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08849EC0;
      }
      goto L_08849E50;
    }
L_08849E50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7512)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08849E80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6692));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849E80u) goto L_08849E80;
    return;
L_08849E80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849E88;
    }
L_08849E88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7508)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08849EB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6684));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849EB8u) goto L_08849EB8;
    return;
L_08849EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849EC0;
    }
L_08849EC0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_08849F08;
      }
      goto L_08849ECC;
    }
L_08849ECC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7504)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A310;
      }
      goto L_08849EE4;
    }
L_08849EE4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7504)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-5384)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08849F08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08849F28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6676));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x08849F28u) goto L_08849F28;
    return;
L_08849F28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849F30;
    }
L_08849F30:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_08849FA4;
      }
      goto L_08849F38;
    }
L_08849F38:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_08849F7C;
      }
      goto L_08849F50;
    }
L_08849F50:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08849F5Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08849F5Cu) goto L_08849F5C;
    return;
L_08849F5C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08849F74;
      }
      goto L_08849F68;
    }
L_08849F68:
    ctx.gpr[31] = (0x08849F70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08849F70u) goto L_08849F70;
    return;
L_08849F70:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08849F74;
L_08849F74:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08849F7C;
L_08849F7C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08849F90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6668));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08849F90u) goto L_08849F90;
    return;
L_08849F90:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08849F9Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x08849F9Cu) goto L_08849F9C;
    return;
L_08849F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_08849FA4;
    }
L_08849FA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A388;
      }
      goto L_08849FAC;
    }
L_08849FAC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0884A020;
      }
      goto L_08849FB4;
    }
L_08849FB4:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_08849FF8;
      }
      goto L_08849FCC;
    }
L_08849FCC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08849FD8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08849FD8u) goto L_08849FD8;
    return;
L_08849FD8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08849FF0;
      }
      goto L_08849FE4;
    }
L_08849FE4:
    ctx.gpr[31] = (0x08849FECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08849FECu) goto L_08849FEC;
    return;
L_08849FEC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08849FF0;
L_08849FF0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_08849FF8;
L_08849FF8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884A00Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6660));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884A00Cu) goto L_0884A00C;
    return;
L_0884A00C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884A018u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884A018u) goto L_0884A018;
    return;
L_0884A018:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A020;
    }
L_0884A020:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A388;
      }
      goto L_0884A028;
    }
L_0884A028:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0884A09C;
      }
      goto L_0884A030;
    }
L_0884A030:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884A074;
      }
      goto L_0884A048;
    }
L_0884A048:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884A054u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884A054u) goto L_0884A054;
    return;
L_0884A054:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A06C;
      }
      goto L_0884A060;
    }
L_0884A060:
    ctx.gpr[31] = (0x0884A068u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884A068u) goto L_0884A068;
    return;
L_0884A068:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884A06C;
L_0884A06C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884A074;
L_0884A074:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884A088u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6652));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884A088u) goto L_0884A088;
    return;
L_0884A088:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884A094u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884A094u) goto L_0884A094;
    return;
L_0884A094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A09C;
    }
L_0884A09C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A388;
      }
      goto L_0884A0A4;
    }
L_0884A0A4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0884A118;
      }
      goto L_0884A0AC;
    }
L_0884A0AC:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884A0F0;
      }
      goto L_0884A0C4;
    }
L_0884A0C4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884A0D0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884A0D0u) goto L_0884A0D0;
    return;
L_0884A0D0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A0E8;
      }
      goto L_0884A0DC;
    }
L_0884A0DC:
    ctx.gpr[31] = (0x0884A0E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884A0E4u) goto L_0884A0E4;
    return;
L_0884A0E4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884A0E8;
L_0884A0E8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884A0F0;
L_0884A0F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884A104u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6644));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884A104u) goto L_0884A104;
    return;
L_0884A104:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884A110u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884A110u) goto L_0884A110;
    return;
L_0884A110:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A118;
    }
L_0884A118:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A388;
      }
      goto L_0884A120;
    }
L_0884A120:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0884A194;
      }
      goto L_0884A128;
    }
L_0884A128:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884A16C;
      }
      goto L_0884A140;
    }
L_0884A140:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884A14Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884A14Cu) goto L_0884A14C;
    return;
L_0884A14C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A164;
      }
      goto L_0884A158;
    }
L_0884A158:
    ctx.gpr[31] = (0x0884A160u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884A160u) goto L_0884A160;
    return;
L_0884A160:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884A164;
L_0884A164:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884A16C;
L_0884A16C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884A180u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6636));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884A180u) goto L_0884A180;
    return;
L_0884A180:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884A18Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884A18Cu) goto L_0884A18C;
    return;
L_0884A18C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A194;
    }
L_0884A194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A388;
      }
      goto L_0884A19C;
    }
L_0884A19C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0884A210;
      }
      goto L_0884A1A4;
    }
L_0884A1A4:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884A1E8;
      }
      goto L_0884A1BC;
    }
L_0884A1BC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884A1C8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884A1C8u) goto L_0884A1C8;
    return;
L_0884A1C8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A1E0;
      }
      goto L_0884A1D4;
    }
L_0884A1D4:
    ctx.gpr[31] = (0x0884A1DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884A1DCu) goto L_0884A1DC;
    return;
L_0884A1DC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884A1E0;
L_0884A1E0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884A1E8;
L_0884A1E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884A1FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6628));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884A1FCu) goto L_0884A1FC;
    return;
L_0884A1FC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884A208u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884A208u) goto L_0884A208;
    return;
L_0884A208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A210;
    }
L_0884A210:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A388;
      }
      goto L_0884A218;
    }
L_0884A218:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0884A28C;
      }
      goto L_0884A220;
    }
L_0884A220:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884A264;
      }
      goto L_0884A238;
    }
L_0884A238:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884A244u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884A244u) goto L_0884A244;
    return;
L_0884A244:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A25C;
      }
      goto L_0884A250;
    }
L_0884A250:
    ctx.gpr[31] = (0x0884A258u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884A258u) goto L_0884A258;
    return;
L_0884A258:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884A25C;
L_0884A25C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884A264;
L_0884A264:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884A278u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6620));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884A278u) goto L_0884A278;
    return;
L_0884A278:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884A284u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884A284u) goto L_0884A284;
    return;
L_0884A284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A28C;
    }
L_0884A28C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A388;
      }
      goto L_0884A294;
    }
L_0884A294:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0884A308;
      }
      goto L_0884A29C;
    }
L_0884A29C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884A2E0;
      }
      goto L_0884A2B4;
    }
L_0884A2B4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884A2C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884A2C0u) goto L_0884A2C0;
    return;
L_0884A2C0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A2D8;
      }
      goto L_0884A2CC;
    }
L_0884A2CC:
    ctx.gpr[31] = (0x0884A2D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884A2D4u) goto L_0884A2D4;
    return;
L_0884A2D4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884A2D8;
L_0884A2D8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884A2E0;
L_0884A2E0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884A2F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6612));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884A2F4u) goto L_0884A2F4;
    return;
L_0884A2F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884A300u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884A300u) goto L_0884A300;
    return;
L_0884A300:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A308;
    }
L_0884A308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A388;
      }
      goto L_0884A310;
    }
L_0884A310:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0884A384;
      }
      goto L_0884A318;
    }
L_0884A318:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-5136), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[18] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5648));
      if (branch_taken) {
          goto L_0884A35C;
      }
      goto L_0884A330;
    }
L_0884A330:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0884A33Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0884A33Cu) goto L_0884A33C;
    return;
L_0884A33C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A354;
      }
      goto L_0884A348;
    }
L_0884A348:
    ctx.gpr[31] = (0x0884A350u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0884A350u) goto L_0884A350;
    return;
L_0884A350:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0884A354;
L_0884A354:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    goto L_0884A35C;
L_0884A35C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0884A370u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6604));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0884A370u) goto L_0884A370;
    return;
L_0884A370:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0884A37Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54234u>(ctx, &aot_mem) && ctx.pc == 0x0884A37Cu) goto L_0884A37C;
    return;
L_0884A37C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A384;
    }
L_0884A384:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0884A388;
L_0884A388:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A3A4;
      }
      goto L_0884A390;
    }
L_0884A390:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A3E8;
      }
      goto L_0884A39C;
    }
L_0884A39C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A420;
      }
      goto L_0884A3A4;
    }
L_0884A3A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7500)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7496)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A3E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6596));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A3E0u) goto L_0884A3E0;
    return;
L_0884A3E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A3E8;
    }
L_0884A3E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7320)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A418u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6588));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A418u) goto L_0884A418;
    return;
L_0884A418:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A420;
    }
L_0884A420:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A440;
      }
      goto L_0884A42C;
    }
L_0884A42C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A478;
      }
      goto L_0884A438;
    }
L_0884A438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A4B0;
      }
      goto L_0884A440;
    }
L_0884A440:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7308)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(228));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A470u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6580));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A470u) goto L_0884A470;
    return;
L_0884A470:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A478;
    }
L_0884A478:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7316)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A4A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6572));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A4A8u) goto L_0884A4A8;
    return;
L_0884A4A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A4B0;
    }
L_0884A4B0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A4D0;
      }
      goto L_0884A4BC;
    }
L_0884A4BC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A508;
      }
      goto L_0884A4C8;
    }
L_0884A4C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A540;
      }
      goto L_0884A4D0;
    }
L_0884A4D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7304)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(236));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A500u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6564));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A500u) goto L_0884A500;
    return;
L_0884A500:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A508;
    }
L_0884A508:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7296)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A538u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6556));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A538u) goto L_0884A538;
    return;
L_0884A538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A540;
    }
L_0884A540:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A560;
      }
      goto L_0884A54C;
    }
L_0884A54C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A598;
      }
      goto L_0884A558;
    }
L_0884A558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884A5D0;
      }
      goto L_0884A560;
    }
L_0884A560:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7312)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A590u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6548));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A590u) goto L_0884A590;
    return;
L_0884A590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A598;
    }
L_0884A598:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A5C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6540));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A5C8u) goto L_0884A5C8;
    return;
L_0884A5C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A5D0;
    }
L_0884A5D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7392)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A638;
      }
      goto L_0884A5EC;
    }
L_0884A5EC:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884A5FC;
      }
      goto L_0884A5F4;
    }
L_0884A5F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A638;
      }
      goto L_0884A5FC;
    }
L_0884A5FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7392)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(252));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A630u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6532));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A630u) goto L_0884A630;
    return;
L_0884A630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A638;
    }
L_0884A638:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7452)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884A690;
      }
      goto L_0884A648;
    }
L_0884A648:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A658;
      }
      goto L_0884A650;
    }
L_0884A650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A690;
      }
      goto L_0884A658;
    }
L_0884A658:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7452)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A688u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6524));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A688u) goto L_0884A688;
    return;
L_0884A688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A690;
    }
L_0884A690:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7444)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884A6E8;
      }
      goto L_0884A6A0;
    }
L_0884A6A0:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A6B0;
      }
      goto L_0884A6A8;
    }
L_0884A6A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A6E8;
      }
      goto L_0884A6B0;
    }
L_0884A6B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7444)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A6E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6516));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A6E0u) goto L_0884A6E0;
    return;
L_0884A6E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A6E8;
    }
L_0884A6E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7484)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884A740;
      }
      goto L_0884A6F8;
    }
L_0884A6F8:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A708;
      }
      goto L_0884A700;
    }
L_0884A700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A740;
      }
      goto L_0884A708;
    }
L_0884A708:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7484)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A738u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6508));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A738u) goto L_0884A738;
    return;
L_0884A738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A740;
    }
L_0884A740:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7480)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884A79C;
      }
      goto L_0884A750;
    }
L_0884A750:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884A760;
      }
      goto L_0884A758;
    }
L_0884A758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A79C;
      }
      goto L_0884A760;
    }
L_0884A760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7480)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A794u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6500));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A794u) goto L_0884A794;
    return;
L_0884A794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A79C;
    }
L_0884A79C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884A7F4;
      }
      goto L_0884A7AC;
    }
L_0884A7AC:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A7BC;
      }
      goto L_0884A7B4;
    }
L_0884A7B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A7F4;
      }
      goto L_0884A7BC;
    }
L_0884A7BC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7456)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A7ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6492));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A7ECu) goto L_0884A7EC;
    return;
L_0884A7EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A7F4;
    }
L_0884A7F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7440)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884A84C;
      }
      goto L_0884A804;
    }
L_0884A804:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A814;
      }
      goto L_0884A80C;
    }
L_0884A80C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A84C;
      }
      goto L_0884A814;
    }
L_0884A814:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7440)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A844u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6484));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A844u) goto L_0884A844;
    return;
L_0884A844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A84C;
    }
L_0884A84C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7448)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884A8A4;
      }
      goto L_0884A85C;
    }
L_0884A85C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A86C;
      }
      goto L_0884A864;
    }
L_0884A864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A8A4;
      }
      goto L_0884A86C;
    }
L_0884A86C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7448)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A89Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6476));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A89Cu) goto L_0884A89C;
    return;
L_0884A89C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A8A4;
    }
L_0884A8A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7436)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884A8FC;
      }
      goto L_0884A8B4;
    }
L_0884A8B4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A8C4;
      }
      goto L_0884A8BC;
    }
L_0884A8BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A8FC;
      }
      goto L_0884A8C4;
    }
L_0884A8C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7436)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(284));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A8F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6468));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A8F4u) goto L_0884A8F4;
    return;
L_0884A8F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A8FC;
    }
L_0884A8FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7236)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884A954;
      }
      goto L_0884A90C;
    }
L_0884A90C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A91C;
      }
      goto L_0884A914;
    }
L_0884A914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A954;
      }
      goto L_0884A91C;
    }
L_0884A91C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7236)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A94Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6460));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A94Cu) goto L_0884A94C;
    return;
L_0884A94C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A954;
    }
L_0884A954:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7232)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884A9B0;
      }
      goto L_0884A964;
    }
L_0884A964:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884A974;
      }
      goto L_0884A96C;
    }
L_0884A96C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884A9B0;
      }
      goto L_0884A974;
    }
L_0884A974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7232)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884A9A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6452));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884A9A8u) goto L_0884A9A8;
    return;
L_0884A9A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884A9B0;
    }
L_0884A9B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7228)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884AA08;
      }
      goto L_0884A9C0;
    }
L_0884A9C0:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884A9D0;
      }
      goto L_0884A9C8;
    }
L_0884A9C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884AA08;
      }
      goto L_0884A9D0;
    }
L_0884A9D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7228)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884AA00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6444));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884AA00u) goto L_0884AA00;
    return;
L_0884AA00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884AA08;
    }
L_0884AA08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7224)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884AA64;
      }
      goto L_0884AA18;
    }
L_0884AA18:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884AA28;
      }
      goto L_0884AA20;
    }
L_0884AA20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884AA64;
      }
      goto L_0884AA28;
    }
L_0884AA28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7224)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884AA5Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6436));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884AA5Cu) goto L_0884AA5C;
    return;
L_0884AA5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884AA64;
    }
L_0884AA64:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7220)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884AAC8;
      }
      goto L_0884AA74;
    }
L_0884AA74:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884AA84;
      }
      goto L_0884AA7C;
    }
L_0884AA7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884AAC8;
      }
      goto L_0884AA84;
    }
L_0884AA84:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7220)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7216)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(308));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884AAC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6428));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884AAC0u) goto L_0884AAC0;
    return;
L_0884AAC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884AAC8;
    }
L_0884AAC8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7212)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884AB20;
      }
      goto L_0884AAD8;
    }
L_0884AAD8:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884AAE8;
      }
      goto L_0884AAE0;
    }
L_0884AAE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884AB20;
      }
      goto L_0884AAE8;
    }
L_0884AAE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7212)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(312));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884AB18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6420));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884AB18u) goto L_0884AB18;
    return;
L_0884AB18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884AB20;
    }
L_0884AB20:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7208)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884AB7C;
      }
      goto L_0884AB30;
    }
L_0884AB30:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884AB40;
      }
      goto L_0884AB38;
    }
L_0884AB38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884AB7C;
      }
      goto L_0884AB40;
    }
L_0884AB40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7208)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(316));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884AB74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6412));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884AB74u) goto L_0884AB74;
    return;
L_0884AB74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884AB7C;
    }
L_0884AB7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7204)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884ABD4;
      }
      goto L_0884AB8C;
    }
L_0884AB8C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884AB9C;
      }
      goto L_0884AB94;
    }
L_0884AB94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884ABD4;
      }
      goto L_0884AB9C;
    }
L_0884AB9C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7204)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884ABCCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6404));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884ABCCu) goto L_0884ABCC;
    return;
L_0884ABCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884ABD4;
    }
L_0884ABD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7184)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884AC30;
      }
      goto L_0884ABE4;
    }
L_0884ABE4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884ABF4;
      }
      goto L_0884ABEC;
    }
L_0884ABEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884AC30;
      }
      goto L_0884ABF4;
    }
L_0884ABF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7184)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(324));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884AC28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6396));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884AC28u) goto L_0884AC28;
    return;
L_0884AC28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884AC30;
    }
L_0884AC30:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7172)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884AC88;
      }
      goto L_0884AC40;
    }
L_0884AC40:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884AC50;
      }
      goto L_0884AC48;
    }
L_0884AC48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884AC88;
      }
      goto L_0884AC50;
    }
L_0884AC50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7172)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884AC80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6388));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884AC80u) goto L_0884AC80;
    return;
L_0884AC80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884AC88;
    }
L_0884AC88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7176)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884ACE0;
      }
      goto L_0884AC98;
    }
L_0884AC98:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884ACA8;
      }
      goto L_0884ACA0;
    }
L_0884ACA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884ACE0;
      }
      goto L_0884ACA8;
    }
L_0884ACA8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7176)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(332));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884ACD8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6380));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884ACD8u) goto L_0884ACD8;
    return;
L_0884ACD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884ACE0;
    }
L_0884ACE0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7168)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884AD08;
      }
      goto L_0884ACF0;
    }
L_0884ACF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7164)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884AD08;
      }
      goto L_0884ACFC;
    }
L_0884ACFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7160)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884AD40;
      }
      goto L_0884AD08;
    }
L_0884AD08:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_0884AD18;
      }
      goto L_0884AD10;
    }
L_0884AD10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884AD40;
      }
      goto L_0884AD18;
    }
L_0884AD18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884AD38u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6372));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884AD38u) goto L_0884AD38;
    return;
L_0884AD38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884AD40;
    }
L_0884AD40:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7168)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884AD98;
      }
      goto L_0884AD50;
    }
L_0884AD50:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884AD60;
      }
      goto L_0884AD58;
    }
L_0884AD58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884AD98;
      }
      goto L_0884AD60;
    }
L_0884AD60:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7168)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[31] = (0x0884AD90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6364));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884AD90u) goto L_0884AD90;
    return;
L_0884AD90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884AD98;
    }
L_0884AD98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7164)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884ADF0;
      }
      goto L_0884ADA8;
    }
L_0884ADA8:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884ADB8;
      }
      goto L_0884ADB0;
    }
L_0884ADB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884ADF0;
      }
      goto L_0884ADB8;
    }
L_0884ADB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7164)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[31] = (0x0884ADE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6356));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884ADE8u) goto L_0884ADE8;
    return;
L_0884ADE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884ADF0;
    }
L_0884ADF0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7160)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884AE48;
      }
      goto L_0884AE00;
    }
L_0884AE00:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884AE10;
      }
      goto L_0884AE08;
    }
L_0884AE08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884AE48;
      }
      goto L_0884AE10;
    }
L_0884AE10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7160)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(344));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[31] = (0x0884AE40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6348));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884AE40u) goto L_0884AE40;
    return;
L_0884AE40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884AE48;
    }
L_0884AE48:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7156)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884AEB0;
      }
      goto L_0884AE58;
    }
L_0884AE58:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884AE68;
      }
      goto L_0884AE60;
    }
L_0884AE60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884AEB0;
      }
      goto L_0884AE68;
    }
L_0884AE68:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[31] = (0x0884AE74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7156)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884AE74u) goto L_0884AE74;
    return;
L_0884AE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7156)));
    ctx.gpr[31] = (0x0884AE80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884AE80u) goto L_0884AE80;
    return;
L_0884AE80:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(348));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884AEA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6340));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884AEA8u) goto L_0884AEA8;
    return;
L_0884AEA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884AEB0;
    }
L_0884AEB0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7136)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884AF10;
      }
      goto L_0884AEC8;
    }
L_0884AEC8:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884AED8;
      }
      goto L_0884AED0;
    }
L_0884AED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884AF10;
      }
      goto L_0884AED8;
    }
L_0884AED8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7136)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(356));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884AF08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6332));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884AF08u) goto L_0884AF08;
    return;
L_0884AF08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884AF10;
    }
L_0884AF10:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884AF20;
      }
      goto L_0884AF18;
    }
L_0884AF18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884AF58;
      }
      goto L_0884AF20;
    }
L_0884AF20:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7132)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884AF50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6324));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884AF50u) goto L_0884AF50;
    return;
L_0884AF50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884AF58;
    }
L_0884AF58:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0884B0E4;
      }
      goto L_0884AF68;
    }
L_0884AF68:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5816));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884B0D4;
      }
      goto L_0884AF8C;
    }
L_0884AF8C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884AFD0;
      }
      goto L_0884AF94;
    }
L_0884AF94:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_0884AFA8;
      }
      goto L_0884AF9C;
    }
L_0884AF9C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0884AFD0;
      }
      goto L_0884AFA8;
    }
L_0884AFA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884AFC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6316));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884AFC8u) goto L_0884AFC8;
    return;
L_0884AFC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884AFD0;
    }
L_0884AFD0:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(364));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0884AFE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6308));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0884AFE4u) goto L_0884AFE4;
    return;
L_0884AFE4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B000;
      }
      goto L_0884AFEC;
    }
L_0884AFEC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B028;
      }
      goto L_0884AFF8;
    }
L_0884AFF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B06C;
      }
      goto L_0884B000;
    }
L_0884B000:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(364));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0884B020u);
    ctx.gpr[10] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B020u) goto L_0884B020;
    return;
L_0884B020:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B028;
    }
L_0884B028:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5816));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[31] = (0x0884B064u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6296));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B064u) goto L_0884B064;
    return;
L_0884B064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B06C;
    }
L_0884B06C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B080;
      }
      goto L_0884B078;
    }
L_0884B078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B0D4;
      }
      goto L_0884B080;
    }
L_0884B080:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5832));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0884B098u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884B098u) goto L_0884B098;
    return;
L_0884B098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884B0A4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884B0A4u) goto L_0884B0A4;
    return;
L_0884B0A4:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(392));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[31] = (0x0884B0CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6288));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B0CCu) goto L_0884B0CC;
    return;
L_0884B0CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B0D4;
    }
L_0884B0D4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884AF68;
      }
      goto L_0884B0E4;
    }
L_0884B0E4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B294;
      }
      goto L_0884B0F4;
    }
L_0884B0F4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5800));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0884B284;
      }
      goto L_0884B118;
    }
L_0884B118:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(396));
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0884B12Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6280));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x0884B12Cu) goto L_0884B12C;
    return;
L_0884B12C:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(401), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0884B14C;
      }
      goto L_0884B138;
    }
L_0884B138:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B174;
      }
      goto L_0884B144;
    }
L_0884B144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B1B8;
      }
      goto L_0884B14C;
    }
L_0884B14C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(396));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0884B16Cu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B16Cu) goto L_0884B16C;
    return;
L_0884B16C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B174;
    }
L_0884B174:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5800));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 2u);
    ctx.gpr[31] = (0x0884B1B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6296));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B1B0u) goto L_0884B1B0;
    return;
L_0884B1B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B1B8;
    }
L_0884B1B8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B1D8;
      }
      goto L_0884B1C4;
    }
L_0884B1C4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B22C;
      }
      goto L_0884B1D0;
    }
L_0884B1D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B280;
      }
      goto L_0884B1D8;
    }
L_0884B1D8:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5776));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0884B1F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884B1F0u) goto L_0884B1F0;
    return;
L_0884B1F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884B1FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884B1FCu) goto L_0884B1FC;
    return;
L_0884B1FC:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 2u);
    ctx.gpr[31] = (0x0884B224u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6288));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B224u) goto L_0884B224;
    return;
L_0884B224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B22C;
    }
L_0884B22C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5752));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0884B244u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884B244u) goto L_0884B244;
    return;
L_0884B244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884B250u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884B250u) goto L_0884B250;
    return;
L_0884B250:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(420));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 2u);
    ctx.gpr[31] = (0x0884B278u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6272));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B278u) goto L_0884B278;
    return;
L_0884B278:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B280;
    }
L_0884B280:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0884B284;
L_0884B284:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884B0F4;
      }
      goto L_0884B294;
    }
L_0884B294:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0884B430;
      }
      goto L_0884B2A8;
    }
L_0884B2A8:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5728));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B420;
      }
      goto L_0884B2C4;
    }
L_0884B2C4:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884B30C;
      }
      goto L_0884B2CC;
    }
L_0884B2CC:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[5] = (2225u << 16u);
      if (branch_taken) {
          goto L_0884B2E4;
      }
      goto L_0884B2D4;
    }
L_0884B2D4:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_0884B30C;
      }
      goto L_0884B2E4;
    }
L_0884B2E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884B304u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6264));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B304u) goto L_0884B304;
    return;
L_0884B304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B30C;
    }
L_0884B30C:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(424));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0884B320u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6256));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x0884B320u) goto L_0884B320;
    return;
L_0884B320:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B33C;
      }
      goto L_0884B328;
    }
L_0884B328:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B364;
      }
      goto L_0884B334;
    }
L_0884B334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B3B8;
      }
      goto L_0884B33C;
    }
L_0884B33C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(424));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x0884B35Cu);
    ctx.gpr[10] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B35Cu) goto L_0884B35C;
    return;
L_0884B35C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B364;
    }
L_0884B364:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5728));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0884B37Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884B37Cu) goto L_0884B37C;
    return;
L_0884B37C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884B388u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884B388u) goto L_0884B388;
    return;
L_0884B388:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(444));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[31] = (0x0884B3B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6288));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B3B0u) goto L_0884B3B0;
    return;
L_0884B3B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B3B8;
    }
L_0884B3B8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B3CC;
      }
      goto L_0884B3C4;
    }
L_0884B3C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B420;
      }
      goto L_0884B3CC;
    }
L_0884B3CC:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5688));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0884B3E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884B3E4u) goto L_0884B3E4;
    return;
L_0884B3E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0884B3F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884B3F0u) goto L_0884B3F0;
    return;
L_0884B3F0:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(452));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(456));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[31] = (0x0884B418u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6272));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B418u) goto L_0884B418;
    return;
L_0884B418:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B420;
    }
L_0884B420:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884B2A8;
      }
      goto L_0884B430;
    }
L_0884B430:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884B490;
      }
      goto L_0884B440;
    }
L_0884B440:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B490;
      }
      goto L_0884B448;
    }
L_0884B448:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B458;
      }
      goto L_0884B450;
    }
L_0884B450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B490;
      }
      goto L_0884B458;
    }
L_0884B458:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7148)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(460));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 2u);
    ctx.gpr[31] = (0x0884B488u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6248));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B488u) goto L_0884B488;
    return;
L_0884B488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B490;
    }
L_0884B490:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7152)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0884B4F8;
      }
      goto L_0884B4A0;
    }
L_0884B4A0:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B4B0;
      }
      goto L_0884B4A8;
    }
L_0884B4A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B4F8;
      }
      goto L_0884B4B0;
    }
L_0884B4B0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[31] = (0x0884B4BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7152)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884B4BCu) goto L_0884B4BC;
    return;
L_0884B4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7152)));
    ctx.gpr[31] = (0x0884B4C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884B4C8u) goto L_0884B4C8;
    return;
L_0884B4C8:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(468));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884B4F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6240));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B4F0u) goto L_0884B4F0;
    return;
L_0884B4F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B4F8;
    }
L_0884B4F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7388)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884B564;
      }
      goto L_0884B514;
    }
L_0884B514:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884B524;
      }
      goto L_0884B51C;
    }
L_0884B51C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B564;
      }
      goto L_0884B524;
    }
L_0884B524:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7388)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(472));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(476));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884B55Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6232));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B55Cu) goto L_0884B55C;
    return;
L_0884B55C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B564;
    }
L_0884B564:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7432)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0884B5BC;
      }
      goto L_0884B574;
    }
L_0884B574:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B584;
      }
      goto L_0884B57C;
    }
L_0884B57C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B5BC;
      }
      goto L_0884B584;
    }
L_0884B584:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7432)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884B5B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6224));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B5B4u) goto L_0884B5B4;
    return;
L_0884B5B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B5BC;
    }
L_0884B5BC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7384)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884B624;
      }
      goto L_0884B5D8;
    }
L_0884B5D8:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884B5E8;
      }
      goto L_0884B5E0;
    }
L_0884B5E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B624;
      }
      goto L_0884B5E8;
    }
L_0884B5E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7384)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(484));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884B61Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6216));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B61Cu) goto L_0884B61C;
    return;
L_0884B61C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B624;
    }
L_0884B624:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7380)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884B68C;
      }
      goto L_0884B640;
    }
L_0884B640:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884B650;
      }
      goto L_0884B648;
    }
L_0884B648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B68C;
      }
      goto L_0884B650;
    }
L_0884B650:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7380)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884B684u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6208));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B684u) goto L_0884B684;
    return;
L_0884B684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B68C;
    }
L_0884B68C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7376)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884B6F0;
      }
      goto L_0884B6A8;
    }
L_0884B6A8:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B6B8;
      }
      goto L_0884B6B0;
    }
L_0884B6B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B6F0;
      }
      goto L_0884B6B8;
    }
L_0884B6B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7376)));
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(492));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884B6E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6200));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B6E8u) goto L_0884B6E8;
    return;
L_0884B6E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B6F0;
    }
L_0884B6F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7372)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884B758;
      }
      goto L_0884B70C;
    }
L_0884B70C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884B71C;
      }
      goto L_0884B714;
    }
L_0884B714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B758;
      }
      goto L_0884B71C;
    }
L_0884B71C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7372)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884B750u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6192));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B750u) goto L_0884B750;
    return;
L_0884B750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B758;
    }
L_0884B758:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7368)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884B7C0;
      }
      goto L_0884B774;
    }
L_0884B774:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884B784;
      }
      goto L_0884B77C;
    }
L_0884B77C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B7C0;
      }
      goto L_0884B784;
    }
L_0884B784:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7368)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(500));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884B7B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6184));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B7B8u) goto L_0884B7B8;
    return;
L_0884B7B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B7C0;
    }
L_0884B7C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7364)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0884B828;
      }
      goto L_0884B7DC;
    }
L_0884B7DC:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0884B7EC;
      }
      goto L_0884B7E4;
    }
L_0884B7E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B828;
      }
      goto L_0884B7EC;
    }
L_0884B7EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7364)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(504));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[5]);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884B820u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6176));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B820u) goto L_0884B820;
    return;
L_0884B820:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B828;
    }
L_0884B828:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5896));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B888;
      }
      goto L_0884B83C;
    }
L_0884B83C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B84C;
      }
      goto L_0884B844;
    }
L_0884B844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B888;
      }
      goto L_0884B84C;
    }
L_0884B84C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5896));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(508));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884B880u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6168));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B880u) goto L_0884B880;
    return;
L_0884B880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B888;
    }
L_0884B888:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B8F0;
      }
      goto L_0884B898;
    }
L_0884B898:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B8A8;
      }
      goto L_0884B8A0;
    }
L_0884B8A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B8F0;
      }
      goto L_0884B8A8;
    }
L_0884B8A8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[31] = (0x0884B8B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884B8B4u) goto L_0884B8B4;
    return;
L_0884B8B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-5992)));
    ctx.gpr[31] = (0x0884B8C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884B8C0u) goto L_0884B8C0;
    return;
L_0884B8C0:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(516));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884B8E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6160));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B8E8u) goto L_0884B8E8;
    return;
L_0884B8E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B8F0;
    }
L_0884B8F0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B960;
      }
      goto L_0884B904;
    }
L_0884B904:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B914;
      }
      goto L_0884B90C;
    }
L_0884B90C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B960;
      }
      goto L_0884B914;
    }
L_0884B914:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884B924u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884B924u) goto L_0884B924;
    return;
L_0884B924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0884B930u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884B930u) goto L_0884B930;
    return;
L_0884B930:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(520));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(524));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884B958u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6152));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B958u) goto L_0884B958;
    return;
L_0884B958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B960;
    }
L_0884B960:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884B9D0;
      }
      goto L_0884B974;
    }
L_0884B974:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B984;
      }
      goto L_0884B97C;
    }
L_0884B97C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884B9D0;
      }
      goto L_0884B984;
    }
L_0884B984:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884B994u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884B994u) goto L_0884B994;
    return;
L_0884B994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0884B9A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884B9A0u) goto L_0884B9A0;
    return;
L_0884B9A0:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(532));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884B9C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6144));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884B9C8u) goto L_0884B9C8;
    return;
L_0884B9C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884B9D0;
    }
L_0884B9D0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BA40;
      }
      goto L_0884B9E4;
    }
L_0884B9E4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884B9F4;
      }
      goto L_0884B9EC;
    }
L_0884B9EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884BA40;
      }
      goto L_0884B9F4;
    }
L_0884B9F4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884BA04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884BA04u) goto L_0884BA04;
    return;
L_0884BA04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0884BA10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884BA10u) goto L_0884BA10;
    return;
L_0884BA10:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(536));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(540));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884BA38u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6136));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BA38u) goto L_0884BA38;
    return;
L_0884BA38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884BA40;
    }
L_0884BA40:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BAB0;
      }
      goto L_0884BA54;
    }
L_0884BA54:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884BA64;
      }
      goto L_0884BA5C;
    }
L_0884BA5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884BAB0;
      }
      goto L_0884BA64;
    }
L_0884BA64:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884BA74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884BA74u) goto L_0884BA74;
    return;
L_0884BA74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0884BA80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884BA80u) goto L_0884BA80;
    return;
L_0884BA80:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(548));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884BAA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6128));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BAA8u) goto L_0884BAA8;
    return;
L_0884BAA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884BAB0;
    }
L_0884BAB0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BB20;
      }
      goto L_0884BAC4;
    }
L_0884BAC4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884BAD4;
      }
      goto L_0884BACC;
    }
L_0884BACC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884BB20;
      }
      goto L_0884BAD4;
    }
L_0884BAD4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884BAE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884BAE4u) goto L_0884BAE4;
    return;
L_0884BAE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x0884BAF0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884BAF0u) goto L_0884BAF0;
    return;
L_0884BAF0:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(552));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(556));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884BB18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6120));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BB18u) goto L_0884BB18;
    return;
L_0884BB18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884BB20;
    }
L_0884BB20:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BB90;
      }
      goto L_0884BB34;
    }
L_0884BB34:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884BB44;
      }
      goto L_0884BB3C;
    }
L_0884BB3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884BB90;
      }
      goto L_0884BB44;
    }
L_0884BB44:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884BB54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884BB54u) goto L_0884BB54;
    return;
L_0884BB54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0884BB60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884BB60u) goto L_0884BB60;
    return;
L_0884BB60:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(564));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884BB88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6112));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BB88u) goto L_0884BB88;
    return;
L_0884BB88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884BB90;
    }
L_0884BB90:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BC00;
      }
      goto L_0884BBA4;
    }
L_0884BBA4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884BBB4;
      }
      goto L_0884BBAC;
    }
L_0884BBAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884BC00;
      }
      goto L_0884BBB4;
    }
L_0884BBB4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884BBC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884BBC4u) goto L_0884BBC4;
    return;
L_0884BBC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x0884BBD0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884BBD0u) goto L_0884BBD0;
    return;
L_0884BBD0:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(568));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(572));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884BBF8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6104));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BBF8u) goto L_0884BBF8;
    return;
L_0884BBF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884BC00;
    }
L_0884BC00:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BC70;
      }
      goto L_0884BC14;
    }
L_0884BC14:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884BC24;
      }
      goto L_0884BC1C;
    }
L_0884BC1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884BC70;
      }
      goto L_0884BC24;
    }
L_0884BC24:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884BC34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884BC34u) goto L_0884BC34;
    return;
L_0884BC34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0884BC40u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884BC40u) goto L_0884BC40;
    return;
L_0884BC40:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(580));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884BC68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6096));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BC68u) goto L_0884BC68;
    return;
L_0884BC68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884BC70;
    }
L_0884BC70:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BCE0;
      }
      goto L_0884BC84;
    }
L_0884BC84:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884BC94;
      }
      goto L_0884BC8C;
    }
L_0884BC8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884BCE0;
      }
      goto L_0884BC94;
    }
L_0884BC94:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884BCA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884BCA4u) goto L_0884BCA4;
    return;
L_0884BCA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x0884BCB0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884BCB0u) goto L_0884BCB0;
    return;
L_0884BCB0:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(584));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(588));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884BCD8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6088));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BCD8u) goto L_0884BCD8;
    return;
L_0884BCD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884BCE0;
    }
L_0884BCE0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BD50;
      }
      goto L_0884BCF4;
    }
L_0884BCF4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884BD04;
      }
      goto L_0884BCFC;
    }
L_0884BCFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884BD50;
      }
      goto L_0884BD04;
    }
L_0884BD04:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884BD14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884BD14u) goto L_0884BD14;
    return;
L_0884BD14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0884BD20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884BD20u) goto L_0884BD20;
    return;
L_0884BD20:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(596));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884BD48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6080));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BD48u) goto L_0884BD48;
    return;
L_0884BD48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884BD50;
    }
L_0884BD50:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BDC0;
      }
      goto L_0884BD64;
    }
L_0884BD64:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884BD74;
      }
      goto L_0884BD6C;
    }
L_0884BD6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884BDC0;
      }
      goto L_0884BD74;
    }
L_0884BD74:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884BD84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884BD84u) goto L_0884BD84;
    return;
L_0884BD84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x0884BD90u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884BD90u) goto L_0884BD90;
    return;
L_0884BD90:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(600));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(604));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884BDB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6072));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BDB8u) goto L_0884BDB8;
    return;
L_0884BDB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884BDC0;
    }
L_0884BDC0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BE30;
      }
      goto L_0884BDD4;
    }
L_0884BDD4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884BDE4;
      }
      goto L_0884BDDC;
    }
L_0884BDDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884BE30;
      }
      goto L_0884BDE4;
    }
L_0884BDE4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884BDF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884BDF4u) goto L_0884BDF4;
    return;
L_0884BDF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0884BE00u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884BE00u) goto L_0884BE00;
    return;
L_0884BE00:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(612));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884BE28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6064));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BE28u) goto L_0884BE28;
    return;
L_0884BE28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884BE30;
    }
L_0884BE30:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BEA0;
      }
      goto L_0884BE44;
    }
L_0884BE44:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884BE54;
      }
      goto L_0884BE4C;
    }
L_0884BE4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884BEA0;
      }
      goto L_0884BE54;
    }
L_0884BE54:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884BE64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884BE64u) goto L_0884BE64;
    return;
L_0884BE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x0884BE70u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884BE70u) goto L_0884BE70;
    return;
L_0884BE70:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(616));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(620));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884BE98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6056));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BE98u) goto L_0884BE98;
    return;
L_0884BE98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884BEA0;
    }
L_0884BEA0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BF10;
      }
      goto L_0884BEB4;
    }
L_0884BEB4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884BEC4;
      }
      goto L_0884BEBC;
    }
L_0884BEBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884BF10;
      }
      goto L_0884BEC4;
    }
L_0884BEC4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884BED4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884BED4u) goto L_0884BED4;
    return;
L_0884BED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x0884BEE0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884BEE0u) goto L_0884BEE0;
    return;
L_0884BEE0:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(628));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884BF08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6048));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BF08u) goto L_0884BF08;
    return;
L_0884BF08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884BF10;
    }
L_0884BF10:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BF80;
      }
      goto L_0884BF24;
    }
L_0884BF24:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884BF34;
      }
      goto L_0884BF2C;
    }
L_0884BF2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884BF80;
      }
      goto L_0884BF34;
    }
L_0884BF34:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884BF44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884BF44u) goto L_0884BF44;
    return;
L_0884BF44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x0884BF50u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884BF50u) goto L_0884BF50;
    return;
L_0884BF50:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(632));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(636));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884BF78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6040));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BF78u) goto L_0884BF78;
    return;
L_0884BF78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884BF80;
    }
L_0884BF80:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884BFF0;
      }
      goto L_0884BF94;
    }
L_0884BF94:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0884BFA4;
      }
      goto L_0884BF9C;
    }
L_0884BF9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884BFF0;
      }
      goto L_0884BFA4;
    }
L_0884BFA4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[31] = (0x0884BFB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 273u, 0x08845484u>(ctx, &aot_mem) && ctx.pc == 0x0884BFB4u) goto L_0884BFB4;
    return;
L_0884BFB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x0884BFC0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 276u, 0x088454A8u>(ctx, &aot_mem) && ctx.pc == 0x0884BFC0u) goto L_0884BFC0;
    return;
L_0884BFC0:
    ctx.gpr[5] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(644));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0884BFE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6032));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 378u, 0x0884D6DCu>(ctx, &aot_mem) && ctx.pc == 0x0884BFE8u) goto L_0884BFE8;
    return;
L_0884BFE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 377u, 0x0884D6B8u>(ctx, &aot_mem); return;
      }
      goto L_0884BFF0;
    }
L_0884BFF0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 7u, 0x0884C060u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 1u, 0x0884C004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0017(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0017_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_17(Runtime &runtime) {
    runtime.register_generated_unit(17u, 0x08848000u, 16384u, &recomp_unit_0017, &recomp_unit_0017_entry);
    runtime.register_function(0x08848004u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884801Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848034u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884804Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848064u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884807Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848094u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088480F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884810Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848124u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884813Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848154u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884815Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848168u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848178u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884818Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088481F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848210u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848228u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848240u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848258u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848270u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848288u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088482A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088482B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088482D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088482E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848300u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848318u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848330u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848348u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848360u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848378u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848390u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088483A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088483C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088483D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088483F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848408u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848420u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848438u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848450u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848468u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848480u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848484u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848498u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088484B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088484C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088484E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088484F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848510u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848528u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848540u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848558u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848570u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848588u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088485E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848600u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848618u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848630u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848648u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848660u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848678u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848690u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088486A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088486C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088486D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088486F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848708u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848720u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848738u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848750u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848768u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848780u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848798u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088487B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088487C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088487E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088487F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848810u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848828u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848840u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848858u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848870u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848888u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088488A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088488B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088488D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088488E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848900u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848918u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848930u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848948u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848960u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848978u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848990u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088489ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A04u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A4Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A64u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A7Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848A94u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848AACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848AC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848ADCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848AF4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B0Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B24u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B3Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B6Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B84u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848B9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BB4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BCCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848BFCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C2Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C44u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C5Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848C8Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848CA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848CBCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848CD4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848CECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D04u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D4Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D64u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D7Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848D94u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848DACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848DBCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848DCCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848DE0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848DFCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E2Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E50u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E5Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E64u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E8Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848E94u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848EC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848ECCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848F0Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848F5Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848F64u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848F90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848F98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FCCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FD8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08848FECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884901Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849024u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849054u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884905Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849068u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849074u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884907Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088490B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088490C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849118u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849120u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849130u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849138u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849144u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884914Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884917Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849184u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088491B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088491BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088491C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088491D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088491D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849208u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849210u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849240u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849248u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849254u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849260u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849268u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849298u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088492F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849328u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849330u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849360u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849368u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849374u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849380u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849388u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088493B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088493C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088493F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088493F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849404u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884941Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849424u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849454u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884945Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849488u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849494u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088494B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088494BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088494C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088494F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849500u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849514u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849534u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884954Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884955Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849564u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884956Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884957Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849594u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088495B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088495B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088495D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088495DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088495F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849600u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884961Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849624u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849640u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849648u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849664u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884966Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849688u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849690u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088496ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088496B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088496D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088496D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088496DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088496E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088496F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088496F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849768u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849770u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088497FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849804u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884980Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849818u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849820u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849850u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849858u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849888u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849890u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884989Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088498A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088498B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088498E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088498E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088498F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849930u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849958u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849960u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884996Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849980u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849990u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849998u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x088499FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A04u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A44u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A4Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A88u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849A9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849AA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849AB0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849AB4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849AF0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849AF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B3Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B48u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849B50u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849BB0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849BB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849BC0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849BCCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849BD4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849BD8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C60u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C6Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C78u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849C84u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849CC0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849CC8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D04u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D0Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D18u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D20u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D88u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849D9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849DA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849DA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849DE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849DECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E3Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E48u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E50u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849E88u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849EB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849EC0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849ECCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849EE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F38u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F50u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F5Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F68u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F70u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F7Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849F9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849FA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849FACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849FB4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849FCCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849FD8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849FE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849FECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849FF0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x08849FF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A00Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A018u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A020u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A028u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A030u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A048u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A054u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A060u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A068u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A06Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A074u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A088u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A094u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A09Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A0F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A104u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A110u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A118u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A120u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A128u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A140u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A14Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A158u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A160u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A164u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A16Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A180u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A18Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A194u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A19Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A1A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A1BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A1C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A1D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A1DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A1E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A1E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A1FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A208u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A210u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A218u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A220u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A238u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A244u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A250u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A258u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A25Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A264u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A278u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A284u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A28Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A294u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A29Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A2F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A300u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A308u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A310u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A318u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A330u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A33Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A348u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A350u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A354u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A35Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A370u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A37Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A384u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A388u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A390u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A39Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A3A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A3E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A3E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A418u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A420u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A42Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A438u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A440u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A470u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A478u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A4A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A4B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A4BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A4C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A4D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A500u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A508u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A538u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A540u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A54Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A558u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A560u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A590u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A598u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A5C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A5D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A5ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A5F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A5FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A630u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A638u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A648u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A650u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A658u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A688u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A690u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A6A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A6A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A6B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A6E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A6E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A6F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A700u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A708u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A738u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A740u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A750u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A758u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A760u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A794u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A79Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7ACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A7F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A804u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A80Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A814u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A844u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A84Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A85Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A864u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A86Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A89Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A8FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A90Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A914u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A91Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A94Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A954u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A964u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A96Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A974u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A9A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A9B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A9C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A9C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884A9D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA18u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA20u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA5Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA64u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA7Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AA84u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAC0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAC8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAD8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAE0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AAE8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB18u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB20u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB38u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB7Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB8Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB94u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AB9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ABCCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ABD4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ABE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ABECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ABF4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC48u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC50u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC88u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AC98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ACA0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ACA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ACD8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ACE0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ACF0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ACFCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD10u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD18u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD38u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD50u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD60u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AD98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ADA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ADB0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ADB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ADE8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884ADF0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE10u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE48u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE60u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE68u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AE80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AEA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AEB0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AEC8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AED0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AED8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF10u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF18u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF20u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF50u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF58u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF68u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF8Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF94u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AF9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AFA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AFC8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AFD0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AFE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AFECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884AFF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B000u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B020u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B028u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B064u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B06Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B078u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B080u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B098u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0A4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B0F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B118u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B12Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B138u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B144u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B14Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B16Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B174u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B1FCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B224u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B22Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B244u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B250u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B278u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B280u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B284u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B294u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B2A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B2C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B2CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B2D4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B2E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B304u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B30Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B320u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B328u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B334u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B33Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B35Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B364u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B37Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B388u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B3B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B3B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B3C4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B3CCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B3E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B3F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B418u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B420u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B430u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B440u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B448u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B450u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B458u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B488u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B490u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B4F8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B514u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B51Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B524u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B55Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B564u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B574u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B57Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B584u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5BCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5D8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5E0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B5E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B61Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B624u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B640u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B648u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B650u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B684u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B68Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6B0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B6F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B70Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B714u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B71Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B750u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B758u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B774u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B77Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B784u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7B8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7DCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B7ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B820u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B828u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B83Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B844u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B84Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B880u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B888u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B898u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8A8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8B4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8C0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8E8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B8F0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B904u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B90Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B914u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B924u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B930u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B958u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B960u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B974u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B97Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B984u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B994u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9A0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9C8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9D0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9E4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9ECu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884B9F4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA04u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA10u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA38u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA5Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA64u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BA80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAA8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAB0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BACCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAD4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BAF0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB18u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB20u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB3Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB44u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB60u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB88u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BB90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BBA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BBACu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BBB4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BBC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BBD0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BBF8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC1Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC24u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC40u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC68u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC70u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC84u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC8Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BC94u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCB0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCD8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCE0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCF4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BCFCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD04u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD14u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD20u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD48u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD50u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD64u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD6Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD74u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD84u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BD90u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDB8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDC0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDD4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDDCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDE4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BDF4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE00u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE28u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE30u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE44u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE4Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE54u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE64u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE70u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BE98u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BEA0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BEB4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BEBCu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BEC4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BED4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BEE0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF08u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF10u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF24u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF2Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF34u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF44u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF50u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF78u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF80u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF94u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BF9Cu, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BFA4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BFB4u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BFC0u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BFE8u, &recomp_unit_0017, "recomp_unit_0017");
    runtime.register_function(0x0884BFF0u, &recomp_unit_0017, "recomp_unit_0017");
}
} // namespace psprecomp
