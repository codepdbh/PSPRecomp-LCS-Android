#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0070[4090] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 8, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 13, 0, 0, 0, 14, 0, 15, 16,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0,
    0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0,
    31, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0,
    0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0,
    0, 0, 45, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 55, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 71, 0, 0, 0, 0, 0, 0, 72, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0,
    86, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0,
    92, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 110, 111, 0, 0, 0, 112, 0, 0, 0, 113, 114, 0, 115, 0, 0, 0, 116, 0,
    0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124,
    0, 0, 125, 0, 126, 0, 0, 0, 127, 128, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0,
    0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141,
    0, 142, 0, 143, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161,
    0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0,
    0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 181, 0, 182, 0, 0,
    0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 0, 0,
    193, 0, 194, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 209, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213,
    0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0,
    224, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 0, 0, 233, 0, 0, 234, 0, 235, 0, 236, 0, 0, 237,
    0, 0, 238, 0, 0, 239, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 245,
    0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0,
    0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 258,
    0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 278, 0,
    0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    292, 0, 293, 0, 294, 0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 298, 0, 0, 0, 0, 299, 0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 303,
    0, 304, 0, 305, 306, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312,
    0, 313, 0, 314, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 327, 0,
    0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 337,
    0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0,
    0, 350, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 357, 0, 358, 0, 359,
    0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 363, 0, 0, 0, 0, 364, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0,
    0, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 382, 383, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 387, 0, 0, 388, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397,
    0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0,
    0, 0, 404, 0, 0, 0, 405, 0, 406, 0, 407, 0, 408, 0, 409, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0,
    0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 418, 0, 419, 0, 0, 0, 420, 0,
    421, 0, 422, 0, 423, 0, 424, 0, 0, 425, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 433, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 447, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 451, 0, 0, 0, 0,
    452, 0, 453, 0, 0, 454, 0, 0, 0, 455, 456, 0, 0, 0, 457, 0, 458, 0, 459, 0, 460, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 0,
    0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 469, 0, 470,
    0, 471, 0, 472, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0,
    0, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0, 481, 0, 482, 0, 0, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 490, 0, 491, 0, 492, 0, 493, 0, 494,
    0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 499, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0,
    502, 503, 0, 0, 0, 0, 504, 0, 505, 0, 0, 506, 0, 0, 0, 507, 508, 0, 0, 0, 509, 0, 510, 0, 511, 0, 512, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0,
    0, 522, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0,
    0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 534, 0, 535, 0, 536, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0,
    0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 546, 0, 547, 0, 548, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 553, 0, 0, 554,
    0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 560, 0, 561, 0, 562, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 567,
    0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0,
    571, 0, 0, 572, 573, 0, 574, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 581, 0, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 584, 0, 0, 0, 0, 0, 0, 585, 586, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0, 593, 0, 0, 594, 595, 0, 596, 0, 0, 597, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601,
    0, 602, 603, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 606, 0, 607, 0, 608, 0, 609, 0, 0,
    0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 615,
    0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0, 621, 0, 622, 0, 0, 0, 623, 0, 624, 0, 625, 0,
    626, 0, 0, 627, 0, 628, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0,
    632, 0, 633, 0, 634, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 637, 0, 638, 0, 639, 0, 0, 0, 640, 0, 641, 0, 642,
    0, 643, 0, 0, 0, 644, 0, 645, 0, 0, 646, 0, 647, 0, 648, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 651,
    0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 657, 0, 658,
    0, 659, 0, 660, 661, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 0, 0, 666, 667, 0, 668, 0, 0,
    669, 0, 0, 0, 670, 0, 671, 0, 0, 672, 0, 673, 0, 674, 0, 675, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0,
    0, 678, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 686,
    687, 0, 0, 688, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 692, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0,
    0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 696, 697, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 701,
    0, 0, 0, 0, 702, 703, 0, 0, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0,
    0, 708, 0, 709, 0, 710, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 715,
    0, 716, 0, 717, 0, 718, 0, 719, 0, 0, 720, 0, 721, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 724, 0, 0,
    0, 725, 0, 726, 0, 727, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 731, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 732, 0, 733, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 0,
    0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 741,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 745, 0,
    0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 749, 0, 750, 0, 0, 751, 0, 752, 0, 0,
    0, 0, 0, 753, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 0, 759, 0, 760, 0, 0,
    761, 0, 762, 0, 0, 763, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 768,
    0, 0, 0, 769, 0, 0, 770, 0, 0, 0, 771, 0, 772, 0, 0, 773, 0, 774, 0, 775, 0, 776, 0, 777, 0, 0, 778, 0, 779, 0, 780, 0,
    0, 781, 0, 782, 0, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 785, 0, 786, 0, 0, 787, 0, 788, 0, 0, 789, 0, 790, 0, 0, 791, 0,
    0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 794, 0, 0, 0, 0, 0, 795, 0, 796, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 799, 0, 800, 801, 0, 0, 802, 0, 0,
    803, 0, 804, 0, 0, 0, 805, 0, 806, 807, 0, 808, 0, 0, 0, 809, 0, 810, 0, 811, 0, 812, 0, 0, 813, 0, 0, 0, 0, 0, 0, 814,
    0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0,
    0, 0, 0, 818, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 821, 0, 822, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0,
    824, 0, 0, 825, 0, 826, 0, 0, 0, 827, 0, 0, 0, 0, 0, 828, 0, 0, 829, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 831, 0,
    0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 837,
};
void recomp_unit_0070_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0891C000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0070[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0891C000;
    case 2u: goto L_0891C018;
    case 3u: goto L_0891C030;
    case 4u: goto L_0891C03C;
    case 5u: goto L_0891C04C;
    case 6u: goto L_0891C054;
    case 7u: goto L_0891C05C;
    case 8u: goto L_0891C070;
    case 9u: goto L_0891C07C;
    case 10u: goto L_0891C0A0;
    case 11u: goto L_0891C0C8;
    case 12u: goto L_0891C0DC;
    case 13u: goto L_0891C0E0;
    case 14u: goto L_0891C0F0;
    case 15u: goto L_0891C0F8;
    case 16u: goto L_0891C0FC;
    case 17u: goto L_0891C110;
    case 18u: goto L_0891C124;
    case 19u: goto L_0891C130;
    case 20u: goto L_0891C140;
    case 21u: goto L_0891C148;
    case 22u: goto L_0891C150;
    case 23u: goto L_0891C164;
    case 24u: goto L_0891C170;
    case 25u: goto L_0891C194;
    case 26u: goto L_0891C1B8;
    case 27u: goto L_0891C1D0;
    case 28u: goto L_0891C1E0;
    case 29u: goto L_0891C1E8;
    case 30u: goto L_0891C1F8;
    case 31u: goto L_0891C200;
    case 32u: goto L_0891C218;
    case 33u: goto L_0891C220;
    case 34u: goto L_0891C230;
    case 35u: goto L_0891C238;
    case 36u: goto L_0891C248;
    case 37u: goto L_0891C250;
    case 38u: goto L_0891C26C;
    case 39u: goto L_0891C274;
    case 40u: goto L_0891C290;
    case 41u: goto L_0891C29C;
    case 42u: goto L_0891C2CC;
    case 43u: goto L_0891C2DC;
    case 44u: goto L_0891C2F0;
    case 45u: goto L_0891C308;
    case 46u: goto L_0891C30C;
    case 47u: goto L_0891C314;
    case 48u: goto L_0891C334;
    case 49u: goto L_0891C36C;
    case 50u: goto L_0891C380;
    case 51u: goto L_0891C3A8;
    case 52u: goto L_0891C3C4;
    case 53u: goto L_0891C408;
    case 54u: goto L_0891C410;
    case 55u: goto L_0891C428;
    case 56u: goto L_0891C42C;
    case 57u: goto L_0891C43C;
    case 58u: goto L_0891C454;
    case 59u: goto L_0891C468;
    case 60u: goto L_0891C490;
    case 61u: goto L_0891C4BC;
    case 62u: goto L_0891C4CC;
    case 63u: goto L_0891C4D0;
    case 64u: goto L_0891C4D8;
    case 65u: goto L_0891C528;
    case 66u: goto L_0891C53C;
    case 67u: goto L_0891C578;
    case 68u: goto L_0891C57C;
    case 69u: goto L_0891C5CC;
    case 70u: goto L_0891C5DC;
    case 71u: goto L_0891C604;
    case 72u: goto L_0891C620;
    case 73u: goto L_0891C624;
    case 74u: goto L_0891C638;
    case 75u: goto L_0891C644;
    case 76u: goto L_0891C658;
    case 77u: goto L_0891C66C;
    case 78u: goto L_0891C69C;
    case 79u: goto L_0891C6B0;
    case 80u: goto L_0891C6B8;
    case 81u: goto L_0891C6BC;
    case 82u: goto L_0891C6CC;
    case 83u: goto L_0891C6E0;
    case 84u: goto L_0891C6E8;
    case 85u: goto L_0891C6F4;
    case 86u: goto L_0891C700;
    case 87u: goto L_0891C710;
    case 88u: goto L_0891C718;
    case 89u: goto L_0891C730;
    case 90u: goto L_0891C770;
    case 91u: goto L_0891C778;
    case 92u: goto L_0891C780;
    case 93u: goto L_0891C788;
    case 94u: goto L_0891C79C;
    case 95u: goto L_0891C7A8;
    case 96u: goto L_0891C7B0;
    case 97u: goto L_0891C7B8;
    case 98u: goto L_0891C7C0;
    case 99u: goto L_0891C7C8;
    case 100u: goto L_0891C7D0;
    case 101u: goto L_0891C7D8;
    case 102u: goto L_0891C7F4;
    case 103u: goto L_0891C80C;
    case 104u: goto L_0891C81C;
    case 105u: goto L_0891C828;
    case 106u: goto L_0891C830;
    case 107u: goto L_0891C844;
    case 108u: goto L_0891C864;
    case 109u: goto L_0891C8AC;
    case 110u: goto L_0891C8B8;
    case 111u: goto L_0891C8BC;
    case 112u: goto L_0891C8CC;
    case 113u: goto L_0891C8DC;
    case 114u: goto L_0891C8E0;
    case 115u: goto L_0891C8E8;
    case 116u: goto L_0891C8F8;
    case 117u: goto L_0891C908;
    case 118u: goto L_0891C91C;
    case 119u: goto L_0891C92C;
    case 120u: goto L_0891C95C;
    case 121u: goto L_0891C964;
    case 122u: goto L_0891C96C;
    case 123u: goto L_0891C974;
    case 124u: goto L_0891C97C;
    case 125u: goto L_0891C988;
    case 126u: goto L_0891C990;
    case 127u: goto L_0891C9A0;
    case 128u: goto L_0891C9A4;
    case 129u: goto L_0891C9BC;
    case 130u: goto L_0891C9D0;
    case 131u: goto L_0891C9D8;
    case 132u: goto L_0891C9EC;
    case 133u: goto L_0891CA04;
    case 134u: goto L_0891CA10;
    case 135u: goto L_0891CA24;
    case 136u: goto L_0891CA34;
    case 137u: goto L_0891CA48;
    case 138u: goto L_0891CA50;
    case 139u: goto L_0891CA58;
    case 140u: goto L_0891CA68;
    case 141u: goto L_0891CA7C;
    case 142u: goto L_0891CA84;
    case 143u: goto L_0891CA8C;
    case 144u: goto L_0891CAA0;
    case 145u: goto L_0891CACC;
    case 146u: goto L_0891CB1C;
    case 147u: goto L_0891CB5C;
    case 148u: goto L_0891CB64;
    case 149u: goto L_0891CB8C;
    case 150u: goto L_0891CB94;
    case 151u: goto L_0891CBF0;
    case 152u: goto L_0891CC8C;
    case 153u: goto L_0891CCB0;
    case 154u: goto L_0891CCC0;
    case 155u: goto L_0891CCDC;
    case 156u: goto L_0891CD00;
    case 157u: goto L_0891CD54;
    case 158u: goto L_0891CD6C;
    case 159u: goto L_0891CD90;
    case 160u: goto L_0891CDDC;
    case 161u: goto L_0891CE7C;
    case 162u: goto L_0891CE90;
    case 163u: goto L_0891CEB0;
    case 164u: goto L_0891CECC;
    case 165u: goto L_0891CEE4;
    case 166u: goto L_0891CEF0;
    case 167u: goto L_0891CEF8;
    case 168u: goto L_0891CF0C;
    case 169u: goto L_0891CF24;
    case 170u: goto L_0891CF30;
    case 171u: goto L_0891CFC0;
    case 172u: goto L_0891CFCC;
    case 173u: goto L_0891CFE8;
    case 174u: goto L_0891CFF8;
    case 175u: goto L_0891D024;
    case 176u: goto L_0891D080;
    case 177u: goto L_0891D0AC;
    case 178u: goto L_0891D0BC;
    case 179u: goto L_0891D0CC;
    case 180u: goto L_0891D0D8;
    case 181u: goto L_0891D0EC;
    case 182u: goto L_0891D0F4;
    case 183u: goto L_0891D108;
    case 184u: goto L_0891D118;
    case 185u: goto L_0891D128;
    case 186u: goto L_0891D130;
    case 187u: goto L_0891D13C;
    case 188u: goto L_0891D144;
    case 189u: goto L_0891D154;
    case 190u: goto L_0891D15C;
    case 191u: goto L_0891D164;
    case 192u: goto L_0891D16C;
    case 193u: goto L_0891D180;
    case 194u: goto L_0891D188;
    case 195u: goto L_0891D18C;
    case 196u: goto L_0891D19C;
    case 197u: goto L_0891D1AC;
    case 198u: goto L_0891D1D8;
    case 199u: goto L_0891D1E8;
    case 200u: goto L_0891D210;
    case 201u: goto L_0891D220;
    case 202u: goto L_0891D240;
    case 203u: goto L_0891D250;
    case 204u: goto L_0891D25C;
    case 205u: goto L_0891D264;
    case 206u: goto L_0891D2B0;
    case 207u: goto L_0891D2B8;
    case 208u: goto L_0891D2C0;
    case 209u: goto L_0891D2C4;
    case 210u: goto L_0891D2C8;
    case 211u: goto L_0891D30C;
    case 212u: goto L_0891D328;
    case 213u: goto L_0891D37C;
    case 214u: goto L_0891D39C;
    case 215u: goto L_0891D3B4;
    case 216u: goto L_0891D3BC;
    case 217u: goto L_0891D3C4;
    case 218u: goto L_0891D3CC;
    case 219u: goto L_0891D3D8;
    case 220u: goto L_0891D3E0;
    case 221u: goto L_0891D3E8;
    case 222u: goto L_0891D3F0;
    case 223u: goto L_0891D3F8;
    case 224u: goto L_0891D400;
    case 225u: goto L_0891D40C;
    case 226u: goto L_0891D414;
    case 227u: goto L_0891D41C;
    case 228u: goto L_0891D424;
    case 229u: goto L_0891D42C;
    case 230u: goto L_0891D434;
    case 231u: goto L_0891D43C;
    case 232u: goto L_0891D444;
    case 233u: goto L_0891D454;
    case 234u: goto L_0891D460;
    case 235u: goto L_0891D468;
    case 236u: goto L_0891D470;
    case 237u: goto L_0891D47C;
    case 238u: goto L_0891D488;
    case 239u: goto L_0891D494;
    case 240u: goto L_0891D49C;
    case 241u: goto L_0891D4A4;
    case 242u: goto L_0891D4BC;
    case 243u: goto L_0891D4EC;
    case 244u: goto L_0891D4F8;
    case 245u: goto L_0891D4FC;
    case 246u: goto L_0891D514;
    case 247u: goto L_0891D524;
    case 248u: goto L_0891D538;
    case 249u: goto L_0891D544;
    case 250u: goto L_0891D554;
    case 251u: goto L_0891D568;
    case 252u: goto L_0891D574;
    case 253u: goto L_0891D584;
    case 254u: goto L_0891D5B8;
    case 255u: goto L_0891D5C4;
    case 256u: goto L_0891D5D8;
    case 257u: goto L_0891D5F0;
    case 258u: goto L_0891D5FC;
    case 259u: goto L_0891D604;
    case 260u: goto L_0891D60C;
    case 261u: goto L_0891D620;
    case 262u: goto L_0891D634;
    case 263u: goto L_0891D640;
    case 264u: goto L_0891D65C;
    case 265u: goto L_0891D664;
    case 266u: goto L_0891D678;
    case 267u: goto L_0891D6A4;
    case 268u: goto L_0891D6B8;
    case 269u: goto L_0891D6E0;
    case 270u: goto L_0891D714;
    case 271u: goto L_0891D71C;
    case 272u: goto L_0891D724;
    case 273u: goto L_0891D730;
    case 274u: goto L_0891D744;
    case 275u: goto L_0891D75C;
    case 276u: goto L_0891D768;
    case 277u: goto L_0891D770;
    case 278u: goto L_0891D778;
    case 279u: goto L_0891D78C;
    case 280u: goto L_0891D7A0;
    case 281u: goto L_0891D7AC;
    case 282u: goto L_0891D7C4;
    case 283u: goto L_0891D7CC;
    case 284u: goto L_0891D7E0;
    case 285u: goto L_0891D80C;
    case 286u: goto L_0891D820;
    case 287u: goto L_0891D848;
    case 288u: goto L_0891D868;
    case 289u: goto L_0891D890;
    case 290u: goto L_0891D8A4;
    case 291u: goto L_0891D8E8;
    case 292u: goto L_0891D900;
    case 293u: goto L_0891D908;
    case 294u: goto L_0891D910;
    case 295u: goto L_0891D924;
    case 296u: goto L_0891D92C;
    case 297u: goto L_0891D934;
    case 298u: goto L_0891D93C;
    case 299u: goto L_0891D950;
    case 300u: goto L_0891D958;
    case 301u: goto L_0891D960;
    case 302u: goto L_0891D968;
    case 303u: goto L_0891D97C;
    case 304u: goto L_0891D984;
    case 305u: goto L_0891D98C;
    case 306u: goto L_0891D990;
    case 307u: goto L_0891D99C;
    case 308u: goto L_0891D9DC;
    case 309u: goto L_0891D9E4;
    case 310u: goto L_0891D9EC;
    case 311u: goto L_0891D9F4;
    case 312u: goto L_0891D9FC;
    case 313u: goto L_0891DA04;
    case 314u: goto L_0891DA0C;
    case 315u: goto L_0891DA10;
    case 316u: goto L_0891DA18;
    case 317u: goto L_0891DA64;
    case 318u: goto L_0891DA7C;
    case 319u: goto L_0891DA90;
    case 320u: goto L_0891DAA8;
    case 321u: goto L_0891DAB0;
    case 322u: goto L_0891DAB8;
    case 323u: goto L_0891DAE8;
    case 324u: goto L_0891DB18;
    case 325u: goto L_0891DB44;
    case 326u: goto L_0891DB74;
    case 327u: goto L_0891DB78;
    case 328u: goto L_0891DB8C;
    case 329u: goto L_0891DBE0;
    case 330u: goto L_0891DBEC;
    case 331u: goto L_0891DC20;
    case 332u: goto L_0891DC28;
    case 333u: goto L_0891DC40;
    case 334u: goto L_0891DC4C;
    case 335u: goto L_0891DC64;
    case 336u: goto L_0891DC70;
    case 337u: goto L_0891DC7C;
    case 338u: goto L_0891DC94;
    case 339u: goto L_0891DCA0;
    case 340u: goto L_0891DCB8;
    case 341u: goto L_0891DCC4;
    case 342u: goto L_0891DCCC;
    case 343u: goto L_0891DCD4;
    case 344u: goto L_0891DD00;
    case 345u: goto L_0891DD0C;
    case 346u: goto L_0891DD40;
    case 347u: goto L_0891DD48;
    case 348u: goto L_0891DD60;
    case 349u: goto L_0891DD6C;
    case 350u: goto L_0891DD84;
    case 351u: goto L_0891DD90;
    case 352u: goto L_0891DD9C;
    case 353u: goto L_0891DDB4;
    case 354u: goto L_0891DDC0;
    case 355u: goto L_0891DDD8;
    case 356u: goto L_0891DDE4;
    case 357u: goto L_0891DDEC;
    case 358u: goto L_0891DDF4;
    case 359u: goto L_0891DDFC;
    case 360u: goto L_0891DE04;
    case 361u: goto L_0891DE38;
    case 362u: goto L_0891DE44;
    case 363u: goto L_0891DE88;
    case 364u: goto L_0891DE9C;
    case 365u: goto L_0891DEA0;
    case 366u: goto L_0891DEB8;
    case 367u: goto L_0891DEF4;
    case 368u: goto L_0891DF0C;
    case 369u: goto L_0891DF18;
    case 370u: goto L_0891DF24;
    case 371u: goto L_0891DF30;
    case 372u: goto L_0891DF3C;
    case 373u: goto L_0891DF48;
    case 374u: goto L_0891DF54;
    case 375u: goto L_0891DF5C;
    case 376u: goto L_0891DF64;
    case 377u: goto L_0891DF9C;
    case 378u: goto L_0891DFAC;
    case 379u: goto L_0891DFBC;
    case 380u: goto L_0891DFCC;
    case 381u: goto L_0891DFDC;
    case 382u: goto L_0891DFE4;
    case 383u: goto L_0891DFE8;
    case 384u: goto L_0891E000;
    case 385u: goto L_0891E018;
    case 386u: goto L_0891E020;
    case 387u: goto L_0891E02C;
    case 388u: goto L_0891E038;
    case 389u: goto L_0891E040;
    case 390u: goto L_0891E054;
    case 391u: goto L_0891E070;
    case 392u: goto L_0891E0A8;
    case 393u: goto L_0891E0B0;
    case 394u: goto L_0891E0BC;
    case 395u: goto L_0891E0D0;
    case 396u: goto L_0891E0E4;
    case 397u: goto L_0891E0FC;
    case 398u: goto L_0891E104;
    case 399u: goto L_0891E11C;
    case 400u: goto L_0891E134;
    case 401u: goto L_0891E148;
    case 402u: goto L_0891E168;
    case 403u: goto L_0891E178;
    case 404u: goto L_0891E188;
    case 405u: goto L_0891E198;
    case 406u: goto L_0891E1A0;
    case 407u: goto L_0891E1A8;
    case 408u: goto L_0891E1B0;
    case 409u: goto L_0891E1B8;
    case 410u: goto L_0891E1C0;
    case 411u: goto L_0891E1D8;
    case 412u: goto L_0891E1F0;
    case 413u: goto L_0891E204;
    case 414u: goto L_0891E224;
    case 415u: goto L_0891E234;
    case 416u: goto L_0891E244;
    case 417u: goto L_0891E250;
    case 418u: goto L_0891E260;
    case 419u: goto L_0891E268;
    case 420u: goto L_0891E278;
    case 421u: goto L_0891E280;
    case 422u: goto L_0891E288;
    case 423u: goto L_0891E290;
    case 424u: goto L_0891E298;
    case 425u: goto L_0891E2A4;
    case 426u: goto L_0891E2AC;
    case 427u: goto L_0891E2BC;
    case 428u: goto L_0891E2CC;
    case 429u: goto L_0891E2D4;
    case 430u: goto L_0891E308;
    case 431u: goto L_0891E324;
    case 432u: goto L_0891E33C;
    case 433u: goto L_0891E344;
    case 434u: goto L_0891E34C;
    case 435u: goto L_0891E354;
    case 436u: goto L_0891E388;
    case 437u: goto L_0891E3C0;
    case 438u: goto L_0891E3C4;
    case 439u: goto L_0891E3CC;
    case 440u: goto L_0891E3D4;
    case 441u: goto L_0891E3DC;
    case 442u: goto L_0891E3E4;
    case 443u: goto L_0891E3EC;
    case 444u: goto L_0891E3F4;
    case 445u: goto L_0891E428;
    case 446u: goto L_0891E438;
    case 447u: goto L_0891E43C;
    case 448u: goto L_0891E448;
    case 449u: goto L_0891E458;
    case 450u: goto L_0891E468;
    case 451u: goto L_0891E46C;
    case 452u: goto L_0891E480;
    case 453u: goto L_0891E488;
    case 454u: goto L_0891E494;
    case 455u: goto L_0891E4A4;
    case 456u: goto L_0891E4A8;
    case 457u: goto L_0891E4B8;
    case 458u: goto L_0891E4C0;
    case 459u: goto L_0891E4C8;
    case 460u: goto L_0891E4D0;
    case 461u: goto L_0891E4D8;
    case 462u: goto L_0891E4F0;
    case 463u: goto L_0891E508;
    case 464u: goto L_0891E51C;
    case 465u: goto L_0891E53C;
    case 466u: goto L_0891E54C;
    case 467u: goto L_0891E55C;
    case 468u: goto L_0891E56C;
    case 469u: goto L_0891E574;
    case 470u: goto L_0891E57C;
    case 471u: goto L_0891E584;
    case 472u: goto L_0891E58C;
    case 473u: goto L_0891E594;
    case 474u: goto L_0891E5AC;
    case 475u: goto L_0891E5C4;
    case 476u: goto L_0891E5D8;
    case 477u: goto L_0891E5F8;
    case 478u: goto L_0891E608;
    case 479u: goto L_0891E618;
    case 480u: goto L_0891E624;
    case 481u: goto L_0891E634;
    case 482u: goto L_0891E63C;
    case 483u: goto L_0891E64C;
    case 484u: goto L_0891E654;
    case 485u: goto L_0891E65C;
    case 486u: goto L_0891E664;
    case 487u: goto L_0891E66C;
    case 488u: goto L_0891E6A0;
    case 489u: goto L_0891E6D8;
    case 490u: goto L_0891E6DC;
    case 491u: goto L_0891E6E4;
    case 492u: goto L_0891E6EC;
    case 493u: goto L_0891E6F4;
    case 494u: goto L_0891E6FC;
    case 495u: goto L_0891E704;
    case 496u: goto L_0891E70C;
    case 497u: goto L_0891E740;
    case 498u: goto L_0891E750;
    case 499u: goto L_0891E754;
    case 500u: goto L_0891E760;
    case 501u: goto L_0891E770;
    case 502u: goto L_0891E780;
    case 503u: goto L_0891E784;
    case 504u: goto L_0891E798;
    case 505u: goto L_0891E7A0;
    case 506u: goto L_0891E7AC;
    case 507u: goto L_0891E7BC;
    case 508u: goto L_0891E7C0;
    case 509u: goto L_0891E7D0;
    case 510u: goto L_0891E7D8;
    case 511u: goto L_0891E7E0;
    case 512u: goto L_0891E7E8;
    case 513u: goto L_0891E830;
    case 514u: goto L_0891E840;
    case 515u: goto L_0891E848;
    case 516u: goto L_0891E850;
    case 517u: goto L_0891E898;
    case 518u: goto L_0891E8A8;
    case 519u: goto L_0891E8B0;
    case 520u: goto L_0891E8B8;
    case 521u: goto L_0891E8F4;
    case 522u: goto L_0891E904;
    case 523u: goto L_0891E91C;
    case 524u: goto L_0891E924;
    case 525u: goto L_0891E93C;
    case 526u: goto L_0891E950;
    case 527u: goto L_0891E958;
    case 528u: goto L_0891E96C;
    case 529u: goto L_0891E990;
    case 530u: goto L_0891E9A0;
    case 531u: goto L_0891E9B0;
    case 532u: goto L_0891E9D0;
    case 533u: goto L_0891E9D8;
    case 534u: goto L_0891E9E4;
    case 535u: goto L_0891E9EC;
    case 536u: goto L_0891E9F4;
    case 537u: goto L_0891EA38;
    case 538u: goto L_0891EA4C;
    case 539u: goto L_0891EA54;
    case 540u: goto L_0891EA68;
    case 541u: goto L_0891EA8C;
    case 542u: goto L_0891EA9C;
    case 543u: goto L_0891EAAC;
    case 544u: goto L_0891EACC;
    case 545u: goto L_0891EAD4;
    case 546u: goto L_0891EAE0;
    case 547u: goto L_0891EAE8;
    case 548u: goto L_0891EAF0;
    case 549u: goto L_0891EB24;
    case 550u: goto L_0891EB34;
    case 551u: goto L_0891EB60;
    case 552u: goto L_0891EB68;
    case 553u: goto L_0891EB70;
    case 554u: goto L_0891EB7C;
    case 555u: goto L_0891EB84;
    case 556u: goto L_0891EBA8;
    case 557u: goto L_0891EBC8;
    case 558u: goto L_0891EBD0;
    case 559u: goto L_0891EBE0;
    case 560u: goto L_0891EC0C;
    case 561u: goto L_0891EC14;
    case 562u: goto L_0891EC1C;
    case 563u: goto L_0891EC28;
    case 564u: goto L_0891EC30;
    case 565u: goto L_0891EC54;
    case 566u: goto L_0891EC74;
    case 567u: goto L_0891EC7C;
    case 568u: goto L_0891EC88;
    case 569u: goto L_0891ECE0;
    case 570u: goto L_0891ECF0;
    case 571u: goto L_0891ED00;
    case 572u: goto L_0891ED0C;
    case 573u: goto L_0891ED10;
    case 574u: goto L_0891ED18;
    case 575u: goto L_0891ED24;
    case 576u: goto L_0891ED2C;
    case 577u: goto L_0891ED84;
    case 578u: goto L_0891ED94;
    case 579u: goto L_0891EDA4;
    case 580u: goto L_0891EDB4;
    case 581u: goto L_0891EDBC;
    case 582u: goto L_0891EDC8;
    case 583u: goto L_0891EDD0;
    case 584u: goto L_0891EE04;
    case 585u: goto L_0891EE20;
    case 586u: goto L_0891EE24;
    case 587u: goto L_0891EE2C;
    case 588u: goto L_0891EE38;
    case 589u: goto L_0891EE90;
    case 590u: goto L_0891EEA0;
    case 591u: goto L_0891EEB0;
    case 592u: goto L_0891EEC0;
    case 593u: goto L_0891EEC8;
    case 594u: goto L_0891EED4;
    case 595u: goto L_0891EED8;
    case 596u: goto L_0891EEE0;
    case 597u: goto L_0891EEEC;
    case 598u: goto L_0891EF44;
    case 599u: goto L_0891EF54;
    case 600u: goto L_0891EF64;
    case 601u: goto L_0891EF7C;
    case 602u: goto L_0891EF84;
    case 603u: goto L_0891EF88;
    case 604u: goto L_0891EF90;
    case 605u: goto L_0891EFD4;
    case 606u: goto L_0891EFDC;
    case 607u: goto L_0891EFE4;
    case 608u: goto L_0891EFEC;
    case 609u: goto L_0891EFF4;
    case 610u: goto L_0891F00C;
    case 611u: goto L_0891F024;
    case 612u: goto L_0891F038;
    case 613u: goto L_0891F068;
    case 614u: goto L_0891F070;
    case 615u: goto L_0891F07C;
    case 616u: goto L_0891F094;
    case 617u: goto L_0891F09C;
    case 618u: goto L_0891F0AC;
    case 619u: goto L_0891F0BC;
    case 620u: goto L_0891F0C4;
    case 621u: goto L_0891F0D0;
    case 622u: goto L_0891F0D8;
    case 623u: goto L_0891F0E8;
    case 624u: goto L_0891F0F0;
    case 625u: goto L_0891F0F8;
    case 626u: goto L_0891F100;
    case 627u: goto L_0891F10C;
    case 628u: goto L_0891F114;
    case 629u: goto L_0891F120;
    case 630u: goto L_0891F138;
    case 631u: goto L_0891F170;
    case 632u: goto L_0891F180;
    case 633u: goto L_0891F188;
    case 634u: goto L_0891F190;
    case 635u: goto L_0891F19C;
    case 636u: goto L_0891F1C4;
    case 637u: goto L_0891F1CC;
    case 638u: goto L_0891F1D4;
    case 639u: goto L_0891F1DC;
    case 640u: goto L_0891F1EC;
    case 641u: goto L_0891F1F4;
    case 642u: goto L_0891F1FC;
    case 643u: goto L_0891F204;
    case 644u: goto L_0891F214;
    case 645u: goto L_0891F21C;
    case 646u: goto L_0891F228;
    case 647u: goto L_0891F230;
    case 648u: goto L_0891F238;
    case 649u: goto L_0891F240;
    case 650u: goto L_0891F264;
    case 651u: goto L_0891F27C;
    case 652u: goto L_0891F284;
    case 653u: goto L_0891F2A8;
    case 654u: goto L_0891F2C0;
    case 655u: goto L_0891F2C8;
    case 656u: goto L_0891F2E8;
    case 657u: goto L_0891F2F4;
    case 658u: goto L_0891F2FC;
    case 659u: goto L_0891F304;
    case 660u: goto L_0891F30C;
    case 661u: goto L_0891F310;
    case 662u: goto L_0891F320;
    case 663u: goto L_0891F330;
    case 664u: goto L_0891F34C;
    case 665u: goto L_0891F358;
    case 666u: goto L_0891F368;
    case 667u: goto L_0891F36C;
    case 668u: goto L_0891F374;
    case 669u: goto L_0891F380;
    case 670u: goto L_0891F390;
    case 671u: goto L_0891F398;
    case 672u: goto L_0891F3A4;
    case 673u: goto L_0891F3AC;
    case 674u: goto L_0891F3B4;
    case 675u: goto L_0891F3BC;
    case 676u: goto L_0891F3C8;
    case 677u: goto L_0891F3F4;
    case 678u: goto L_0891F404;
    case 679u: goto L_0891F418;
    case 680u: goto L_0891F424;
    case 681u: goto L_0891F430;
    case 682u: goto L_0891F440;
    case 683u: goto L_0891F450;
    case 684u: goto L_0891F45C;
    case 685u: goto L_0891F46C;
    case 686u: goto L_0891F47C;
    case 687u: goto L_0891F480;
    case 688u: goto L_0891F48C;
    case 689u: goto L_0891F498;
    case 690u: goto L_0891F4A8;
    case 691u: goto L_0891F4C4;
    case 692u: goto L_0891F4D0;
    case 693u: goto L_0891F4EC;
    case 694u: goto L_0891F508;
    case 695u: goto L_0891F51C;
    case 696u: goto L_0891F52C;
    case 697u: goto L_0891F530;
    case 698u: goto L_0891F53C;
    case 699u: goto L_0891F550;
    case 700u: goto L_0891F560;
    case 701u: goto L_0891F57C;
    case 702u: goto L_0891F590;
    case 703u: goto L_0891F594;
    case 704u: goto L_0891F5AC;
    case 705u: goto L_0891F5BC;
    case 706u: goto L_0891F5D8;
    case 707u: goto L_0891F5F4;
    case 708u: goto L_0891F604;
    case 709u: goto L_0891F60C;
    case 710u: goto L_0891F614;
    case 711u: goto L_0891F630;
    case 712u: goto L_0891F64C;
    case 713u: goto L_0891F65C;
    case 714u: goto L_0891F66C;
    case 715u: goto L_0891F67C;
    case 716u: goto L_0891F684;
    case 717u: goto L_0891F68C;
    case 718u: goto L_0891F694;
    case 719u: goto L_0891F69C;
    case 720u: goto L_0891F6A8;
    case 721u: goto L_0891F6B0;
    case 722u: goto L_0891F6D0;
    case 723u: goto L_0891F6E8;
    case 724u: goto L_0891F6F4;
    case 725u: goto L_0891F704;
    case 726u: goto L_0891F70C;
    case 727u: goto L_0891F714;
    case 728u: goto L_0891F71C;
    case 729u: goto L_0891F724;
    case 730u: goto L_0891F760;
    case 731u: goto L_0891F768;
    case 732u: goto L_0891F798;
    case 733u: goto L_0891F7A0;
    case 734u: goto L_0891F7B8;
    case 735u: goto L_0891F7E0;
    case 736u: goto L_0891F7EC;
    case 737u: goto L_0891F804;
    case 738u: goto L_0891F828;
    case 739u: goto L_0891F830;
    case 740u: goto L_0891F870;
    case 741u: goto L_0891F87C;
    case 742u: goto L_0891F8C0;
    case 743u: goto L_0891F8D8;
    case 744u: goto L_0891F8E4;
    case 745u: goto L_0891F8F8;
    case 746u: goto L_0891F904;
    case 747u: goto L_0891F948;
    case 748u: goto L_0891F950;
    case 749u: goto L_0891F958;
    case 750u: goto L_0891F960;
    case 751u: goto L_0891F96C;
    case 752u: goto L_0891F974;
    case 753u: goto L_0891F98C;
    case 754u: goto L_0891F998;
    case 755u: goto L_0891F9A0;
    case 756u: goto L_0891F9BC;
    case 757u: goto L_0891F9C4;
    case 758u: goto L_0891F9DC;
    case 759u: goto L_0891F9EC;
    case 760u: goto L_0891F9F4;
    case 761u: goto L_0891FA00;
    case 762u: goto L_0891FA08;
    case 763u: goto L_0891FA14;
    case 764u: goto L_0891FA1C;
    case 765u: goto L_0891FA50;
    case 766u: goto L_0891FA60;
    case 767u: goto L_0891FA68;
    case 768u: goto L_0891FA7C;
    case 769u: goto L_0891FA8C;
    case 770u: goto L_0891FA98;
    case 771u: goto L_0891FAA8;
    case 772u: goto L_0891FAB0;
    case 773u: goto L_0891FABC;
    case 774u: goto L_0891FAC4;
    case 775u: goto L_0891FACC;
    case 776u: goto L_0891FAD4;
    case 777u: goto L_0891FADC;
    case 778u: goto L_0891FAE8;
    case 779u: goto L_0891FAF0;
    case 780u: goto L_0891FAF8;
    case 781u: goto L_0891FB04;
    case 782u: goto L_0891FB0C;
    case 783u: goto L_0891FB18;
    case 784u: goto L_0891FB34;
    case 785u: goto L_0891FB3C;
    case 786u: goto L_0891FB44;
    case 787u: goto L_0891FB50;
    case 788u: goto L_0891FB58;
    case 789u: goto L_0891FB64;
    case 790u: goto L_0891FB6C;
    case 791u: goto L_0891FB78;
    case 792u: goto L_0891FB90;
    case 793u: goto L_0891FBB8;
    case 794u: goto L_0891FC0C;
    case 795u: goto L_0891FC24;
    case 796u: goto L_0891FC2C;
    case 797u: goto L_0891FC34;
    case 798u: goto L_0891FCC4;
    case 799u: goto L_0891FCDC;
    case 800u: goto L_0891FCE4;
    case 801u: goto L_0891FCE8;
    case 802u: goto L_0891FCF4;
    case 803u: goto L_0891FD00;
    case 804u: goto L_0891FD08;
    case 805u: goto L_0891FD18;
    case 806u: goto L_0891FD20;
    case 807u: goto L_0891FD24;
    case 808u: goto L_0891FD2C;
    case 809u: goto L_0891FD3C;
    case 810u: goto L_0891FD44;
    case 811u: goto L_0891FD4C;
    case 812u: goto L_0891FD54;
    case 813u: goto L_0891FD60;
    case 814u: goto L_0891FD7C;
    case 815u: goto L_0891FD8C;
    case 816u: goto L_0891FDC4;
    case 817u: goto L_0891FDEC;
    case 818u: goto L_0891FE0C;
    case 819u: goto L_0891FE1C;
    case 820u: goto L_0891FE40;
    case 821u: goto L_0891FE4C;
    case 822u: goto L_0891FE54;
    case 823u: goto L_0891FE70;
    case 824u: goto L_0891FE80;
    case 825u: goto L_0891FE8C;
    case 826u: goto L_0891FE94;
    case 827u: goto L_0891FEA4;
    case 828u: goto L_0891FEBC;
    case 829u: goto L_0891FEC8;
    case 830u: goto L_0891FEDC;
    case 831u: goto L_0891FEF8;
    case 832u: goto L_0891FF04;
    case 833u: goto L_0891FF14;
    case 834u: goto L_0891FF28;
    case 835u: goto L_0891FF40;
    case 836u: goto L_0891FFB8;
    case 837u: goto L_0891FFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0891C000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_0891C07C;
      }
      goto L_0891C018;
    }
L_0891C018:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (ctx.gpr[20] << (ctx.gpr[4] & 31u));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0891C070;
      }
      goto L_0891C030;
    }
L_0891C030:
    ctx.gpr[17] = (ctx.gpr[18] << 4u);
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_0891C03C;
L_0891C03C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0891C04Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 874u, 0x0891BFA0u>(ctx, &aot_mem) && ctx.pc == 0x0891C04Cu) goto L_0891C04C;
    return;
L_0891C04C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C05C;
      }
      goto L_0891C054;
    }
L_0891C054:
    ctx.gpr[31] = (0x0891C05Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 798u, 0x0891BA24u>(ctx, &aot_mem) && ctx.pc == 0x0891C05Cu) goto L_0891C05C;
    return;
L_0891C05C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_0891C03C;
      }
      goto L_0891C070;
    }
L_0891C070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C018;
      }
      goto L_0891C07C;
    }
L_0891C07C:
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
L_0891C0A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0891C170;
      }
      goto L_0891C0C8;
    }
L_0891C0C8:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0891C110;
      }
      goto L_0891C0DC;
    }
L_0891C0DC:
    ctx.gpr[21] = (ctx.gpr[17] << 3u);
    goto L_0891C0E0;
L_0891C0E0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[31] = (0x0891C0F0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 874u, 0x0891BFA0u>(ctx, &aot_mem) && ctx.pc == 0x0891C0F0u) goto L_0891C0F0;
    return;
L_0891C0F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C0FC;
      }
      goto L_0891C0F8;
    }
L_0891C0F8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    goto L_0891C0FC;
L_0891C0FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0891C0E0;
      }
      goto L_0891C110;
    }
L_0891C110:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(7)));
    ctx.gpr[4] = (ctx.gpr[16] << (ctx.gpr[4] & 31u));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0891C164;
      }
      goto L_0891C124;
    }
L_0891C124:
    ctx.gpr[21] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    goto L_0891C130;
L_0891C130:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[21]);
    ctx.gpr[31] = (0x0891C140u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 874u, 0x0891BFA0u>(ctx, &aot_mem) && ctx.pc == 0x0891C140u) goto L_0891C140;
    return;
L_0891C140:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C150;
      }
      goto L_0891C148;
    }
L_0891C148:
    ctx.gpr[31] = (0x0891C150u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 798u, 0x0891BA24u>(ctx, &aot_mem) && ctx.pc == 0x0891C150u) goto L_0891C150;
    return;
L_0891C150:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_0891C130;
      }
      goto L_0891C164;
    }
L_0891C164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C0C8;
      }
      goto L_0891C170;
    }
L_0891C170:
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
L_0891C194:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0891C290;
      }
      goto L_0891C1B8;
    }
L_0891C1B8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19280)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C1D0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0891C1E0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 151u, 0x08878CB0u>(ctx, &aot_mem) && ctx.pc == 0x0891C1E0u) goto L_0891C1E0;
    return;
L_0891C1E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C290;
      }
      goto L_0891C1E8;
    }
L_0891C1E8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0891C1F8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 159u, 0x08878D84u>(ctx, &aot_mem) && ctx.pc == 0x0891C1F8u) goto L_0891C1F8;
    return;
L_0891C1F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C290;
      }
      goto L_0891C200;
    }
L_0891C200:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[31] = (0x0891C218u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C218u) goto L_0891C218;
    return;
L_0891C218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C290;
      }
      goto L_0891C220;
    }
L_0891C220:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0891C230u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 695u, 0x08927FC0u>(ctx, &aot_mem) && ctx.pc == 0x0891C230u) goto L_0891C230;
    return;
L_0891C230:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C290;
      }
      goto L_0891C238;
    }
L_0891C238:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0891C248u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 111u, 0x089FD1DCu>(ctx, &aot_mem) && ctx.pc == 0x0891C248u) goto L_0891C248;
    return;
L_0891C248:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C290;
      }
      goto L_0891C250;
    }
L_0891C250:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x0891C26Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C26Cu) goto L_0891C26C;
    return;
L_0891C26C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C290;
      }
      goto L_0891C274;
    }
L_0891C274:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0891C290u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C290u) goto L_0891C290;
    return;
L_0891C290:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C29C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0891C314;
      }
      goto L_0891C2CC;
    }
L_0891C2CC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C2F0;
      }
      goto L_0891C2DC;
    }
L_0891C2DC:
    ctx.gpr[5] = (ctx.gpr[5] & 254u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0891C30C;
      }
      goto L_0891C2F0;
    }
L_0891C2F0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x0891C308u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0891C194;
L_0891C308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_0891C30C;
L_0891C30C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C2CC;
      }
      goto L_0891C314;
    }
L_0891C314:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_0891C334:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0891C3A8;
      }
      goto L_0891C36C;
    }
L_0891C36C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0891C380u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0891C29C;
L_0891C380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891C36C;
      }
      goto L_0891C3A8;
    }
L_0891C3A8:
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
L_0891C3C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891C42C;
      }
      goto L_0891C408;
    }
L_0891C408:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C42C;
      }
      goto L_0891C410;
    }
L_0891C410:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[31] = (0x0891C428u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 536u, 0x08916F38u>(ctx, &aot_mem) && ctx.pc == 0x0891C428u) goto L_0891C428;
    return;
L_0891C428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_0891C42C;
L_0891C42C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(65) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C468;
      }
      goto L_0891C43C;
    }
L_0891C43C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] >> 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891C454u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 322u, 0x0894DE0Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C454u) goto L_0891C454;
    return;
L_0891C454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    goto L_0891C468;
L_0891C468:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
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
L_0891C490:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0891C4D0;
      }
      goto L_0891C4BC;
    }
L_0891C4BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0891C4CCu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 3u, 0x08AA8038u>(ctx, &aot_mem) && ctx.pc == 0x0891C4CCu) goto L_0891C4CC;
    return;
L_0891C4CC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0891C4D0;
L_0891C4D0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C528;
      }
      goto L_0891C4D8;
    }
L_0891C4D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    ctx.gpr[31] = (0x0891C528u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 352u, 0x088B9F0Cu>(ctx, &aot_mem) && ctx.pc == 0x0891C528u) goto L_0891C528;
    return;
L_0891C528:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C53C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(49)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 7u);
      if (branch_taken) {
          goto L_0891C5DC;
      }
      goto L_0891C578;
    }
L_0891C578:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_0891C57C;
L_0891C57C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 254u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(5)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 253u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0891C5CCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_0891C490;
L_0891C5CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891C57C;
      }
      goto L_0891C5DC;
    }
L_0891C5DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
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
L_0891C604:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891C624;
      }
      goto L_0891C620;
    }
L_0891C620:
    ctx.gpr[16] = (0u | 256u);
    goto L_0891C624;
L_0891C624:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0891C638u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0891C29C;
L_0891C638:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891C644u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0891C334;
L_0891C644:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x0891C658u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0891C29C;
L_0891C658:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C66C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0891C6BC;
      }
      goto L_0891C69C;
    }
L_0891C69C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5)));
    ctx.gpr[6] = (ctx.gpr[6] & 17u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C6BC;
      }
      goto L_0891C6B0;
    }
L_0891C6B0:
    ctx.gpr[31] = (0x0891C6B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 768u, 0x0891B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0891C6B8u) goto L_0891C6B8;
    return;
L_0891C6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0891C6BC;
L_0891C6BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C6E8;
      }
      goto L_0891C6CC;
    }
L_0891C6CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891C6E8;
      }
      goto L_0891C6E0;
    }
L_0891C6E0:
    ctx.gpr[31] = (0x0891C6E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 768u, 0x0891B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0891C6E8u) goto L_0891C6E8;
    return;
L_0891C6E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x0891C6F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 844u, 0x0891BDBCu>(ctx, &aot_mem) && ctx.pc == 0x0891C6F4u) goto L_0891C6F4;
    return;
L_0891C6F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891C718;
      }
      goto L_0891C700;
    }
L_0891C700:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    ctx.gpr[4] = (ctx.gpr[4] & 17u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0891C718;
      }
      goto L_0891C710;
    }
L_0891C710:
    ctx.gpr[31] = (0x0891C718u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 768u, 0x0891B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0891C718u) goto L_0891C718;
    return;
L_0891C718:
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
L_0891C730:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891C770u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0891C66C;
L_0891C770:
    ctx.gpr[31] = (0x0891C778u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 860u, 0x0891BED8u>(ctx, &aot_mem) && ctx.pc == 0x0891C778u) goto L_0891C778;
    return;
L_0891C778:
    ctx.gpr[31] = (0x0891C780u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0891C0A0;
L_0891C780:
    ctx.gpr[31] = (0x0891C788u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0891C0A0;
L_0891C788:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[31] = (0x0891C79Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 785u, 0x0891B904u>(ctx, &aot_mem) && ctx.pc == 0x0891C79Cu) goto L_0891C79C;
    return;
L_0891C79C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0891C7A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 781u, 0x0891B8ACu>(ctx, &aot_mem) && ctx.pc == 0x0891C7A8u) goto L_0891C7A8;
    return;
L_0891C7A8:
    ctx.gpr[31] = (0x0891C7B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 860u, 0x0891BED8u>(ctx, &aot_mem) && ctx.pc == 0x0891C7B0u) goto L_0891C7B0;
    return;
L_0891C7B0:
    ctx.gpr[31] = (0x0891C7B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 880u, 0x0891BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0891C7B8u) goto L_0891C7B8;
    return;
L_0891C7B8:
    ctx.gpr[31] = (0x0891C7C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 880u, 0x0891BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0891C7C0u) goto L_0891C7C0;
    return;
L_0891C7C0:
    ctx.gpr[31] = (0x0891C7C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0891C0A0;
L_0891C7C8:
    ctx.gpr[31] = (0x0891C7D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 880u, 0x0891BFF0u>(ctx, &aot_mem) && ctx.pc == 0x0891C7D0u) goto L_0891C7D0;
    return;
L_0891C7D0:
    ctx.gpr[31] = (0x0891C7D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_0891C0A0;
L_0891C7D8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C7F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891C80Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0891C730;
L_0891C80C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891C81Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_0891C604;
L_0891C81C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891C828u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0891C3C4;
L_0891C828:
    ctx.gpr[31] = (0x0891C830u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891C53C;
L_0891C830:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C844:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891C864:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 17u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0891C8BC;
      }
      goto L_0891C8AC;
    }
L_0891C8AC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0891C8B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 768u, 0x0891B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0891C8B8u) goto L_0891C8B8;
    return;
L_0891C8B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_0891C8BC;
L_0891C8BC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0891C8E0;
      }
      goto L_0891C8CC;
    }
L_0891C8CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x0891C8DCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 3u, 0x08AA8038u>(ctx, &aot_mem) && ctx.pc == 0x0891C8DCu) goto L_0891C8DC;
    return;
L_0891C8DC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_0891C8E0;
L_0891C8E0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C988;
      }
      goto L_0891C8E8;
    }
L_0891C8E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891C988;
      }
      goto L_0891C8F8;
    }
L_0891C8F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 107u);
    ctx.gpr[31] = (0x0891C908u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 398u, 0x08AED634u>(ctx, &aot_mem) && ctx.pc == 0x0891C908u) goto L_0891C908;
    return;
L_0891C908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0891C91Cu);
    ctx.gpr[5] = (0u | 118u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 398u, 0x08AED634u>(ctx, &aot_mem) && ctx.pc == 0x0891C91Cu) goto L_0891C91C;
    return;
L_0891C91C:
    ctx.gpr[19] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C988;
      }
      goto L_0891C92C;
    }
L_0891C92C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-7));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[18] << 1u);
    ctx.gpr[6] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891C96C;
      }
      goto L_0891C95C;
    }
L_0891C95C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891C96C;
      }
      goto L_0891C964;
    }
L_0891C964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_0891C97C;
      }
      goto L_0891C96C;
    }
L_0891C96C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0891C97C;
      }
      goto L_0891C974;
    }
L_0891C974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891C97C;
      }
      goto L_0891C97C;
    }
L_0891C97C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_0891C988;
L_0891C988:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C9EC;
      }
      goto L_0891C990;
    }
L_0891C990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_0891C9EC;
      }
      goto L_0891C9A0;
    }
L_0891C9A0:
    ctx.gpr[20] = (ctx.gpr[21] << 3u);
    goto L_0891C9A4;
L_0891C9A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891C9D8;
      }
      goto L_0891C9BC;
    }
L_0891C9BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891C9D8;
      }
      goto L_0891C9D0;
    }
L_0891C9D0:
    ctx.gpr[31] = (0x0891C9D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 768u, 0x0891B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0891C9D8u) goto L_0891C9D8;
    return;
L_0891C9D8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0891C9A4;
      }
      goto L_0891C9EC;
    }
L_0891C9EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(7)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] << (ctx.gpr[4] & 31u));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_0891CAA0;
      }
      goto L_0891CA04;
    }
L_0891CA04:
    ctx.gpr[22] = (ctx.gpr[21] << 4u);
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
    goto L_0891CA10;
L_0891CA10:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA8C;
      }
      goto L_0891CA24;
    }
L_0891CA24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA58;
      }
      goto L_0891CA34;
    }
L_0891CA34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    ctx.gpr[5] = (ctx.gpr[5] & 17u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA58;
      }
      goto L_0891CA48;
    }
L_0891CA48:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0891CA58;
      }
      goto L_0891CA50;
    }
L_0891CA50:
    ctx.gpr[31] = (0x0891CA58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 768u, 0x0891B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0891CA58u) goto L_0891CA58;
    return;
L_0891CA58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA8C;
      }
      goto L_0891CA68;
    }
L_0891CA68:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(5)));
    ctx.gpr[4] = (ctx.gpr[4] & 17u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891CA8C;
      }
      goto L_0891CA7C;
    }
L_0891CA7C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0891CA8C;
      }
      goto L_0891CA84;
    }
L_0891CA84:
    ctx.gpr[31] = (0x0891CA8Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 768u, 0x0891B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0891CA8Cu) goto L_0891CA8C;
    return;
L_0891CA8C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-20));
      if (branch_taken) {
          goto L_0891CA10;
      }
      goto L_0891CAA0;
    }
L_0891CAA0:
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
L_0891CACC:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[19];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[18];
    ctx.fpr[16] = std::sqrt(ctx.fpr[16]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[6] = (16230u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] | 26214u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[18]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
        goto L_0891CB64;
    }
    goto L_0891CB1C;
L_0891CB1C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0891CB5C;
    }
    goto L_0891CB5C;
L_0891CB5C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[16] + ctx.fpr[12];
      if (branch_taken) {
          goto L_0891CB8C;
      }
      goto L_0891CB64;
    }
L_0891CB64:
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[17] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    goto L_0891CB8C;
L_0891CB8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CB94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[10] | 0u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0891CBF0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_0891CACC;
L_0891CBF0:
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[7] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 3670u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
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
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[18] - ctx.fpr[19];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = ctx.fpr[0] - ctx.fpr[2];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[6] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[6] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[6] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[6]) ^ 0x80000000u);
        goto L_0891CC8C;
    }
    goto L_0891CC8C;
L_0891CC8C:
    ctx.fpr[8] = ctx.fpr[19] - ctx.fpr[18];
    ctx.fpr[9] = ctx.fpr[2] - ctx.fpr[0];
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[7] + ctx.fpr[4];
    ctx.set_fpu_condition((ctx.fpr[7] < ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[7] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[7]) ^ 0x80000000u);
        goto L_0891CCB0;
    }
    goto L_0891CCB0;
L_0891CCB0:
    ctx.set_fpu_condition((ctx.fpr[6] <= ctx.fpr[7]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[4] = ctx.fpr[6] + ctx.fpr[7];
      if (branch_taken) {
          goto L_0891CD54;
      }
      goto L_0891CCC0;
    }
L_0891CCC0:
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[4] - ctx.fpr[5];
    ctx.fpr[6] = ctx.fpr[6] / ctx.fpr[4];
    ctx.set_fpu_condition((ctx.fpr[6] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891CD00;
      }
      goto L_0891CCDC;
    }
L_0891CCDC:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[17] = ctx.fpr[3] - ctx.fpr[16];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[6] + ctx.fpr[4];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[5] = ctx.fpr[7] + ctx.fpr[5];
      if (branch_taken) {
          goto L_0891CDDC;
      }
      goto L_0891CD00;
    }
L_0891CD00:
    ctx.fpr[6] = ctx.fpr[20] - ctx.fpr[6];
    ctx.fpr[4] = ctx.fpr[4] / ctx.fpr[5];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
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
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    ctx.fpr[17] = ctx.fpr[3] - ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[5];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[6];
      if (branch_taken) {
          goto L_0891CDDC;
      }
      goto L_0891CD54;
    }
L_0891CD54:
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[5] / ctx.fpr[4];
    ctx.set_fpu_condition((ctx.fpr[7] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891CD90;
      }
      goto L_0891CD6C;
    }
L_0891CD6C:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[17] = ctx.fpr[16] - ctx.fpr[16];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[6] + ctx.fpr[4];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[5] = ctx.fpr[7] + ctx.fpr[5];
      if (branch_taken) {
          goto L_0891CDDC;
      }
      goto L_0891CD90;
    }
L_0891CD90:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] / ctx.fpr[5];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
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
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    ctx.fpr[17] = ctx.fpr[3] - ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[5];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[6];
    goto L_0891CDDC;
L_0891CDDC:
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (14979u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[6] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[6])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[7] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[19] + ctx.fpr[12];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[2] + ctx.fpr[13];
    ctx.fpr[19] = ctx.fpr[4] / ctx.fpr[6];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[2] = ctx.fpr[5] / ctx.fpr[6];
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[18] - ctx.fpr[14];
    ctx.fpr[15] = ctx.fpr[0] - ctx.fpr[15];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CE7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891CE90u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 115u, 0x08AB8720u>(ctx, &aot_mem) && ctx.pc == 0x0891CE90u) goto L_0891CE90;
    return;
L_0891CE90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18852));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CEB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891CEF8;
      }
      goto L_0891CECC;
    }
L_0891CECC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18852));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891CEE4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 117u, 0x08AB8774u>(ctx, &aot_mem) && ctx.pc == 0x0891CEE4u) goto L_0891CEE4;
    return;
L_0891CEE4:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891CEF8;
      }
      goto L_0891CEF0;
    }
L_0891CEF0:
    ctx.gpr[31] = (0x0891CEF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0891CF0C;
L_0891CEF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CF0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891CF24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15032)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 275u, 0x08B01188u>(ctx, &aot_mem) && ctx.pc == 0x0891CF24u) goto L_0891CF24;
    return;
L_0891CF24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CF30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27620)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 14571u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27616)));
    ctx.gpr[7] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(27624), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27632), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(27628), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(11744));
    ctx.gpr[6] = (2227u << 16u);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[11] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(27636), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891CFC0u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27640), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0891CE7C;
L_0891CFC0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x0891CFCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27644));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x0891CFCCu) goto L_0891CFCC;
    return;
L_0891CFCC:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11840));
    ctx.gpr[31] = (0x0891CFE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19312));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AEF4u>(ctx, &aot_mem) && ctx.pc == 0x0891CFE8u) goto L_0891CFE8;
    return;
L_0891CFE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891CFF8:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    { const float vfpu_constant = std::bit_cast<float>(0x3EA2F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vrot(4u, 0u, 4u, 11u);
    ctx.execute_vfpu_vscl_ct<4u, 8u, 68u, 3u>();
    jump_target = ctx.gpr[31];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<4u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D024:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    ctx.vfpu_ctrl[0u] = 0x000C001Bu;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 4u>(vfpu_d); }
    ctx.vfpu_ctrl[0u] = 0x0009004Eu;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 4u>(vfpu_d); }
    ctx.vfpu_ctrl[0u] = 0x000A00B1u;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<6u, 4u>(vfpu_d); }
    ctx.vfpu_ctrl[0u] = 0x0004001Bu;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 4u>(vfpu_d); }
    ctx.vfpu_ctrl[0u] = 0x0001004Eu;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<9u, 4u>(vfpu_d); }
    ctx.vfpu_ctrl[0u] = 0x000200B1u;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<10u, 4u>(vfpu_d); }
    ctx.vfpu_ctrl[0u] = 0x000700E4u;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<7u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<11u, 4u>(vfpu_d); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 4u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 40u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 32u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D080:
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
L_0891D0AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(417)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D0BC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(417)));
        goto L_0891D0D8;
    }
    goto L_0891D0CC;
L_0891D0CC:
    ctx.gpr[4] = (16968u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891D0EC;
      }
      goto L_0891D0D8;
    }
L_0891D0D8:
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[13];
    goto L_0891D0EC;
L_0891D0EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D0F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891D108u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891D108u) goto L_0891D108;
    return;
L_0891D108:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D164;
      }
      goto L_0891D118;
    }
L_0891D118:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D18C;
      }
      goto L_0891D128;
    }
L_0891D128:
    ctx.gpr[31] = (0x0891D130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891D130u) goto L_0891D130;
    return;
L_0891D130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D164;
      }
      goto L_0891D13C;
    }
L_0891D13C:
    ctx.gpr[31] = (0x0891D144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891D144u) goto L_0891D144;
    return;
L_0891D144:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D164;
      }
      goto L_0891D154;
    }
L_0891D154:
    ctx.gpr[31] = (0x0891D15Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 409u, 0x08ACA85Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D15Cu) goto L_0891D15C;
    return;
L_0891D15C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D18C;
      }
      goto L_0891D164;
    }
L_0891D164:
    ctx.gpr[31] = (0x0891D16Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x0891D16Cu) goto L_0891D16C;
    return;
L_0891D16C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0891D180u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 409u, 0x08ACA85Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D180u) goto L_0891D180;
    return;
L_0891D180:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D18C;
      }
      goto L_0891D188;
    }
L_0891D188:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    goto L_0891D18C;
L_0891D18C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D19C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(384), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D1AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(398))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 8u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[19];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891D1E8;
      }
      goto L_0891D1D8;
    }
L_0891D1D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[18] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0891D264;
      }
      goto L_0891D1E8;
    }
L_0891D1E8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
        goto L_0891D210;
    }
    goto L_0891D210;
L_0891D210:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891D250;
      }
      goto L_0891D220;
    }
L_0891D220:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(436)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
        goto L_0891D240;
    }
    goto L_0891D240;
L_0891D240:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891D25C;
      }
      goto L_0891D250;
    }
L_0891D250:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0891D25C;
L_0891D25C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0891D2C8;
      }
      goto L_0891D264;
    }
L_0891D264:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891D2B0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 222u, 0x089ED770u>(ctx, &aot_mem) && ctx.pc == 0x0891D2B0u) goto L_0891D2B0;
    return;
L_0891D2B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D2C0;
      }
      goto L_0891D2B8;
    }
L_0891D2B8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0891D2C4;
      }
      goto L_0891D2C0;
    }
L_0891D2C0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_0891D2C4;
L_0891D2C4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    goto L_0891D2C8;
L_0891D2C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D30C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891D328u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0891D1AC;
L_0891D328:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    ctx.gpr[5] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D37C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(602))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D3BC;
      }
      goto L_0891D39C;
    }
L_0891D39C:
    ctx.gpr[5] = (ctx.gpr[4] | 1u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 158 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 148 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891D3C4;
      }
      goto L_0891D3B4;
    }
L_0891D3B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 164 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891D3F8;
      }
      goto L_0891D3BC;
    }
L_0891D3BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D514;
      }
      goto L_0891D3C4;
    }
L_0891D3C4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 149 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891D3E0;
      }
      goto L_0891D3CC;
    }
L_0891D3CC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-954));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891D49C;
      }
      goto L_0891D3D8;
    }
L_0891D3D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D514;
      }
      goto L_0891D3E0;
    }
L_0891D3E0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 157 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891D468;
      }
      goto L_0891D3E8;
    }
L_0891D3E8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D514;
      }
      goto L_0891D3F0;
    }
L_0891D3F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D434;
      }
      goto L_0891D3F8;
    }
L_0891D3F8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 196u);
      if (branch_taken) {
          goto L_0891D41C;
      }
      goto L_0891D400;
    }
L_0891D400:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 159 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 162 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891D468;
      }
      goto L_0891D40C;
    }
L_0891D40C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D514;
      }
      goto L_0891D414;
    }
L_0891D414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D434;
      }
      goto L_0891D41C;
    }
L_0891D41C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891D514;
      }
      goto L_0891D424;
    }
L_0891D424:
    ctx.gpr[31] = (0x0891D42Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 755u, 0x0889F9A4u>(ctx, &aot_mem) && ctx.pc == 0x0891D42Cu) goto L_0891D42C;
    return;
L_0891D42C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D514;
      }
      goto L_0891D434;
    }
L_0891D434:
    ctx.gpr[31] = (0x0891D43Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 755u, 0x0889F9A4u>(ctx, &aot_mem) && ctx.pc == 0x0891D43Cu) goto L_0891D43C;
    return;
L_0891D43C:
    ctx.gpr[31] = (0x0891D444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891D444u) goto L_0891D444;
    return;
L_0891D444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D460;
      }
      goto L_0891D454;
    }
L_0891D454:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891D460u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 229u, 0x088A15FCu>(ctx, &aot_mem) && ctx.pc == 0x0891D460u) goto L_0891D460;
    return;
L_0891D460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D514;
      }
      goto L_0891D468;
    }
L_0891D468:
    ctx.gpr[31] = (0x0891D470u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 755u, 0x0889F9A4u>(ctx, &aot_mem) && ctx.pc == 0x0891D470u) goto L_0891D470;
    return;
L_0891D470:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891D47Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 229u, 0x088A15FCu>(ctx, &aot_mem) && ctx.pc == 0x0891D47Cu) goto L_0891D47C;
    return;
L_0891D47C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891D488u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 229u, 0x088A15FCu>(ctx, &aot_mem) && ctx.pc == 0x0891D488u) goto L_0891D488;
    return;
L_0891D488:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891D494u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 229u, 0x088A15FCu>(ctx, &aot_mem) && ctx.pc == 0x0891D494u) goto L_0891D494;
    return;
L_0891D494:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D514;
      }
      goto L_0891D49C;
    }
L_0891D49C:
    ctx.gpr[31] = (0x0891D4A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 755u, 0x0889F9A4u>(ctx, &aot_mem) && ctx.pc == 0x0891D4A4u) goto L_0891D4A4;
    return;
L_0891D4A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 8192u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(412), ctx.gpr[5]);
    ctx.gpr[31] = (0x0891D4BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 229u, 0x088A15FCu>(ctx, &aot_mem) && ctx.pc == 0x0891D4BCu) goto L_0891D4BC;
    return;
L_0891D4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26148)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(26148), ctx.gpr[6]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17128)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[5] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_0891D4F8;
      }
      goto L_0891D4EC;
    }
L_0891D4EC:
    ctx.gpr[16] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_0891D4FC;
      }
      goto L_0891D4F8;
    }
L_0891D4F8:
    ctx.gpr[16] = (ctx.gpr[16] & 3u);
    goto L_0891D4FC;
L_0891D4FC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17128), ctx.gpr[16]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17124), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891D514;
      }
      goto L_0891D514;
    }
L_0891D514:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D524:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891D538u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 755u, 0x0889F9A4u>(ctx, &aot_mem) && ctx.pc == 0x0891D538u) goto L_0891D538;
    return;
L_0891D538:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891D544u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 229u, 0x088A15FCu>(ctx, &aot_mem) && ctx.pc == 0x0891D544u) goto L_0891D544;
    return;
L_0891D544:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D554:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891D568u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 755u, 0x0889F9A4u>(ctx, &aot_mem) && ctx.pc == 0x0891D568u) goto L_0891D568;
    return;
L_0891D568:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891D574u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 229u, 0x088A15FCu>(ctx, &aot_mem) && ctx.pc == 0x0891D574u) goto L_0891D574;
    return;
L_0891D574:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D584:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D60C;
      }
      goto L_0891D5B8;
    }
L_0891D5B8:
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x0891D5C4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x0891D5C4u) goto L_0891D5C4;
    return;
L_0891D5C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-138));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D60C;
      }
      goto L_0891D5D8;
    }
L_0891D5D8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19368)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D5F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x0891D5FCu);
    ctx.gpr[5] = (0u | 141u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D5FCu) goto L_0891D5FC;
    return;
L_0891D5FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D60C;
      }
      goto L_0891D604;
    }
L_0891D604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D60C;
      }
      goto L_0891D60C;
    }
L_0891D60C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 100u);
      if (branch_taken) {
          goto L_0891D6B8;
      }
      goto L_0891D620;
    }
L_0891D620:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27692)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27688)));
    ctx.gpr[22] = (2230u << 16u);
    goto L_0891D634;
L_0891D634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D6A4;
      }
      goto L_0891D640;
    }
L_0891D640:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1772), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (0x0891D65Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x0891D65Cu) goto L_0891D65C;
    return;
L_0891D65C:
    ctx.gpr[31] = (0x0891D664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0891D664u) goto L_0891D664;
    return;
L_0891D664:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0891D678u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0891D678u) goto L_0891D678;
    return;
L_0891D678:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_0891D6A4;
L_0891D6A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891D634;
      }
      goto L_0891D6B8;
    }
L_0891D6B8:
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
L_0891D6E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D778;
      }
      goto L_0891D714;
    }
L_0891D714:
    ctx.gpr[31] = (0x0891D71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0891D71Cu) goto L_0891D71C;
    return;
L_0891D71C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891D778;
      }
      goto L_0891D724;
    }
L_0891D724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x0891D730u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x0891D730u) goto L_0891D730;
    return;
L_0891D730:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-138));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D778;
      }
      goto L_0891D744;
    }
L_0891D744:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19472)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D75C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x0891D768u);
    ctx.gpr[5] = (0u | 141u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x0891D768u) goto L_0891D768;
    return;
L_0891D768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D778;
      }
      goto L_0891D770;
    }
L_0891D770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D778;
      }
      goto L_0891D778;
    }
L_0891D778:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 100u);
      if (branch_taken) {
          goto L_0891D820;
      }
      goto L_0891D78C;
    }
L_0891D78C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27692)));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27688)));
    ctx.gpr[22] = (2230u << 16u);
    goto L_0891D7A0;
L_0891D7A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D80C;
      }
      goto L_0891D7AC;
    }
L_0891D7AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1772), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (0x0891D7C4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x0891D7C4u) goto L_0891D7C4;
    return;
L_0891D7C4:
    ctx.gpr[31] = (0x0891D7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0891D7CCu) goto L_0891D7CC;
    return;
L_0891D7CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0891D7E0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x0891D7E0u) goto L_0891D7E0;
    return;
L_0891D7E0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_0891D80C;
L_0891D80C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891D7A0;
      }
      goto L_0891D820;
    }
L_0891D820:
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
L_0891D848:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(484), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0891D868u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(484));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0891D868u) goto L_0891D868;
    return;
L_0891D868:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_0891D890;
    }
    goto L_0891D890;
L_0891D890:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D8A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D98C;
      }
      goto L_0891D8E8;
    }
L_0891D8E8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19576)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D900:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0891D990;
      }
      goto L_0891D908;
    }
L_0891D908:
    ctx.gpr[31] = (0x0891D910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0891D910u) goto L_0891D910;
    return;
L_0891D910:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D92C;
      }
      goto L_0891D924;
    }
L_0891D924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0891D990;
      }
      goto L_0891D92C;
    }
L_0891D92C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0891D990;
      }
      goto L_0891D934;
    }
L_0891D934:
    ctx.gpr[31] = (0x0891D93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0891D93Cu) goto L_0891D93C;
    return;
L_0891D93C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D958;
      }
      goto L_0891D950;
    }
L_0891D950:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0891D990;
      }
      goto L_0891D958;
    }
L_0891D958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0891D990;
      }
      goto L_0891D960;
    }
L_0891D960:
    ctx.gpr[31] = (0x0891D968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0891D968u) goto L_0891D968;
    return;
L_0891D968:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891D984;
      }
      goto L_0891D97C;
    }
L_0891D97C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0891D990;
      }
      goto L_0891D984;
    }
L_0891D984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0891D990;
      }
      goto L_0891D98C;
    }
L_0891D98C:
    ctx.gpr[2] = (0u | 4u);
    goto L_0891D990;
L_0891D990:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891D99C:
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
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DA04;
      }
      goto L_0891D9DC;
    }
L_0891D9DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0891DA0C;
      }
      goto L_0891D9E4;
    }
L_0891D9E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0891DA0C;
      }
      goto L_0891D9EC;
    }
L_0891D9EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0891DA0C;
      }
      goto L_0891D9F4;
    }
L_0891D9F4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0891DA0C;
      }
      goto L_0891D9FC;
    }
L_0891D9FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0891DA0C;
      }
      goto L_0891DA04;
    }
L_0891DA04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0891DA10;
      }
      goto L_0891DA0C;
    }
L_0891DA0C:
    ctx.gpr[2] = (0u | 21u);
    goto L_0891DA10;
L_0891DA10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DA18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2096)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DB74;
      }
      goto L_0891DA64;
    }
L_0891DA64:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19608)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DA7C:
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.gpr[31] = (0x0891DA90u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x0891DA90u) goto L_0891DA90;
    return;
L_0891DA90:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891DB78;
      }
      goto L_0891DAA8;
    }
L_0891DAA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 25u);
      if (branch_taken) {
          goto L_0891DB78;
      }
      goto L_0891DAB0;
    }
L_0891DAB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 34u);
      if (branch_taken) {
          goto L_0891DB78;
      }
      goto L_0891DAB8;
    }
L_0891DAB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891DB78;
      }
      goto L_0891DAE8;
    }
L_0891DAE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16281u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891DB78;
      }
      goto L_0891DB18;
    }
L_0891DB18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16288u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891DB78;
      }
      goto L_0891DB44;
    }
L_0891DB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16294u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891DB78;
      }
      goto L_0891DB74;
    }
L_0891DB74:
    ctx.gpr[2] = (0u | 0u);
    goto L_0891DB78;
L_0891DB78:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DB8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[8] = (ctx.gpr[6] << 7u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[31]);
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
        goto L_0891DCD4;
    }
    goto L_0891DBE0;
L_0891DBE0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0891DBECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891DBECu) goto L_0891DBEC;
    return;
L_0891DBEC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0891DC20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891DC20u) goto L_0891DC20;
    return;
L_0891DC20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DC7C;
      }
      goto L_0891DC28;
    }
L_0891DC28:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DC4C;
      }
      goto L_0891DC40;
    }
L_0891DC40:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DCCC;
      }
      goto L_0891DC4C;
    }
L_0891DC4C:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DC70;
      }
      goto L_0891DC64;
    }
L_0891DC64:
    ctx.gpr[4] = (0u | 22u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DCCC;
      }
      goto L_0891DC70;
    }
L_0891DC70:
    ctx.gpr[4] = (0u | 25u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DCCC;
      }
      goto L_0891DC7C;
    }
L_0891DC7C:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DCA0;
      }
      goto L_0891DC94;
    }
L_0891DC94:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DCCC;
      }
      goto L_0891DCA0;
    }
L_0891DCA0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DCC4;
      }
      goto L_0891DCB8;
    }
L_0891DCB8:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DCCC;
      }
      goto L_0891DCC4;
    }
L_0891DCC4:
    ctx.gpr[4] = (0u | 25u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891DCCC;
L_0891DCCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DDEC;
      }
      goto L_0891DCD4;
    }
L_0891DCD4:
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891DDEC;
      }
      goto L_0891DD00;
    }
L_0891DD00:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x0891DD0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891DD0Cu) goto L_0891DD0C;
    return;
L_0891DD0C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0891DD40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891DD40u) goto L_0891DD40;
    return;
L_0891DD40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DD9C;
      }
      goto L_0891DD48;
    }
L_0891DD48:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DD6C;
      }
      goto L_0891DD60;
    }
L_0891DD60:
    ctx.gpr[4] = (0u | 27u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DDEC;
      }
      goto L_0891DD6C;
    }
L_0891DD6C:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DD90;
      }
      goto L_0891DD84;
    }
L_0891DD84:
    ctx.gpr[4] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DDEC;
      }
      goto L_0891DD90;
    }
L_0891DD90:
    ctx.gpr[4] = (0u | 34u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DDEC;
      }
      goto L_0891DD9C;
    }
L_0891DD9C:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DDC0;
      }
      goto L_0891DDB4;
    }
L_0891DDB4:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DDEC;
      }
      goto L_0891DDC0;
    }
L_0891DDC0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DDE4;
      }
      goto L_0891DDD8;
    }
L_0891DDD8:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891DDEC;
      }
      goto L_0891DDE4;
    }
L_0891DDE4:
    ctx.gpr[4] = (0u | 34u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891DDEC;
L_0891DDEC:
    ctx.gpr[31] = (0x0891DDF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891DDF4u) goto L_0891DDF4;
    return;
L_0891DDF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891DEA0;
      }
      goto L_0891DDFC;
    }
L_0891DDFC:
    ctx.gpr[31] = (0x0891DE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891DE04u) goto L_0891DE04;
    return;
L_0891DE04:
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
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DEA0;
      }
      goto L_0891DE38;
    }
L_0891DE38:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x0891DE44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891DE44u) goto L_0891DE44;
    return;
L_0891DE44:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891DEA0;
      }
      goto L_0891DE88;
    }
L_0891DE88:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
        goto L_0891DE9C;
    }
    goto L_0891DE9C;
L_0891DE9C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891DEA0;
L_0891DEA0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DEB8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DF5C;
      }
      goto L_0891DEF4;
    }
L_0891DEF4:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19640)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DF0C:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0891DF5C;
      }
      goto L_0891DF18;
    }
L_0891DF18:
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0891DF5C;
      }
      goto L_0891DF24;
    }
L_0891DF24:
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0891DF5C;
      }
      goto L_0891DF30;
    }
L_0891DF30:
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0891DF5C;
      }
      goto L_0891DF3C;
    }
L_0891DF3C:
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0891DF5C;
      }
      goto L_0891DF48;
    }
L_0891DF48:
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0891DF5C;
      }
      goto L_0891DF54;
    }
L_0891DF54:
    ctx.gpr[5] = (0u | 40u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0891DF5C;
L_0891DF5C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891DF64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-544));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891DFE8;
      }
      goto L_0891DF9C;
    }
L_0891DF9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891DFDC;
      }
      goto L_0891DFAC;
    }
L_0891DFAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891DFDC;
      }
      goto L_0891DFBC;
    }
L_0891DFBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891DFDC;
      }
      goto L_0891DFCC;
    }
L_0891DFCC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891DFE8;
      }
      goto L_0891DFDC;
    }
L_0891DFDC:
    ctx.gpr[31] = (0x0891DFE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891DA18;
L_0891DFE4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0891DFE8;
L_0891DFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F380;
      }
      goto L_0891E000;
    }
L_0891E000:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19672)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F380;
      }
      goto L_0891E020;
    }
L_0891E020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(576)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E054;
      }
      goto L_0891E02C;
    }
L_0891E02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(576)));
    ctx.gpr[31] = (0x0891E038u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 329u, 0x08965584u>(ctx, &aot_mem) && ctx.pc == 0x0891E038u) goto L_0891E038;
    return;
L_0891E038:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E054;
      }
      goto L_0891E040;
    }
L_0891E040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0891E054;
L_0891E054:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[5] = (ctx.gpr[5] & 63u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E0D0;
      }
      goto L_0891E070;
    }
L_0891E070:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (49152u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x0891E0A8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C06D4u>(ctx, &aot_mem) && ctx.pc == 0x0891E0A8u) goto L_0891E0A8;
    return;
L_0891E0A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E0D0;
      }
      goto L_0891E0B0;
    }
L_0891E0B0:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0891E0BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19328));
    goto L_0891D080;
L_0891E0BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0891E0D0;
L_0891E0D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0891F204;
      }
      goto L_0891E0E4;
    }
L_0891E0E4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19728)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891E0FC:
    ctx.gpr[31] = (0x0891E104u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E104u) goto L_0891E104;
    return;
L_0891E104:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x0891E11Cu);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E11Cu) goto L_0891E11C;
    return;
L_0891E11C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[31] = (0x0891E134u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E134u) goto L_0891E134;
    return;
L_0891E134:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x0891E148u);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E148u) goto L_0891E148;
    return;
L_0891E148:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[20] + ctx.fpr[14];
    ctx.fpr[24] = std::sqrt(ctx.fpr[14]);
    ctx.gpr[31] = (0x0891E168u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D0AC;
L_0891E168:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E188;
      }
      goto L_0891E178;
    }
L_0891E178:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1A8;
      }
      goto L_0891E188;
    }
L_0891E188:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0891E198u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 833u, 0x0889FDA4u>(ctx, &aot_mem) && ctx.pc == 0x0891E198u) goto L_0891E198;
    return;
L_0891E198:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1A8;
      }
      goto L_0891E1A0;
    }
L_0891E1A0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891E1A8;
L_0891E1A8:
    ctx.gpr[31] = (0x0891E1B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D0F4;
L_0891E1B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F380;
      }
      goto L_0891E1B8;
    }
L_0891E1B8:
    ctx.gpr[31] = (0x0891E1C0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E1C0u) goto L_0891E1C0;
    return;
L_0891E1C0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x0891E1D8u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E1D8u) goto L_0891E1D8;
    return;
L_0891E1D8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[31] = (0x0891E1F0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E1F0u) goto L_0891E1F0;
    return;
L_0891E1F0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0891E204u);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E204u) goto L_0891E204;
    return;
L_0891E204:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[31] = (0x0891E224u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D0BC;
L_0891E224:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E280;
      }
      goto L_0891E234;
    }
L_0891E234:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E280;
      }
      goto L_0891E244;
    }
L_0891E244:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x0891E250u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E250u) goto L_0891E250;
    return;
L_0891E250:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891E260u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 222u, 0x089ED770u>(ctx, &aot_mem) && ctx.pc == 0x0891E260u) goto L_0891E260;
    return;
L_0891E260:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E278;
      }
      goto L_0891E268;
    }
L_0891E268:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(680), 0u);
    goto L_0891E278;
L_0891E278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E4A8;
      }
      goto L_0891E280;
    }
L_0891E280:
    ctx.gpr[31] = (0x0891E288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891E288u) goto L_0891E288;
    return;
L_0891E288:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E33C;
      }
      goto L_0891E290;
    }
L_0891E290:
    ctx.gpr[31] = (0x0891E298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891E298u) goto L_0891E298;
    return;
L_0891E298:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891E2A4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 261u, 0x08A0E078u>(ctx, &aot_mem) && ctx.pc == 0x0891E2A4u) goto L_0891E2A4;
    return;
L_0891E2A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E33C;
      }
      goto L_0891E2AC;
    }
L_0891E2AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(399))))));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E33C;
      }
      goto L_0891E2BC;
    }
L_0891E2BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(399))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891E33C;
      }
      goto L_0891E2CC;
    }
L_0891E2CC:
    ctx.gpr[31] = (0x0891E2D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891E2D4u) goto L_0891E2D4;
    return;
L_0891E2D4:
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
          goto L_0891E324;
      }
      goto L_0891E308;
    }
L_0891E308:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(800));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891E33C;
      }
      goto L_0891E324;
    }
L_0891E324:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    goto L_0891E33C;
L_0891E33C:
    ctx.gpr[31] = (0x0891E344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891E344u) goto L_0891E344;
    return;
L_0891E344:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E3C0;
      }
      goto L_0891E34C;
    }
L_0891E34C:
    ctx.gpr[31] = (0x0891E354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891E354u) goto L_0891E354;
    return;
L_0891E354:
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
          goto L_0891E3C0;
      }
      goto L_0891E388;
    }
L_0891E388:
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
          goto L_0891E3C4;
      }
      goto L_0891E3C0;
    }
L_0891E3C0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(644), static_cast<std::uint16_t>(0u));
    goto L_0891E3C4;
L_0891E3C4:
    ctx.gpr[31] = (0x0891E3CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891E3CCu) goto L_0891E3CC;
    return;
L_0891E3CC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
        goto L_0891E43C;
    }
    goto L_0891E3D4;
L_0891E3D4:
    ctx.gpr[31] = (0x0891E3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891E3DCu) goto L_0891E3DC;
    return;
L_0891E3DC:
    ctx.gpr[31] = (0x0891E3E4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 824u, 0x0889FD00u>(ctx, &aot_mem) && ctx.pc == 0x0891E3E4u) goto L_0891E3E4;
    return;
L_0891E3E4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
        goto L_0891E43C;
    }
    goto L_0891E3EC;
L_0891E3EC:
    ctx.gpr[31] = (0x0891E3F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891E3F4u) goto L_0891E3F4;
    return;
L_0891E3F4:
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
          goto L_0891E4A8;
      }
      goto L_0891E428;
    }
L_0891E428:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2501 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E4A8;
      }
      goto L_0891E438;
    }
L_0891E438:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    goto L_0891E43C;
L_0891E43C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E4A8;
      }
      goto L_0891E448;
    }
L_0891E448:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16672u << 16u);
      if (branch_taken) {
          goto L_0891E46C;
      }
      goto L_0891E458;
    }
L_0891E458:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E4A8;
      }
      goto L_0891E468;
    }
L_0891E468:
    ctx.gpr[4] = (16672u << 16u);
    goto L_0891E46C;
L_0891E46C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E4A8;
      }
      goto L_0891E480;
    }
L_0891E480:
    ctx.gpr[31] = (0x0891E488u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D584;
L_0891E488:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0891E494u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891E494u) goto L_0891E494;
    return;
L_0891E494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E4A8;
      }
      goto L_0891E4A4;
    }
L_0891E4A4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    goto L_0891E4A8;
L_0891E4A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E4C0;
      }
      goto L_0891E4B8;
    }
L_0891E4B8:
    ctx.gpr[31] = (0x0891E4C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891DB8C;
L_0891E4C0:
    ctx.gpr[31] = (0x0891E4C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D0F4;
L_0891E4C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891E4D0;
    }
L_0891E4D0:
    ctx.gpr[31] = (0x0891E4D8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E4D8u) goto L_0891E4D8;
    return;
L_0891E4D8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x0891E4F0u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E4F0u) goto L_0891E4F0;
    return;
L_0891E4F0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[31] = (0x0891E508u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E508u) goto L_0891E508;
    return;
L_0891E508:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0891E51Cu);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E51Cu) goto L_0891E51C;
    return;
L_0891E51C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[20] + ctx.fpr[14];
    ctx.fpr[24] = std::sqrt(ctx.fpr[14]);
    ctx.gpr[31] = (0x0891E53Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D0AC;
L_0891E53C:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E55C;
      }
      goto L_0891E54C;
    }
L_0891E54C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E57C;
      }
      goto L_0891E55C;
    }
L_0891E55C:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0891E56Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 833u, 0x0889FDA4u>(ctx, &aot_mem) && ctx.pc == 0x0891E56Cu) goto L_0891E56C;
    return;
L_0891E56C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E57C;
      }
      goto L_0891E574;
    }
L_0891E574:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891E57C;
L_0891E57C:
    ctx.gpr[31] = (0x0891E584u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D0F4;
L_0891E584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891E58C;
    }
L_0891E58C:
    ctx.gpr[31] = (0x0891E594u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E594u) goto L_0891E594;
    return;
L_0891E594:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x0891E5ACu);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E5ACu) goto L_0891E5AC;
    return;
L_0891E5AC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[31] = (0x0891E5C4u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E5C4u) goto L_0891E5C4;
    return;
L_0891E5C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0891E5D8u);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E5D8u) goto L_0891E5D8;
    return;
L_0891E5D8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[31] = (0x0891E5F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D0BC;
L_0891E5F8:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E654;
      }
      goto L_0891E608;
    }
L_0891E608:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E654;
      }
      goto L_0891E618;
    }
L_0891E618:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x0891E624u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891E624u) goto L_0891E624;
    return;
L_0891E624:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891E634u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 222u, 0x089ED770u>(ctx, &aot_mem) && ctx.pc == 0x0891E634u) goto L_0891E634;
    return;
L_0891E634:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E64C;
      }
      goto L_0891E63C;
    }
L_0891E63C:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(680), 0u);
    goto L_0891E64C;
L_0891E64C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E7C0;
      }
      goto L_0891E654;
    }
L_0891E654:
    ctx.gpr[31] = (0x0891E65Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891E65Cu) goto L_0891E65C;
    return;
L_0891E65C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E6D8;
      }
      goto L_0891E664;
    }
L_0891E664:
    ctx.gpr[31] = (0x0891E66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891E66Cu) goto L_0891E66C;
    return;
L_0891E66C:
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
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E6D8;
      }
      goto L_0891E6A0;
    }
L_0891E6A0:
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
          goto L_0891E6DC;
      }
      goto L_0891E6D8;
    }
L_0891E6D8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(644), static_cast<std::uint16_t>(0u));
    goto L_0891E6DC;
L_0891E6DC:
    ctx.gpr[31] = (0x0891E6E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891E6E4u) goto L_0891E6E4;
    return;
L_0891E6E4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
        goto L_0891E754;
    }
    goto L_0891E6EC;
L_0891E6EC:
    ctx.gpr[31] = (0x0891E6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891E6F4u) goto L_0891E6F4;
    return;
L_0891E6F4:
    ctx.gpr[31] = (0x0891E6FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 824u, 0x0889FD00u>(ctx, &aot_mem) && ctx.pc == 0x0891E6FCu) goto L_0891E6FC;
    return;
L_0891E6FC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
        goto L_0891E754;
    }
    goto L_0891E704;
L_0891E704:
    ctx.gpr[31] = (0x0891E70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891E70Cu) goto L_0891E70C;
    return;
L_0891E70C:
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
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E7C0;
      }
      goto L_0891E740;
    }
L_0891E740:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2501 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E7C0;
      }
      goto L_0891E750;
    }
L_0891E750:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    goto L_0891E754;
L_0891E754:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E7C0;
      }
      goto L_0891E760;
    }
L_0891E760:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16672u << 16u);
      if (branch_taken) {
          goto L_0891E784;
      }
      goto L_0891E770;
    }
L_0891E770:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E7C0;
      }
      goto L_0891E780;
    }
L_0891E780:
    ctx.gpr[4] = (16672u << 16u);
    goto L_0891E784;
L_0891E784:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E7C0;
      }
      goto L_0891E798;
    }
L_0891E798:
    ctx.gpr[31] = (0x0891E7A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D584;
L_0891E7A0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0891E7ACu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891E7ACu) goto L_0891E7AC;
    return;
L_0891E7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E7C0;
      }
      goto L_0891E7BC;
    }
L_0891E7BC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    goto L_0891E7C0;
L_0891E7C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E7D8;
      }
      goto L_0891E7D0;
    }
L_0891E7D0:
    ctx.gpr[31] = (0x0891E7D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891DB8C;
L_0891E7D8:
    ctx.gpr[31] = (0x0891E7E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D0F4;
L_0891E7E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891E7E8;
    }
L_0891E7E8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(417)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E840;
      }
      goto L_0891E830;
    }
L_0891E830:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E848;
      }
      goto L_0891E840;
    }
L_0891E840:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891E848;
L_0891E848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891E850;
    }
L_0891E850:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(417)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E8A8;
      }
      goto L_0891E898;
    }
L_0891E898:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E8B0;
      }
      goto L_0891E8A8;
    }
L_0891E8A8:
    ctx.gpr[4] = (0u | 13u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891E8B0;
L_0891E8B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891E8B8;
    }
L_0891E8B8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E904;
      }
      goto L_0891E8F4;
    }
L_0891E8F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E924;
      }
      goto L_0891E904;
    }
L_0891E904:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E924;
      }
      goto L_0891E91C;
    }
L_0891E91C:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891E924;
L_0891E924:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(417)));
        goto L_0891E96C;
    }
    goto L_0891E93C;
L_0891E93C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0891E9EC;
      }
      goto L_0891E950;
    }
L_0891E950:
    ctx.gpr[31] = (0x0891E958u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D584;
L_0891E958:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891E9EC;
      }
      goto L_0891E96C;
    }
L_0891E96C:
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891E9EC;
      }
      goto L_0891E990;
    }
L_0891E990:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0891E9EC;
      }
      goto L_0891E9A0;
    }
L_0891E9A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E9EC;
      }
      goto L_0891E9B0;
    }
L_0891E9B0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891E9D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 222u, 0x089ED770u>(ctx, &aot_mem) && ctx.pc == 0x0891E9D0u) goto L_0891E9D0;
    return;
L_0891E9D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E9E4;
      }
      goto L_0891E9D8;
    }
L_0891E9D8:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891E9EC;
      }
      goto L_0891E9E4;
    }
L_0891E9E4:
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891E9EC;
L_0891E9EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891E9F4;
    }
L_0891E9F4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(417)));
        goto L_0891EA68;
    }
    goto L_0891EA38;
L_0891EA38:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0891EAE8;
      }
      goto L_0891EA4C;
    }
L_0891EA4C:
    ctx.gpr[31] = (0x0891EA54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D584;
L_0891EA54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891EAE8;
      }
      goto L_0891EA68;
    }
L_0891EA68:
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891EAE8;
      }
      goto L_0891EA8C;
    }
L_0891EA8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0891EAE8;
      }
      goto L_0891EA9C;
    }
L_0891EA9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EAE8;
      }
      goto L_0891EAAC;
    }
L_0891EAAC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891EACCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 222u, 0x089ED770u>(ctx, &aot_mem) && ctx.pc == 0x0891EACCu) goto L_0891EACC;
    return;
L_0891EACC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EAE0;
      }
      goto L_0891EAD4;
    }
L_0891EAD4:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891EAE8;
      }
      goto L_0891EAE0;
    }
L_0891EAE0:
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891EAE8;
L_0891EAE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891EAF0;
    }
L_0891EAF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891EC74;
      }
      goto L_0891EB24;
    }
L_0891EB24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EBD0;
      }
      goto L_0891EB34;
    }
L_0891EB34:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16920));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0891EB60u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 48u, 0x088B02E4u>(ctx, &aot_mem) && ctx.pc == 0x0891EB60u) goto L_0891EB60;
    return;
L_0891EB60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EB7C;
      }
      goto L_0891EB68;
    }
L_0891EB68:
    ctx.gpr[31] = (0x0891EB70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D584;
L_0891EB70:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891EBC8;
      }
      goto L_0891EB7C;
    }
L_0891EB7C:
    ctx.gpr[31] = (0x0891EB84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x0891EB84u) goto L_0891EB84;
    return;
L_0891EB84:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EBC8;
      }
      goto L_0891EBA8;
    }
L_0891EBA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17164)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17164), ctx.gpr[5]);
    goto L_0891EBC8;
L_0891EBC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC74;
      }
      goto L_0891EBD0;
    }
L_0891EBD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC74;
      }
      goto L_0891EBE0;
    }
L_0891EBE0:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24800));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0891EC0Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 581u, 0x0884E3D4u>(ctx, &aot_mem) && ctx.pc == 0x0891EC0Cu) goto L_0891EC0C;
    return;
L_0891EC0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC28;
      }
      goto L_0891EC14;
    }
L_0891EC14:
    ctx.gpr[31] = (0x0891EC1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D584;
L_0891EC1C:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891EC74;
      }
      goto L_0891EC28;
    }
L_0891EC28:
    ctx.gpr[31] = (0x0891EC30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x0891EC30u) goto L_0891EC30;
    return;
L_0891EC30:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EC74;
      }
      goto L_0891EC54;
    }
L_0891EC54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17160)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17160), ctx.gpr[5]);
    goto L_0891EC74;
L_0891EC74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891EC7C;
    }
L_0891EC7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ED0C;
      }
      goto L_0891EC88;
    }
L_0891EC88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[31] = (0x0891ECE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D0AC;
L_0891ECE0:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891ED00;
      }
      goto L_0891ECF0;
    }
L_0891ECF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891ED10;
      }
      goto L_0891ED00;
    }
L_0891ED00:
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891ED10;
      }
      goto L_0891ED0C;
    }
L_0891ED0C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    goto L_0891ED10;
L_0891ED10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891ED18;
    }
L_0891ED18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EE20;
      }
      goto L_0891ED24;
    }
L_0891ED24:
    ctx.gpr[31] = (0x0891ED2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D0F4;
L_0891ED2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[31] = (0x0891ED84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D0BC;
L_0891ED84:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891EDBC;
      }
      goto L_0891ED94;
    }
L_0891ED94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EDBC;
      }
      goto L_0891EDA4;
    }
L_0891EDA4:
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0891EDB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x0891EDB4u) goto L_0891EDB4;
    return;
L_0891EDB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EE24;
      }
      goto L_0891EDBC;
    }
L_0891EDBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    ctx.gpr[31] = (0x0891EDC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 261u, 0x08A0E078u>(ctx, &aot_mem) && ctx.pc == 0x0891EDC8u) goto L_0891EDC8;
    return;
L_0891EDC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EE24;
      }
      goto L_0891EDD0;
    }
L_0891EDD0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891EE24;
      }
      goto L_0891EE04;
    }
L_0891EE04:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(800));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891EE24;
      }
      goto L_0891EE20;
    }
L_0891EE20:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    goto L_0891EE24;
L_0891EE24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891EE2C;
    }
L_0891EE2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EED4;
      }
      goto L_0891EE38;
    }
L_0891EE38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[31] = (0x0891EE90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D0AC;
L_0891EE90:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891EEB0;
      }
      goto L_0891EEA0;
    }
L_0891EEA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EED8;
      }
      goto L_0891EEB0;
    }
L_0891EEB0:
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0891EEC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 833u, 0x0889FDA4u>(ctx, &aot_mem) && ctx.pc == 0x0891EEC0u) goto L_0891EEC0;
    return;
L_0891EEC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EED8;
      }
      goto L_0891EEC8;
    }
L_0891EEC8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891EED8;
      }
      goto L_0891EED4;
    }
L_0891EED4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    goto L_0891EED8;
L_0891EED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891EEE0;
    }
L_0891EEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EF84;
      }
      goto L_0891EEEC;
    }
L_0891EEEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(484)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[14] = ctx.fpr[17] - ctx.fpr[16];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[31] = (0x0891EF44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D0BC;
L_0891EF44:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891EF88;
      }
      goto L_0891EF54;
    }
L_0891EF54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(416))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891EF88;
      }
      goto L_0891EF64;
    }
L_0891EF64:
    ctx.gpr[4] = (0u | 17u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(680), 0u);
    ctx.gpr[31] = (0x0891EF7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x0891EF7Cu) goto L_0891EF7C;
    return;
L_0891EF7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891EF88;
      }
      goto L_0891EF84;
    }
L_0891EF84:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    goto L_0891EF88;
L_0891EF88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891EF90;
    }
L_0891EF90:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(432)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891EFDC;
      }
      goto L_0891EFD4;
    }
L_0891EFD4:
    ctx.gpr[4] = (0u | 25u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891EFDC;
L_0891EFDC:
    ctx.gpr[31] = (0x0891EFE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D0F4;
L_0891EFE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891EFEC;
    }
L_0891EFEC:
    ctx.gpr[31] = (0x0891EFF4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891EFF4u) goto L_0891EFF4;
    return;
L_0891EFF4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x0891F00Cu);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F00Cu) goto L_0891F00C;
    return;
L_0891F00C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[31] = (0x0891F024u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F024u) goto L_0891F024;
    return;
L_0891F024:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x0891F038u);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F038u) goto L_0891F038;
    return;
L_0891F038:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F07C;
      }
      goto L_0891F068;
    }
L_0891F068:
    ctx.gpr[31] = (0x0891F070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D584;
L_0891F070:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891F07C;
L_0891F07C:
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F0F8;
      }
      goto L_0891F094;
    }
L_0891F094:
    ctx.gpr[31] = (0x0891F09Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891F09Cu) goto L_0891F09C;
    return;
L_0891F09C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F0F8;
      }
      goto L_0891F0AC;
    }
L_0891F0AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F10C;
      }
      goto L_0891F0BC;
    }
L_0891F0BC:
    ctx.gpr[31] = (0x0891F0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891F0C4u) goto L_0891F0C4;
    return;
L_0891F0C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F0F8;
      }
      goto L_0891F0D0;
    }
L_0891F0D0:
    ctx.gpr[31] = (0x0891F0D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891F0D8u) goto L_0891F0D8;
    return;
L_0891F0D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F0F8;
      }
      goto L_0891F0E8;
    }
L_0891F0E8:
    ctx.gpr[31] = (0x0891F0F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 409u, 0x08ACA85Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F0F0u) goto L_0891F0F0;
    return;
L_0891F0F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F10C;
      }
      goto L_0891F0F8;
    }
L_0891F0F8:
    ctx.gpr[31] = (0x0891F100u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D584;
L_0891F100:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 11u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891F10C;
L_0891F10C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891F114;
    }
L_0891F114:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x0891F120u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F120u) goto L_0891F120;
    return;
L_0891F120:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891F138u);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F138u) goto L_0891F138;
    return;
L_0891F138:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0891F170;
    }
    goto L_0891F170;
L_0891F170:
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[31] = (0x0891F180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891F180u) goto L_0891F180;
    return;
L_0891F180:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F1C4;
      }
      goto L_0891F188;
    }
L_0891F188:
    ctx.gpr[31] = (0x0891F190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F190u) goto L_0891F190;
    return;
L_0891F190:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0891F19Cu);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F19Cu) goto L_0891F19C;
    return;
L_0891F19C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (15692u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F1CC;
      }
      goto L_0891F1C4;
    }
L_0891F1C4:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891F1CC;
L_0891F1CC:
    ctx.gpr[31] = (0x0891F1D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D0F4;
L_0891F1D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891F1DC;
    }
L_0891F1DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F1F4;
      }
      goto L_0891F1EC;
    }
L_0891F1EC:
    ctx.gpr[31] = (0x0891F1F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891DEB8;
L_0891F1F4:
    ctx.gpr[31] = (0x0891F1FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D0F4;
L_0891F1FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891F204;
    }
L_0891F204:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891F214;
    }
L_0891F214:
    ctx.gpr[31] = (0x0891F21Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891F21Cu) goto L_0891F21C;
    return;
L_0891F21C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891F228;
    }
L_0891F228:
    ctx.gpr[31] = (0x0891F230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 409u, 0x08ACA85Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F230u) goto L_0891F230;
    return;
L_0891F230:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891F238;
    }
L_0891F238:
    ctx.gpr[31] = (0x0891F240u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F240u) goto L_0891F240;
    return;
L_0891F240:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0891F264;
    }
    goto L_0891F264;
L_0891F264:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F2C0;
      }
      goto L_0891F27C;
    }
L_0891F27C:
    ctx.gpr[31] = (0x0891F284u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F284u) goto L_0891F284;
    return;
L_0891F284:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0891F2A8;
    }
    goto L_0891F2A8;
L_0891F2A8:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F320;
      }
      goto L_0891F2C0;
    }
L_0891F2C0:
    ctx.gpr[31] = (0x0891F2C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891DA18;
L_0891F2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x0891F2E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0891F2E8u) goto L_0891F2E8;
    return;
L_0891F2E8:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891F304;
      }
      goto L_0891F2F4;
    }
L_0891F2F4:
    ctx.gpr[31] = (0x0891F2FCu);
    // nop
    goto L_0891D99C;
L_0891F2FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_0891F310;
      }
      goto L_0891F304;
    }
L_0891F304:
    ctx.gpr[31] = (0x0891F30Cu);
    // nop
    goto L_0891D8A4;
L_0891F30C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0891F310;
L_0891F310:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0891F36C;
      }
      goto L_0891F320;
    }
L_0891F320:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F36C;
      }
      goto L_0891F330;
    }
L_0891F330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x0891F34Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D584;
L_0891F34C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0891F358u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891F358u) goto L_0891F358;
    return;
L_0891F358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F36C;
      }
      goto L_0891F368;
    }
L_0891F368:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    goto L_0891F36C;
L_0891F36C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891E1B0;
      }
      goto L_0891F374;
    }
L_0891F374:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0891F380;
      }
      goto L_0891F380;
    }
L_0891F380:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_0891F3C8;
    }
    goto L_0891F390;
L_0891F390:
    ctx.gpr[31] = (0x0891F398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891F398u) goto L_0891F398;
    return;
L_0891F398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_0891F3C8;
    }
    goto L_0891F3A4;
L_0891F3A4:
    ctx.gpr[31] = (0x0891F3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 413u, 0x08ACA884u>(ctx, &aot_mem) && ctx.pc == 0x0891F3ACu) goto L_0891F3AC;
    return;
L_0891F3AC:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_0891F3C8;
    }
    goto L_0891F3B4;
L_0891F3B4:
    ctx.gpr[31] = (0x0891F3BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0891D584;
L_0891F3BC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_0891F3C8;
L_0891F3C8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (14761u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 56970u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F404;
      }
      goto L_0891F3F4;
    }
L_0891F3F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(388), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    goto L_0891F404;
L_0891F404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F5AC;
      }
      goto L_0891F418;
    }
L_0891F418:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(399))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F5AC;
      }
      goto L_0891F424;
    }
L_0891F424:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F5AC;
      }
      goto L_0891F430;
    }
L_0891F430:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F5AC;
      }
      goto L_0891F440;
    }
L_0891F440:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F5AC;
      }
      goto L_0891F450;
    }
L_0891F450:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F5AC;
      }
      goto L_0891F45C;
    }
L_0891F45C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
        goto L_0891F480;
    }
    goto L_0891F46C;
L_0891F46C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F5AC;
      }
      goto L_0891F47C;
    }
L_0891F47C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    goto L_0891F480;
L_0891F480:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F4A8;
      }
      goto L_0891F48C;
    }
L_0891F48C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(397))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F5AC;
      }
      goto L_0891F498;
    }
L_0891F498:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(397))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F5AC;
      }
      goto L_0891F4A8;
    }
L_0891F4A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F4D0;
      }
      goto L_0891F4C4;
    }
L_0891F4C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    goto L_0891F4D0;
L_0891F4D0:
    ctx.gpr[4] = (14761u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 56970u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F5AC;
      }
      goto L_0891F4EC;
    }
L_0891F4EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(384)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F5AC;
      }
      goto L_0891F508;
    }
L_0891F508:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
        goto L_0891F530;
    }
    goto L_0891F51C;
L_0891F51C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F53C;
      }
      goto L_0891F52C;
    }
L_0891F52C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    goto L_0891F530;
L_0891F530:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F550;
      }
      goto L_0891F53C;
    }
L_0891F53C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1500));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891F560;
      }
      goto L_0891F550;
    }
L_0891F550:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(700));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    goto L_0891F560;
L_0891F560:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891F594;
      }
      goto L_0891F57C;
    }
L_0891F57C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(397))))));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(397))))));
        goto L_0891F590;
    }
    goto L_0891F590;
L_0891F590:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891F594;
L_0891F594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(328));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0891F5ACu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0891F5ACu) goto L_0891F5AC;
    return;
L_0891F5AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F64C;
      }
      goto L_0891F5BC;
    }
L_0891F5BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(388)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(30001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F64C;
      }
      goto L_0891F5D8;
    }
L_0891F5D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(388)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7852)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(30001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F64C;
      }
      goto L_0891F5F4;
    }
L_0891F5F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F64C;
      }
      goto L_0891F604;
    }
L_0891F604:
    ctx.gpr[31] = (0x0891F60Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 393u, 0x08865B64u>(ctx, &aot_mem) && ctx.pc == 0x0891F60Cu) goto L_0891F60C;
    return;
L_0891F60C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F64C;
      }
      goto L_0891F614;
    }
L_0891F614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x0891F630u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 205u, 0x089ED4F0u>(ctx, &aot_mem) && ctx.pc == 0x0891F630u) goto L_0891F630;
    return;
L_0891F630:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    goto L_0891F64C;
L_0891F64C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F6B0;
      }
      goto L_0891F65C;
    }
L_0891F65C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F67C;
      }
      goto L_0891F66C;
    }
L_0891F66C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F6B0;
      }
      goto L_0891F67C;
    }
L_0891F67C:
    ctx.gpr[31] = (0x0891F684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891F684u) goto L_0891F684;
    return;
L_0891F684:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F6B0;
      }
      goto L_0891F68C;
    }
L_0891F68C:
    ctx.gpr[31] = (0x0891F694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891F694u) goto L_0891F694;
    return;
L_0891F694:
    ctx.gpr[31] = (0x0891F69Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0891F69Cu) goto L_0891F69C;
    return;
L_0891F69C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891F6B0;
      }
      goto L_0891F6A8;
    }
L_0891F6A8:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0891F6B0;
L_0891F6B0:
    ctx.gpr[4] = (48947u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F6E8;
      }
      goto L_0891F6D0;
    }
L_0891F6D0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    goto L_0891F6E8;
L_0891F6E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(399))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891F8D8;
      }
      goto L_0891F6F4;
    }
L_0891F6F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_0891F8D8;
      }
      goto L_0891F704;
    }
L_0891F704:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F8D8;
      }
      goto L_0891F70C;
    }
L_0891F70C:
    ctx.gpr[31] = (0x0891F714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891F714u) goto L_0891F714;
    return;
L_0891F714:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F8D8;
      }
      goto L_0891F71C;
    }
L_0891F71C:
    ctx.gpr[31] = (0x0891F724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F724u) goto L_0891F724;
    return;
L_0891F724:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F8D8;
      }
      goto L_0891F760;
    }
L_0891F760:
    ctx.gpr[31] = (0x0891F768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F768u) goto L_0891F768;
    return;
L_0891F768:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F8D8;
      }
      goto L_0891F798;
    }
L_0891F798:
    ctx.gpr[31] = (0x0891F7A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891F7A0u) goto L_0891F7A0;
    return;
L_0891F7A0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0891F7B8u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891F7B8u) goto L_0891F7B8;
    return;
L_0891F7B8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F8D8;
      }
      goto L_0891F7E0;
    }
L_0891F7E0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[31] = (0x0891F7ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F7ECu) goto L_0891F7EC;
    return;
L_0891F7EC:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0891F804u);
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F804u) goto L_0891F804;
    return;
L_0891F804:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[13];
    ctx.fpr[24] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[31] = (0x0891F828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F828u) goto L_0891F828;
    return;
L_0891F828:
    ctx.gpr[31] = (0x0891F830u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F830u) goto L_0891F830;
    return;
L_0891F830:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[12] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[4] = (16128u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[17] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F8D8;
      }
      goto L_0891F870;
    }
L_0891F870:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[31] = (0x0891F87Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F87Cu) goto L_0891F87C;
    return;
L_0891F87C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
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
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F8D8;
      }
      goto L_0891F8C0;
    }
L_0891F8C0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    goto L_0891F8D8;
L_0891F8D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F98C;
      }
      goto L_0891F8E4;
    }
L_0891F8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F98C;
      }
      goto L_0891F8F8;
    }
L_0891F8F8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[31] = (0x0891F904u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x0891F904u) goto L_0891F904;
    return;
L_0891F904:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
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
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891F98C;
      }
      goto L_0891F948;
    }
L_0891F948:
    ctx.gpr[31] = (0x0891F950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891F950u) goto L_0891F950;
    return;
L_0891F950:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F974;
      }
      goto L_0891F958;
    }
L_0891F958:
    ctx.gpr[31] = (0x0891F960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891F960u) goto L_0891F960;
    return;
L_0891F960:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0891F96Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 261u, 0x08A0E078u>(ctx, &aot_mem) && ctx.pc == 0x0891F96Cu) goto L_0891F96C;
    return;
L_0891F96C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F98C;
      }
      goto L_0891F974;
    }
L_0891F974:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    goto L_0891F98C;
L_0891F98C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891F9C4;
      }
      goto L_0891F998;
    }
L_0891F998:
    ctx.gpr[31] = (0x0891F9A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0891F9A0u) goto L_0891F9A0;
    return;
L_0891F9A0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 173u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891F9C4;
      }
      goto L_0891F9BC;
    }
L_0891F9BC:
    ctx.gpr[4] = (0u | 45u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(680), ctx.gpr[4]);
    goto L_0891F9C4;
L_0891F9C4:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0891FA1C;
      }
      goto L_0891F9DC;
    }
L_0891F9DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(409))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
        goto L_0891FA00;
    }
    goto L_0891F9EC;
L_0891F9EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0891FA14;
      }
      goto L_0891F9F4;
    }
L_0891F9F4:
    ctx.gpr[4] = (16320u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891FA1C;
      }
      goto L_0891FA00;
    }
L_0891FA00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FA14;
      }
      goto L_0891FA08;
    }
L_0891FA08:
    ctx.gpr[4] = (16384u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891FA1C;
      }
      goto L_0891FA14;
    }
L_0891FA14:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0891FA1C;
L_0891FA1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0891FA50;
    }
    goto L_0891FA50;
L_0891FA50:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FA68;
      }
      goto L_0891FA60;
    }
L_0891FA60:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0891FA98;
      }
      goto L_0891FA68;
    }
L_0891FA68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FA8C;
      }
      goto L_0891FA7C;
    }
L_0891FA7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0891FA98;
      }
      goto L_0891FA8C;
    }
L_0891FA8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0891FA98;
L_0891FA98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FB90;
      }
      goto L_0891FAA8;
    }
L_0891FAA8:
    ctx.gpr[31] = (0x0891FAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0891FAB0u) goto L_0891FAB0;
    return;
L_0891FAB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0891FB90;
      }
      goto L_0891FABC;
    }
L_0891FABC:
    ctx.gpr[31] = (0x0891FAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891FAC4u) goto L_0891FAC4;
    return;
L_0891FAC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FB04;
      }
      goto L_0891FACC;
    }
L_0891FACC:
    ctx.gpr[31] = (0x0891FAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891FAD4u) goto L_0891FAD4;
    return;
L_0891FAD4:
    ctx.gpr[31] = (0x0891FADCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0891FADCu) goto L_0891FADC;
    return;
L_0891FADC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891FB04;
      }
      goto L_0891FAE8;
    }
L_0891FAE8:
    ctx.gpr[31] = (0x0891FAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891FAF0u) goto L_0891FAF0;
    return;
L_0891FAF0:
    ctx.gpr[31] = (0x0891FAF8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0891FAF8u) goto L_0891FAF8;
    return;
L_0891FAF8:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891FB34;
      }
      goto L_0891FB04;
    }
L_0891FB04:
    ctx.gpr[31] = (0x0891FB0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0891FB0Cu) goto L_0891FB0C;
    return;
L_0891FB0C:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891FB90;
      }
      goto L_0891FB18;
    }
L_0891FB18:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0891FB90;
      }
      goto L_0891FB34;
    }
L_0891FB34:
    ctx.gpr[31] = (0x0891FB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0891FB3Cu) goto L_0891FB3C;
    return;
L_0891FB3C:
    ctx.gpr[31] = (0x0891FB44u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0891FB44u) goto L_0891FB44;
    return;
L_0891FB44:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891FB90;
      }
      goto L_0891FB50;
    }
L_0891FB50:
    ctx.gpr[31] = (0x0891FB58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0891FB58u) goto L_0891FB58;
    return;
L_0891FB58:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891FB78;
      }
      goto L_0891FB64;
    }
L_0891FB64:
    ctx.gpr[31] = (0x0891FB6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0891FB6Cu) goto L_0891FB6C;
    return;
L_0891FB6C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0891FB90;
      }
      goto L_0891FB78;
    }
L_0891FB78:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    goto L_0891FB90;
L_0891FB90:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891FBB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[17] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15040)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.fpr[17] = std::sqrt(ctx.fpr[17]);
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FC2C;
      }
      goto L_0891FC0C;
    }
L_0891FC0C:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[17];
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0891FC34;
      }
      goto L_0891FC24;
    }
L_0891FC24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF28;
      }
      goto L_0891FC2C;
    }
L_0891FC2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF28;
      }
      goto L_0891FC34;
    }
L_0891FC34:
    ctx.gpr[8] = (16948u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16800u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (15692u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[5] << 5u);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[15];
    ctx.gpr[9] = (0u - ctx.gpr[8]);
    ctx.gpr[24] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[24]);
    ctx.gpr[24] = (ctx.gpr[24] << 1u);
    ctx.gpr[25] = (ctx.gpr[9] - ctx.gpr[24]);
    ctx.gpr[9] = (ctx.gpr[24] << 2u);
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[9]);
    ctx.gpr[9] = (16204u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    ctx.fpr[19] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[15] = (0u | 5u);
    ctx.gpr[9] = (16179u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[14] = (0u | 32u);
    ctx.gpr[9] = (16544u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[13] = (0u | 48u);
    ctx.gpr[12] = (0u | 1u);
    ctx.gpr[3] = (0u | 2u);
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[11] = (0u | 9u);
    ctx.gpr[10] = (0u | 10u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[9] = (2230u << 16u);
    goto L_0891FCC4;
L_0891FCC4:
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[24] = (ctx.gpr[24] + ctx.gpr[5]);
    ctx.gpr[24] = (aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (ctx.gpr[24] & 128u);
    if (ctx.gpr[24] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_0891FCE4;
    }
    goto L_0891FCDC;
L_0891FCDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0891FCE8;
      }
      goto L_0891FCE4;
    }
L_0891FCE4:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[25]);
    goto L_0891FCE8;
L_0891FCE8:
    ctx.gpr[24] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FCF4;
    }
L_0891FCF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0891FD08;
      }
      goto L_0891FD00;
    }
L_0891FD00:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[15];
    // nop
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FD08;
    }
L_0891FD08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (ctx.gpr[16] & 496u);
    if (ctx.gpr[18] == ctx.gpr[14]) {
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(596)));
        goto L_0891FD24;
    }
    goto L_0891FD18;
L_0891FD18:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[13];
    // nop
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FD20;
    }
L_0891FD20:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(596)));
    goto L_0891FD24;
L_0891FD24:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FD2C;
    }
L_0891FD2C:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[19] = (ctx.gpr[18] & 1u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FD3C;
    }
L_0891FD3C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[18] & 2u);
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FD44;
    }
L_0891FD44:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[17] = (ctx.gpr[18] & 4u);
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FD4C;
    }
L_0891FD4C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FD54;
    }
L_0891FD54:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(397))))));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[3];
    ctx.gpr[17] = (ctx.gpr[24] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FD60;
    }
L_0891FD60:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
        goto L_0891FD7C;
    }
    goto L_0891FD7C;
L_0891FD7C:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FD8C;
    }
L_0891FD8C:
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[4] = ctx.fpr[4] - ctx.fpr[0];
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[2];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[5];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FDC4;
    }
L_0891FDC4:
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(112)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[6];
    ctx.fpr[5] = std::sqrt(ctx.fpr[5]);
    ctx.set_fpu_condition((ctx.fpr[5] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FDEC;
    }
L_0891FDEC:
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[6];
    ctx.fpr[0] = ctx.fpr[5] / ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FE0C;
    }
L_0891FE0C:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[24] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0891FEDC;
      }
      goto L_0891FE1C;
    }
L_0891FE1C:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[5] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[5];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
        goto L_0891FEA4;
    }
    goto L_0891FE40;
L_0891FE40:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(399))))));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0891FE94;
      }
      goto L_0891FE4C;
    }
L_0891FE4C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_0891FE94;
      }
      goto L_0891FE54;
    }
L_0891FE54:
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FE80;
      }
      goto L_0891FE70;
    }
L_0891FE70:
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-7868)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2000));
      if (branch_taken) {
          goto L_0891FE8C;
      }
      goto L_0891FE80;
    }
L_0891FE80:
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2000));
    goto L_0891FE8C;
L_0891FE8C:
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(400), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(68)));
    goto L_0891FE94;
L_0891FE94:
    ctx.gpr[16] = (ctx.gpr[16] & ctx.gpr[8]);
    ctx.gpr[16] = (ctx.gpr[16] | 48u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FEA4;
    }
L_0891FEA4:
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FEBC;
    }
L_0891FEBC:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(399))))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FEC8;
    }
L_0891FEC8:
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(400), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FEDC;
    }
L_0891FEDC:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FEF8;
    }
L_0891FEF8:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(399))))));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[12];
    // nop
      if (branch_taken) {
          goto L_0891FF14;
      }
      goto L_0891FF04;
    }
L_0891FF04:
    aot_mem.aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(400), ctx.gpr[16]);
    goto L_0891FF14;
L_0891FF14:
    ctx.gpr[24] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_0891FCC4;
      }
      goto L_0891FF28;
    }
L_0891FF28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891FF40:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27660)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27656)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2227u << 16u);
    ctx.gpr[11] = (2227u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(27664), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(27672), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(27668), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(27676), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(27680), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0891FFB8:
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
L_0891FFE4:
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
    ctx.pc = 0x08920000u; return;
}

void recomp_unit_0070(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0070_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_70(Runtime &runtime) {
    runtime.register_generated_unit(70u, 0x0891C000u, 16384u, &recomp_unit_0070, &recomp_unit_0070_entry);
    runtime.register_function(0x0891C000u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C018u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C030u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C03Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C04Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C054u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C05Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C070u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C07Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C0FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C110u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C124u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C130u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C140u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C148u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C150u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C164u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C170u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C194u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C1F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C200u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C218u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C220u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C230u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C238u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C248u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C250u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C26Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C274u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C290u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C29Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C2F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C308u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C30Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C314u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C334u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C36Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C380u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C3C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C408u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C410u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C428u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C42Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C43Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C454u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C468u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C490u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C4D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C528u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C53Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C578u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C57Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C5DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C604u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C620u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C624u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C638u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C644u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C658u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C66Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C69Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C6F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C700u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C710u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C718u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C730u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C770u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C778u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C780u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C788u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C79Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C7F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C80Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C81Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C828u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C830u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C844u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C864u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C8F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C908u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C91Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C92Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C95Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C964u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C96Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C974u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C97Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C988u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C990u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891C9ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CA8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CAA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CACCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CB94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CBF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CC8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CCDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CD90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CDDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CE90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CECCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CEF8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CF30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFCCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891CFF8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D024u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D080u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D0F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D108u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D118u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D128u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D130u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D13Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D144u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D154u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D15Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D164u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D16Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D180u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D188u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D18Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D19Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D1E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D210u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D220u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D240u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D250u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D25Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D264u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D2C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D30Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D328u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D37Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D39Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D3F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D400u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D40Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D414u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D41Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D424u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D42Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D434u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D43Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D444u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D454u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D460u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D468u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D470u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D47Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D488u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D494u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D49Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D4FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D514u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D524u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D538u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D544u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D554u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D568u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D574u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D584u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D5FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D604u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D60Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D620u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D634u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D640u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D65Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D664u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D678u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D6E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D714u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D71Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D724u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D730u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D744u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D75Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D768u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D770u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D778u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D78Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D7E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D80Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D820u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D848u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D868u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D890u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D8A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D8E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D900u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D908u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D910u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D924u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D92Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D934u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D93Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D950u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D958u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D960u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D968u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D97Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D984u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D98Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D990u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D99Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891D9FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DA90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DAA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DAB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DAB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DAE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DB8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DBE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DBECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC28u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DC94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCCCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DCD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DD9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDD8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DDFCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DE9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DEA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DEB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DEF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF48u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF5Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DF9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFCCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891DFE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E000u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E018u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E020u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E02Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E038u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E040u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E054u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E070u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E0FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E104u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E11Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E134u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E148u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E168u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E178u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E188u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E198u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E1A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E1A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E1B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E1B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E1C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E1D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E1F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E204u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E224u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E234u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E244u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E250u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E260u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E268u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E278u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E280u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E288u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E290u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E298u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E2D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E308u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E324u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E33Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E344u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E34Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E354u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E388u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E3F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E428u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E438u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E43Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E448u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E458u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E468u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E46Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E480u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E488u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E494u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E4F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E508u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E51Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E53Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E54Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E55Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E56Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E574u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E57Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E584u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E58Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E594u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E5F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E608u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E618u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E624u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E634u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E63Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E64Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E654u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E65Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E664u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E66Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E6FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E704u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E70Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E740u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E750u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E754u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E760u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E770u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E780u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E784u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E798u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E7E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E830u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E840u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E848u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E850u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E898u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E8F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E904u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E91Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E924u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E93Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E950u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E958u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E96Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E990u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891E9F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EA9Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EACCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EAF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EB84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EBE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC28u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC30u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC74u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EC88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ECE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ECF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED10u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891ED94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDB4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EDD0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE38u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EE90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEA0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEC0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EED4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EED8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEE0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EEECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF84u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF88u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EF90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891EFF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F00Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F024u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F038u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F068u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F070u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F07Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F094u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F09Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0F0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F0F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F100u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F10Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F114u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F120u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F138u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F170u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F180u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F188u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F190u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F19Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1CCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1D4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F1FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F204u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F214u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F21Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F228u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F230u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F238u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F240u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F264u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F27Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F284u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F2FCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F304u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F30Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F310u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F320u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F330u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F34Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F358u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F368u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F36Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F374u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F380u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F390u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F398u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3A4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3B4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3C8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F3F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F404u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F418u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F424u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F430u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F440u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F450u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F45Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F46Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F47Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F480u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F48Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F498u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F4ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F508u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F51Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F52Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F530u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F53Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F550u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F560u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F57Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F590u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F594u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5ACu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F5F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F604u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F60Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F614u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F630u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F64Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F65Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F66Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F67Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F684u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F68Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F694u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F69Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6A8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6B0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6D0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6E8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F6F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F704u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F70Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F714u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F71Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F724u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F760u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F768u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F798u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7B8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7E0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F7ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F804u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F828u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F830u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F870u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F87Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8C0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8D8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8E4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F8F8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F904u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F948u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F950u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F958u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F960u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F96Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F974u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F98Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F998u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9A0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9BCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9C4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9DCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9ECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891F9F4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA68u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FA98u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAA8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAB0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FABCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FACCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAD4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FADCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAF0u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FAF8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB50u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB58u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB64u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB6Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB78u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FB90u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FBB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FC34u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCE4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCE8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FCF4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD00u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD08u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD18u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD20u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD24u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD2Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD3Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD44u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD60u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD7Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FD8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDC4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FDECu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE0Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE1Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE4Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE54u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE70u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE80u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE8Cu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FE94u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEA4u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEBCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEC8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEDCu, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FEF8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF04u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF14u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF28u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FF40u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFB8u, &recomp_unit_0070, "recomp_unit_0070");
    runtime.register_function(0x0891FFE4u, &recomp_unit_0070, "recomp_unit_0070");
}
} // namespace psprecomp
