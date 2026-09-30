#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0090[4096] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 5, 6, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 11, 0, 0,
    12, 0, 13, 14, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 21, 22, 0, 0, 23, 0, 0, 0,
    24, 25, 0, 26, 0, 0, 0, 0, 0, 0, 27, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0,
    36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0,
    41, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 65, 0, 66, 0,
    67, 0, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 79, 0,
    0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 89, 0, 0, 90, 0,
    91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 104, 0,
    0, 0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 0, 113, 0, 114, 0, 115, 0, 116,
    0, 117, 0, 118, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128,
    0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 0, 0, 139,
    0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0,
    0, 0, 150, 0, 151, 0, 0, 152, 0, 153, 154, 0, 0, 0, 0, 0, 0, 0, 155, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0,
    159, 0, 160, 0, 161, 0, 162, 0, 163, 164, 0, 165, 0, 0, 166, 0, 167, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0,
    177, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 181, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0,
    186, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 196,
    0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 205, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0,
    0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219,
    0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 224, 0, 225, 226, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 236, 0, 0,
    237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0,
    0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 244, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0,
    252, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 258, 0, 259, 260, 0, 0, 0, 261, 0, 0, 262,
    0, 0, 0, 0, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0,
    0, 278, 0, 0, 0, 279, 0, 280, 0, 0, 281, 282, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 287,
    0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0,
    295, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0,
    302, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0,
    0, 315, 316, 317, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 326, 0, 327,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342,
    0, 0, 0, 343, 0, 344, 0, 345, 0, 0, 0, 346, 0, 347, 348, 0, 349, 0, 350, 0, 0, 351, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0,
    0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0,
    0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0, 0,
    0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389,
    0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 394, 0, 0, 0, 395, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0,
    0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 410, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0,
    413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0,
    0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0,
    428, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0,
    0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0,
    443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0,
    451, 0, 0, 0, 452, 0, 453, 0, 0, 0, 454, 455, 0, 456, 0, 457, 0, 0, 0, 0, 458, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 466, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 476, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 486,
    0, 0, 487, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0,
    497, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 504, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0,
    0, 508, 0, 0, 509, 0, 0, 510, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 0, 517, 0, 0, 518,
    0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0, 0,
    529, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 0, 538, 0, 0, 539, 0,
    0, 540, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 0, 549, 0, 0, 550,
    0, 0, 551, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 0,
    561, 0, 0, 562, 0, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 0, 571, 0,
    0, 572, 0, 0, 573, 0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 582,
    0, 0, 583, 0, 0, 584, 0, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0,
    593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 600, 0, 601, 0, 0, 0, 0, 0, 602,
    0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 607, 0, 608, 0, 609, 610, 0, 611, 0, 612, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0,
    0, 617, 0, 618, 0, 0, 619, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 625, 0,
    0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 0,
    631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 0, 0, 0, 0, 636,
    0, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 643, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 646,
    0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0,
    0, 660, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 667,
    0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 670, 0, 0, 0, 0, 0, 671, 0, 0, 672, 673, 0, 0, 0, 674, 0, 0, 0, 0, 0, 675, 0,
    0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 681, 0, 0, 0, 682, 0,
    0, 683, 0, 0, 0, 684, 0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 688, 0, 689,
    0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 692, 0, 0, 693, 0, 0, 694, 695, 0, 0, 0, 0, 0, 0, 0, 696,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 698, 0, 699, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0,
    710, 0, 0, 0, 711, 0, 0, 712, 0, 0, 0, 0, 713, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0,
    0, 0, 717, 0, 0, 0, 718, 0, 719, 0, 720, 0, 721, 0, 722, 0, 723, 0, 0, 0, 0, 0, 0, 724, 0, 725, 0, 0, 726, 0, 727, 0,
    0, 0, 728, 0, 0, 729, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732,
    0, 0, 0, 0, 733, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0,
    0, 0, 740, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0,
    0, 0, 744, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 749,
    0, 750, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 753, 0, 754, 755, 756, 0, 0, 0, 0, 757, 0, 0, 0, 0, 758,
    0, 0, 0, 0, 759, 0, 0, 760, 0, 761, 762, 763, 0, 0, 0, 0, 764, 0, 765, 0, 766, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 768,
    0, 0, 769, 0, 0, 770, 0, 771, 0, 772, 0, 0, 0, 773, 0, 0, 774, 0, 775, 776, 0, 0, 777, 0, 0, 778, 0, 779, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 780, 0, 0, 781, 0, 782, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 785, 0, 786, 0, 787, 0,
    788, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 792, 0, 0, 793, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 796, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 799,
    0, 0, 800, 0, 801, 0, 802, 0, 0, 0, 0, 0, 803, 804, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 805, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 808, 0, 0, 809, 0, 0, 0, 810, 0, 0, 0, 811,
};
void recomp_unit_0090_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0896C000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0090[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0896C000;
    case 2u: goto L_0896C010;
    case 3u: goto L_0896C01C;
    case 4u: goto L_0896C028;
    case 5u: goto L_0896C030;
    case 6u: goto L_0896C034;
    case 7u: goto L_0896C040;
    case 8u: goto L_0896C050;
    case 9u: goto L_0896C058;
    case 10u: goto L_0896C068;
    case 11u: goto L_0896C074;
    case 12u: goto L_0896C080;
    case 13u: goto L_0896C088;
    case 14u: goto L_0896C08C;
    case 15u: goto L_0896C098;
    case 16u: goto L_0896C0A8;
    case 17u: goto L_0896C0B0;
    case 18u: goto L_0896C0C0;
    case 19u: goto L_0896C0CC;
    case 20u: goto L_0896C0D8;
    case 21u: goto L_0896C0E0;
    case 22u: goto L_0896C0E4;
    case 23u: goto L_0896C0F0;
    case 24u: goto L_0896C100;
    case 25u: goto L_0896C104;
    case 26u: goto L_0896C10C;
    case 27u: goto L_0896C128;
    case 28u: goto L_0896C12C;
    case 29u: goto L_0896C164;
    case 30u: goto L_0896C1B8;
    case 31u: goto L_0896C1C4;
    case 32u: goto L_0896C1D0;
    case 33u: goto L_0896C1DC;
    case 34u: goto L_0896C1E8;
    case 35u: goto L_0896C1F4;
    case 36u: goto L_0896C200;
    case 37u: goto L_0896C20C;
    case 38u: goto L_0896C224;
    case 39u: goto L_0896C22C;
    case 40u: goto L_0896C278;
    case 41u: goto L_0896C280;
    case 42u: goto L_0896C288;
    case 43u: goto L_0896C2A4;
    case 44u: goto L_0896C2C8;
    case 45u: goto L_0896C2E0;
    case 46u: goto L_0896C2F0;
    case 47u: goto L_0896C314;
    case 48u: goto L_0896C324;
    case 49u: goto L_0896C344;
    case 50u: goto L_0896C388;
    case 51u: goto L_0896C3B0;
    case 52u: goto L_0896C3D0;
    case 53u: goto L_0896C404;
    case 54u: goto L_0896C420;
    case 55u: goto L_0896C46C;
    case 56u: goto L_0896C474;
    case 57u: goto L_0896C480;
    case 58u: goto L_0896C4A0;
    case 59u: goto L_0896C4A8;
    case 60u: goto L_0896C4B4;
    case 61u: goto L_0896C4C0;
    case 62u: goto L_0896C4D4;
    case 63u: goto L_0896C4E0;
    case 64u: goto L_0896C4E8;
    case 65u: goto L_0896C4F0;
    case 66u: goto L_0896C4F8;
    case 67u: goto L_0896C500;
    case 68u: goto L_0896C50C;
    case 69u: goto L_0896C514;
    case 70u: goto L_0896C520;
    case 71u: goto L_0896C528;
    case 72u: goto L_0896C530;
    case 73u: goto L_0896C538;
    case 74u: goto L_0896C544;
    case 75u: goto L_0896C54C;
    case 76u: goto L_0896C558;
    case 77u: goto L_0896C560;
    case 78u: goto L_0896C568;
    case 79u: goto L_0896C578;
    case 80u: goto L_0896C588;
    case 81u: goto L_0896C594;
    case 82u: goto L_0896C5A0;
    case 83u: goto L_0896C5B0;
    case 84u: goto L_0896C5B8;
    case 85u: goto L_0896C5C0;
    case 86u: goto L_0896C5C8;
    case 87u: goto L_0896C5D0;
    case 88u: goto L_0896C5D8;
    case 89u: goto L_0896C5EC;
    case 90u: goto L_0896C5F8;
    case 91u: goto L_0896C600;
    case 92u: goto L_0896C608;
    case 93u: goto L_0896C610;
    case 94u: goto L_0896C618;
    case 95u: goto L_0896C620;
    case 96u: goto L_0896C62C;
    case 97u: goto L_0896C634;
    case 98u: goto L_0896C63C;
    case 99u: goto L_0896C644;
    case 100u: goto L_0896C64C;
    case 101u: goto L_0896C658;
    case 102u: goto L_0896C660;
    case 103u: goto L_0896C668;
    case 104u: goto L_0896C678;
    case 105u: goto L_0896C688;
    case 106u: goto L_0896C694;
    case 107u: goto L_0896C6A0;
    case 108u: goto L_0896C6B4;
    case 109u: goto L_0896C6BC;
    case 110u: goto L_0896C6C4;
    case 111u: goto L_0896C6CC;
    case 112u: goto L_0896C6D4;
    case 113u: goto L_0896C6E4;
    case 114u: goto L_0896C6EC;
    case 115u: goto L_0896C6F4;
    case 116u: goto L_0896C6FC;
    case 117u: goto L_0896C704;
    case 118u: goto L_0896C70C;
    case 119u: goto L_0896C718;
    case 120u: goto L_0896C720;
    case 121u: goto L_0896C72C;
    case 122u: goto L_0896C738;
    case 123u: goto L_0896C754;
    case 124u: goto L_0896C75C;
    case 125u: goto L_0896C764;
    case 126u: goto L_0896C76C;
    case 127u: goto L_0896C774;
    case 128u: goto L_0896C77C;
    case 129u: goto L_0896C78C;
    case 130u: goto L_0896C798;
    case 131u: goto L_0896C7A4;
    case 132u: goto L_0896C7B0;
    case 133u: goto L_0896C7C4;
    case 134u: goto L_0896C7CC;
    case 135u: goto L_0896C7D4;
    case 136u: goto L_0896C7DC;
    case 137u: goto L_0896C7E4;
    case 138u: goto L_0896C7EC;
    case 139u: goto L_0896C7FC;
    case 140u: goto L_0896C804;
    case 141u: goto L_0896C80C;
    case 142u: goto L_0896C814;
    case 143u: goto L_0896C81C;
    case 144u: goto L_0896C82C;
    case 145u: goto L_0896C83C;
    case 146u: goto L_0896C848;
    case 147u: goto L_0896C854;
    case 148u: goto L_0896C864;
    case 149u: goto L_0896C870;
    case 150u: goto L_0896C888;
    case 151u: goto L_0896C890;
    case 152u: goto L_0896C89C;
    case 153u: goto L_0896C8A4;
    case 154u: goto L_0896C8A8;
    case 155u: goto L_0896C8C8;
    case 156u: goto L_0896C8CC;
    case 157u: goto L_0896C8DC;
    case 158u: goto L_0896C8E8;
    case 159u: goto L_0896C900;
    case 160u: goto L_0896C908;
    case 161u: goto L_0896C910;
    case 162u: goto L_0896C918;
    case 163u: goto L_0896C920;
    case 164u: goto L_0896C924;
    case 165u: goto L_0896C92C;
    case 166u: goto L_0896C938;
    case 167u: goto L_0896C940;
    case 168u: goto L_0896C94C;
    case 169u: goto L_0896C954;
    case 170u: goto L_0896C95C;
    case 171u: goto L_0896C96C;
    case 172u: goto L_0896C978;
    case 173u: goto L_0896C9B8;
    case 174u: goto L_0896C9C4;
    case 175u: goto L_0896C9F0;
    case 176u: goto L_0896C9F8;
    case 177u: goto L_0896CA00;
    case 178u: goto L_0896CA1C;
    case 179u: goto L_0896CA24;
    case 180u: goto L_0896CA30;
    case 181u: goto L_0896CA38;
    case 182u: goto L_0896CA40;
    case 183u: goto L_0896CA4C;
    case 184u: goto L_0896CA58;
    case 185u: goto L_0896CA70;
    case 186u: goto L_0896CA80;
    case 187u: goto L_0896CA88;
    case 188u: goto L_0896CA90;
    case 189u: goto L_0896CAA0;
    case 190u: goto L_0896CAE0;
    case 191u: goto L_0896CB38;
    case 192u: goto L_0896CB40;
    case 193u: goto L_0896CC40;
    case 194u: goto L_0896CC5C;
    case 195u: goto L_0896CC68;
    case 196u: goto L_0896CC7C;
    case 197u: goto L_0896CC84;
    case 198u: goto L_0896CC8C;
    case 199u: goto L_0896CC94;
    case 200u: goto L_0896CC9C;
    case 201u: goto L_0896CCA4;
    case 202u: goto L_0896CCAC;
    case 203u: goto L_0896CCB4;
    case 204u: goto L_0896CCC0;
    case 205u: goto L_0896CCD0;
    case 206u: goto L_0896CCD4;
    case 207u: goto L_0896CD40;
    case 208u: goto L_0896CD48;
    case 209u: goto L_0896CD50;
    case 210u: goto L_0896CD60;
    case 211u: goto L_0896CD6C;
    case 212u: goto L_0896CD78;
    case 213u: goto L_0896CD88;
    case 214u: goto L_0896CDF0;
    case 215u: goto L_0896CE0C;
    case 216u: goto L_0896CE20;
    case 217u: goto L_0896CE60;
    case 218u: goto L_0896CE68;
    case 219u: goto L_0896CE7C;
    case 220u: goto L_0896CE88;
    case 221u: goto L_0896CE94;
    case 222u: goto L_0896CEA0;
    case 223u: goto L_0896CEAC;
    case 224u: goto L_0896CEB4;
    case 225u: goto L_0896CEBC;
    case 226u: goto L_0896CEC0;
    case 227u: goto L_0896CECC;
    case 228u: goto L_0896CEDC;
    case 229u: goto L_0896CF0C;
    case 230u: goto L_0896CF28;
    case 231u: goto L_0896CF40;
    case 232u: goto L_0896CF48;
    case 233u: goto L_0896CF8C;
    case 234u: goto L_0896CFDC;
    case 235u: goto L_0896CFE4;
    case 236u: goto L_0896CFF4;
    case 237u: goto L_0896D000;
    case 238u: goto L_0896D010;
    case 239u: goto L_0896D06C;
    case 240u: goto L_0896D088;
    case 241u: goto L_0896D098;
    case 242u: goto L_0896D0B0;
    case 243u: goto L_0896D0C8;
    case 244u: goto L_0896D108;
    case 245u: goto L_0896D110;
    case 246u: goto L_0896D124;
    case 247u: goto L_0896D13C;
    case 248u: goto L_0896D144;
    case 249u: goto L_0896D15C;
    case 250u: goto L_0896D164;
    case 251u: goto L_0896D174;
    case 252u: goto L_0896D180;
    case 253u: goto L_0896D18C;
    case 254u: goto L_0896D19C;
    case 255u: goto L_0896D1A8;
    case 256u: goto L_0896D1C0;
    case 257u: goto L_0896D1C8;
    case 258u: goto L_0896D1D4;
    case 259u: goto L_0896D1DC;
    case 260u: goto L_0896D1E0;
    case 261u: goto L_0896D1F0;
    case 262u: goto L_0896D1FC;
    case 263u: goto L_0896D214;
    case 264u: goto L_0896D21C;
    case 265u: goto L_0896D224;
    case 266u: goto L_0896D22C;
    case 267u: goto L_0896D234;
    case 268u: goto L_0896D238;
    case 269u: goto L_0896D248;
    case 270u: goto L_0896D264;
    case 271u: goto L_0896D270;
    case 272u: goto L_0896D280;
    case 273u: goto L_0896D290;
    case 274u: goto L_0896D2A8;
    case 275u: goto L_0896D2D8;
    case 276u: goto L_0896D2E8;
    case 277u: goto L_0896D2F8;
    case 278u: goto L_0896D304;
    case 279u: goto L_0896D314;
    case 280u: goto L_0896D31C;
    case 281u: goto L_0896D328;
    case 282u: goto L_0896D32C;
    case 283u: goto L_0896D338;
    case 284u: goto L_0896D340;
    case 285u: goto L_0896D36C;
    case 286u: goto L_0896D374;
    case 287u: goto L_0896D37C;
    case 288u: goto L_0896D38C;
    case 289u: goto L_0896D39C;
    case 290u: goto L_0896D3B8;
    case 291u: goto L_0896D3C4;
    case 292u: goto L_0896D3CC;
    case 293u: goto L_0896D3DC;
    case 294u: goto L_0896D3F8;
    case 295u: goto L_0896D400;
    case 296u: goto L_0896D40C;
    case 297u: goto L_0896D41C;
    case 298u: goto L_0896D42C;
    case 299u: goto L_0896D440;
    case 300u: goto L_0896D448;
    case 301u: goto L_0896D478;
    case 302u: goto L_0896D480;
    case 303u: goto L_0896D48C;
    case 304u: goto L_0896D4A4;
    case 305u: goto L_0896D4B4;
    case 306u: goto L_0896D4BC;
    case 307u: goto L_0896D4D4;
    case 308u: goto L_0896D4E4;
    case 309u: goto L_0896D54C;
    case 310u: goto L_0896D55C;
    case 311u: goto L_0896D5C0;
    case 312u: goto L_0896D5E0;
    case 313u: goto L_0896D5EC;
    case 314u: goto L_0896D5F8;
    case 315u: goto L_0896D604;
    case 316u: goto L_0896D608;
    case 317u: goto L_0896D60C;
    case 318u: goto L_0896D61C;
    case 319u: goto L_0896D624;
    case 320u: goto L_0896D64C;
    case 321u: goto L_0896D654;
    case 322u: goto L_0896D6A4;
    case 323u: goto L_0896D6C8;
    case 324u: goto L_0896D6D4;
    case 325u: goto L_0896D6E4;
    case 326u: goto L_0896D6F4;
    case 327u: goto L_0896D6FC;
    case 328u: goto L_0896D734;
    case 329u: goto L_0896D744;
    case 330u: goto L_0896D750;
    case 331u: goto L_0896D760;
    case 332u: goto L_0896D780;
    case 333u: goto L_0896D7D0;
    case 334u: goto L_0896D7D8;
    case 335u: goto L_0896D7FC;
    case 336u: goto L_0896D8AC;
    case 337u: goto L_0896D910;
    case 338u: goto L_0896D91C;
    case 339u: goto L_0896D944;
    case 340u: goto L_0896D950;
    case 341u: goto L_0896D968;
    case 342u: goto L_0896D97C;
    case 343u: goto L_0896D98C;
    case 344u: goto L_0896D994;
    case 345u: goto L_0896D99C;
    case 346u: goto L_0896D9AC;
    case 347u: goto L_0896D9B4;
    case 348u: goto L_0896D9B8;
    case 349u: goto L_0896D9C0;
    case 350u: goto L_0896D9C8;
    case 351u: goto L_0896D9D4;
    case 352u: goto L_0896D9DC;
    case 353u: goto L_0896D9EC;
    case 354u: goto L_0896DA08;
    case 355u: goto L_0896DA14;
    case 356u: goto L_0896DA30;
    case 357u: goto L_0896DA3C;
    case 358u: goto L_0896DA58;
    case 359u: goto L_0896DA64;
    case 360u: goto L_0896DA80;
    case 361u: goto L_0896DA8C;
    case 362u: goto L_0896DAA8;
    case 363u: goto L_0896DAB4;
    case 364u: goto L_0896DAE0;
    case 365u: goto L_0896DB08;
    case 366u: goto L_0896DB18;
    case 367u: goto L_0896DB24;
    case 368u: goto L_0896DB44;
    case 369u: goto L_0896DB50;
    case 370u: goto L_0896DB6C;
    case 371u: goto L_0896DB78;
    case 372u: goto L_0896DB94;
    case 373u: goto L_0896DBA0;
    case 374u: goto L_0896DBBC;
    case 375u: goto L_0896DBC8;
    case 376u: goto L_0896DBE4;
    case 377u: goto L_0896DBF0;
    case 378u: goto L_0896DC18;
    case 379u: goto L_0896DC40;
    case 380u: goto L_0896DC48;
    case 381u: goto L_0896DC58;
    case 382u: goto L_0896DC64;
    case 383u: goto L_0896DC84;
    case 384u: goto L_0896DC90;
    case 385u: goto L_0896DCAC;
    case 386u: goto L_0896DCB8;
    case 387u: goto L_0896DCD4;
    case 388u: goto L_0896DCE0;
    case 389u: goto L_0896DCFC;
    case 390u: goto L_0896DD08;
    case 391u: goto L_0896DD24;
    case 392u: goto L_0896DD30;
    case 393u: goto L_0896DD5C;
    case 394u: goto L_0896DD84;
    case 395u: goto L_0896DD94;
    case 396u: goto L_0896DDA0;
    case 397u: goto L_0896DDC0;
    case 398u: goto L_0896DDCC;
    case 399u: goto L_0896DDE8;
    case 400u: goto L_0896DDF4;
    case 401u: goto L_0896DE10;
    case 402u: goto L_0896DE1C;
    case 403u: goto L_0896DE38;
    case 404u: goto L_0896DE44;
    case 405u: goto L_0896DE60;
    case 406u: goto L_0896DE6C;
    case 407u: goto L_0896DE94;
    case 408u: goto L_0896DEBC;
    case 409u: goto L_0896DEC4;
    case 410u: goto L_0896DEC8;
    case 411u: goto L_0896DED8;
    case 412u: goto L_0896DEE4;
    case 413u: goto L_0896DF00;
    case 414u: goto L_0896DF0C;
    case 415u: goto L_0896DF28;
    case 416u: goto L_0896DF34;
    case 417u: goto L_0896DF50;
    case 418u: goto L_0896DF5C;
    case 419u: goto L_0896DF70;
    case 420u: goto L_0896DF8C;
    case 421u: goto L_0896DF9C;
    case 422u: goto L_0896DFAC;
    case 423u: goto L_0896DFB8;
    case 424u: goto L_0896DFC8;
    case 425u: goto L_0896DFD4;
    case 426u: goto L_0896DFE4;
    case 427u: goto L_0896DFF0;
    case 428u: goto L_0896E000;
    case 429u: goto L_0896E00C;
    case 430u: goto L_0896E018;
    case 431u: goto L_0896E034;
    case 432u: goto L_0896E044;
    case 433u: goto L_0896E04C;
    case 434u: goto L_0896E088;
    case 435u: goto L_0896E23C;
    case 436u: goto L_0896E2C8;
    case 437u: goto L_0896E2D0;
    case 438u: goto L_0896E2E8;
    case 439u: goto L_0896E30C;
    case 440u: goto L_0896E328;
    case 441u: goto L_0896E354;
    case 442u: goto L_0896E374;
    case 443u: goto L_0896E380;
    case 444u: goto L_0896E38C;
    case 445u: goto L_0896E3AC;
    case 446u: goto L_0896E3B8;
    case 447u: goto L_0896E3C4;
    case 448u: goto L_0896E3D4;
    case 449u: goto L_0896E3E4;
    case 450u: goto L_0896E3F8;
    case 451u: goto L_0896E400;
    case 452u: goto L_0896E410;
    case 453u: goto L_0896E418;
    case 454u: goto L_0896E428;
    case 455u: goto L_0896E42C;
    case 456u: goto L_0896E434;
    case 457u: goto L_0896E43C;
    case 458u: goto L_0896E450;
    case 459u: goto L_0896E454;
    case 460u: goto L_0896E470;
    case 461u: goto L_0896E4A8;
    case 462u: goto L_0896E4B4;
    case 463u: goto L_0896E4C8;
    case 464u: goto L_0896E4D8;
    case 465u: goto L_0896E4F0;
    case 466u: goto L_0896E4F8;
    case 467u: goto L_0896E528;
    case 468u: goto L_0896E534;
    case 469u: goto L_0896E548;
    case 470u: goto L_0896E554;
    case 471u: goto L_0896E574;
    case 472u: goto L_0896E59C;
    case 473u: goto L_0896E5A8;
    case 474u: goto L_0896E5D4;
    case 475u: goto L_0896E60C;
    case 476u: goto L_0896E704;
    case 477u: goto L_0896E710;
    case 478u: goto L_0896E71C;
    case 479u: goto L_0896E728;
    case 480u: goto L_0896E734;
    case 481u: goto L_0896E740;
    case 482u: goto L_0896E74C;
    case 483u: goto L_0896E758;
    case 484u: goto L_0896E764;
    case 485u: goto L_0896E770;
    case 486u: goto L_0896E77C;
    case 487u: goto L_0896E788;
    case 488u: goto L_0896E794;
    case 489u: goto L_0896E7A0;
    case 490u: goto L_0896E7AC;
    case 491u: goto L_0896E7B8;
    case 492u: goto L_0896E7C4;
    case 493u: goto L_0896E7D0;
    case 494u: goto L_0896E7DC;
    case 495u: goto L_0896E7E8;
    case 496u: goto L_0896E7F4;
    case 497u: goto L_0896E800;
    case 498u: goto L_0896E80C;
    case 499u: goto L_0896E818;
    case 500u: goto L_0896E824;
    case 501u: goto L_0896E830;
    case 502u: goto L_0896E83C;
    case 503u: goto L_0896E848;
    case 504u: goto L_0896E854;
    case 505u: goto L_0896E860;
    case 506u: goto L_0896E86C;
    case 507u: goto L_0896E878;
    case 508u: goto L_0896E884;
    case 509u: goto L_0896E890;
    case 510u: goto L_0896E89C;
    case 511u: goto L_0896E8A8;
    case 512u: goto L_0896E8B4;
    case 513u: goto L_0896E8C0;
    case 514u: goto L_0896E8CC;
    case 515u: goto L_0896E8D8;
    case 516u: goto L_0896E8E4;
    case 517u: goto L_0896E8F0;
    case 518u: goto L_0896E8FC;
    case 519u: goto L_0896E908;
    case 520u: goto L_0896E914;
    case 521u: goto L_0896E920;
    case 522u: goto L_0896E92C;
    case 523u: goto L_0896E938;
    case 524u: goto L_0896E944;
    case 525u: goto L_0896E950;
    case 526u: goto L_0896E95C;
    case 527u: goto L_0896E968;
    case 528u: goto L_0896E974;
    case 529u: goto L_0896E980;
    case 530u: goto L_0896E98C;
    case 531u: goto L_0896E998;
    case 532u: goto L_0896E9A4;
    case 533u: goto L_0896E9B0;
    case 534u: goto L_0896E9BC;
    case 535u: goto L_0896E9C8;
    case 536u: goto L_0896E9D4;
    case 537u: goto L_0896E9E0;
    case 538u: goto L_0896E9EC;
    case 539u: goto L_0896E9F8;
    case 540u: goto L_0896EA04;
    case 541u: goto L_0896EA10;
    case 542u: goto L_0896EA1C;
    case 543u: goto L_0896EA28;
    case 544u: goto L_0896EA34;
    case 545u: goto L_0896EA40;
    case 546u: goto L_0896EA4C;
    case 547u: goto L_0896EA58;
    case 548u: goto L_0896EA64;
    case 549u: goto L_0896EA70;
    case 550u: goto L_0896EA7C;
    case 551u: goto L_0896EA88;
    case 552u: goto L_0896EA94;
    case 553u: goto L_0896EAA0;
    case 554u: goto L_0896EAAC;
    case 555u: goto L_0896EAB8;
    case 556u: goto L_0896EAC4;
    case 557u: goto L_0896EAD0;
    case 558u: goto L_0896EADC;
    case 559u: goto L_0896EAE8;
    case 560u: goto L_0896EAF4;
    case 561u: goto L_0896EB00;
    case 562u: goto L_0896EB0C;
    case 563u: goto L_0896EB18;
    case 564u: goto L_0896EB24;
    case 565u: goto L_0896EB30;
    case 566u: goto L_0896EB3C;
    case 567u: goto L_0896EB48;
    case 568u: goto L_0896EB54;
    case 569u: goto L_0896EB60;
    case 570u: goto L_0896EB6C;
    case 571u: goto L_0896EB78;
    case 572u: goto L_0896EB84;
    case 573u: goto L_0896EB90;
    case 574u: goto L_0896EB9C;
    case 575u: goto L_0896EBA8;
    case 576u: goto L_0896EBB4;
    case 577u: goto L_0896EBC0;
    case 578u: goto L_0896EBCC;
    case 579u: goto L_0896EBD8;
    case 580u: goto L_0896EBE4;
    case 581u: goto L_0896EBF0;
    case 582u: goto L_0896EBFC;
    case 583u: goto L_0896EC08;
    case 584u: goto L_0896EC14;
    case 585u: goto L_0896EC20;
    case 586u: goto L_0896EC2C;
    case 587u: goto L_0896EC38;
    case 588u: goto L_0896EC44;
    case 589u: goto L_0896EC50;
    case 590u: goto L_0896EC5C;
    case 591u: goto L_0896EC68;
    case 592u: goto L_0896EC74;
    case 593u: goto L_0896EC80;
    case 594u: goto L_0896EC8C;
    case 595u: goto L_0896EC98;
    case 596u: goto L_0896ECA4;
    case 597u: goto L_0896ECB0;
    case 598u: goto L_0896ECC4;
    case 599u: goto L_0896ECD4;
    case 600u: goto L_0896ECDC;
    case 601u: goto L_0896ECE4;
    case 602u: goto L_0896ECFC;
    case 603u: goto L_0896ED08;
    case 604u: goto L_0896ED34;
    case 605u: goto L_0896ED40;
    case 606u: goto L_0896ED4C;
    case 607u: goto L_0896ED54;
    case 608u: goto L_0896ED5C;
    case 609u: goto L_0896ED64;
    case 610u: goto L_0896ED68;
    case 611u: goto L_0896ED70;
    case 612u: goto L_0896ED78;
    case 613u: goto L_0896EDA4;
    case 614u: goto L_0896EDC0;
    case 615u: goto L_0896EDD4;
    case 616u: goto L_0896EDE8;
    case 617u: goto L_0896EE04;
    case 618u: goto L_0896EE0C;
    case 619u: goto L_0896EE18;
    case 620u: goto L_0896EE20;
    case 621u: goto L_0896EE34;
    case 622u: goto L_0896EE48;
    case 623u: goto L_0896EE54;
    case 624u: goto L_0896EE6C;
    case 625u: goto L_0896EE78;
    case 626u: goto L_0896EE9C;
    case 627u: goto L_0896EF14;
    case 628u: goto L_0896EF40;
    case 629u: goto L_0896EF68;
    case 630u: goto L_0896EF70;
    case 631u: goto L_0896EF80;
    case 632u: goto L_0896EFAC;
    case 633u: goto L_0896EFC0;
    case 634u: goto L_0896EFD8;
    case 635u: goto L_0896EFE0;
    case 636u: goto L_0896EFFC;
    case 637u: goto L_0896F00C;
    case 638u: goto L_0896F014;
    case 639u: goto L_0896F048;
    case 640u: goto L_0896F098;
    case 641u: goto L_0896F0B8;
    case 642u: goto L_0896F0C4;
    case 643u: goto L_0896F120;
    case 644u: goto L_0896F124;
    case 645u: goto L_0896F174;
    case 646u: goto L_0896F17C;
    case 647u: goto L_0896F184;
    case 648u: goto L_0896F1A8;
    case 649u: goto L_0896F1CC;
    case 650u: goto L_0896F1E4;
    case 651u: goto L_0896F1F8;
    case 652u: goto L_0896F240;
    case 653u: goto L_0896F388;
    case 654u: goto L_0896F3A4;
    case 655u: goto L_0896F3BC;
    case 656u: goto L_0896F3C8;
    case 657u: goto L_0896F3D0;
    case 658u: goto L_0896F3E4;
    case 659u: goto L_0896F3F8;
    case 660u: goto L_0896F404;
    case 661u: goto L_0896F418;
    case 662u: goto L_0896F420;
    case 663u: goto L_0896F434;
    case 664u: goto L_0896F440;
    case 665u: goto L_0896F450;
    case 666u: goto L_0896F474;
    case 667u: goto L_0896F47C;
    case 668u: goto L_0896F488;
    case 669u: goto L_0896F49C;
    case 670u: goto L_0896F4A8;
    case 671u: goto L_0896F4C0;
    case 672u: goto L_0896F4CC;
    case 673u: goto L_0896F4D0;
    case 674u: goto L_0896F4E0;
    case 675u: goto L_0896F4F8;
    case 676u: goto L_0896F518;
    case 677u: goto L_0896F52C;
    case 678u: goto L_0896F538;
    case 679u: goto L_0896F550;
    case 680u: goto L_0896F560;
    case 681u: goto L_0896F568;
    case 682u: goto L_0896F578;
    case 683u: goto L_0896F584;
    case 684u: goto L_0896F594;
    case 685u: goto L_0896F59C;
    case 686u: goto L_0896F5A4;
    case 687u: goto L_0896F5E8;
    case 688u: goto L_0896F5F4;
    case 689u: goto L_0896F5FC;
    case 690u: goto L_0896F60C;
    case 691u: goto L_0896F634;
    case 692u: goto L_0896F640;
    case 693u: goto L_0896F64C;
    case 694u: goto L_0896F658;
    case 695u: goto L_0896F65C;
    case 696u: goto L_0896F67C;
    case 697u: goto L_0896F6A4;
    case 698u: goto L_0896F6B0;
    case 699u: goto L_0896F6B8;
    case 700u: goto L_0896F6C4;
    case 701u: goto L_0896F6D4;
    case 702u: goto L_0896F6E4;
    case 703u: goto L_0896F71C;
    case 704u: goto L_0896F728;
    case 705u: goto L_0896F78C;
    case 706u: goto L_0896F7A0;
    case 707u: goto L_0896F7C4;
    case 708u: goto L_0896F7E8;
    case 709u: goto L_0896F7F8;
    case 710u: goto L_0896F800;
    case 711u: goto L_0896F810;
    case 712u: goto L_0896F81C;
    case 713u: goto L_0896F830;
    case 714u: goto L_0896F834;
    case 715u: goto L_0896F860;
    case 716u: goto L_0896F878;
    case 717u: goto L_0896F888;
    case 718u: goto L_0896F898;
    case 719u: goto L_0896F8A0;
    case 720u: goto L_0896F8A8;
    case 721u: goto L_0896F8B0;
    case 722u: goto L_0896F8B8;
    case 723u: goto L_0896F8C0;
    case 724u: goto L_0896F8DC;
    case 725u: goto L_0896F8E4;
    case 726u: goto L_0896F8F0;
    case 727u: goto L_0896F8F8;
    case 728u: goto L_0896F908;
    case 729u: goto L_0896F914;
    case 730u: goto L_0896F91C;
    case 731u: goto L_0896F94C;
    case 732u: goto L_0896F97C;
    case 733u: goto L_0896F990;
    case 734u: goto L_0896F99C;
    case 735u: goto L_0896F9C0;
    case 736u: goto L_0896F9F8;
    case 737u: goto L_0896FA34;
    case 738u: goto L_0896FA38;
    case 739u: goto L_0896FA64;
    case 740u: goto L_0896FA88;
    case 741u: goto L_0896FAA4;
    case 742u: goto L_0896FAE8;
    case 743u: goto L_0896FAF8;
    case 744u: goto L_0896FB08;
    case 745u: goto L_0896FB14;
    case 746u: goto L_0896FB4C;
    case 747u: goto L_0896FB6C;
    case 748u: goto L_0896FB74;
    case 749u: goto L_0896FB7C;
    case 750u: goto L_0896FB84;
    case 751u: goto L_0896FBA4;
    case 752u: goto L_0896FBB8;
    case 753u: goto L_0896FBC4;
    case 754u: goto L_0896FBCC;
    case 755u: goto L_0896FBD0;
    case 756u: goto L_0896FBD4;
    case 757u: goto L_0896FBE8;
    case 758u: goto L_0896FBFC;
    case 759u: goto L_0896FC10;
    case 760u: goto L_0896FC1C;
    case 761u: goto L_0896FC24;
    case 762u: goto L_0896FC28;
    case 763u: goto L_0896FC2C;
    case 764u: goto L_0896FC40;
    case 765u: goto L_0896FC48;
    case 766u: goto L_0896FC50;
    case 767u: goto L_0896FC5C;
    case 768u: goto L_0896FC7C;
    case 769u: goto L_0896FC88;
    case 770u: goto L_0896FC94;
    case 771u: goto L_0896FC9C;
    case 772u: goto L_0896FCA4;
    case 773u: goto L_0896FCB4;
    case 774u: goto L_0896FCC0;
    case 775u: goto L_0896FCC8;
    case 776u: goto L_0896FCCC;
    case 777u: goto L_0896FCD8;
    case 778u: goto L_0896FCE4;
    case 779u: goto L_0896FCEC;
    case 780u: goto L_0896FD18;
    case 781u: goto L_0896FD24;
    case 782u: goto L_0896FD2C;
    case 783u: goto L_0896FD38;
    case 784u: goto L_0896FD5C;
    case 785u: goto L_0896FD68;
    case 786u: goto L_0896FD70;
    case 787u: goto L_0896FD78;
    case 788u: goto L_0896FD80;
    case 789u: goto L_0896FD94;
    case 790u: goto L_0896FDB0;
    case 791u: goto L_0896FDBC;
    case 792u: goto L_0896FDC4;
    case 793u: goto L_0896FDD0;
    case 794u: goto L_0896FDE4;
    case 795u: goto L_0896FE3C;
    case 796u: goto L_0896FE98;
    case 797u: goto L_0896FEA4;
    case 798u: goto L_0896FEF4;
    case 799u: goto L_0896FEFC;
    case 800u: goto L_0896FF08;
    case 801u: goto L_0896FF10;
    case 802u: goto L_0896FF18;
    case 803u: goto L_0896FF30;
    case 804u: goto L_0896FF34;
    case 805u: goto L_0896FF98;
    case 806u: goto L_0896FF9C;
    case 807u: goto L_0896FFC4;
    case 808u: goto L_0896FFD0;
    case 809u: goto L_0896FFDC;
    case 810u: goto L_0896FFEC;
    case 811u: goto L_0896FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0896C000:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896C040;
      }
      goto L_0896C010;
    }
L_0896C010:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896C01Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896C01Cu) goto L_0896C01C;
    return;
L_0896C01C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C034;
      }
      goto L_0896C028;
    }
L_0896C028:
    ctx.gpr[31] = (0x0896C030u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896C030u) goto L_0896C030;
    return;
L_0896C030:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896C034;
L_0896C034:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896C040;
L_0896C040:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896C050u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27640));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896C050u) goto L_0896C050;
    return;
L_0896C050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896C104;
      }
      goto L_0896C058;
    }
L_0896C058:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896C098;
      }
      goto L_0896C068;
    }
L_0896C068:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896C074u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896C074u) goto L_0896C074;
    return;
L_0896C074:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C08C;
      }
      goto L_0896C080;
    }
L_0896C080:
    ctx.gpr[31] = (0x0896C088u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896C088u) goto L_0896C088;
    return;
L_0896C088:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896C08C;
L_0896C08C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896C098;
L_0896C098:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896C0A8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27640));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896C0A8u) goto L_0896C0A8;
    return;
L_0896C0A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896C104;
      }
      goto L_0896C0B0;
    }
L_0896C0B0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896C0F0;
      }
      goto L_0896C0C0;
    }
L_0896C0C0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896C0CCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0896C0CCu) goto L_0896C0CC;
    return;
L_0896C0CC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C0E4;
      }
      goto L_0896C0D8;
    }
L_0896C0D8:
    ctx.gpr[31] = (0x0896C0E0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0896C0E0u) goto L_0896C0E0;
    return;
L_0896C0E0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896C0E4;
L_0896C0E4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896C0F0;
L_0896C0F0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x0896C100u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27632));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896C100u) goto L_0896C100;
    return;
L_0896C100:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0896C104;
L_0896C104:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C128;
      }
      goto L_0896C10C;
    }
L_0896C10C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(15));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0896C128u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x0896C128u) goto L_0896C128;
    return;
L_0896C128:
    ctx.gpr[2] = (0u | 1u);
    goto L_0896C12C;
L_0896C12C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C164:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(117)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0896C280;
      }
      goto L_0896C1B8;
    }
L_0896C1B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7660)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C280;
      }
      goto L_0896C1C4;
    }
L_0896C1C4:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x0896C1D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0896C1D0u) goto L_0896C1D0;
    return;
L_0896C1D0:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x0896C1DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0896C1DCu) goto L_0896C1DC;
    return;
L_0896C1DC:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0896C1E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0896C1E8u) goto L_0896C1E8;
    return;
L_0896C1E8:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0896C1F4u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0896C1F4u) goto L_0896C1F4;
    return;
L_0896C1F4:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x0896C200u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0896C200u) goto L_0896C200;
    return;
L_0896C200:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x0896C20Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0896C20Cu) goto L_0896C20C;
    return;
L_0896C20C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0896C224u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x0896C224u) goto L_0896C224;
    return;
L_0896C224:
    ctx.gpr[31] = (0x0896C22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 215u, 0x089D5A30u>(ctx, &aot_mem) && ctx.pc == 0x0896C22Cu) goto L_0896C22C;
    return;
L_0896C22C:
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7656));
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-4576));
    ctx.gpr[6] = (16309u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    ctx.gpr[6] = (ctx.gpr[6] | 1267u);
    ctx.gpr[21] = (2232u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[23] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(5992));
    ctx.gpr[30] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_0896C288;
      }
      goto L_0896C278;
    }
L_0896C278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C4A0;
      }
      goto L_0896C280;
    }
L_0896C280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CAA0;
      }
      goto L_0896C288;
    }
L_0896C288:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x0896C2A4u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0896C2A4u) goto L_0896C2A4;
    return;
L_0896C2A4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-6464));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0896C344;
      }
      goto L_0896C2C8;
    }
L_0896C2C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_0896C314;
      }
      goto L_0896C2E0;
    }
L_0896C2E0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896C2F0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 102u, 0x088A8548u>(ctx, &aot_mem) && ctx.pc == 0x0896C2F0u) goto L_0896C2F0;
    return;
L_0896C2F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896C344;
      }
      goto L_0896C314;
    }
L_0896C314:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896C324u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 113u, 0x088A85F0u>(ctx, &aot_mem) && ctx.pc == 0x0896C324u) goto L_0896C324;
    return;
L_0896C324:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896C344;
L_0896C344:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(89)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_0896C3D0;
      }
      goto L_0896C388;
    }
L_0896C388:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[14] = ctx.fpr[22] + ctx.fpr[24];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[31] = (0x0896C3B0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 88u, 0x089685E8u>(ctx, &aot_mem) && ctx.pc == 0x0896C3B0u) goto L_0896C3B0;
    return;
L_0896C3B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (2231u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7656)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0896C420;
      }
      goto L_0896C3D0;
    }
L_0896C3D0:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2231u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7640)));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0896C404u);
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 88u, 0x089685E8u>(ctx, &aot_mem) && ctx.pc == 0x0896C404u) goto L_0896C404;
    return;
L_0896C404:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2231u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7656)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0896C420;
L_0896C420:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[31] = (0x0896C46Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x0896C46Cu) goto L_0896C46C;
    return;
L_0896C46C:
    ctx.gpr[31] = (0x0896C474u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 723u, 0x089674CCu>(ctx, &aot_mem) && ctx.pc == 0x0896C474u) goto L_0896C474;
    return;
L_0896C474:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0896C480u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x0896C480u) goto L_0896C480;
    return;
L_0896C480:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0896C4A0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 93u, 0x089687C0u>(ctx, &aot_mem) && ctx.pc == 0x0896C4A0u) goto L_0896C4A0;
    return;
L_0896C4A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (0u | 0u);
    goto L_0896C4A8;
L_0896C4A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C568;
      }
      goto L_0896C4B4;
    }
L_0896C4B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C568;
      }
      goto L_0896C4C0;
    }
L_0896C4C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896C568;
      }
      goto L_0896C4D4;
    }
L_0896C4D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896C530;
      }
      goto L_0896C4E0;
    }
L_0896C4E0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896C530;
      }
      goto L_0896C4E8;
    }
L_0896C4E8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0896C530;
      }
      goto L_0896C4F0;
    }
L_0896C4F0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896C530;
      }
      goto L_0896C4F8;
    }
L_0896C4F8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0896C528;
      }
      goto L_0896C500;
    }
L_0896C500:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6536)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C520;
      }
      goto L_0896C50C;
    }
L_0896C50C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C528;
      }
      goto L_0896C514;
    }
L_0896C514:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C528;
      }
      goto L_0896C520;
    }
L_0896C520:
    ctx.gpr[31] = (0x0896C528u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 295u, 0x08969AC0u>(ctx, &aot_mem) && ctx.pc == 0x0896C528u) goto L_0896C528;
    return;
L_0896C528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C568;
      }
      goto L_0896C530;
    }
L_0896C530:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0896C560;
      }
      goto L_0896C538;
    }
L_0896C538:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6536)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C558;
      }
      goto L_0896C544;
    }
L_0896C544:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C560;
      }
      goto L_0896C54C;
    }
L_0896C54C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C560;
      }
      goto L_0896C558;
    }
L_0896C558:
    ctx.gpr[31] = (0x0896C560u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 353u, 0x08969F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C560u) goto L_0896C560;
    return;
L_0896C560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C568;
      }
      goto L_0896C568;
    }
L_0896C568:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0896C4A8;
      }
      goto L_0896C578;
    }
L_0896C578:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 16u);
    ctx.gpr[19] = (0u | 27u);
    goto L_0896C588;
L_0896C588:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C668;
      }
      goto L_0896C594;
    }
L_0896C594:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C668;
      }
      goto L_0896C5A0;
    }
L_0896C5A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_0896C5C8;
      }
      goto L_0896C5B0;
    }
L_0896C5B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896C5C8;
      }
      goto L_0896C5B8;
    }
L_0896C5B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0896C5C8;
      }
      goto L_0896C5C0;
    }
L_0896C5C0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0896C668;
      }
      goto L_0896C5C8;
    }
L_0896C5C8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0896C5D8;
      }
      goto L_0896C5D0;
    }
L_0896C5D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0896C668;
      }
      goto L_0896C5D8;
    }
L_0896C5D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896C668;
      }
      goto L_0896C5EC;
    }
L_0896C5EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6536)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896C63C;
      }
      goto L_0896C5F8;
    }
L_0896C5F8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896C63C;
      }
      goto L_0896C600;
    }
L_0896C600:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0896C63C;
      }
      goto L_0896C608;
    }
L_0896C608:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896C63C;
      }
      goto L_0896C610;
    }
L_0896C610:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C62C;
      }
      goto L_0896C618;
    }
L_0896C618:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C634;
      }
      goto L_0896C620;
    }
L_0896C620:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C634;
      }
      goto L_0896C62C;
    }
L_0896C62C:
    ctx.gpr[31] = (0x0896C634u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 295u, 0x08969AC0u>(ctx, &aot_mem) && ctx.pc == 0x0896C634u) goto L_0896C634;
    return;
L_0896C634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C668;
      }
      goto L_0896C63C;
    }
L_0896C63C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C658;
      }
      goto L_0896C644;
    }
L_0896C644:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C660;
      }
      goto L_0896C64C;
    }
L_0896C64C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C660;
      }
      goto L_0896C658;
    }
L_0896C658:
    ctx.gpr[31] = (0x0896C660u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 353u, 0x08969F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C660u) goto L_0896C660;
    return;
L_0896C660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C668;
      }
      goto L_0896C668;
    }
L_0896C668:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0896C588;
      }
      goto L_0896C678;
    }
L_0896C678:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (2229u << 16u);
    goto L_0896C688;
L_0896C688:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C77C;
      }
      goto L_0896C694;
    }
L_0896C694:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C77C;
      }
      goto L_0896C6A0;
    }
L_0896C6A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C77C;
      }
      goto L_0896C6B4;
    }
L_0896C6B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896C774;
      }
      goto L_0896C6BC;
    }
L_0896C6BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896C774;
      }
      goto L_0896C6C4;
    }
L_0896C6C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0896C774;
      }
      goto L_0896C6CC;
    }
L_0896C6CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896C774;
      }
      goto L_0896C6D4;
    }
L_0896C6D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_0896C76C;
      }
      goto L_0896C6E4;
    }
L_0896C6E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 27u);
      if (branch_taken) {
          goto L_0896C76C;
      }
      goto L_0896C6EC;
    }
L_0896C6EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896C76C;
      }
      goto L_0896C6F4;
    }
L_0896C6F4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0896C76C;
      }
      goto L_0896C6FC;
    }
L_0896C6FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_0896C76C;
      }
      goto L_0896C704;
    }
L_0896C704:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896C76C;
      }
      goto L_0896C70C;
    }
L_0896C70C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6536)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C72C;
      }
      goto L_0896C718;
    }
L_0896C718:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C76C;
      }
      goto L_0896C720;
    }
L_0896C720:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C76C;
      }
      goto L_0896C72C;
    }
L_0896C72C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C764;
      }
      goto L_0896C738;
    }
L_0896C738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(53)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[18] << (ctx.gpr[4] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C76C;
      }
      goto L_0896C754;
    }
L_0896C754:
    ctx.gpr[31] = (0x0896C75Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 295u, 0x08969AC0u>(ctx, &aot_mem) && ctx.pc == 0x0896C75Cu) goto L_0896C75C;
    return;
L_0896C75C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C76C;
      }
      goto L_0896C764;
    }
L_0896C764:
    ctx.gpr[31] = (0x0896C76Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 295u, 0x08969AC0u>(ctx, &aot_mem) && ctx.pc == 0x0896C76Cu) goto L_0896C76C;
    return;
L_0896C76C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C77C;
      }
      goto L_0896C774;
    }
L_0896C774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C77C;
      }
      goto L_0896C77C;
    }
L_0896C77C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0896C688;
      }
      goto L_0896C78C;
    }
L_0896C78C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    goto L_0896C798;
L_0896C798:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C95C;
      }
      goto L_0896C7A4;
    }
L_0896C7A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C95C;
      }
      goto L_0896C7B0;
    }
L_0896C7B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C95C;
      }
      goto L_0896C7C4;
    }
L_0896C7C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896C7EC;
      }
      goto L_0896C7CC;
    }
L_0896C7CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896C7EC;
      }
      goto L_0896C7D4;
    }
L_0896C7D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0896C7EC;
      }
      goto L_0896C7DC;
    }
L_0896C7DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896C7EC;
      }
      goto L_0896C7E4;
    }
L_0896C7E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C95C;
      }
      goto L_0896C7EC;
    }
L_0896C7EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_0896C954;
      }
      goto L_0896C7FC;
    }
L_0896C7FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 27u);
      if (branch_taken) {
          goto L_0896C954;
      }
      goto L_0896C804;
    }
L_0896C804:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896C954;
      }
      goto L_0896C80C;
    }
L_0896C80C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_0896C954;
      }
      goto L_0896C814;
    }
L_0896C814:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896C954;
      }
      goto L_0896C81C;
    }
L_0896C81C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0896C924;
      }
      goto L_0896C82C;
    }
L_0896C82C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896C83Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x0896C83Cu) goto L_0896C83C;
    return;
L_0896C83C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C924;
      }
      goto L_0896C848;
    }
L_0896C848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C870;
      }
      goto L_0896C854;
    }
L_0896C854:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896C864u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0896C864u) goto L_0896C864;
    return;
L_0896C864:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896C870;
L_0896C870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(102)));
    ctx.gpr[17] = (ctx.gpr[4] & 4u);
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C8A8;
      }
      goto L_0896C888;
    }
L_0896C888:
    ctx.gpr[31] = (0x0896C890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0896C890u) goto L_0896C890;
    return;
L_0896C890:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896C89Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 387u, 0x08945A18u>(ctx, &aot_mem) && ctx.pc == 0x0896C89Cu) goto L_0896C89C;
    return;
L_0896C89C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C8A8;
      }
      goto L_0896C8A4;
    }
L_0896C8A4:
    ctx.gpr[17] = (0u | 1u);
    goto L_0896C8A8;
L_0896C8A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(53)));
    ctx.gpr[5] = (ctx.gpr[4] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C8CC;
      }
      goto L_0896C8C8;
    }
L_0896C8C8:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0896C8CC;
L_0896C8CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0896C8DCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0896C8DCu) goto L_0896C8DC;
    return;
L_0896C8DC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C924;
      }
      goto L_0896C8E8;
    }
L_0896C8E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C924;
      }
      goto L_0896C900;
    }
L_0896C900:
    ctx.gpr[31] = (0x0896C908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 144u, 0x08980A9Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C908u) goto L_0896C908;
    return;
L_0896C908:
    ctx.gpr[31] = (0x0896C910u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0896C910u) goto L_0896C910;
    return;
L_0896C910:
    ctx.gpr[31] = (0x0896C918u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 261u, 0x089A5284u>(ctx, &aot_mem) && ctx.pc == 0x0896C918u) goto L_0896C918;
    return;
L_0896C918:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896C924;
      }
      goto L_0896C920;
    }
L_0896C920:
    ctx.gpr[17] = (0u | 0u);
    goto L_0896C924;
L_0896C924:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C954;
      }
      goto L_0896C92C;
    }
L_0896C92C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6536)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C94C;
      }
      goto L_0896C938;
    }
L_0896C938:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C954;
      }
      goto L_0896C940;
    }
L_0896C940:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C954;
      }
      goto L_0896C94C;
    }
L_0896C94C:
    ctx.gpr[31] = (0x0896C954u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 353u, 0x08969F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C954u) goto L_0896C954;
    return;
L_0896C954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C95C;
      }
      goto L_0896C95C;
    }
L_0896C95C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0896C798;
      }
      goto L_0896C96C;
    }
L_0896C96C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (0x0896C978u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 132u, 0x089FD348u>(ctx, &aot_mem) && ctx.pc == 0x0896C978u) goto L_0896C978;
    return;
L_0896C978:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6208)));
    ctx.gpr[4] = (2231u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7656)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(320)));
    ctx.fpr[15] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896CAA0;
      }
      goto L_0896C9B8;
    }
L_0896C9B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6536)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_0896C9F8;
      }
      goto L_0896C9C4;
    }
L_0896C9C4:
    ctx.gpr[4] = (50338u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 53494u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[4] = (17574u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39731u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0896C9F0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x0896C9F0u) goto L_0896C9F0;
    return;
L_0896C9F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CA1C;
      }
      goto L_0896C9F8;
    }
L_0896C9F8:
    ctx.gpr[31] = (0x0896CA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 205u, 0x089D5974u>(ctx, &aot_mem) && ctx.pc == 0x0896CA00u) goto L_0896CA00;
    return;
L_0896CA00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896CA1Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x0896CA1Cu) goto L_0896CA1C;
    return;
L_0896CA1C:
    ctx.gpr[31] = (0x0896CA24u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 723u, 0x089674CCu>(ctx, &aot_mem) && ctx.pc == 0x0896CA24u) goto L_0896CA24;
    return;
L_0896CA24:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0896CA30u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 757u, 0x08967860u>(ctx, &aot_mem) && ctx.pc == 0x0896CA30u) goto L_0896CA30;
    return;
L_0896CA30:
    ctx.gpr[31] = (0x0896CA38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0896CA38u) goto L_0896CA38;
    return;
L_0896CA38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0896CAA0;
      }
      goto L_0896CA40;
    }
L_0896CA40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CAA0;
      }
      goto L_0896CA4C;
    }
L_0896CA4C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0896CA58u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0896CA58u) goto L_0896CA58;
    return;
L_0896CA58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0896CA80;
      }
      goto L_0896CA70;
    }
L_0896CA70:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896CA90;
      }
      goto L_0896CA80;
    }
L_0896CA80:
    ctx.gpr[31] = (0x0896CA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0896CA88u) goto L_0896CA88;
    return;
L_0896CA88:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0896CA90;
      }
      goto L_0896CA90;
    }
L_0896CA90:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x0896CAA0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 104u, 0x089688F4u>(ctx, &aot_mem) && ctx.pc == 0x0896CAA0u) goto L_0896CAA0;
    return;
L_0896CAA0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896CAE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[16]);
    ctx.gpr[16] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-21984));
      if (branch_taken) {
          goto L_0896CB40;
      }
      goto L_0896CB38;
    }
L_0896CB38:
    ctx.gpr[31] = (0x0896CB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 261u, 0x08969758u>(ctx, &aot_mem) && ctx.pc == 0x0896CB40u) goto L_0896CB40;
    return;
L_0896CB40:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28524));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[4]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11360));
    ctx.gpr[5] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4556));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5696));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(221)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(222)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(223)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(225)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(226)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(227)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(169)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(170)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(171)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 65535u);
    ctx.gpr[4] = (16320u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(5992));
    ctx.gpr[23] = (2230u << 16u);
    goto L_0896CC40;
L_0896CC40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(51)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[21] = (0u | 5u);
    ctx.gpr[18] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2228u << 16u);
      if (branch_taken) {
          goto L_0896D7D8;
      }
      goto L_0896CC5C;
    }
L_0896CC5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D7D8;
      }
      goto L_0896CC68;
    }
L_0896CC68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D7D8;
      }
      goto L_0896CC7C;
    }
L_0896CC7C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896CD50;
      }
      goto L_0896CC84;
    }
L_0896CC84:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0896CE68;
      }
      goto L_0896CC8C;
    }
L_0896CC8C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0896CFE4;
      }
      goto L_0896CC94;
    }
L_0896CC94:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0896CD48;
      }
      goto L_0896CC9C;
    }
L_0896CC9C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0896D110;
      }
      goto L_0896CCA4;
    }
L_0896CCA4:
    ctx.gpr[31] = (0x0896CCACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 30u, 0x089581F0u>(ctx, &aot_mem) && ctx.pc == 0x0896CCACu) goto L_0896CCAC;
    return;
L_0896CCAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CD40;
      }
      goto L_0896CCB4;
    }
L_0896CCB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    if (ctx.gpr[4] == ctx.gpr[20]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6204)));
        goto L_0896CCD4;
    }
    goto L_0896CCC0;
L_0896CCC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896CD40;
      }
      goto L_0896CCD0;
    }
L_0896CCD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6204)));
    goto L_0896CCD4;
L_0896CCD4:
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[9] = (17252u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[10] = (16384u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[11] = (0u | 2048u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-28524)));
    ctx.gpr[5] = (0u | 5u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x0896CD40u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 295u, 0x08825BFCu>(ctx, &aot_mem) && ctx.pc == 0x0896CD40u) goto L_0896CD40;
    return;
L_0896CD40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D7D8;
      }
      goto L_0896CD48;
    }
L_0896CD48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D7D8;
      }
      goto L_0896CD50;
    }
L_0896CD50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0896CD60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0896CD60u) goto L_0896CD60;
    return;
L_0896CD60:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CE60;
      }
      goto L_0896CD6C;
    }
L_0896CD6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0896CD88;
      }
      goto L_0896CD78;
    }
L_0896CD78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896CE60;
      }
      goto L_0896CD88;
    }
L_0896CD88:
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CE0C;
      }
      goto L_0896CDF0;
    }
L_0896CDF0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28520)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
      if (branch_taken) {
          goto L_0896CE20;
      }
      goto L_0896CE0C;
    }
L_0896CE0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28516)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(81)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(82)));
    goto L_0896CE20;
L_0896CE20:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6204)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[11] = (0u | 1024u);
    ctx.gpr[31] = (0x0896CE60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x0896CE60u) goto L_0896CE60;
    return;
L_0896CE60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D7D8;
      }
      goto L_0896CE68;
    }
L_0896CE68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0896CE7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0896CE7Cu) goto L_0896CE7C;
    return;
L_0896CE7C:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CEBC;
      }
      goto L_0896CE88;
    }
L_0896CE88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CEB4;
      }
      goto L_0896CE94;
    }
L_0896CE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CEAC;
      }
      goto L_0896CEA0;
    }
L_0896CEA0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0896CEC0;
      }
      goto L_0896CEAC;
    }
L_0896CEAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_0896CEC0;
      }
      goto L_0896CEB4;
    }
L_0896CEB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0896CEC0;
      }
      goto L_0896CEBC;
    }
L_0896CEBC:
    ctx.gpr[10] = (0u | 0u);
    goto L_0896CEC0;
L_0896CEC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0896CEDC;
      }
      goto L_0896CECC;
    }
L_0896CECC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896CFDC;
      }
      goto L_0896CEDC;
    }
L_0896CEDC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CF28;
      }
      goto L_0896CF0C;
    }
L_0896CF0C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28520)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(113)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(114)));
      if (branch_taken) {
          goto L_0896CF40;
      }
      goto L_0896CF28;
    }
L_0896CF28:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28516)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(113)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(114)));
    goto L_0896CF40;
L_0896CF40:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CF8C;
      }
      goto L_0896CF48;
    }
L_0896CF48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16281u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0896CF8C;
L_0896CF8C:
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[10] = (ctx.gpr[11] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[11] = (0u | 1024u);
    ctx.gpr[31] = (0x0896CFDCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x0896CFDCu) goto L_0896CFDC;
    return;
L_0896CFDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D7D8;
      }
      goto L_0896CFE4;
    }
L_0896CFE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0896CFF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x0896CFF4u) goto L_0896CFF4;
    return;
L_0896CFF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896D010;
      }
      goto L_0896D000;
    }
L_0896D000:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D108;
      }
      goto L_0896D010;
    }
L_0896D010:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D088;
      }
      goto L_0896D06C;
    }
L_0896D06C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28520)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(146)));
      if (branch_taken) {
          goto L_0896D0C8;
      }
      goto L_0896D088;
    }
L_0896D088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D0B0;
      }
      goto L_0896D098;
    }
L_0896D098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-28516)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(146)));
      if (branch_taken) {
          goto L_0896D0C8;
      }
      goto L_0896D0B0;
    }
L_0896D0B0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28512)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(145)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(146)));
    goto L_0896D0C8;
L_0896D0C8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-6204)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[11] = (0u | 1024u);
    ctx.gpr[31] = (0x0896D108u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x0896D108u) goto L_0896D108;
    return;
L_0896D108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D7D8;
      }
      goto L_0896D110;
    }
L_0896D110:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[31] = (0x0896D124u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0896D124u) goto L_0896D124;
    return;
L_0896D124:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0896D36C;
      }
      goto L_0896D13C;
    }
L_0896D13C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D36C;
      }
      goto L_0896D144;
    }
L_0896D144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0896D15Cu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896D15Cu) goto L_0896D15C;
    return;
L_0896D15C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D36C;
      }
      goto L_0896D164;
    }
L_0896D164:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896D174u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x0896D174u) goto L_0896D174;
    return;
L_0896D174:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D238;
      }
      goto L_0896D180;
    }
L_0896D180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D1A8;
      }
      goto L_0896D18C;
    }
L_0896D18C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(308));
    ctx.gpr[31] = (0x0896D19Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0896D19Cu) goto L_0896D19C;
    return;
L_0896D19C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896D1A8;
L_0896D1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(102)));
    ctx.gpr[20] = (ctx.gpr[4] & 4u);
    ctx.gpr[20] = (0u < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D1E0;
      }
      goto L_0896D1C0;
    }
L_0896D1C0:
    ctx.gpr[31] = (0x0896D1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0896D1C8u) goto L_0896D1C8;
    return;
L_0896D1C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896D1D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 387u, 0x08945A18u>(ctx, &aot_mem) && ctx.pc == 0x0896D1D4u) goto L_0896D1D4;
    return;
L_0896D1D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D1E0;
      }
      goto L_0896D1DC;
    }
L_0896D1DC:
    ctx.gpr[20] = (0u | 1u);
    goto L_0896D1E0;
L_0896D1E0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896D1F0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0896D1F0u) goto L_0896D1F0;
    return;
L_0896D1F0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D238;
      }
      goto L_0896D1FC;
    }
L_0896D1FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D238;
      }
      goto L_0896D214;
    }
L_0896D214:
    ctx.gpr[31] = (0x0896D21Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 144u, 0x08980A9Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D21Cu) goto L_0896D21C;
    return;
L_0896D21C:
    ctx.gpr[31] = (0x0896D224u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0896D224u) goto L_0896D224;
    return;
L_0896D224:
    ctx.gpr[31] = (0x0896D22Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 261u, 0x089A5284u>(ctx, &aot_mem) && ctx.pc == 0x0896D22Cu) goto L_0896D22C;
    return;
L_0896D22C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896D238;
      }
      goto L_0896D234;
    }
L_0896D234:
    ctx.gpr[20] = (0u | 0u);
    goto L_0896D238;
L_0896D238:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896D248u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 650u, 0x088A7DE8u>(ctx, &aot_mem) && ctx.pc == 0x0896D248u) goto L_0896D248;
    return;
L_0896D248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896D36C;
      }
      goto L_0896D264;
    }
L_0896D264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_0896D290;
    }
    goto L_0896D270;
L_0896D270:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(309));
    ctx.gpr[31] = (0x0896D280u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0896D280u) goto L_0896D280;
    return;
L_0896D280:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(309)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_0896D290;
L_0896D290:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 65535u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D36C;
      }
      goto L_0896D2A8;
    }
L_0896D2A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D36C;
      }
      goto L_0896D2D8;
    }
L_0896D2D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0896D304;
      }
      goto L_0896D2E8;
    }
L_0896D2E8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(310));
    ctx.gpr[31] = (0x0896D2F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0896D2F8u) goto L_0896D2F8;
    return;
L_0896D2F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(310)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896D304;
L_0896D304:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(176)));
    if (ctx.gpr[4] != ctx.gpr[30]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
        goto L_0896D31C;
    }
    goto L_0896D314;
L_0896D314:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0896D32C;
      }
      goto L_0896D31C;
    }
L_0896D31C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (0x0896D328u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0896D328u) goto L_0896D328;
    return;
L_0896D328:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_0896D32C;
L_0896D32C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    if (ctx.gpr[6] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
        goto L_0896D340;
    }
    goto L_0896D338;
L_0896D338:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    goto L_0896D340;
L_0896D340:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-6200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D2D8;
      }
      goto L_0896D36C;
    }
L_0896D36C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0896D7D0;
      }
      goto L_0896D374;
    }
L_0896D374:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D7D0;
      }
      goto L_0896D37C;
    }
L_0896D37C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D39C;
      }
      goto L_0896D38C;
    }
L_0896D38C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D7D0;
      }
      goto L_0896D39C;
    }
L_0896D39C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0896D3B8u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896D3B8u) goto L_0896D3B8;
    return;
L_0896D3B8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D3DC;
      }
      goto L_0896D3C4;
    }
L_0896D3C4:
    ctx.gpr[31] = (0x0896D3CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 111u, 0x08A34AF8u>(ctx, &aot_mem) && ctx.pc == 0x0896D3CCu) goto L_0896D3CC;
    return;
L_0896D3CC:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D448;
      }
      goto L_0896D3DC;
    }
L_0896D3DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0896D3F8u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896D3F8u) goto L_0896D3F8;
    return;
L_0896D3F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D440;
      }
      goto L_0896D400;
    }
L_0896D400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_0896D42C;
    }
    goto L_0896D40C;
L_0896D40C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(316));
    ctx.gpr[31] = (0x0896D41Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0896D41Cu) goto L_0896D41C;
    return;
L_0896D41C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_0896D42C;
L_0896D42C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D448;
      }
      goto L_0896D440;
    }
L_0896D440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D7D8;
      }
      goto L_0896D448;
    }
L_0896D448:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x0896D478u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 780u, 0x08967B20u>(ctx, &aot_mem) && ctx.pc == 0x0896D478u) goto L_0896D478;
    return;
L_0896D478:
    ctx.gpr[31] = (0x0896D480u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 723u, 0x089674CCu>(ctx, &aot_mem) && ctx.pc == 0x0896D480u) goto L_0896D480;
    return;
L_0896D480:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0896D4BC;
      }
      goto L_0896D48C;
    }
L_0896D48C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896D4BC;
      }
      goto L_0896D4A4;
    }
L_0896D4A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D4BC;
      }
      goto L_0896D4B4;
    }
L_0896D4B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D7D8;
      }
      goto L_0896D4BC;
    }
L_0896D4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D54C;
      }
      goto L_0896D4D4;
    }
L_0896D4D4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896D4E4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 102u, 0x088A8548u>(ctx, &aot_mem) && ctx.pc == 0x0896D4E4u) goto L_0896D4E4;
    return;
L_0896D4E4:
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
    ctx.gpr[5] = (ctx.gpr[4] >> 24u);
    ctx.gpr[7] = (ctx.gpr[4] >> 16u);
    ctx.gpr[8] = (ctx.gpr[5] & 255u);
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[4] >> 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(ctx.gpr[10]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(211), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896D5C0;
      }
      goto L_0896D54C;
    }
L_0896D54C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896D55Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 113u, 0x088A85F0u>(ctx, &aot_mem) && ctx.pc == 0x0896D55Cu) goto L_0896D55C;
    return;
L_0896D55C:
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
    ctx.gpr[5] = (ctx.gpr[4] >> 24u);
    ctx.gpr[7] = (ctx.gpr[4] >> 16u);
    ctx.gpr[8] = (ctx.gpr[5] & 255u);
    ctx.gpr[9] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[8]);
    ctx.gpr[10] = (ctx.gpr[4] >> 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(210), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(211), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896D5C0;
L_0896D5C0:
    ctx.gpr[7] = (0u & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0896D608;
      }
      goto L_0896D5E0;
    }
L_0896D5E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(209)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0896D60C;
      }
      goto L_0896D5EC;
    }
L_0896D5EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(210)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0896D60C;
      }
      goto L_0896D5F8;
    }
L_0896D5F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(211)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0896D60C;
      }
      goto L_0896D604;
    }
L_0896D604:
    ctx.gpr[6] = (0u | 1u);
    goto L_0896D608;
L_0896D608:
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_0896D60C;
L_0896D60C:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D7D0;
      }
      goto L_0896D61C;
    }
L_0896D61C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (16204u << 16u);
      if (branch_taken) {
          goto L_0896D760;
      }
      goto L_0896D624;
    }
L_0896D624:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0896D64Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 277u, 0x08A25970u>(ctx, &aot_mem) && ctx.pc == 0x0896D64Cu) goto L_0896D64C;
    return;
L_0896D64C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (17224u << 16u);
      if (branch_taken) {
          goto L_0896D750;
      }
      goto L_0896D654;
    }
L_0896D654:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16035u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 55050u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[5] = (16079u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16882u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
        goto L_0896D6A4;
    }
    goto L_0896D6A4;
L_0896D6A4:
    ctx.gpr[4] = (16395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8548u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0896D6C8u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 663u, 0x088A7EC8u>(ctx, &aot_mem) && ctx.pc == 0x0896D6C8u) goto L_0896D6C8;
    return;
L_0896D6C8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896D6D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x0896D6D4u) goto L_0896D6D4;
    return;
L_0896D6D4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(300));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0896D6E4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 309u, 0x08AF9624u>(ctx, &aot_mem) && ctx.pc == 0x0896D6E4u) goto L_0896D6E4;
    return;
L_0896D6E4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (0x0896D6F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x0896D6F4u) goto L_0896D6F4;
    return;
L_0896D6F4:
    ctx.gpr[31] = (0x0896D6FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D6FCu) goto L_0896D6FC;
    return;
L_0896D6FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[11] = (17440u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896D734u);
    ctx.gpr[10] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 277u, 0x08A55314u>(ctx, &aot_mem) && ctx.pc == 0x0896D734u) goto L_0896D734;
    return;
L_0896D734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896D750;
      }
      goto L_0896D744;
    }
L_0896D744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[31] = (0x0896D750u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D750u) goto L_0896D750;
    return;
L_0896D750:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16204u << 16u);
    goto L_0896D760;
L_0896D760:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const bool branch_taken = ctx.gpr[21] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0896D7D0;
      }
      goto L_0896D780;
    }
L_0896D780:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(209)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(210)));
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(-6204)));
    ctx.gpr[2] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[11] = (0u | 1024u);
    ctx.gpr[31] = (0x0896D7D0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x0896D7D0u) goto L_0896D7D0;
    return;
L_0896D7D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D7D8;
      }
      goto L_0896D7D8;
    }
L_0896D7D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0896CC40;
      }
      goto L_0896D7FC;
    }
L_0896D7FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(221), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(222), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(223), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(226), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(227), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(171), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896D8AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) >= 0;
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
      if (branch_taken) {
          goto L_0896D91C;
      }
      goto L_0896D910;
    }
L_0896D910:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0896D91C;
L_0896D91C:
    ctx.gpr[5] = (16217u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (20224u << 16u);
      if (branch_taken) {
          goto L_0896D950;
      }
      goto L_0896D944;
    }
L_0896D944:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896D968;
      }
      goto L_0896D950;
    }
L_0896D950:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[16] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    goto L_0896D968;
L_0896D968:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7660)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_0896DC40;
      }
      goto L_0896D97C;
    }
L_0896D97C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896DC40;
      }
      goto L_0896D98C;
    }
L_0896D98C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0896D9B8;
      }
      goto L_0896D994;
    }
L_0896D994:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0896DC40;
      }
      goto L_0896D99C;
    }
L_0896D99C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_0896D9DC;
      }
      goto L_0896D9AC;
    }
L_0896D9AC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[30];
      if (branch_taken) {
          goto L_0896D9EC;
      }
      goto L_0896D9B4;
    }
L_0896D9B4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    goto L_0896D9B8;
L_0896D9B8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0896DC48;
      }
      goto L_0896D9C0;
    }
L_0896D9C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DC40;
      }
      goto L_0896D9C8;
    }
L_0896D9C8:
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896DEC4;
      }
      goto L_0896D9D4;
    }
L_0896D9D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DEC8;
      }
      goto L_0896D9DC;
    }
L_0896D9DC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[30];
    goto L_0896D9EC;
L_0896D9EC:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896DA14;
      }
      goto L_0896DA08;
    }
L_0896DA08:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_0896DA14;
L_0896DA14:
    ctx.fpr[30] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DA3C;
      }
      goto L_0896DA30;
    }
L_0896DA30:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_0896DA3C;
L_0896DA3C:
    ctx.fpr[24] = ctx.fpr[26] - ctx.fpr[24];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DA64;
      }
      goto L_0896DA58;
    }
L_0896DA58:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_0896DA64;
L_0896DA64:
    ctx.fpr[22] = ctx.fpr[28] + ctx.fpr[22];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DA8C;
      }
      goto L_0896DA80;
    }
L_0896DA80:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_0896DA8C;
L_0896DA8C:
    ctx.fpr[20] = ctx.fpr[28] - ctx.fpr[20];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
      if (branch_taken) {
          goto L_0896DAB4;
      }
      goto L_0896DAA8;
    }
L_0896DAA8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0896DAB4;
L_0896DAB4:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    ctx.gpr[4] = (16448u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[28] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0896DAE0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0896DAE0u) goto L_0896DAE0;
    return;
L_0896DAE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0896DB08u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3E9Cu>(ctx, &aot_mem) && ctx.pc == 0x0896DB08u) goto L_0896DB08;
    return;
L_0896DB08:
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_0896DB24;
      }
      goto L_0896DB18;
    }
L_0896DB18:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_0896DB24;
L_0896DB24:
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[30];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896DB50;
      }
      goto L_0896DB44;
    }
L_0896DB44:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_0896DB50;
L_0896DB50:
    ctx.fpr[30] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DB78;
      }
      goto L_0896DB6C;
    }
L_0896DB6C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_0896DB78;
L_0896DB78:
    ctx.fpr[24] = ctx.fpr[26] - ctx.fpr[24];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DBA0;
      }
      goto L_0896DB94;
    }
L_0896DB94:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_0896DBA0;
L_0896DBA0:
    ctx.fpr[22] = ctx.fpr[28] + ctx.fpr[22];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DBC8;
      }
      goto L_0896DBBC;
    }
L_0896DBBC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_0896DBC8;
L_0896DBC8:
    ctx.fpr[20] = ctx.fpr[28] - ctx.fpr[20];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
      if (branch_taken) {
          goto L_0896DBF0;
      }
      goto L_0896DBE4;
    }
L_0896DBE4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0896DBF0;
L_0896DBF0:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.fpr[28] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896DC18u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0896DC18u) goto L_0896DC18;
    return;
L_0896DC18:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0896DC40u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3E9Cu>(ctx, &aot_mem) && ctx.pc == 0x0896DC40u) goto L_0896DC40;
    return;
L_0896DC40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E04C;
      }
      goto L_0896DC48;
    }
L_0896DC48:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_0896DC64;
      }
      goto L_0896DC58;
    }
L_0896DC58:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_0896DC64;
L_0896DC64:
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896DC90;
      }
      goto L_0896DC84;
    }
L_0896DC84:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_0896DC90;
L_0896DC90:
    ctx.fpr[30] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DCB8;
      }
      goto L_0896DCAC;
    }
L_0896DCAC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_0896DCB8;
L_0896DCB8:
    ctx.fpr[24] = ctx.fpr[26] + ctx.fpr[24];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DCE0;
      }
      goto L_0896DCD4;
    }
L_0896DCD4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_0896DCE0;
L_0896DCE0:
    ctx.fpr[22] = ctx.fpr[28] - ctx.fpr[22];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DD08;
      }
      goto L_0896DCFC;
    }
L_0896DCFC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_0896DD08;
L_0896DD08:
    ctx.fpr[20] = ctx.fpr[26] - ctx.fpr[20];
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
      if (branch_taken) {
          goto L_0896DD30;
      }
      goto L_0896DD24;
    }
L_0896DD24:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0896DD30;
L_0896DD30:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[28] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0896DD5Cu);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0896DD5Cu) goto L_0896DD5C;
    return;
L_0896DD5C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0896DD84u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3E9Cu>(ctx, &aot_mem) && ctx.pc == 0x0896DD84u) goto L_0896DD84;
    return;
L_0896DD84:
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_0896DDA0;
      }
      goto L_0896DD94;
    }
L_0896DD94:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_0896DDA0;
L_0896DDA0:
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896DDCC;
      }
      goto L_0896DDC0;
    }
L_0896DDC0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_0896DDCC;
L_0896DDCC:
    ctx.fpr[30] = ctx.fpr[28] + ctx.fpr[30];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DDF4;
      }
      goto L_0896DDE8;
    }
L_0896DDE8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    goto L_0896DDF4;
L_0896DDF4:
    ctx.fpr[24] = ctx.fpr[26] + ctx.fpr[24];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DE1C;
      }
      goto L_0896DE10;
    }
L_0896DE10:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_0896DE1C;
L_0896DE1C:
    ctx.fpr[22] = ctx.fpr[28] - ctx.fpr[22];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0896DE44;
      }
      goto L_0896DE38;
    }
L_0896DE38:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_0896DE44;
L_0896DE44:
    ctx.fpr[20] = ctx.fpr[26] - ctx.fpr[20];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
      if (branch_taken) {
          goto L_0896DE6C;
      }
      goto L_0896DE60;
    }
L_0896DE60:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0896DE6C;
L_0896DE6C:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.fpr[28] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896DE94u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0896DE94u) goto L_0896DE94;
    return;
L_0896DE94:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0896DEBCu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3E9Cu>(ctx, &aot_mem) && ctx.pc == 0x0896DEBCu) goto L_0896DEBC;
    return;
L_0896DEBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DC40;
      }
      goto L_0896DEC4;
    }
L_0896DEC4:
    ctx.gpr[16] = (0u | 1u);
    goto L_0896DEC8;
L_0896DEC8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0896DEE4;
      }
      goto L_0896DED8;
    }
L_0896DED8:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0896DEE4;
L_0896DEE4:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
      if (branch_taken) {
          goto L_0896DF0C;
      }
      goto L_0896DF00;
    }
L_0896DF00:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0896DF0C;
L_0896DF0C:
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[13];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
      if (branch_taken) {
          goto L_0896DF34;
      }
      goto L_0896DF28;
    }
L_0896DF28:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_0896DF34;
L_0896DF34:
    ctx.fpr[14] = ctx.fpr[26] + ctx.fpr[14];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[16];
      if (branch_taken) {
          goto L_0896DF5C;
      }
      goto L_0896DF50;
    }
L_0896DF50:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    goto L_0896DF5C;
L_0896DF5C:
    ctx.fpr[15] = ctx.fpr[28] + ctx.fpr[15];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0896DF70u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x0896DF70u) goto L_0896DF70;
    return;
L_0896DF70:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0896DF8Cu);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0896DF8Cu) goto L_0896DF8C;
    return;
L_0896DF8C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896DF9Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x0896DF9Cu) goto L_0896DF9C;
    return;
L_0896DF9C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0896DFB8;
      }
      goto L_0896DFAC;
    }
L_0896DFAC:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0896DFB8;
L_0896DFB8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0896DFD4;
      }
      goto L_0896DFC8;
    }
L_0896DFC8:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0896DFD4;
L_0896DFD4:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[13];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_0896DFF0;
      }
      goto L_0896DFE4;
    }
L_0896DFE4:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_0896DFF0;
L_0896DFF0:
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[14];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
      if (branch_taken) {
          goto L_0896E00C;
      }
      goto L_0896E000;
    }
L_0896E000:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_0896E00C;
L_0896E00C:
    ctx.fpr[15] = ctx.fpr[28] + ctx.fpr[14];
    ctx.gpr[31] = (0x0896E018u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 133u, 0x089FD378u>(ctx, &aot_mem) && ctx.pc == 0x0896E018u) goto L_0896E018;
    return;
L_0896E018:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896E034u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0896E034u) goto L_0896E034;
    return;
L_0896E034:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896E044u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 935u, 0x08AD3DD0u>(ctx, &aot_mem) && ctx.pc == 0x0896E044u) goto L_0896E044;
    return;
L_0896E044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DC40;
      }
      goto L_0896E04C;
    }
L_0896E04C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E088:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    ctx.gpr[5] = (16217u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16307u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[10] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[10]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[11]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[11]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E23C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    goto L_0896E2C8;
L_0896E2C8:
    ctx.gpr[31] = (0x0896E2D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 575u, 0x08966744u>(ctx, &aot_mem) && ctx.pc == 0x0896E2D0u) goto L_0896E2D0;
    return;
L_0896E2D0:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0896E2C8;
      }
      goto L_0896E2E8;
    }
L_0896E2E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    goto L_0896E30C;
L_0896E30C:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0896E354;
      }
      goto L_0896E328;
    }
L_0896E328:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896E4D8;
      }
      goto L_0896E354;
    }
L_0896E354:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0896E374u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 585u, 0x08966848u>(ctx, &aot_mem) && ctx.pc == 0x0896E374u) goto L_0896E374;
    return;
L_0896E374:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0896E38C;
      }
      goto L_0896E380;
    }
L_0896E380:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    goto L_0896E38C;
L_0896E38C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0896E3ACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 585u, 0x08966848u>(ctx, &aot_mem) && ctx.pc == 0x0896E3ACu) goto L_0896E3AC;
    return;
L_0896E3AC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0896E4D8;
      }
      goto L_0896E3B8;
    }
L_0896E3B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[30];
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896E4C8;
      }
      goto L_0896E3C4;
    }
L_0896E3C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    if (ctx.gpr[4] != ctx.gpr[30]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_0896E454;
    }
    goto L_0896E3D4;
L_0896E3D4:
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0896E450;
      }
      goto L_0896E3E4;
    }
L_0896E3E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8));
    goto L_0896E3F8;
L_0896E3F8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E418;
      }
      goto L_0896E400;
    }
L_0896E400:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0896E410u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 585u, 0x08966848u>(ctx, &aot_mem) && ctx.pc == 0x0896E410u) goto L_0896E410;
    return;
L_0896E410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896E42C;
      }
      goto L_0896E418;
    }
L_0896E418:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896E428u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 585u, 0x08966848u>(ctx, &aot_mem) && ctx.pc == 0x0896E428u) goto L_0896E428;
    return;
L_0896E428:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0896E42C;
L_0896E42C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0896E43C;
      }
      goto L_0896E434;
    }
L_0896E434:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0896E450;
      }
      goto L_0896E43C;
    }
L_0896E43C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0896E3F8;
      }
      goto L_0896E450;
    }
L_0896E450:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_0896E454;
L_0896E454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896E4B4;
      }
      goto L_0896E470;
    }
L_0896E470:
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[20] << 3u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896E470;
      }
      goto L_0896E4A8;
    }
L_0896E4A8:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_0896E4B4;
L_0896E4B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0896E4C8;
L_0896E4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    goto L_0896E4D8;
L_0896E4D8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0896E30C;
      }
      goto L_0896E4F0;
    }
L_0896E4F0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E5D4;
      }
      goto L_0896E4F8;
    }
L_0896E4F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[18]) || std::isnan(ctx.fpr[15])) && ctx.fpr[18] == ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0896E534;
      }
      goto L_0896E528;
    }
L_0896E528:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[16] - ctx.fpr[14];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[18];
    goto L_0896E534;
L_0896E534:
    ctx.fpr[18] = ctx.fpr[12] - ctx.fpr[17];
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[18]) || std::isnan(ctx.fpr[15])) && ctx.fpr[18] == ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
        goto L_0896E554;
    }
    goto L_0896E548;
L_0896E548:
    ctx.fpr[20] = ctx.fpr[16] - ctx.fpr[19];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[18];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    goto L_0896E554;
L_0896E554:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[19];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896E5D4;
      }
      goto L_0896E574;
    }
L_0896E574:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896E5D4;
      }
      goto L_0896E59C;
    }
L_0896E59C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_0896E5A8;
L_0896E5A8:
    ctx.gpr[7] = (ctx.gpr[20] << 3u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0896E5A8;
      }
      goto L_0896E5D4;
    }
L_0896E5D4:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E60C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28556)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28552), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[5] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-28544), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28544)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28540), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28560)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28532)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28504)));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28496), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28508)));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28500), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28492), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896E704u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6464));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E704u) goto L_0896E704;
    return;
L_0896E704:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E710u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27936));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E710u) goto L_0896E710;
    return;
L_0896E710:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E71Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6460));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E71Cu) goto L_0896E71C;
    return;
L_0896E71C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E728u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27924));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E728u) goto L_0896E728;
    return;
L_0896E728:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E734u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6456));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E734u) goto L_0896E734;
    return;
L_0896E734:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E740u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27912));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E740u) goto L_0896E740;
    return;
L_0896E740:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E74Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6452));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E74Cu) goto L_0896E74C;
    return;
L_0896E74C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E758u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27900));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E758u) goto L_0896E758;
    return;
L_0896E758:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E764u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6448));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E764u) goto L_0896E764;
    return;
L_0896E764:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E770u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27888));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E770u) goto L_0896E770;
    return;
L_0896E770:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E77Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6444));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E77Cu) goto L_0896E77C;
    return;
L_0896E77C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E788u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27876));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E788u) goto L_0896E788;
    return;
L_0896E788:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E794u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6440));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E794u) goto L_0896E794;
    return;
L_0896E794:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E7A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27864));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E7A0u) goto L_0896E7A0;
    return;
L_0896E7A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E7ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6436));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E7ACu) goto L_0896E7AC;
    return;
L_0896E7AC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E7B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27852));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E7B8u) goto L_0896E7B8;
    return;
L_0896E7B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E7C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6432));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E7C4u) goto L_0896E7C4;
    return;
L_0896E7C4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E7D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27840));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E7D0u) goto L_0896E7D0;
    return;
L_0896E7D0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E7DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6428));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E7DCu) goto L_0896E7DC;
    return;
L_0896E7DC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E7E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27828));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E7E8u) goto L_0896E7E8;
    return;
L_0896E7E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E7F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6424));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E7F4u) goto L_0896E7F4;
    return;
L_0896E7F4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E800u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27816));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E800u) goto L_0896E800;
    return;
L_0896E800:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E80Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6420));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E80Cu) goto L_0896E80C;
    return;
L_0896E80C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E818u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27804));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E818u) goto L_0896E818;
    return;
L_0896E818:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E824u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6416));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E824u) goto L_0896E824;
    return;
L_0896E824:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E830u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27792));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E830u) goto L_0896E830;
    return;
L_0896E830:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E83Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6412));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E83Cu) goto L_0896E83C;
    return;
L_0896E83C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E848u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27780));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E848u) goto L_0896E848;
    return;
L_0896E848:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E854u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6408));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E854u) goto L_0896E854;
    return;
L_0896E854:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E860u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27768));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E860u) goto L_0896E860;
    return;
L_0896E860:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E86Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6404));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E86Cu) goto L_0896E86C;
    return;
L_0896E86C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E878u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27756));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E878u) goto L_0896E878;
    return;
L_0896E878:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E884u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6400));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E884u) goto L_0896E884;
    return;
L_0896E884:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E890u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27744));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E890u) goto L_0896E890;
    return;
L_0896E890:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E89Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6396));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E89Cu) goto L_0896E89C;
    return;
L_0896E89C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E8A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27732));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E8A8u) goto L_0896E8A8;
    return;
L_0896E8A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E8B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6392));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E8B4u) goto L_0896E8B4;
    return;
L_0896E8B4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E8C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27720));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E8C0u) goto L_0896E8C0;
    return;
L_0896E8C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E8CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6388));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E8CCu) goto L_0896E8CC;
    return;
L_0896E8CC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E8D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27708));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E8D8u) goto L_0896E8D8;
    return;
L_0896E8D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E8E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6384));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E8E4u) goto L_0896E8E4;
    return;
L_0896E8E4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E8F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27696));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E8F0u) goto L_0896E8F0;
    return;
L_0896E8F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E8FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6380));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E8FCu) goto L_0896E8FC;
    return;
L_0896E8FC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E908u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27684));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E908u) goto L_0896E908;
    return;
L_0896E908:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E914u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6376));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E914u) goto L_0896E914;
    return;
L_0896E914:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E920u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27672));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E920u) goto L_0896E920;
    return;
L_0896E920:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E92Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6372));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E92Cu) goto L_0896E92C;
    return;
L_0896E92C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E938u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27660));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E938u) goto L_0896E938;
    return;
L_0896E938:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E944u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6368));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E944u) goto L_0896E944;
    return;
L_0896E944:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E950u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27648));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E950u) goto L_0896E950;
    return;
L_0896E950:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E95Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6364));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E95Cu) goto L_0896E95C;
    return;
L_0896E95C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E968u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27636));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E968u) goto L_0896E968;
    return;
L_0896E968:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E974u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6360));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E974u) goto L_0896E974;
    return;
L_0896E974:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E980u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27624));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E980u) goto L_0896E980;
    return;
L_0896E980:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E98Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6356));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E98Cu) goto L_0896E98C;
    return;
L_0896E98C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E998u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27612));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E998u) goto L_0896E998;
    return;
L_0896E998:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E9A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6352));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E9A4u) goto L_0896E9A4;
    return;
L_0896E9A4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E9B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27600));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E9B0u) goto L_0896E9B0;
    return;
L_0896E9B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E9BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6348));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E9BCu) goto L_0896E9BC;
    return;
L_0896E9BC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E9C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27588));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E9C8u) goto L_0896E9C8;
    return;
L_0896E9C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E9D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6344));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E9D4u) goto L_0896E9D4;
    return;
L_0896E9D4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E9E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27576));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E9E0u) goto L_0896E9E0;
    return;
L_0896E9E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896E9ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6340));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896E9ECu) goto L_0896E9EC;
    return;
L_0896E9EC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896E9F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27564));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896E9F8u) goto L_0896E9F8;
    return;
L_0896E9F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EA04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6336));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EA04u) goto L_0896EA04;
    return;
L_0896EA04:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EA10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27552));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EA10u) goto L_0896EA10;
    return;
L_0896EA10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EA1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6332));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EA1Cu) goto L_0896EA1C;
    return;
L_0896EA1C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EA28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27540));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EA28u) goto L_0896EA28;
    return;
L_0896EA28:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EA34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6328));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EA34u) goto L_0896EA34;
    return;
L_0896EA34:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EA40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27528));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EA40u) goto L_0896EA40;
    return;
L_0896EA40:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EA4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6324));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EA4Cu) goto L_0896EA4C;
    return;
L_0896EA4C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EA58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27516));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EA58u) goto L_0896EA58;
    return;
L_0896EA58:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EA64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6320));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EA64u) goto L_0896EA64;
    return;
L_0896EA64:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EA70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27504));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EA70u) goto L_0896EA70;
    return;
L_0896EA70:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EA7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6316));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EA7Cu) goto L_0896EA7C;
    return;
L_0896EA7C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EA88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27492));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EA88u) goto L_0896EA88;
    return;
L_0896EA88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EA94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6312));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EA94u) goto L_0896EA94;
    return;
L_0896EA94:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EAA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27480));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EAA0u) goto L_0896EAA0;
    return;
L_0896EAA0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EAACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6308));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EAACu) goto L_0896EAAC;
    return;
L_0896EAAC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EAB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27468));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EAB8u) goto L_0896EAB8;
    return;
L_0896EAB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EAC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6304));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EAC4u) goto L_0896EAC4;
    return;
L_0896EAC4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EAD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27456));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EAD0u) goto L_0896EAD0;
    return;
L_0896EAD0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EADCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6300));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EADCu) goto L_0896EADC;
    return;
L_0896EADC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EAE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27444));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EAE8u) goto L_0896EAE8;
    return;
L_0896EAE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EAF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6296));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EAF4u) goto L_0896EAF4;
    return;
L_0896EAF4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EB00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27432));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EB00u) goto L_0896EB00;
    return;
L_0896EB00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EB0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6292));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EB0Cu) goto L_0896EB0C;
    return;
L_0896EB0C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EB18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27420));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EB18u) goto L_0896EB18;
    return;
L_0896EB18:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EB24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6288));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EB24u) goto L_0896EB24;
    return;
L_0896EB24:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EB30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27408));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EB30u) goto L_0896EB30;
    return;
L_0896EB30:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EB3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6284));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EB3Cu) goto L_0896EB3C;
    return;
L_0896EB3C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EB48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27396));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EB48u) goto L_0896EB48;
    return;
L_0896EB48:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EB54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6280));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EB54u) goto L_0896EB54;
    return;
L_0896EB54:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EB60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27384));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EB60u) goto L_0896EB60;
    return;
L_0896EB60:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EB6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6276));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EB6Cu) goto L_0896EB6C;
    return;
L_0896EB6C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EB78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27372));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EB78u) goto L_0896EB78;
    return;
L_0896EB78:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EB84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6272));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EB84u) goto L_0896EB84;
    return;
L_0896EB84:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EB90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27360));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EB90u) goto L_0896EB90;
    return;
L_0896EB90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EB9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6268));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EB9Cu) goto L_0896EB9C;
    return;
L_0896EB9C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EBA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27348));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EBA8u) goto L_0896EBA8;
    return;
L_0896EBA8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EBB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6264));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EBB4u) goto L_0896EBB4;
    return;
L_0896EBB4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EBC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27336));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EBC0u) goto L_0896EBC0;
    return;
L_0896EBC0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EBCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6260));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EBCCu) goto L_0896EBCC;
    return;
L_0896EBCC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EBD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27324));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EBD8u) goto L_0896EBD8;
    return;
L_0896EBD8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EBE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6256));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EBE4u) goto L_0896EBE4;
    return;
L_0896EBE4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EBF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27312));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EBF0u) goto L_0896EBF0;
    return;
L_0896EBF0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EBFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6252));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EBFCu) goto L_0896EBFC;
    return;
L_0896EBFC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EC08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27300));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EC08u) goto L_0896EC08;
    return;
L_0896EC08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EC14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6248));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EC14u) goto L_0896EC14;
    return;
L_0896EC14:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EC20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27288));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EC20u) goto L_0896EC20;
    return;
L_0896EC20:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EC2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6244));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EC2Cu) goto L_0896EC2C;
    return;
L_0896EC2C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EC38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27276));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EC38u) goto L_0896EC38;
    return;
L_0896EC38:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EC44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6240));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EC44u) goto L_0896EC44;
    return;
L_0896EC44:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EC50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27264));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EC50u) goto L_0896EC50;
    return;
L_0896EC50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EC5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6236));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EC5Cu) goto L_0896EC5C;
    return;
L_0896EC5C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EC68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27252));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EC68u) goto L_0896EC68;
    return;
L_0896EC68:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EC74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6232));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EC74u) goto L_0896EC74;
    return;
L_0896EC74:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EC80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27240));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EC80u) goto L_0896EC80;
    return;
L_0896EC80:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896EC8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6228));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896EC8Cu) goto L_0896EC8C;
    return;
L_0896EC8C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896EC98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27228));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896EC98u) goto L_0896EC98;
    return;
L_0896EC98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0896ECA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6224));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 857u, 0x08AD3668u>(ctx, &aot_mem) && ctx.pc == 0x0896ECA4u) goto L_0896ECA4;
    return;
L_0896ECA4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896ECB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27216));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896ECB0u) goto L_0896ECB0;
    return;
L_0896ECB0:
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[31] = (0x0896ECC4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6200), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x0896ECC4u) goto L_0896ECC4;
    return;
L_0896ECC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (2230u << 16u);
      if (branch_taken) {
          goto L_0896ECE4;
      }
      goto L_0896ECD4;
    }
L_0896ECD4:
    ctx.gpr[31] = (0x0896ECDCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x0896ECDCu) goto L_0896ECDC;
    return;
L_0896ECDC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (2230u << 16u);
    goto L_0896ECE4;
L_0896ECE4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6200), ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x0896ECFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27204));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0896ECFCu) goto L_0896ECFC;
    return;
L_0896ECFC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896ED08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17588)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896ED54;
      }
      goto L_0896ED34;
    }
L_0896ED34:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0896ED40u);
    ctx.gpr[4] = (0u | 48u);
    goto L_0896EE34;
L_0896ED40:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896ED5C;
      }
      goto L_0896ED4C;
    }
L_0896ED4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896ED68;
      }
      goto L_0896ED54;
    }
L_0896ED54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EDA4;
      }
      goto L_0896ED5C;
    }
L_0896ED5C:
    ctx.gpr[31] = (0x0896ED64u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0896EDC0;
L_0896ED64:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_0896ED68;
L_0896ED68:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896ED78;
      }
      goto L_0896ED70;
    }
L_0896ED70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EDA4;
      }
      goto L_0896ED78;
    }
L_0896ED78:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x0896EDA4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 129u, 0x0886492Cu>(ctx, &aot_mem) && ctx.pc == 0x0896EDA4u) goto L_0896EDA4;
    return;
L_0896EDA4:
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
L_0896EDC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896EDD4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0896EE78;
L_0896EDD4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EDE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896EE20;
      }
      goto L_0896EE04;
    }
L_0896EE04:
    ctx.gpr[31] = (0x0896EE0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896EE78;
L_0896EE0C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EE20;
      }
      goto L_0896EE18;
    }
L_0896EE18:
    ctx.gpr[31] = (0x0896EE20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0896EE54;
L_0896EE20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EE34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896EE48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15020)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 615u, 0x08B02C6Cu>(ctx, &aot_mem) && ctx.pc == 0x0896EE48u) goto L_0896EE48;
    return;
L_0896EE48:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EE54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896EE6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15020)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 623u, 0x08B02D2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896EE6Cu) goto L_0896EE6C;
    return;
L_0896EE6C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EE78:
    ctx.gpr[5] = (0u | 89u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EE9C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27188)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27192)));
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[11] = (2228u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-27184), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-27176), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-27180), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-27172), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-27168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EF14:
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
L_0896EF40:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
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
L_0896EF68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896EF70:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[10] = (0u | 0u);
    goto L_0896EF80;
L_0896EF80:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[6] = (ctx.gpr[9] << 8u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[11] = (ctx.gpr[10] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[11]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1060)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896EFFC;
      }
      goto L_0896EFAC;
    }
L_0896EFAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896EFE0;
      }
      goto L_0896EFC0;
    }
L_0896EFC0:
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[10]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1060), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896EF80;
      }
      goto L_0896EFD8;
    }
L_0896EFD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F00C;
      }
      goto L_0896EFE0;
    }
L_0896EFE0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1060), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[10]));
      if (branch_taken) {
          goto L_0896F00C;
      }
      goto L_0896EFFC;
    }
L_0896EFFC:
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[10]));
      if (branch_taken) {
          goto L_0896F00C;
      }
      goto L_0896F00C;
    }
L_0896F00C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F014:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[6] = (ctx.gpr[9] << 8u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[9] << 9u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    ctx.gpr[10] = (17505u << 16u);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
      if (branch_taken) {
          goto L_0896F098;
      }
      goto L_0896F048;
    }
L_0896F048:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[6] = (ctx.gpr[6] << 9u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1060), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0896F17C;
      }
      goto L_0896F098;
    }
L_0896F098:
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(30));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 63u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 63 ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
        goto L_0896F0B8;
    }
    goto L_0896F0B8;
L_0896F0B8:
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[8]) <= 0) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_0896F124;
    }
    goto L_0896F0C4;
L_0896F0C4:
    ctx.gpr[9] = (ctx.gpr[8] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(28));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[6] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1060), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[6] = (ctx.gpr[6] << 9u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_0896F0C4;
      }
      goto L_0896F120;
    }
L_0896F120:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_0896F124;
L_0896F124:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[6] = (ctx.gpr[6] << 9u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1060), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F17C;
      }
      goto L_0896F174;
    }
L_0896F174:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_0896F17C;
L_0896F17C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F184:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896F1A8u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 164u, 0x088A0D50u>(ctx, &aot_mem) && ctx.pc == 0x0896F1A8u) goto L_0896F1A8;
    return;
L_0896F1A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17588));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(928));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[31] = (0x0896F1CCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-24364));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F1CCu) goto L_0896F1CC;
    return;
L_0896F1CC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1141), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F1F8;
      }
      goto L_0896F1E4;
    }
L_0896F1E4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0896F1F8;
L_0896F1F8:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(876), 0u);
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(836), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(66))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(336), ctx.gpr[5]);
    ctx.gpr[31] = (0x0896F240u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0896F404;
L_0896F240:
    ctx.gpr[6] = (16329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(928), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(932), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(936), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (49236u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(937), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] | 15208u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(976), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(980), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(984), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (49097u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(985), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1028), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1032), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (16468u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1033), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] | 15208u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1072), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1076), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1080), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (19646u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 48160u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1081), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16255u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 55470u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(322))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(322))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(860), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(544), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(864), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(872), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(874), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(875), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(916), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_0896F388:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896F3D0;
      }
      goto L_0896F3A4;
    }
L_0896F3A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17588));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896F3BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 514u, 0x0889E8F8u>(ctx, &aot_mem) && ctx.pc == 0x0896F3BCu) goto L_0896F3BC;
    return;
L_0896F3BC:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F3D0;
      }
      goto L_0896F3C8;
    }
L_0896F3C8:
    ctx.gpr[31] = (0x0896F3D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 512u, 0x0889E8D4u>(ctx, &aot_mem) && ctx.pc == 0x0896F3D0u) goto L_0896F3D0;
    return;
L_0896F3D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F3E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896F3F8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1140), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 819u, 0x08A2FA78u>(ctx, &aot_mem) && ctx.pc == 0x0896F3F8u) goto L_0896F3F8;
    return;
L_0896F3F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F404:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896F418u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 537u, 0x0889EA98u>(ctx, &aot_mem) && ctx.pc == 0x0896F418u) goto L_0896F418;
    return;
L_0896F418:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0896F420;
L_0896F420:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1120), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896F420;
      }
      goto L_0896F434;
    }
L_0896F434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0896F440u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1120));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 601u, 0x08973D04u>(ctx, &aot_mem) && ctx.pc == 0x0896F440u) goto L_0896F440;
    return;
L_0896F440:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F450:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F47C;
      }
      goto L_0896F474;
    }
L_0896F474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F4E0;
      }
      goto L_0896F47C;
    }
L_0896F47C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (2228u << 16u);
    goto L_0896F488;
L_0896F488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F4D0;
      }
      goto L_0896F49C;
    }
L_0896F49C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1140)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F4CC;
      }
      goto L_0896F4A8;
    }
L_0896F4A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(120));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0896F4C0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896F4C0u) goto L_0896F4C0;
    return;
L_0896F4C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_0896F4CC;
L_0896F4CC:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1140), static_cast<std::uint8_t>(0u));
    goto L_0896F4D0;
L_0896F4D0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896F488;
      }
      goto L_0896F4E0;
    }
L_0896F4E0:
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
L_0896F4F8:
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19456));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[7] = (2229u << 16u);
    goto L_0896F518;
L_0896F518:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F584;
      }
      goto L_0896F52C;
    }
L_0896F52C:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(916)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896F584;
      }
      goto L_0896F538;
    }
L_0896F538:
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(916), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F560;
      }
      goto L_0896F550;
    }
L_0896F550:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[12] = (ctx.gpr[12] << 2u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[12]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_0896F560;
L_0896F560:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896F578;
      }
      goto L_0896F568;
    }
L_0896F568:
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_0896F584;
      }
      goto L_0896F578;
    }
L_0896F578:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(912)));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    goto L_0896F584;
L_0896F584:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896F518;
      }
      goto L_0896F594;
    }
L_0896F594:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F59C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F5A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0896F5E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x0896F5E8u) goto L_0896F5E8;
    return;
L_0896F5E8:
    ctx.gpr[4] = (0u | 192u);
    ctx.gpr[31] = (0x0896F5F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x0896F5F4u) goto L_0896F5F4;
    return;
L_0896F5F4:
    ctx.gpr[31] = (0x0896F5FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x0896F5FCu) goto L_0896F5FC;
    return;
L_0896F5FC:
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F6E4;
      }
      goto L_0896F60C;
    }
L_0896F60C:
    ctx.gpr[4] = (16329u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (16534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52196u);
    ctx.gpr[21] = (ctx.gpr[17] << 2u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2228u << 16u);
    goto L_0896F634;
L_0896F634:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0896F640u);
    ctx.gpr[4] = (0u | 1152u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 510u, 0x0889E8B4u>(ctx, &aot_mem) && ctx.pc == 0x0896F640u) goto L_0896F640;
    return;
L_0896F640:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0896F65C;
      }
      goto L_0896F64C;
    }
L_0896F64C:
    ctx.gpr[5] = (0u | 192u);
    ctx.gpr[31] = (0x0896F658u);
    ctx.gpr[6] = (0u | 4u);
    goto L_0896F184;
L_0896F658:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0896F65C;
L_0896F65C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-27100)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[31] = (0x0896F67Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x0896F67Cu) goto L_0896F67C;
    return;
L_0896F67C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 8u);
    ctx.gpr[16] = (ctx.gpr[16] ^ 1u);
    ctx.gpr[16] = (0u < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896F6B8;
      }
      goto L_0896F6A4;
    }
L_0896F6A4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896F6B0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x0896F6B0u) goto L_0896F6B0;
    return;
L_0896F6B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F6C4;
      }
      goto L_0896F6B8;
    }
L_0896F6B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896F6C4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x0896F6C4u) goto L_0896F6C4;
    return;
L_0896F6C4:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(848), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(852), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x0896F6D4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x0896F6D4u) goto L_0896F6D4;
    return;
L_0896F6D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896F634;
      }
      goto L_0896F6E4;
    }
L_0896F6E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F71C:
    ctx.gpr[5] = (0u | 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(875), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F728:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[4] = (17948u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 16282u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (17302u << 16u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (0u | 0u);
    goto L_0896F78C;
L_0896F78C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F800;
      }
      goto L_0896F7A0;
    }
L_0896F7A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896F7C4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x0896F7C4u) goto L_0896F7C4;
    return;
L_0896F7C4:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F800;
      }
      goto L_0896F7E8;
    }
L_0896F7E8:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896F800;
      }
      goto L_0896F7F8;
    }
L_0896F7F8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    goto L_0896F800;
L_0896F800:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896F78C;
      }
      goto L_0896F810;
    }
L_0896F810:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896F830;
      }
      goto L_0896F81C;
    }
L_0896F81C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[5] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0896F834;
      }
      goto L_0896F830;
    }
L_0896F830:
    ctx.gpr[2] = (0u | 0u);
    goto L_0896F834;
L_0896F834:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F860:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896F878u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27336));
    goto L_0896EF14;
L_0896F878:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F8A0;
      }
      goto L_0896F888;
    }
L_0896F888:
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-27100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F8B0;
      }
      goto L_0896F898;
    }
L_0896F898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F8B8;
      }
      goto L_0896F8A0;
    }
L_0896F8A0:
    ctx.gpr[31] = (0x0896F8A8u);
    // nop
    goto L_0896FD80;
L_0896F8A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F8F8;
      }
      goto L_0896F8B0;
    }
L_0896F8B0:
    ctx.gpr[31] = (0x0896F8B8u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896F908;
L_0896F8B8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0896F8C0;
L_0896F8C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896F8C0;
      }
      goto L_0896F8DC;
    }
L_0896F8DC:
    ctx.gpr[31] = (0x0896F8E4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x0896F8E4u) goto L_0896F8E4;
    return;
L_0896F8E4:
    ctx.gpr[4] = (0u | 192u);
    ctx.gpr[31] = (0x0896F8F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x0896F8F0u) goto L_0896F8F0;
    return;
L_0896F8F0:
    ctx.gpr[31] = (0x0896F8F8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x0896F8F8u) goto L_0896F8F8;
    return;
L_0896F8F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F908:
    ctx.gpr[5] = (2228u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27100), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F914:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(860)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896F91C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896F94Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27320));
    goto L_0896EF14;
L_0896F94C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(864), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(872), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0896F990;
      }
      goto L_0896F97C;
    }
L_0896F97C:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0896F990;
L_0896F990:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0896F99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0896F99Cu) goto L_0896F99C;
    return;
L_0896F99C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896F9C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0896EF40;
L_0896F9C0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0896F9F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0896EF40;
L_0896F9F8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(880), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896FA38;
      }
      goto L_0896FA34;
    }
L_0896FA34:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(880), static_cast<std::uint8_t>(0u));
    goto L_0896FA38;
L_0896FA38:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 184u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 22050u);
    ctx.gpr[10] = (0u | 127u);
    ctx.gpr[11] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0896FA64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 936u, 0x08A9B7A8u>(ctx, &aot_mem) && ctx.pc == 0x0896FA64u) goto L_0896FA64;
    return;
L_0896FA64:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FA88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896FAA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27296));
    goto L_0896EF14;
L_0896FAA4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(864), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(872), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 184u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 22050u);
    ctx.gpr[10] = (0u | 127u);
    ctx.gpr[11] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0896FAE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 936u, 0x08A9B7A8u>(ctx, &aot_mem) && ctx.pc == 0x0896FAE8u) goto L_0896FAE8;
    return;
L_0896FAE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FAF8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(872))))));
    ctx.gpr[2] = (ctx.gpr[4] ^ 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FB08:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(872))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FB14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896FB74;
      }
      goto L_0896FB4C;
    }
L_0896FB4C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_0896FB7C;
      }
      goto L_0896FB6C;
    }
L_0896FB6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FB84;
      }
      goto L_0896FB74;
    }
L_0896FB74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FCEC;
      }
      goto L_0896FB7C;
    }
L_0896FB7C:
    ctx.gpr[22] = (0u | 2u);
    ctx.gpr[17] = (0u | 3u);
    goto L_0896FB84;
L_0896FB84:
    ctx.gpr[6] = (ctx.gpr[22] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[22] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[18] = (0u | 12u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(928));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (0u | 4u);
        goto L_0896FBA4;
    }
    goto L_0896FBA4;
L_0896FBA4:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1120)));
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
      if (branch_taken) {
          goto L_0896FBD0;
      }
      goto L_0896FBB8;
    }
L_0896FBB8:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
        goto L_0896FBD4;
    }
    goto L_0896FBC4;
L_0896FBC4:
    ctx.gpr[31] = (0x0896FBCCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0896FBCCu) goto L_0896FBCC;
    return;
L_0896FBCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_0896FBD0;
L_0896FBD0:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_0896FBD4;
L_0896FBD4:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x0896FBE8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FBE8u) goto L_0896FBE8;
    return;
L_0896FBE8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
    ctx.gpr[18] = (0u | 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (0u | 8u);
        goto L_0896FBFC;
    }
    goto L_0896FBFC;
L_0896FBFC:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1120)));
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
      if (branch_taken) {
          goto L_0896FC28;
      }
      goto L_0896FC10;
    }
L_0896FC10:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
        goto L_0896FC2C;
    }
    goto L_0896FC1C;
L_0896FC1C:
    ctx.gpr[31] = (0x0896FC24u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0896FC24u) goto L_0896FC24;
    return;
L_0896FC24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_0896FC28;
L_0896FC28:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_0896FC2C;
L_0896FC2C:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[31] = (0x0896FC40u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FC40u) goto L_0896FC40;
    return;
L_0896FC40:
    ctx.gpr[31] = (0x0896FC48u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 628u, 0x08A070C8u>(ctx, &aot_mem) && ctx.pc == 0x0896FC48u) goto L_0896FC48;
    return;
L_0896FC48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FC50;
      }
      goto L_0896FC50;
    }
L_0896FC50:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896FC5Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 609u, 0x08A06F98u>(ctx, &aot_mem) && ctx.pc == 0x0896FC5Cu) goto L_0896FC5C;
    return;
L_0896FC5C:
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(928));
    ctx.gpr[31] = (0x0896FC7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 609u, 0x08A06F98u>(ctx, &aot_mem) && ctx.pc == 0x0896FC7Cu) goto L_0896FC7C;
    return;
L_0896FC7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0896FC88u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 483u, 0x08A05E28u>(ctx, &aot_mem) && ctx.pc == 0x0896FC88u) goto L_0896FC88;
    return;
L_0896FC88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0896FC94u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 483u, 0x08A05E28u>(ctx, &aot_mem) && ctx.pc == 0x0896FC94u) goto L_0896FC94;
    return;
L_0896FC94:
    ctx.gpr[31] = (0x0896FC9Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0896FC9Cu) goto L_0896FC9C;
    return;
L_0896FC9C:
    ctx.gpr[31] = (0x0896FCA4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0896FCA4u) goto L_0896FCA4;
    return;
L_0896FCA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_0896FCCC;
    }
    goto L_0896FCB4;
L_0896FCB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_0896FCCC;
    }
    goto L_0896FCC0;
L_0896FCC0:
    ctx.gpr[31] = (0x0896FCC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0896FCC8u) goto L_0896FCC8;
    return;
L_0896FCC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_0896FCCC;
L_0896FCCC:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FCEC;
      }
      goto L_0896FCD8;
    }
L_0896FCD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FCEC;
      }
      goto L_0896FCE4;
    }
L_0896FCE4:
    ctx.gpr[31] = (0x0896FCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0896FCECu) goto L_0896FCEC;
    return;
L_0896FCEC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FD18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (16320u << 16u);
      if (branch_taken) {
          goto L_0896FD70;
      }
      goto L_0896FD24;
    }
L_0896FD24:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    goto L_0896FD2C;
L_0896FD2C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0896FD68;
      }
      goto L_0896FD38;
    }
L_0896FD38:
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896FD68;
      }
      goto L_0896FD5C;
    }
L_0896FD5C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[8] = (ctx.gpr[8] | 64u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_0896FD68;
L_0896FD68:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FD2C;
      }
      goto L_0896FD70;
    }
L_0896FD70:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FD78:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(864), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FD80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (2228u << 16u);
    goto L_0896FD94;
L_0896FD94:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0896FD94;
      }
      goto L_0896FDB0;
    }
L_0896FDB0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0896FDBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27272));
    goto L_0896EF14;
L_0896FDBC:
    ctx.gpr[31] = (0x0896FDC4u);
    ctx.gpr[4] = (0u | 192u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x0896FDC4u) goto L_0896FDC4;
    return;
L_0896FDC4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FDD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1141)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FE98;
      }
      goto L_0896FDE4;
    }
L_0896FDE4:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1141), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896FE98;
      }
      goto L_0896FE3C;
    }
L_0896FE3C:
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
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    ctx.gpr[5] = (17150u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 18000u);
    ctx.gpr[11] = (0u | 50u);
    ctx.gpr[31] = (0x0896FE98u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 936u, 0x08A9B7A8u>(ctx, &aot_mem) && ctx.pc == 0x0896FE98u) goto L_0896FE98;
    return;
L_0896FE98:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FEA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-944));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-28895)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(876), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(880), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(884), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(888), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(892), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(896), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(900), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(904), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(908), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(912), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(916), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(920), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(924), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(928), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0896FF10;
      }
      goto L_0896FEF4;
    }
L_0896FEF4:
    ctx.gpr[31] = (0x0896FEFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0896EF70;
L_0896FEFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(850))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(848))))));
        goto L_0896FF34;
    }
    goto L_0896FF08;
L_0896FF08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(848))))));
      if (branch_taken) {
          goto L_0896FF18;
      }
      goto L_0896FF10;
    }
L_0896FF10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 137u, 0x08970D1Cu>(ctx, &aot_mem); return;
      }
      goto L_0896FF18;
    }
L_0896FF18:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 137u, 0x08970D1Cu>(ctx, &aot_mem); return;
      }
      goto L_0896FF30;
    }
L_0896FF30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(848))))));
    goto L_0896FF34;
L_0896FF34:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-497));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), ctx.gpr[6]);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
      if (branch_taken) {
          goto L_0896FF9C;
      }
      goto L_0896FF98;
    }
L_0896FF98:
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[16];
    goto L_0896FF9C;
L_0896FF9C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(852))))));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FFD0;
      }
      goto L_0896FFC4;
    }
L_0896FFC4:
    ctx.gpr[6] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_0896FFDC;
      }
      goto L_0896FFD0;
    }
L_0896FFD0:
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    goto L_0896FFDC;
L_0896FFDC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(852))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 1u, 0x08970000u>(ctx, &aot_mem); return;
    }
    goto L_0896FFEC;
L_0896FFEC:
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(852))))));
        (void)rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 5u, 0x08970058u>(ctx, &aot_mem); return;
    }
    goto L_0896FFFC;
L_0896FFFC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(852))))));
    ctx.pc = 0x08970000u; return;
}

void recomp_unit_0090(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0090_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_90(Runtime &runtime) {
    runtime.register_generated_unit(90u, 0x0896C000u, 16384u, &recomp_unit_0090, &recomp_unit_0090_entry);
    runtime.register_function(0x0896C000u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C010u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C01Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C028u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C030u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C034u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C040u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C050u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C058u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C068u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C074u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C080u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C088u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C08Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C098u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C100u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C104u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C10Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C128u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C12Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C164u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C200u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C20Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C224u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C22Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C278u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C280u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C288u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C314u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C324u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C344u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C388u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C404u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C420u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C46Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C474u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C480u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C500u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C50Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C514u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C520u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C528u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C530u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C538u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C544u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C54Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C558u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C560u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C568u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C578u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C588u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C594u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C600u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C608u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C610u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C618u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C620u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C62Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C634u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C63Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C644u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C64Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C658u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C660u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C668u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C678u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C688u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C694u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C704u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C70Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C718u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C720u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C72Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C738u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C754u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C75Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C764u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C76Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C774u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C77Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C78Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C798u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C804u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C80Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C814u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C81Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C82Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C83Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C848u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C854u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C864u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C870u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C888u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C890u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C89Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C900u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C908u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C910u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C918u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C920u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C924u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C92Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C938u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C940u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C94Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C954u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C95Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C96Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C978u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C9F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CAA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CAE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDF0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CEA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CEACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CEB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CEBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CEC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CECCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CEDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF28u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CFDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CFE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CFF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D000u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D010u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D06Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D088u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D098u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D108u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D110u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D124u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D13Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D144u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D15Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D164u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D174u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D180u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D18Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D19Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D214u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D21Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D224u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D22Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D234u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D238u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D248u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D264u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D270u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D280u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D290u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D304u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D314u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D31Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D328u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D32Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D338u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D340u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D36Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D374u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D37Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D38Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D39Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D400u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D40Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D41Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D42Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D440u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D448u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D478u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D480u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D48Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D54Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D55Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D5C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D5E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D5ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D5F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D604u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D608u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D60Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D61Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D624u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D64Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D654u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D734u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D744u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D750u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D760u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D780u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D7D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D7D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D7FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D8ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D910u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D91Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D944u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D950u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D968u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D97Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D98Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D994u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D99Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBF0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDCCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DEBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DEC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DEC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DED8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DEE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF28u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFF0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E000u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E00Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E018u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E034u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E044u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E04Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E088u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E23Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E30Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E328u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E354u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E374u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E380u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E38Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E400u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E410u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E418u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E428u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E42Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E434u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E43Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E450u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E454u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E470u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E528u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E534u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E548u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E554u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E574u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E59Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E60Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E704u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E710u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E71Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E728u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E734u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E740u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E74Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E758u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E764u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E770u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E77Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E788u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E794u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E800u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E80Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E818u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E824u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E830u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E83Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E848u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E854u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E860u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E86Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E878u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E884u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E890u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E89Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E8FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E908u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E914u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E920u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E92Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E938u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E944u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E950u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E95Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E968u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E974u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E980u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E98Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E998u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA04u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA28u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EADCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EAF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBCCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBD8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBF0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EBFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE04u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE54u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFD8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F00Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F014u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F048u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F098u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F0B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F0C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F120u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F124u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F174u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F17Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F184u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F1A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F1CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F1E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F1F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F240u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F388u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F404u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F418u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F420u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F434u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F440u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F450u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F474u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F47Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F488u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F49Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F518u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F52Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F538u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F550u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F560u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F568u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F578u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F584u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F594u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F59Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F5A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F5E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F5F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F5FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F60Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F634u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F640u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F64Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F658u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F65Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F67Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F71Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F728u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F78Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F800u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F810u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F81Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F830u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F834u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F860u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F878u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F888u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F898u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F908u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F914u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F91Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F94Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F97Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F990u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F99Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBCCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC28u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCC0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCCCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCD8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD70u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEA4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFFCu, &recomp_unit_0090, "recomp_unit_0090");
}
} // namespace psprecomp
