#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0100[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 5, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 19, 0, 0, 0, 0, 0, 0,
    0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 25, 0, 26, 0, 0, 0, 0, 0,
    0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 30, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0,
    0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65,
    0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 70, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 78, 0, 79, 80, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0,
    0, 0, 85, 86, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 91, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 98, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104,
    0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0,
    0, 111, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 117, 0, 118, 119, 0,
    0, 120, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126,
    0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 136, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 142, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149,
    0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155,
    0, 0, 156, 0, 0, 157, 0, 0, 158, 159, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0,
    165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 169, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 0,
    0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180,
    0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 184, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 192, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 0, 0,
    0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 202, 0, 203, 0, 0, 0,
    0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0,
    0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 217, 0, 218, 0, 0, 219, 0, 0,
    0, 220, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0,
    0, 229, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    235, 236, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 241, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243,
    0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 247, 248, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0,
    0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 273, 0, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0,
    0, 0, 0, 0, 287, 0, 288, 0, 289, 0, 0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0,
    295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 304, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0,
    310, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    318, 0, 319, 0, 0, 0, 320, 321, 0, 322, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 327,
    0, 0, 0, 0, 328, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0,
    0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 344, 0, 0, 0, 0,
    0, 345, 0, 346, 0, 347, 0, 0, 0, 0, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 351, 0, 352, 0, 353, 0, 354, 0, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 360, 0,
    361, 0, 0, 362, 0, 363, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0,
    0, 0, 0, 0, 369, 370, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0,
    0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0,
    380, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0,
    0, 0, 0, 0, 0, 388, 0, 389, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0,
    0, 395, 0, 0, 0, 0, 0, 0, 396, 397, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 402, 0, 403, 0,
    404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0,
    0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0,
    418, 0, 0, 419, 0, 420, 421, 0, 0, 422, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427,
    0, 0, 0, 428, 0, 0, 429, 0, 430, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 436, 0, 0, 437,
    0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0,
    444, 0, 0, 0, 0, 0, 445, 0, 0, 446, 0, 0, 0, 447, 0, 448, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0,
    0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 0, 0,
    0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 463, 0, 0,
    0, 464, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0,
    0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 473, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 481,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0,
    0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0, 0, 487, 488, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0,
    497, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0,
    0, 0, 0, 0, 506, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0,
    513, 0, 0, 514, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0,
    0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533,
    0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 539,
    0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0,
    544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 550, 0, 0,
    0, 551, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 557, 558, 0, 0, 0, 0,
    0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 564, 0, 565, 0, 0, 0,
    0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0,
    0, 0, 574, 0, 0, 575, 0, 576, 0, 577, 0, 0, 0, 0, 578, 579, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0,
    0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 584, 585, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0, 589, 590, 0, 0,
    0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 595, 596, 0, 597, 0,
    0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 603, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0,
    605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 608, 609, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0,
    0, 0, 0, 0, 0, 612, 0, 0, 613, 614, 0, 0, 0, 615, 0, 616, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0,
    619, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 624, 625, 0, 0, 0, 0, 0, 0, 0, 0, 626,
    0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 631, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0,
    634, 0, 0, 0, 635, 0, 636, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0,
    646, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 648, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 653, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 662,
    0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 666, 0, 667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0,
    669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 0, 673, 674, 0, 0, 0, 675, 0,
    0, 676, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 680, 0, 681, 0, 0, 682, 683, 0, 684, 0, 0, 685, 0, 0, 0, 686, 0,
    0, 0, 0, 687, 0, 688, 0, 689, 0, 0, 690, 691, 0, 692, 0, 693, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0,
    0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0,
    0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 705, 706, 0, 707, 0, 0, 708, 0, 709, 0, 0, 0, 0, 0,
    0, 0, 0, 710, 0, 711, 0, 0, 712, 0, 713, 0, 0, 714, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 719, 0, 720, 0, 0, 721, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 729, 0, 730, 0, 731, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 733, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 736, 0, 737, 0, 738, 0, 0, 0, 739, 0, 0, 740, 0, 741, 0, 742,
    0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0, 748, 749, 0, 0, 0, 0, 0, 0, 750,
    0, 0, 751, 0, 0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 754, 0, 755, 0, 756, 0, 757, 0, 758, 0, 759, 0, 0, 0, 760, 0, 0, 0,
    761, 0, 762, 0, 763, 0, 0, 0, 764, 0, 0, 0, 765, 0, 766, 0, 767, 0, 0, 0, 768, 0, 0, 0, 769, 0, 770, 0, 771, 0, 0, 0,
    772, 0, 0, 0, 773, 0, 774, 0, 775, 0, 0, 0, 776, 0, 0, 0, 777, 0, 778, 0, 779, 0, 0, 0, 780, 0, 0, 0, 781, 782, 0, 0,
    0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0, 0, 0, 787,
    0, 0, 788, 0, 789, 0, 0, 790, 0, 791, 0, 792, 0, 793, 0, 794, 0, 0, 795, 0, 0, 796, 0, 0, 797, 0, 798, 0, 0, 799, 0, 0,
    800, 0, 0, 801, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 805,
    0, 0, 806, 0, 0, 807, 0, 0, 808, 0, 0, 0, 0, 809, 0, 0, 0, 810, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0,
    0, 813, 0, 814, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 818, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0,
    0, 820, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0,
    0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 827, 0, 828, 0, 0, 0,
    829, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 0, 835, 0, 0, 0,
    0, 836, 0, 0, 0, 0, 837, 0, 838, 0, 839, 0, 0, 0, 840, 0, 0, 0, 0, 841, 0, 842, 0, 0, 0, 843, 0, 0, 0, 0, 844, 0,
    0, 0, 0, 845, 0, 846, 0, 0, 0, 847, 0, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0,
    851, 0, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853, 0, 0, 0, 854, 0, 0, 0, 855, 0, 0, 0,
    856, 0, 0, 0, 0, 857, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 860,
};
void recomp_unit_0100_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08994000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0100[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08994000;
    case 2u: goto L_08994018;
    case 3u: goto L_0899402C;
    case 4u: goto L_08994048;
    case 5u: goto L_0899404C;
    case 6u: goto L_08994054;
    case 7u: goto L_0899406C;
    case 8u: goto L_08994088;
    case 9u: goto L_089940A4;
    case 10u: goto L_089940B8;
    case 11u: goto L_089940C8;
    case 12u: goto L_089940D8;
    case 13u: goto L_089940EC;
    case 14u: goto L_089940F0;
    case 15u: goto L_08994130;
    case 16u: goto L_08994144;
    case 17u: goto L_08994154;
    case 18u: goto L_08994160;
    case 19u: goto L_08994164;
    case 20u: goto L_08994188;
    case 21u: goto L_08994190;
    case 22u: goto L_089941AC;
    case 23u: goto L_089941C0;
    case 24u: goto L_089941DC;
    case 25u: goto L_089941E0;
    case 26u: goto L_089941E8;
    case 27u: goto L_08994204;
    case 28u: goto L_08994234;
    case 29u: goto L_08994240;
    case 30u: goto L_08994244;
    case 31u: goto L_0899424C;
    case 32u: goto L_08994268;
    case 33u: goto L_08994278;
    case 34u: goto L_08994290;
    case 35u: goto L_089942D0;
    case 36u: goto L_089942D8;
    case 37u: goto L_089942F4;
    case 38u: goto L_08994314;
    case 39u: goto L_0899431C;
    case 40u: goto L_08994338;
    case 41u: goto L_0899436C;
    case 42u: goto L_08994384;
    case 43u: goto L_08994390;
    case 44u: goto L_089943A0;
    case 45u: goto L_089943A8;
    case 46u: goto L_089943B0;
    case 47u: goto L_089943C8;
    case 48u: goto L_089943D8;
    case 49u: goto L_089943E0;
    case 50u: goto L_089943E8;
    case 51u: goto L_08994408;
    case 52u: goto L_089944A0;
    case 53u: goto L_089944A8;
    case 54u: goto L_089944C8;
    case 55u: goto L_0899455C;
    case 56u: goto L_08994564;
    case 57u: goto L_0899457C;
    case 58u: goto L_0899458C;
    case 59u: goto L_08994594;
    case 60u: goto L_0899459C;
    case 61u: goto L_089945B4;
    case 62u: goto L_089945C4;
    case 63u: goto L_089945D4;
    case 64u: goto L_089945D8;
    case 65u: goto L_089945FC;
    case 66u: goto L_08994604;
    case 67u: goto L_08994620;
    case 68u: goto L_08994634;
    case 69u: goto L_08994650;
    case 70u: goto L_08994654;
    case 71u: goto L_0899465C;
    case 72u: goto L_08994678;
    case 73u: goto L_08994688;
    case 74u: goto L_0899469C;
    case 75u: goto L_089946A8;
    case 76u: goto L_089946C4;
    case 77u: goto L_089946D4;
    case 78u: goto L_08994704;
    case 79u: goto L_0899470C;
    case 80u: goto L_08994710;
    case 81u: goto L_08994734;
    case 82u: goto L_0899473C;
    case 83u: goto L_08994758;
    case 84u: goto L_0899476C;
    case 85u: goto L_08994788;
    case 86u: goto L_0899478C;
    case 87u: goto L_08994794;
    case 88u: goto L_089947A4;
    case 89u: goto L_089947B0;
    case 90u: goto L_089947BC;
    case 91u: goto L_089947C4;
    case 92u: goto L_089947C8;
    case 93u: goto L_089947D4;
    case 94u: goto L_089947F0;
    case 95u: goto L_08994814;
    case 96u: goto L_08994824;
    case 97u: goto L_08994840;
    case 98u: goto L_08994848;
    case 99u: goto L_0899484C;
    case 100u: goto L_08994874;
    case 101u: goto L_089948B4;
    case 102u: goto L_089948D0;
    case 103u: goto L_089948EC;
    case 104u: goto L_089948FC;
    case 105u: goto L_08994918;
    case 106u: goto L_08994928;
    case 107u: goto L_08994938;
    case 108u: goto L_08994940;
    case 109u: goto L_08994948;
    case 110u: goto L_08994964;
    case 111u: goto L_08994984;
    case 112u: goto L_08994990;
    case 113u: goto L_0899499C;
    case 114u: goto L_089949B8;
    case 115u: goto L_089949D4;
    case 116u: goto L_089949E0;
    case 117u: goto L_089949EC;
    case 118u: goto L_089949F4;
    case 119u: goto L_089949F8;
    case 120u: goto L_08994A04;
    case 121u: goto L_08994A10;
    case 122u: goto L_08994A1C;
    case 123u: goto L_08994A24;
    case 124u: goto L_08994A30;
    case 125u: goto L_08994A64;
    case 126u: goto L_08994A7C;
    case 127u: goto L_08994A84;
    case 128u: goto L_08994AA0;
    case 129u: goto L_08994AC0;
    case 130u: goto L_08994ACC;
    case 131u: goto L_08994AD8;
    case 132u: goto L_08994AF4;
    case 133u: goto L_08994B10;
    case 134u: goto L_08994B1C;
    case 135u: goto L_08994B28;
    case 136u: goto L_08994B30;
    case 137u: goto L_08994B34;
    case 138u: goto L_08994B40;
    case 139u: goto L_08994B4C;
    case 140u: goto L_08994B58;
    case 141u: goto L_08994B60;
    case 142u: goto L_08994B6C;
    case 143u: goto L_08994B70;
    case 144u: goto L_08994BA8;
    case 145u: goto L_08994BBC;
    case 146u: goto L_08994BC4;
    case 147u: goto L_08994BE0;
    case 148u: goto L_08994BF0;
    case 149u: goto L_08994BFC;
    case 150u: goto L_08994C18;
    case 151u: goto L_08994C38;
    case 152u: goto L_08994C40;
    case 153u: goto L_08994C5C;
    case 154u: goto L_08994C6C;
    case 155u: goto L_08994C7C;
    case 156u: goto L_08994C88;
    case 157u: goto L_08994C94;
    case 158u: goto L_08994CA0;
    case 159u: goto L_08994CA4;
    case 160u: goto L_08994CB0;
    case 161u: goto L_08994CC0;
    case 162u: goto L_08994CC8;
    case 163u: goto L_08994CD4;
    case 164u: goto L_08994CF8;
    case 165u: goto L_08994D00;
    case 166u: goto L_08994D1C;
    case 167u: goto L_08994D30;
    case 168u: goto L_08994D4C;
    case 169u: goto L_08994D50;
    case 170u: goto L_08994D58;
    case 171u: goto L_08994D74;
    case 172u: goto L_08994D84;
    case 173u: goto L_08994D98;
    case 174u: goto L_08994DA4;
    case 175u: goto L_08994DB0;
    case 176u: goto L_08994DBC;
    case 177u: goto L_08994DC4;
    case 178u: goto L_08994DD0;
    case 179u: goto L_08994DF4;
    case 180u: goto L_08994DFC;
    case 181u: goto L_08994E18;
    case 182u: goto L_08994E2C;
    case 183u: goto L_08994E48;
    case 184u: goto L_08994E4C;
    case 185u: goto L_08994E54;
    case 186u: goto L_08994E70;
    case 187u: goto L_08994E80;
    case 188u: goto L_08994E94;
    case 189u: goto L_08994EA0;
    case 190u: goto L_08994EAC;
    case 191u: goto L_08994EB8;
    case 192u: goto L_08994EBC;
    case 193u: goto L_08994EC8;
    case 194u: goto L_08994ED8;
    case 195u: goto L_08994EE0;
    case 196u: goto L_08994EEC;
    case 197u: goto L_08994F10;
    case 198u: goto L_08994F18;
    case 199u: goto L_08994F34;
    case 200u: goto L_08994F48;
    case 201u: goto L_08994F64;
    case 202u: goto L_08994F68;
    case 203u: goto L_08994F70;
    case 204u: goto L_08994F8C;
    case 205u: goto L_08994F9C;
    case 206u: goto L_08994FAC;
    case 207u: goto L_08994FB8;
    case 208u: goto L_08994FC4;
    case 209u: goto L_08994FD0;
    case 210u: goto L_08994FD8;
    case 211u: goto L_08994FE4;
    case 212u: goto L_08995008;
    case 213u: goto L_08995010;
    case 214u: goto L_0899502C;
    case 215u: goto L_08995040;
    case 216u: goto L_0899505C;
    case 217u: goto L_08995060;
    case 218u: goto L_08995068;
    case 219u: goto L_08995074;
    case 220u: goto L_08995084;
    case 221u: goto L_0899508C;
    case 222u: goto L_08995098;
    case 223u: goto L_089950A4;
    case 224u: goto L_089950B4;
    case 225u: goto L_089950BC;
    case 226u: goto L_089950D4;
    case 227u: goto L_089950E4;
    case 228u: goto L_089950F0;
    case 229u: goto L_08995104;
    case 230u: goto L_08995108;
    case 231u: goto L_0899512C;
    case 232u: goto L_08995134;
    case 233u: goto L_08995150;
    case 234u: goto L_08995164;
    case 235u: goto L_08995180;
    case 236u: goto L_08995184;
    case 237u: goto L_0899518C;
    case 238u: goto L_0899519C;
    case 239u: goto L_089951B8;
    case 240u: goto L_089951CC;
    case 241u: goto L_089951D4;
    case 242u: goto L_089951D8;
    case 243u: goto L_089951FC;
    case 244u: goto L_08995204;
    case 245u: goto L_08995220;
    case 246u: goto L_08995234;
    case 247u: goto L_08995250;
    case 248u: goto L_08995254;
    case 249u: goto L_0899525C;
    case 250u: goto L_08995278;
    case 251u: goto L_08995288;
    case 252u: goto L_08995298;
    case 253u: goto L_089952A8;
    case 254u: goto L_089952B0;
    case 255u: goto L_089952CC;
    case 256u: goto L_089952DC;
    case 257u: goto L_089952EC;
    case 258u: goto L_08995310;
    case 259u: goto L_0899532C;
    case 260u: goto L_08995334;
    case 261u: goto L_08995350;
    case 262u: goto L_08995360;
    case 263u: goto L_0899536C;
    case 264u: goto L_08995380;
    case 265u: goto L_08995394;
    case 266u: goto L_0899539C;
    case 267u: goto L_089953B4;
    case 268u: goto L_089953BC;
    case 269u: goto L_089953C4;
    case 270u: goto L_089953DC;
    case 271u: goto L_089953E4;
    case 272u: goto L_08995400;
    case 273u: goto L_08995410;
    case 274u: goto L_0899541C;
    case 275u: goto L_08995424;
    case 276u: goto L_0899542C;
    case 277u: goto L_08995434;
    case 278u: goto L_0899543C;
    case 279u: goto L_08995458;
    case 280u: goto L_089954A0;
    case 281u: goto L_089954B0;
    case 282u: goto L_089954B8;
    case 283u: goto L_089954D0;
    case 284u: goto L_089954D8;
    case 285u: goto L_089954F0;
    case 286u: goto L_089954F8;
    case 287u: goto L_08995510;
    case 288u: goto L_08995518;
    case 289u: goto L_08995520;
    case 290u: goto L_08995538;
    case 291u: goto L_08995540;
    case 292u: goto L_08995548;
    case 293u: goto L_08995564;
    case 294u: goto L_08995574;
    case 295u: goto L_08995580;
    case 296u: goto L_08995598;
    case 297u: goto L_089955A8;
    case 298u: goto L_089955B0;
    case 299u: goto L_089955C8;
    case 300u: goto L_089955D8;
    case 301u: goto L_089955E0;
    case 302u: goto L_089955E8;
    case 303u: goto L_08995600;
    case 304u: goto L_08995614;
    case 305u: goto L_0899561C;
    case 306u: goto L_08995628;
    case 307u: goto L_08995644;
    case 308u: goto L_0899564C;
    case 309u: goto L_08995678;
    case 310u: goto L_08995680;
    case 311u: goto L_08995688;
    case 312u: goto L_08995694;
    case 313u: goto L_0899569C;
    case 314u: goto L_089956A8;
    case 315u: goto L_089956C0;
    case 316u: goto L_089956D0;
    case 317u: goto L_089956E0;
    case 318u: goto L_08995700;
    case 319u: goto L_08995708;
    case 320u: goto L_08995718;
    case 321u: goto L_0899571C;
    case 322u: goto L_08995724;
    case 323u: goto L_0899573C;
    case 324u: goto L_08995744;
    case 325u: goto L_08995760;
    case 326u: goto L_08995770;
    case 327u: goto L_0899577C;
    case 328u: goto L_08995790;
    case 329u: goto L_0899579C;
    case 330u: goto L_089957A4;
    case 331u: goto L_089957C0;
    case 332u: goto L_089957F0;
    case 333u: goto L_08995808;
    case 334u: goto L_08995820;
    case 335u: goto L_08995828;
    case 336u: goto L_08995840;
    case 337u: goto L_08995850;
    case 338u: goto L_08995870;
    case 339u: goto L_08995884;
    case 340u: goto L_0899590C;
    case 341u: goto L_08995940;
    case 342u: goto L_08995958;
    case 343u: goto L_08995964;
    case 344u: goto L_0899596C;
    case 345u: goto L_08995984;
    case 346u: goto L_0899598C;
    case 347u: goto L_08995994;
    case 348u: goto L_089959AC;
    case 349u: goto L_089959B4;
    case 350u: goto L_089959BC;
    case 351u: goto L_089959D4;
    case 352u: goto L_089959DC;
    case 353u: goto L_089959E4;
    case 354u: goto L_089959EC;
    case 355u: goto L_08995A08;
    case 356u: goto L_08995A3C;
    case 357u: goto L_08995A50;
    case 358u: goto L_08995A60;
    case 359u: goto L_08995A70;
    case 360u: goto L_08995A78;
    case 361u: goto L_08995A80;
    case 362u: goto L_08995A8C;
    case 363u: goto L_08995A94;
    case 364u: goto L_08995A98;
    case 365u: goto L_08995ABC;
    case 366u: goto L_08995AC4;
    case 367u: goto L_08995AE0;
    case 368u: goto L_08995AF4;
    case 369u: goto L_08995B10;
    case 370u: goto L_08995B14;
    case 371u: goto L_08995B1C;
    case 372u: goto L_08995B38;
    case 373u: goto L_08995B78;
    case 374u: goto L_08995B8C;
    case 375u: goto L_08995BA0;
    case 376u: goto L_08995BB4;
    case 377u: goto L_08995BC8;
    case 378u: goto L_08995BDC;
    case 379u: goto L_08995BF8;
    case 380u: goto L_08995C00;
    case 381u: goto L_08995C08;
    case 382u: goto L_08995C24;
    case 383u: goto L_08995C2C;
    case 384u: goto L_08995C44;
    case 385u: goto L_08995C4C;
    case 386u: goto L_08995C64;
    case 387u: goto L_08995C78;
    case 388u: goto L_08995C94;
    case 389u: goto L_08995C9C;
    case 390u: goto L_08995CA0;
    case 391u: goto L_08995CA8;
    case 392u: goto L_08995CCC;
    case 393u: goto L_08995CD4;
    case 394u: goto L_08995CF0;
    case 395u: goto L_08995D04;
    case 396u: goto L_08995D20;
    case 397u: goto L_08995D24;
    case 398u: goto L_08995D2C;
    case 399u: goto L_08995D44;
    case 400u: goto L_08995D54;
    case 401u: goto L_08995D68;
    case 402u: goto L_08995D70;
    case 403u: goto L_08995D78;
    case 404u: goto L_08995D80;
    case 405u: goto L_08995D9C;
    case 406u: goto L_08995DAC;
    case 407u: goto L_08995DB8;
    case 408u: goto L_08995DCC;
    case 409u: goto L_08995DE0;
    case 410u: goto L_08995DE8;
    case 411u: goto L_08995E04;
    case 412u: goto L_08995E14;
    case 413u: goto L_08995E28;
    case 414u: goto L_08995E34;
    case 415u: goto L_08995E3C;
    case 416u: goto L_08995E58;
    case 417u: goto L_08995E74;
    case 418u: goto L_08995E80;
    case 419u: goto L_08995E8C;
    case 420u: goto L_08995E94;
    case 421u: goto L_08995E98;
    case 422u: goto L_08995EA4;
    case 423u: goto L_08995EB0;
    case 424u: goto L_08995EB8;
    case 425u: goto L_08995ED0;
    case 426u: goto L_08995EE4;
    case 427u: goto L_08995EFC;
    case 428u: goto L_08995F0C;
    case 429u: goto L_08995F18;
    case 430u: goto L_08995F20;
    case 431u: goto L_08995F2C;
    case 432u: goto L_08995F34;
    case 433u: goto L_08995F4C;
    case 434u: goto L_08995F5C;
    case 435u: goto L_08995F68;
    case 436u: goto L_08995F70;
    case 437u: goto L_08995F7C;
    case 438u: goto L_08995F84;
    case 439u: goto L_08995FA0;
    case 440u: goto L_08995FB0;
    case 441u: goto L_08995FBC;
    case 442u: goto L_08995FD8;
    case 443u: goto L_08995FF8;
    case 444u: goto L_08996000;
    case 445u: goto L_08996018;
    case 446u: goto L_08996024;
    case 447u: goto L_08996034;
    case 448u: goto L_0899603C;
    case 449u: goto L_08996044;
    case 450u: goto L_0899605C;
    case 451u: goto L_08996070;
    case 452u: goto L_0899608C;
    case 453u: goto L_089960D4;
    case 454u: goto L_089960DC;
    case 455u: goto L_089960E4;
    case 456u: goto L_089960EC;
    case 457u: goto L_089960F4;
    case 458u: goto L_0899610C;
    case 459u: goto L_08996120;
    case 460u: goto L_0899613C;
    case 461u: goto L_0899615C;
    case 462u: goto L_08996168;
    case 463u: goto L_08996174;
    case 464u: goto L_08996184;
    case 465u: goto L_0899618C;
    case 466u: goto L_08996198;
    case 467u: goto L_089961D4;
    case 468u: goto L_089961E8;
    case 469u: goto L_089961F0;
    case 470u: goto L_0899620C;
    case 471u: goto L_0899623C;
    case 472u: goto L_08996248;
    case 473u: goto L_0899624C;
    case 474u: goto L_08996254;
    case 475u: goto L_08996270;
    case 476u: goto L_089962CC;
    case 477u: goto L_089962E8;
    case 478u: goto L_08996344;
    case 479u: goto L_0899635C;
    case 480u: goto L_0899636C;
    case 481u: goto L_0899637C;
    case 482u: goto L_089963DC;
    case 483u: goto L_089963F0;
    case 484u: goto L_08996410;
    case 485u: goto L_0899641C;
    case 486u: goto L_08996428;
    case 487u: goto L_08996434;
    case 488u: goto L_08996438;
    case 489u: goto L_08996440;
    case 490u: goto L_08996458;
    case 491u: goto L_08996468;
    case 492u: goto L_08996494;
    case 493u: goto L_0899649C;
    case 494u: goto L_089964B8;
    case 495u: goto L_089964DC;
    case 496u: goto L_089964F4;
    case 497u: goto L_08996500;
    case 498u: goto L_08996518;
    case 499u: goto L_08996520;
    case 500u: goto L_08996538;
    case 501u: goto L_08996548;
    case 502u: goto L_08996558;
    case 503u: goto L_089965B8;
    case 504u: goto L_089965CC;
    case 505u: goto L_089965F8;
    case 506u: goto L_08996610;
    case 507u: goto L_0899661C;
    case 508u: goto L_08996624;
    case 509u: goto L_08996640;
    case 510u: goto L_08996650;
    case 511u: goto L_08996668;
    case 512u: goto L_08996674;
    case 513u: goto L_08996680;
    case 514u: goto L_0899668C;
    case 515u: goto L_08996690;
    case 516u: goto L_08996698;
    case 517u: goto L_089966B0;
    case 518u: goto L_089966C8;
    case 519u: goto L_089966D4;
    case 520u: goto L_089966EC;
    case 521u: goto L_089966F4;
    case 522u: goto L_08996710;
    case 523u: goto L_08996720;
    case 524u: goto L_0899672C;
    case 525u: goto L_0899673C;
    case 526u: goto L_0899674C;
    case 527u: goto L_08996754;
    case 528u: goto L_0899676C;
    case 529u: goto L_089967A0;
    case 530u: goto L_089967B0;
    case 531u: goto L_089967D0;
    case 532u: goto L_089967F4;
    case 533u: goto L_089967FC;
    case 534u: goto L_08996818;
    case 535u: goto L_0899682C;
    case 536u: goto L_08996850;
    case 537u: goto L_0899685C;
    case 538u: goto L_08996864;
    case 539u: goto L_0899687C;
    case 540u: goto L_0899688C;
    case 541u: goto L_089968A0;
    case 542u: goto L_089968BC;
    case 543u: goto L_089968F8;
    case 544u: goto L_08996900;
    case 545u: goto L_0899691C;
    case 546u: goto L_0899692C;
    case 547u: goto L_0899693C;
    case 548u: goto L_08996958;
    case 549u: goto L_08996968;
    case 550u: goto L_08996974;
    case 551u: goto L_08996984;
    case 552u: goto L_08996994;
    case 553u: goto L_0899699C;
    case 554u: goto L_089969BC;
    case 555u: goto L_089969D0;
    case 556u: goto L_089969D8;
    case 557u: goto L_089969E8;
    case 558u: goto L_089969EC;
    case 559u: goto L_08996A10;
    case 560u: goto L_08996A18;
    case 561u: goto L_08996A34;
    case 562u: goto L_08996A48;
    case 563u: goto L_08996A64;
    case 564u: goto L_08996A68;
    case 565u: goto L_08996A70;
    case 566u: goto L_08996A8C;
    case 567u: goto L_08996A9C;
    case 568u: goto L_08996AA8;
    case 569u: goto L_08996AB8;
    case 570u: goto L_08996AC8;
    case 571u: goto L_08996AD0;
    case 572u: goto L_08996AE8;
    case 573u: goto L_08996AF8;
    case 574u: goto L_08996B08;
    case 575u: goto L_08996B14;
    case 576u: goto L_08996B1C;
    case 577u: goto L_08996B24;
    case 578u: goto L_08996B38;
    case 579u: goto L_08996B3C;
    case 580u: goto L_08996B60;
    case 581u: goto L_08996B68;
    case 582u: goto L_08996B84;
    case 583u: goto L_08996B98;
    case 584u: goto L_08996BB4;
    case 585u: goto L_08996BB8;
    case 586u: goto L_08996BC0;
    case 587u: goto L_08996BD8;
    case 588u: goto L_08996BE8;
    case 589u: goto L_08996BF0;
    case 590u: goto L_08996BF4;
    case 591u: goto L_08996C18;
    case 592u: goto L_08996C20;
    case 593u: goto L_08996C3C;
    case 594u: goto L_08996C50;
    case 595u: goto L_08996C6C;
    case 596u: goto L_08996C70;
    case 597u: goto L_08996C78;
    case 598u: goto L_08996C90;
    case 599u: goto L_08996CA0;
    case 600u: goto L_08996CA8;
    case 601u: goto L_08996CBC;
    case 602u: goto L_08996CD0;
    case 603u: goto L_08996CD4;
    case 604u: goto L_08996CF8;
    case 605u: goto L_08996D00;
    case 606u: goto L_08996D1C;
    case 607u: goto L_08996D30;
    case 608u: goto L_08996D4C;
    case 609u: goto L_08996D50;
    case 610u: goto L_08996D58;
    case 611u: goto L_08996D74;
    case 612u: goto L_08996D94;
    case 613u: goto L_08996DA0;
    case 614u: goto L_08996DA4;
    case 615u: goto L_08996DB4;
    case 616u: goto L_08996DBC;
    case 617u: goto L_08996DC8;
    case 618u: goto L_08996DE8;
    case 619u: goto L_08996E00;
    case 620u: goto L_08996E14;
    case 621u: goto L_08996E1C;
    case 622u: goto L_08996E34;
    case 623u: goto L_08996E44;
    case 624u: goto L_08996E54;
    case 625u: goto L_08996E58;
    case 626u: goto L_08996E7C;
    case 627u: goto L_08996E84;
    case 628u: goto L_08996EA0;
    case 629u: goto L_08996EB4;
    case 630u: goto L_08996ED0;
    case 631u: goto L_08996ED4;
    case 632u: goto L_08996EDC;
    case 633u: goto L_08996EF4;
    case 634u: goto L_08996F00;
    case 635u: goto L_08996F10;
    case 636u: goto L_08996F18;
    case 637u: goto L_08996F20;
    case 638u: goto L_08996F3C;
    case 639u: goto L_08996F4C;
    case 640u: goto L_08996F58;
    case 641u: goto L_08996F8C;
    case 642u: goto L_08996FC0;
    case 643u: goto L_08996FC8;
    case 644u: goto L_08996FE4;
    case 645u: goto L_08996FF4;
    case 646u: goto L_08997000;
    case 647u: goto L_08997024;
    case 648u: goto L_0899702C;
    case 649u: goto L_08997040;
    case 650u: goto L_08997048;
    case 651u: goto L_08997068;
    case 652u: goto L_08997070;
    case 653u: goto L_08997074;
    case 654u: goto L_089970A8;
    case 655u: goto L_0899713C;
    case 656u: goto L_08997168;
    case 657u: goto L_0899719C;
    case 658u: goto L_089971A8;
    case 659u: goto L_089971BC;
    case 660u: goto L_089971D0;
    case 661u: goto L_089971E0;
    case 662u: goto L_089971FC;
    case 663u: goto L_08997218;
    case 664u: goto L_0899722C;
    case 665u: goto L_08997240;
    case 666u: goto L_0899724C;
    case 667u: goto L_08997254;
    case 668u: goto L_08997268;
    case 669u: goto L_08997280;
    case 670u: goto L_089972AC;
    case 671u: goto L_089972D0;
    case 672u: goto L_089972D8;
    case 673u: goto L_089972E4;
    case 674u: goto L_089972E8;
    case 675u: goto L_089972F8;
    case 676u: goto L_08997304;
    case 677u: goto L_08997310;
    case 678u: goto L_08997320;
    case 679u: goto L_08997330;
    case 680u: goto L_0899733C;
    case 681u: goto L_08997344;
    case 682u: goto L_08997350;
    case 683u: goto L_08997354;
    case 684u: goto L_0899735C;
    case 685u: goto L_08997368;
    case 686u: goto L_08997378;
    case 687u: goto L_0899738C;
    case 688u: goto L_08997394;
    case 689u: goto L_0899739C;
    case 690u: goto L_089973A8;
    case 691u: goto L_089973AC;
    case 692u: goto L_089973B4;
    case 693u: goto L_089973BC;
    case 694u: goto L_089973D0;
    case 695u: goto L_089973F8;
    case 696u: goto L_08997418;
    case 697u: goto L_0899742C;
    case 698u: goto L_08997438;
    case 699u: goto L_08997450;
    case 700u: goto L_08997474;
    case 701u: goto L_08997488;
    case 702u: goto L_08997494;
    case 703u: goto L_089974B8;
    case 704u: goto L_089974C0;
    case 705u: goto L_089974C8;
    case 706u: goto L_089974CC;
    case 707u: goto L_089974D4;
    case 708u: goto L_089974E0;
    case 709u: goto L_089974E8;
    case 710u: goto L_0899750C;
    case 711u: goto L_08997514;
    case 712u: goto L_08997520;
    case 713u: goto L_08997528;
    case 714u: goto L_08997534;
    case 715u: goto L_08997538;
    case 716u: goto L_08997550;
    case 717u: goto L_08997570;
    case 718u: goto L_0899759C;
    case 719u: goto L_089975A8;
    case 720u: goto L_089975B0;
    case 721u: goto L_089975BC;
    case 722u: goto L_089975D4;
    case 723u: goto L_089975F4;
    case 724u: goto L_08997628;
    case 725u: goto L_08997640;
    case 726u: goto L_08997658;
    case 727u: goto L_0899766C;
    case 728u: goto L_089976A4;
    case 729u: goto L_089976C4;
    case 730u: goto L_089976CC;
    case 731u: goto L_089976D4;
    case 732u: goto L_089976E0;
    case 733u: goto L_0899770C;
    case 734u: goto L_08997710;
    case 735u: goto L_08997724;
    case 736u: goto L_08997740;
    case 737u: goto L_08997748;
    case 738u: goto L_08997750;
    case 739u: goto L_08997760;
    case 740u: goto L_0899776C;
    case 741u: goto L_08997774;
    case 742u: goto L_0899777C;
    case 743u: goto L_08997788;
    case 744u: goto L_08997798;
    case 745u: goto L_08997810;
    case 746u: goto L_0899783C;
    case 747u: goto L_08997854;
    case 748u: goto L_0899785C;
    case 749u: goto L_08997860;
    case 750u: goto L_0899787C;
    case 751u: goto L_08997888;
    case 752u: goto L_089978A4;
    case 753u: goto L_089978B0;
    case 754u: goto L_089978B8;
    case 755u: goto L_089978C0;
    case 756u: goto L_089978C8;
    case 757u: goto L_089978D0;
    case 758u: goto L_089978D8;
    case 759u: goto L_089978E0;
    case 760u: goto L_089978F0;
    case 761u: goto L_08997900;
    case 762u: goto L_08997908;
    case 763u: goto L_08997910;
    case 764u: goto L_08997920;
    case 765u: goto L_08997930;
    case 766u: goto L_08997938;
    case 767u: goto L_08997940;
    case 768u: goto L_08997950;
    case 769u: goto L_08997960;
    case 770u: goto L_08997968;
    case 771u: goto L_08997970;
    case 772u: goto L_08997980;
    case 773u: goto L_08997990;
    case 774u: goto L_08997998;
    case 775u: goto L_089979A0;
    case 776u: goto L_089979B0;
    case 777u: goto L_089979C0;
    case 778u: goto L_089979C8;
    case 779u: goto L_089979D0;
    case 780u: goto L_089979E0;
    case 781u: goto L_089979F0;
    case 782u: goto L_089979F4;
    case 783u: goto L_08997A08;
    case 784u: goto L_08997A34;
    case 785u: goto L_08997A58;
    case 786u: goto L_08997A60;
    case 787u: goto L_08997A7C;
    case 788u: goto L_08997A88;
    case 789u: goto L_08997A90;
    case 790u: goto L_08997A9C;
    case 791u: goto L_08997AA4;
    case 792u: goto L_08997AAC;
    case 793u: goto L_08997AB4;
    case 794u: goto L_08997ABC;
    case 795u: goto L_08997AC8;
    case 796u: goto L_08997AD4;
    case 797u: goto L_08997AE0;
    case 798u: goto L_08997AE8;
    case 799u: goto L_08997AF4;
    case 800u: goto L_08997B00;
    case 801u: goto L_08997B0C;
    case 802u: goto L_08997B18;
    case 803u: goto L_08997B3C;
    case 804u: goto L_08997B64;
    case 805u: goto L_08997B7C;
    case 806u: goto L_08997B88;
    case 807u: goto L_08997B94;
    case 808u: goto L_08997BA0;
    case 809u: goto L_08997BB4;
    case 810u: goto L_08997BC4;
    case 811u: goto L_08997BD4;
    case 812u: goto L_08997BF0;
    case 813u: goto L_08997C04;
    case 814u: goto L_08997C0C;
    case 815u: goto L_08997C1C;
    case 816u: goto L_08997C24;
    case 817u: goto L_08997C40;
    case 818u: goto L_08997C50;
    case 819u: goto L_08997C60;
    case 820u: goto L_08997C84;
    case 821u: goto L_08997C98;
    case 822u: goto L_08997CC8;
    case 823u: goto L_08997CE4;
    case 824u: goto L_08997D04;
    case 825u: goto L_08997D3C;
    case 826u: goto L_08997D54;
    case 827u: goto L_08997D68;
    case 828u: goto L_08997D70;
    case 829u: goto L_08997D80;
    case 830u: goto L_08997DA0;
    case 831u: goto L_08997DB0;
    case 832u: goto L_08997DC0;
    case 833u: goto L_08997DD0;
    case 834u: goto L_08997DE4;
    case 835u: goto L_08997DF0;
    case 836u: goto L_08997E04;
    case 837u: goto L_08997E18;
    case 838u: goto L_08997E20;
    case 839u: goto L_08997E28;
    case 840u: goto L_08997E38;
    case 841u: goto L_08997E4C;
    case 842u: goto L_08997E54;
    case 843u: goto L_08997E64;
    case 844u: goto L_08997E78;
    case 845u: goto L_08997E8C;
    case 846u: goto L_08997E94;
    case 847u: goto L_08997EA4;
    case 848u: goto L_08997EB8;
    case 849u: goto L_08997EC8;
    case 850u: goto L_08997EDC;
    case 851u: goto L_08997F00;
    case 852u: goto L_08997F24;
    case 853u: goto L_08997F50;
    case 854u: goto L_08997F60;
    case 855u: goto L_08997F70;
    case 856u: goto L_08997F80;
    case 857u: goto L_08997F94;
    case 858u: goto L_08997FA0;
    case 859u: goto L_08997FC4;
    case 860u: goto L_08997FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08994000:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0899402C;
    }
    goto L_08994018;
L_08994018:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0899404C;
      }
      goto L_0899402C;
    }
L_0899402C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899404C;
      }
      goto L_08994048;
    }
L_08994048:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0899404C;
L_0899404C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899484C;
      }
      goto L_08994054;
    }
L_08994054:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0899406Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899406Cu) goto L_0899406C;
    return;
L_0899406C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08994088u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08994088u) goto L_08994088;
    return;
L_08994088:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (2269u << 16u);
        goto L_089940F0;
    }
    goto L_089940A4;
L_089940A4:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(132))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_089940D8;
      }
      goto L_089940B8;
    }
L_089940B8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(132))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089940D8;
      }
      goto L_089940C8;
    }
L_089940C8:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(132))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_089940D8;
L_089940D8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089940A4;
      }
      goto L_089940EC;
    }
L_089940EC:
    ctx.gpr[4] = (2269u << 16u);
    goto L_089940F0;
L_089940F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08994144;
      }
      goto L_08994130;
    }
L_08994130:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08994144;
L_08994144:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08994154u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x08986604u>(ctx, &aot_mem) && ctx.pc == 0x08994154u) goto L_08994154;
    return;
L_08994154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08994164;
      }
      goto L_08994160;
    }
L_08994160:
    ctx.gpr[17] = (0u | 1u);
    goto L_08994164;
L_08994164:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08994190;
      }
      goto L_08994188;
    }
L_08994188:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089941E0;
      }
      goto L_08994190;
    }
L_08994190:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089941C0;
    }
    goto L_089941AC;
L_089941AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089941E0;
      }
      goto L_089941C0;
    }
L_089941C0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089941E0;
      }
      goto L_089941DC;
    }
L_089941DC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089941E0;
L_089941E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899484C;
      }
      goto L_089941E8;
    }
L_089941E8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08994204u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08994204u) goto L_08994204;
    return;
L_08994204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994240;
      }
      goto L_08994234;
    }
L_08994234:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(363), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08994244;
      }
      goto L_08994240;
    }
L_08994240:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(363), static_cast<std::uint8_t>(0u));
    goto L_08994244;
L_08994244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899484C;
      }
      goto L_0899424C;
    }
L_0899424C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08994268u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08994268u) goto L_08994268;
    return;
L_08994268:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08994278u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08994278u) goto L_08994278;
    return;
L_08994278:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08994290u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08994290u) goto L_08994290;
    return;
L_08994290:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089942D0u);
    ctx.gpr[5] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1046u, 0x08893734u>(ctx, &aot_mem) && ctx.pc == 0x089942D0u) goto L_089942D0;
    return;
L_089942D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899484C;
      }
      goto L_089942D8;
    }
L_089942D8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089942F4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089942F4u) goto L_089942F4;
    return;
L_089942F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08994314u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 160u, 0x089F935Cu>(ctx, &aot_mem) && ctx.pc == 0x08994314u) goto L_08994314;
    return;
L_08994314:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899484C;
      }
      goto L_0899431C;
    }
L_0899431C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08994338u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08994338u) goto L_08994338;
    return;
L_08994338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15440)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1030), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15440)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1031), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0899484C;
      }
      goto L_0899436C;
    }
L_0899436C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08994384u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08994384u) goto L_08994384;
    return;
L_08994384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089943A0;
      }
      goto L_08994390;
    }
L_08994390:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1669), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089943A8;
      }
      goto L_089943A0;
    }
L_089943A0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1669), static_cast<std::uint8_t>(0u));
    goto L_089943A8;
L_089943A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899484C;
      }
      goto L_089943B0;
    }
L_089943B0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089943C8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089943C8u) goto L_089943C8;
    return;
L_089943C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089943D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089943D8u) goto L_089943D8;
    return;
L_089943D8:
    ctx.gpr[31] = (0x089943E0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 211u, 0x0880CFA8u>(ctx, &aot_mem) && ctx.pc == 0x089943E0u) goto L_089943E0;
    return;
L_089943E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899484C;
      }
      goto L_089943E8;
    }
L_089943E8:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08994408u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08994408u) goto L_08994408;
    return;
L_08994408:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089944A0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089944A0u) goto L_089944A0;
    return;
L_089944A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899484C;
      }
      goto L_089944A8;
    }
L_089944A8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089944C8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089944C8u) goto L_089944C8;
    return;
L_089944C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899455Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0899455Cu) goto L_0899455C;
    return;
L_0899455C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899484C;
      }
      goto L_08994564;
    }
L_08994564:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0899457Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899457Cu) goto L_0899457C;
    return;
L_0899457C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0899458Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0899458Cu) goto L_0899458C;
    return;
L_0899458C:
    ctx.gpr[31] = (0x08994594u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 176u, 0x0880CD10u>(ctx, &aot_mem) && ctx.pc == 0x08994594u) goto L_08994594;
    return;
L_08994594:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899484C;
      }
      goto L_0899459C;
    }
L_0899459C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089945B4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089945B4u) goto L_089945B4;
    return;
L_089945B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089945C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089945C4u) goto L_089945C4;
    return;
L_089945C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089945D8;
      }
      goto L_089945D4;
    }
L_089945D4:
    ctx.gpr[4] = (0u | 1u);
    goto L_089945D8;
L_089945D8:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08994604;
      }
      goto L_089945FC;
    }
L_089945FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08994654;
      }
      goto L_08994604;
    }
L_08994604:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08994634;
    }
    goto L_08994620;
L_08994620:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08994654;
      }
      goto L_08994634;
    }
L_08994634:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994654;
      }
      goto L_08994650;
    }
L_08994650:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08994654;
L_08994654:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899484C;
      }
      goto L_0899465C;
    }
L_0899465C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08994678u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08994678u) goto L_08994678;
    return;
L_08994678:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08994688u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08994688u) goto L_08994688;
    return;
L_08994688:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0899469Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0899469Cu) goto L_0899469C;
    return;
L_0899469C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(452), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899484C;
      }
      goto L_089946A8;
    }
L_089946A8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089946C4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089946C4u) goto L_089946C4;
    return;
L_089946C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089946D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089946D4u) goto L_089946D4;
    return;
L_089946D4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[31] = (0x08994704u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 106u, 0x088C08B4u>(ctx, &aot_mem) && ctx.pc == 0x08994704u) goto L_08994704;
    return;
L_08994704:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994710;
      }
      goto L_0899470C;
    }
L_0899470C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08994710;
L_08994710:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_0899473C;
      }
      goto L_08994734;
    }
L_08994734:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0899478C;
      }
      goto L_0899473C;
    }
L_0899473C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0899476C;
    }
    goto L_08994758;
L_08994758:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0899478C;
      }
      goto L_0899476C;
    }
L_0899476C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899478C;
      }
      goto L_08994788;
    }
L_08994788:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0899478C;
L_0899478C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899484C;
      }
      goto L_08994794;
    }
L_08994794:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089947D4;
      }
      goto L_089947A4;
    }
L_089947A4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089947B0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089947B0u) goto L_089947B0;
    return;
L_089947B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089947C8;
      }
      goto L_089947BC;
    }
L_089947BC:
    ctx.gpr[31] = (0x089947C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089947C4u) goto L_089947C4;
    return;
L_089947C4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089947C8;
L_089947C8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089947D4;
L_089947D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089947F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x089947F0u) goto L_089947F0;
    return;
L_089947F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08994814u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08994814u) goto L_08994814;
    return;
L_08994814:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24620)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08994840;
      }
      goto L_08994824;
    }
L_08994824:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24620), ctx.gpr[16]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 179u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08994840u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08994840u) goto L_08994840;
    return;
L_08994840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899484C;
      }
      goto L_08994848;
    }
L_08994848:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0899484C;
L_0899484C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994874:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1305));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(97) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08997070;
      }
      goto L_089948B4;
    }
L_089948B4:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1305));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20840)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089948D0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089948ECu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089948ECu) goto L_089948EC;
    return;
L_089948EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089948FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089948FCu) goto L_089948FC;
    return;
L_089948FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_08994928;
      }
      goto L_08994918;
    }
L_08994918:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(418)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(418), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08994938;
      }
      goto L_08994928;
    }
L_08994928:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(418)));
    ctx.gpr[6] = (~(ctx.gpr[16] | 0u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(418), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08994938;
L_08994938:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08994940;
    }
L_08994940:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08994948;
    }
L_08994948:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08994964u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08994964u) goto L_08994964;
    return;
L_08994964:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0899499C;
      }
      goto L_08994984;
    }
L_08994984:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08994990u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08994990u) goto L_08994990;
    return;
L_08994990:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[20];
    goto L_0899499C;
L_0899499C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x089949B8u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089949B8u) goto L_089949B8;
    return;
L_089949B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08994A04;
      }
      goto L_089949D4;
    }
L_089949D4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089949E0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089949E0u) goto L_089949E0;
    return;
L_089949E0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089949F8;
      }
      goto L_089949EC;
    }
L_089949EC:
    ctx.gpr[31] = (0x089949F4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x089949F4u) goto L_089949F4;
    return;
L_089949F4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089949F8;
L_089949F8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08994A04;
L_08994A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08994A10u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08994A10u) goto L_08994A10;
    return;
L_08994A10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08994A1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x08994A1Cu) goto L_08994A1C;
    return;
L_08994A1C:
    ctx.gpr[31] = (0x08994A24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A822ACu>(ctx, &aot_mem) && ctx.pc == 0x08994A24u) goto L_08994A24;
    return;
L_08994A24:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08994A30;
      }
      goto L_08994A30;
    }
L_08994A30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(302)));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994A64u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 206u, 0x08A84F08u>(ctx, &aot_mem) && ctx.pc == 0x08994A64u) goto L_08994A64;
    return;
L_08994A64:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08994A7Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08994A7Cu) goto L_08994A7C;
    return;
L_08994A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08994A84;
    }
L_08994A84:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08994AA0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08994AA0u) goto L_08994AA0;
    return;
L_08994AA0:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08994AD8;
      }
      goto L_08994AC0;
    }
L_08994AC0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08994ACCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08994ACCu) goto L_08994ACC;
    return;
L_08994ACC:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[20];
    goto L_08994AD8;
L_08994AD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08994AF4u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08994AF4u) goto L_08994AF4;
    return;
L_08994AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08994B40;
      }
      goto L_08994B10;
    }
L_08994B10:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08994B1Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08994B1Cu) goto L_08994B1C;
    return;
L_08994B1C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994B34;
      }
      goto L_08994B28;
    }
L_08994B28:
    ctx.gpr[31] = (0x08994B30u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08994B30u) goto L_08994B30;
    return;
L_08994B30:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08994B34;
L_08994B34:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08994B40;
L_08994B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08994B4Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08994B4Cu) goto L_08994B4C;
    return;
L_08994B4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08994B58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x08994B58u) goto L_08994B58;
    return;
L_08994B58:
    ctx.gpr[31] = (0x08994B60u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A822ACu>(ctx, &aot_mem) && ctx.pc == 0x08994B60u) goto L_08994B60;
    return;
L_08994B60:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08994B70;
    }
    goto L_08994B6C;
L_08994B6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08994B70;
L_08994B70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(304)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994BA8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 206u, 0x08A84F08u>(ctx, &aot_mem) && ctx.pc == 0x08994BA8u) goto L_08994BA8;
    return;
L_08994BA8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08994BBCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08994BBCu) goto L_08994BBC;
    return;
L_08994BBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08994BC4;
    }
L_08994BC4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08994BE0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08994BE0u) goto L_08994BE0;
    return;
L_08994BE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08994BF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08994BF0u) goto L_08994BF0;
    return;
L_08994BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08994C18;
      }
      goto L_08994BFC;
    }
L_08994BFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08994C38;
      }
      goto L_08994C18;
    }
L_08994C18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08994C38;
L_08994C38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08994C40;
    }
L_08994C40:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08994C5Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08994C5Cu) goto L_08994C5C;
    return;
L_08994C5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[31] = (0x08994C6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08994C6Cu) goto L_08994C6C;
    return;
L_08994C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08994C7Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08994C7Cu) goto L_08994C7C;
    return;
L_08994C7C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08994CC8;
      }
      goto L_08994C88;
    }
L_08994C88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1920)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994CD4;
      }
      goto L_08994C94;
    }
L_08994C94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1920)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08994CA4;
      }
      goto L_08994CA0;
    }
L_08994CA0:
    ctx.gpr[17] = (0u | 1u);
    goto L_08994CA4;
L_08994CA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994CD4;
      }
      goto L_08994CB0;
    }
L_08994CB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08994CD4;
      }
      goto L_08994CC0;
    }
L_08994CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08994CD4;
      }
      goto L_08994CC8;
    }
L_08994CC8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08994CD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21580));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08994CD4u) goto L_08994CD4;
    return;
L_08994CD4:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08994D00;
      }
      goto L_08994CF8;
    }
L_08994CF8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08994D50;
      }
      goto L_08994D00;
    }
L_08994D00:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08994D30;
    }
    goto L_08994D1C;
L_08994D1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08994D50;
      }
      goto L_08994D30;
    }
L_08994D30:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994D50;
      }
      goto L_08994D4C;
    }
L_08994D4C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08994D50;
L_08994D50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08994D58;
    }
L_08994D58:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08994D74u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08994D74u) goto L_08994D74;
    return;
L_08994D74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08994D84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08994D84u) goto L_08994D84;
    return;
L_08994D84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08994D98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08994D98u) goto L_08994D98;
    return;
L_08994D98:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08994DC4;
      }
      goto L_08994DA4;
    }
L_08994DA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1920)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994DD0;
      }
      goto L_08994DB0;
    }
L_08994DB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1920)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08994DD0;
      }
      goto L_08994DBC;
    }
L_08994DBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08994DD0;
      }
      goto L_08994DC4;
    }
L_08994DC4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08994DD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21516));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08994DD0u) goto L_08994DD0;
    return;
L_08994DD0:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08994DFC;
      }
      goto L_08994DF4;
    }
L_08994DF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08994E4C;
      }
      goto L_08994DFC;
    }
L_08994DFC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08994E2C;
    }
    goto L_08994E18;
L_08994E18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08994E4C;
      }
      goto L_08994E2C;
    }
L_08994E2C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994E4C;
      }
      goto L_08994E48;
    }
L_08994E48:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08994E4C;
L_08994E4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08994E54;
    }
L_08994E54:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08994E70u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08994E70u) goto L_08994E70;
    return;
L_08994E70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08994E80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08994E80u) goto L_08994E80;
    return;
L_08994E80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08994E94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08994E94u) goto L_08994E94;
    return;
L_08994E94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08994EE0;
      }
      goto L_08994EA0;
    }
L_08994EA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(664)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994EEC;
      }
      goto L_08994EAC;
    }
L_08994EAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(664)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08994EBC;
      }
      goto L_08994EB8;
    }
L_08994EB8:
    ctx.gpr[17] = (0u | 1u);
    goto L_08994EBC;
L_08994EBC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994EEC;
      }
      goto L_08994EC8;
    }
L_08994EC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(664)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08994EEC;
      }
      goto L_08994ED8;
    }
L_08994ED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08994EEC;
      }
      goto L_08994EE0;
    }
L_08994EE0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08994EECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21460));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08994EECu) goto L_08994EEC;
    return;
L_08994EEC:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08994F18;
      }
      goto L_08994F10;
    }
L_08994F10:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08994F68;
      }
      goto L_08994F18;
    }
L_08994F18:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08994F48;
    }
    goto L_08994F34;
L_08994F34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08994F68;
      }
      goto L_08994F48;
    }
L_08994F48:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994F68;
      }
      goto L_08994F64;
    }
L_08994F64:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08994F68;
L_08994F68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08994F70;
    }
L_08994F70:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08994F8Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08994F8Cu) goto L_08994F8C;
    return;
L_08994F8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[31] = (0x08994F9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08994F9Cu) goto L_08994F9C;
    return;
L_08994F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08994FACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08994FACu) goto L_08994FAC;
    return;
L_08994FAC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08994FD8;
      }
      goto L_08994FB8;
    }
L_08994FB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(664)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994FE4;
      }
      goto L_08994FC4;
    }
L_08994FC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(664)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08994FE4;
      }
      goto L_08994FD0;
    }
L_08994FD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08994FE4;
      }
      goto L_08994FD8;
    }
L_08994FD8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08994FE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21408));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08994FE4u) goto L_08994FE4;
    return;
L_08994FE4:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08995010;
      }
      goto L_08995008;
    }
L_08995008:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08995060;
      }
      goto L_08995010;
    }
L_08995010:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08995040;
    }
    goto L_0899502C;
L_0899502C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08995060;
      }
      goto L_08995040;
    }
L_08995040:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995060;
      }
      goto L_0899505C;
    }
L_0899505C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08995060;
L_08995060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08995068;
    }
L_08995068:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08995074u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 188u, 0x08864D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08995074u) goto L_08995074;
    return;
L_08995074:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 65u);
      if (branch_taken) {
          goto L_0899508C;
      }
      goto L_08995084;
    }
L_08995084:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08995098;
      }
      goto L_0899508C;
    }
L_0899508C:
    ctx.gpr[5] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089950A4;
      }
      goto L_08995098;
    }
L_08995098:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    goto L_089950A4;
L_089950A4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089950B4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089950B4u) goto L_089950B4;
    return;
L_089950B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089950BC;
    }
L_089950BC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089950D4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089950D4u) goto L_089950D4;
    return;
L_089950D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089950E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089950E4u) goto L_089950E4;
    return;
L_089950E4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08995108;
      }
      goto L_089950F0;
    }
L_089950F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995108;
      }
      goto L_08995104;
    }
L_08995104:
    ctx.gpr[4] = (0u | 1u);
    goto L_08995108;
L_08995108:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08995134;
      }
      goto L_0899512C;
    }
L_0899512C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08995184;
      }
      goto L_08995134;
    }
L_08995134:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08995164;
    }
    goto L_08995150;
L_08995150:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08995184;
      }
      goto L_08995164;
    }
L_08995164:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995184;
      }
      goto L_08995180;
    }
L_08995180:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08995184;
L_08995184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_0899518C;
    }
L_0899518C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(938), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_0899519C;
    }
L_0899519C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089951B8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089951B8u) goto L_089951B8;
    return;
L_089951B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089951CCu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 770u, 0x0880747Cu>(ctx, &aot_mem) && ctx.pc == 0x089951CCu) goto L_089951CC;
    return;
L_089951CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089951D8;
      }
      goto L_089951D4;
    }
L_089951D4:
    ctx.gpr[17] = (0u | 1u);
    goto L_089951D8;
L_089951D8:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08995204;
      }
      goto L_089951FC;
    }
L_089951FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08995254;
      }
      goto L_08995204;
    }
L_08995204:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08995234;
    }
    goto L_08995220;
L_08995220:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08995254;
      }
      goto L_08995234;
    }
L_08995234:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995254;
      }
      goto L_08995250;
    }
L_08995250:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08995254;
L_08995254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_0899525C;
    }
L_0899525C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08995278u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995278u) goto L_08995278;
    return;
L_08995278:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x08995288u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08995288u) goto L_08995288;
    return;
L_08995288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08995298u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08995298u) goto L_08995298;
    return;
L_08995298:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089952A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 587u, 0x08AE7838u>(ctx, &aot_mem) && ctx.pc == 0x089952A8u) goto L_089952A8;
    return;
L_089952A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089952B0;
    }
L_089952B0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089952CCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089952CCu) goto L_089952CC;
    return;
L_089952CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[31] = (0x089952DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089952DCu) goto L_089952DC;
    return;
L_089952DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089952ECu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089952ECu) goto L_089952EC;
    return;
L_089952EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08995310u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08995310u) goto L_08995310;
    return;
L_08995310:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0899532Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 590u, 0x08AE788Cu>(ctx, &aot_mem) && ctx.pc == 0x0899532Cu) goto L_0899532C;
    return;
L_0899532C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08995334;
    }
L_08995334:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995350u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995350u) goto L_08995350;
    return;
L_08995350:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995360u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08995360u) goto L_08995360;
    return;
L_08995360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08995380;
      }
      goto L_0899536C;
    }
L_0899536C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08995394;
      }
      goto L_08995380;
    }
L_08995380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_08995394;
L_08995394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_0899539C;
    }
L_0899539C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089953B4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089953B4u) goto L_089953B4;
    return;
L_089953B4:
    ctx.gpr[31] = (0x089953BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 185u, 0x08844F68u>(ctx, &aot_mem) && ctx.pc == 0x089953BCu) goto L_089953BC;
    return;
L_089953BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089953C4;
    }
L_089953C4:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089953DCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089953DCu) goto L_089953DC;
    return;
L_089953DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089953E4;
    }
L_089953E4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995400u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995400u) goto L_08995400;
    return;
L_08995400:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995410u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08995410u) goto L_08995410;
    return;
L_08995410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0899542C;
      }
      goto L_0899541C;
    }
L_0899541C:
    ctx.gpr[31] = (0x08995424u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 468u, 0x089A20A0u>(ctx, &aot_mem) && ctx.pc == 0x08995424u) goto L_08995424;
    return;
L_08995424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08995434;
      }
      goto L_0899542C;
    }
L_0899542C:
    ctx.gpr[31] = (0x08995434u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 487u, 0x089A21CCu>(ctx, &aot_mem) && ctx.pc == 0x08995434u) goto L_08995434;
    return;
L_08995434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_0899543C;
    }
L_0899543C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995458u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995458u) goto L_08995458;
    return;
L_08995458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2992), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2993), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2992)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089954B0;
      }
      goto L_089954A0;
    }
L_089954A0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x089954B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7128));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 367u, 0x088E9FE0u>(ctx, &aot_mem) && ctx.pc == 0x089954B0u) goto L_089954B0;
    return;
L_089954B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089954B8;
    }
L_089954B8:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089954D0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089954D0u) goto L_089954D0;
    return;
L_089954D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089954D8;
    }
L_089954D8:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089954F0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089954F0u) goto L_089954F0;
    return;
L_089954F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089954F8;
    }
L_089954F8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995510u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995510u) goto L_08995510;
    return;
L_08995510:
    ctx.gpr[31] = (0x08995518u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 260u, 0x088453A8u>(ctx, &aot_mem) && ctx.pc == 0x08995518u) goto L_08995518;
    return;
L_08995518:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08995520;
    }
L_08995520:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995538u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995538u) goto L_08995538;
    return;
L_08995538:
    ctx.gpr[31] = (0x08995540u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 261u, 0x088453C4u>(ctx, &aot_mem) && ctx.pc == 0x08995540u) goto L_08995540;
    return;
L_08995540:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08995548;
    }
L_08995548:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995564u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995564u) goto L_08995564;
    return;
L_08995564:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995574u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08995574u) goto L_08995574;
    return;
L_08995574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08995598;
      }
      goto L_08995580;
    }
L_08995580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089955A8;
      }
      goto L_08995598;
    }
L_08995598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089955A8;
L_089955A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089955B0;
    }
L_089955B0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089955C8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089955C8u) goto L_089955C8;
    return;
L_089955C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089955D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089955D8u) goto L_089955D8;
    return;
L_089955D8:
    ctx.gpr[31] = (0x089955E0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089955E0u) goto L_089955E0;
    return;
L_089955E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089955E8;
    }
L_089955E8:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08995600u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995600u) goto L_08995600;
    return;
L_08995600:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08995614;
L_08995614:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08995724;
      }
      goto L_0899561C;
    }
L_0899561C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08995724;
      }
      goto L_08995628;
    }
L_08995628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
      if (branch_taken) {
          goto L_0899564C;
      }
      goto L_08995644;
    }
L_08995644:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08995678;
      }
      goto L_0899564C;
    }
L_0899564C:
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_08995678;
L_08995678:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899571C;
      }
      goto L_08995680;
    }
L_08995680:
    ctx.gpr[31] = (0x08995688u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x08995688u) goto L_08995688;
    return;
L_08995688:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089956A8;
      }
      goto L_08995694;
    }
L_08995694:
    ctx.gpr[31] = (0x0899569Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0899569Cu) goto L_0899569C;
    return;
L_0899569C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899571C;
      }
      goto L_089956A8;
    }
L_089956A8:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089956D0;
      }
      goto L_089956C0;
    }
L_089956C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0899571C;
      }
      goto L_089956D0;
    }
L_089956D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899571C;
      }
      goto L_089956E0;
    }
L_089956E0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08995700u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A287F8u>(ctx, &aot_mem) && ctx.pc == 0x08995700u) goto L_08995700;
    return;
L_08995700:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899571C;
      }
      goto L_08995708;
    }
L_08995708:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08995718u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x08995718u) goto L_08995718;
    return;
L_08995718:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0899571C;
L_0899571C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08995614;
      }
      goto L_08995724;
    }
L_08995724:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899573Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0899573Cu) goto L_0899573C;
    return;
L_0899573C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08995744;
    }
L_08995744:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995760u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995760u) goto L_08995760;
    return;
L_08995760:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995770u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08995770u) goto L_08995770;
    return;
L_08995770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08995790;
      }
      goto L_0899577C;
    }
L_0899577C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0899579C;
      }
      goto L_08995790;
    }
L_08995790:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0899579C;
L_0899579C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089957A4;
    }
L_089957A4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089957C0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089957C0u) goto L_089957C0;
    return;
L_089957C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995808;
      }
      goto L_089957F0;
    }
L_089957F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(412), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08995820;
      }
      goto L_08995808;
    }
L_08995808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (64512u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(412), ctx.gpr[5]);
    goto L_08995820;
L_08995820:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08995828;
    }
L_08995828:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995840u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995840u) goto L_08995840;
    return;
L_08995840:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995850u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08995850u) goto L_08995850;
    return;
L_08995850:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(150));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995964;
      }
      goto L_08995870;
    }
L_08995870:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 35u);
    ctx.gpr[31] = (0x08995884u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 110u, 0x08850B94u>(ctx, &aot_mem) && ctx.pc == 0x08995884u) goto L_08995884;
    return;
L_08995884:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25856));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899590Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 775u, 0x08857EF8u>(ctx, &aot_mem) && ctx.pc == 0x0899590Cu) goto L_0899590C;
    return;
L_0899590C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (15564u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08995940u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 278u, 0x08851A70u>(ctx, &aot_mem) && ctx.pc == 0x08995940u) goto L_08995940;
    return;
L_08995940:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 55u);
    ctx.gpr[31] = (0x08995958u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08995958u) goto L_08995958;
    return;
L_08995958:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), ctx.gpr[4]);
    goto L_08995964;
L_08995964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_0899596C;
    }
L_0899596C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995984u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995984u) goto L_08995984;
    return;
L_08995984:
    ctx.gpr[31] = (0x0899598Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 262u, 0x088453E0u>(ctx, &aot_mem) && ctx.pc == 0x0899598Cu) goto L_0899598C;
    return;
L_0899598C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08995994;
    }
L_08995994:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089959ACu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089959ACu) goto L_089959AC;
    return;
L_089959AC:
    ctx.gpr[31] = (0x089959B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 269u, 0x08845450u>(ctx, &aot_mem) && ctx.pc == 0x089959B4u) goto L_089959B4;
    return;
L_089959B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089959BC;
    }
L_089959BC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089959D4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089959D4u) goto L_089959D4;
    return;
L_089959D4:
    ctx.gpr[31] = (0x089959DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 270u, 0x08845464u>(ctx, &aot_mem) && ctx.pc == 0x089959DCu) goto L_089959DC;
    return;
L_089959DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089959E4;
    }
L_089959E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089959EC;
    }
L_089959EC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995A08u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995A08u) goto L_08995A08;
    return;
L_08995A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995A3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08995A3Cu) goto L_08995A3C;
    return;
L_08995A3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08995A80;
      }
      goto L_08995A50;
    }
L_08995A50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995A80;
      }
      goto L_08995A60;
    }
L_08995A60:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08995A70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 261u, 0x08A0E078u>(ctx, &aot_mem) && ctx.pc == 0x08995A70u) goto L_08995A70;
    return;
L_08995A70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995A98;
      }
      goto L_08995A78;
    }
L_08995A78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08995A98;
      }
      goto L_08995A80;
    }
L_08995A80:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08995A8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 261u, 0x08A0E078u>(ctx, &aot_mem) && ctx.pc == 0x08995A8Cu) goto L_08995A8C;
    return;
L_08995A8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995A98;
      }
      goto L_08995A94;
    }
L_08995A94:
    ctx.gpr[18] = (0u | 1u);
    goto L_08995A98;
L_08995A98:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08995AC4;
      }
      goto L_08995ABC;
    }
L_08995ABC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08995B14;
      }
      goto L_08995AC4;
    }
L_08995AC4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08995AF4;
    }
    goto L_08995AE0;
L_08995AE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08995B14;
      }
      goto L_08995AF4;
    }
L_08995AF4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995B14;
      }
      goto L_08995B10;
    }
L_08995B10:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08995B14;
L_08995B14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08995B1C;
    }
L_08995B1C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08995B38u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995B38u) goto L_08995B38;
    return;
L_08995B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08995B78u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x08995B78u) goto L_08995B78;
    return;
L_08995B78:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[26];
    ctx.gpr[31] = (0x08995B8Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x08995B8Cu) goto L_08995B8C;
    return;
L_08995B8C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[28];
    ctx.gpr[31] = (0x08995BA0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x08995BA0u) goto L_08995BA0;
    return;
L_08995BA0:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[30];
    ctx.gpr[31] = (0x08995BB4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x08995BB4u) goto L_08995BB4;
    return;
L_08995BB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[31] = (0x08995BC8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x08995BC8u) goto L_08995BC8;
    return;
L_08995BC8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[28] = ctx.fpr[13] + ctx.fpr[28];
    ctx.gpr[31] = (0x08995BDCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x08995BDCu) goto L_08995BDC;
    return;
L_08995BDC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.fpr[30] = ctx.fpr[14] + ctx.fpr[30];
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08995BF8;
L_08995BF8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08995CA8;
      }
      goto L_08995C00;
    }
L_08995C00:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08995CA8;
      }
      goto L_08995C08;
    }
L_08995C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_08995C2C;
      }
      goto L_08995C24;
    }
L_08995C24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08995C44;
      }
      goto L_08995C2C;
    }
L_08995C2C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08995C44;
L_08995C44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995CA0;
      }
      goto L_08995C4C;
    }
L_08995C4C:
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (2269u << 16u);
      if (branch_taken) {
          goto L_08995C78;
      }
      goto L_08995C64;
    }
L_08995C64:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08995CA0;
      }
      goto L_08995C78;
    }
L_08995C78:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08995C94u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28888u>(ctx, &aot_mem) && ctx.pc == 0x08995C94u) goto L_08995C94;
    return;
L_08995C94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995CA0;
      }
      goto L_08995C9C;
    }
L_08995C9C:
    ctx.gpr[18] = (0u | 1u);
    goto L_08995CA0;
L_08995CA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08995BF8;
      }
      goto L_08995CA8;
    }
L_08995CA8:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08995CD4;
      }
      goto L_08995CCC;
    }
L_08995CCC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08995D24;
      }
      goto L_08995CD4;
    }
L_08995CD4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08995D04;
    }
    goto L_08995CF0;
L_08995CF0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08995D24;
      }
      goto L_08995D04;
    }
L_08995D04:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995D24;
      }
      goto L_08995D20;
    }
L_08995D20:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08995D24;
L_08995D24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08995D2C;
    }
L_08995D2C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995D44u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995D44u) goto L_08995D44;
    return;
L_08995D44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995D54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08995D54u) goto L_08995D54;
    return;
L_08995D54:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08995D78;
      }
      goto L_08995D68;
    }
L_08995D68:
    ctx.gpr[31] = (0x08995D70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x08995D70u) goto L_08995D70;
    return;
L_08995D70:
    ctx.gpr[31] = (0x08995D78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08995D78u) goto L_08995D78;
    return;
L_08995D78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08995D80;
    }
L_08995D80:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995D9Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995D9Cu) goto L_08995D9C;
    return;
L_08995D9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995DACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08995DACu) goto L_08995DAC;
    return;
L_08995DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08995DCC;
      }
      goto L_08995DB8;
    }
L_08995DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08995DE0;
      }
      goto L_08995DCC;
    }
L_08995DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_08995DE0;
L_08995DE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08995DE8;
    }
L_08995DE8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995E04u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995E04u) goto L_08995E04;
    return;
L_08995E04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995E14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08995E14u) goto L_08995E14;
    return;
L_08995E14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08995E28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08995E28u) goto L_08995E28;
    return;
L_08995E28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08995E34u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 592u, 0x08AE78C4u>(ctx, &aot_mem) && ctx.pc == 0x08995E34u) goto L_08995E34;
    return;
L_08995E34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08995E3C;
    }
L_08995E3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08995E58u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08995E58u) goto L_08995E58;
    return;
L_08995E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08995EA4;
      }
      goto L_08995E74;
    }
L_08995E74:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08995E80u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08995E80u) goto L_08995E80;
    return;
L_08995E80:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995E98;
      }
      goto L_08995E8C;
    }
L_08995E8C:
    ctx.gpr[31] = (0x08995E94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08995E94u) goto L_08995E94;
    return;
L_08995E94:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08995E98;
L_08995E98:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08995EA4;
L_08995EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08995EB0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 479u, 0x08913F90u>(ctx, &aot_mem) && ctx.pc == 0x08995EB0u) goto L_08995EB0;
    return;
L_08995EB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08995EB8;
    }
L_08995EB8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995ED0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995ED0u) goto L_08995ED0;
    return;
L_08995ED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30516), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08995EE4;
    }
L_08995EE4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995EFCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995EFCu) goto L_08995EFC;
    return;
L_08995EFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995F0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08995F0Cu) goto L_08995F0C;
    return;
L_08995F0C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995F20;
      }
      goto L_08995F18;
    }
L_08995F18:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1920), 0u);
      if (branch_taken) {
          goto L_08995F2C;
      }
      goto L_08995F20;
    }
L_08995F20:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08995F2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21352));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08995F2Cu) goto L_08995F2C;
    return;
L_08995F2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08995F34;
    }
L_08995F34:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995F4Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995F4Cu) goto L_08995F4C;
    return;
L_08995F4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995F5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08995F5Cu) goto L_08995F5C;
    return;
L_08995F5C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995F70;
      }
      goto L_08995F68;
    }
L_08995F68:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(664), 0u);
      if (branch_taken) {
          goto L_08995F7C;
      }
      goto L_08995F70;
    }
L_08995F70:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08995F7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21296));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08995F7Cu) goto L_08995F7C;
    return;
L_08995F7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08995F84;
    }
L_08995F84:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995FA0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08995FA0u) goto L_08995FA0;
    return;
L_08995FA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995FB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08995FB0u) goto L_08995FB0;
    return;
L_08995FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08995FD8;
      }
      goto L_08995FBC;
    }
L_08995FBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08995FF8;
      }
      goto L_08995FD8;
    }
L_08995FD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08995FF8;
L_08995FF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996000;
    }
L_08996000:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08996018u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08996018u) goto L_08996018;
    return;
L_08996018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996034;
      }
      goto L_08996024;
    }
L_08996024:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6983), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0899603C;
      }
      goto L_08996034;
    }
L_08996034:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6983), static_cast<std::uint8_t>(0u));
    goto L_0899603C;
L_0899603C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996044;
    }
L_08996044:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0899605Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899605Cu) goto L_0899605C;
    return;
L_0899605C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6868), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996070;
    }
L_08996070:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x0899608Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899608Cu) goto L_0899608C;
    return;
L_0899608C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x089960D4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 75u, 0x08A8C594u>(ctx, &aot_mem) && ctx.pc == 0x089960D4u) goto L_089960D4;
    return;
L_089960D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089960DC;
    }
L_089960DC:
    ctx.gpr[31] = (0x089960E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 79u, 0x08A8C630u>(ctx, &aot_mem) && ctx.pc == 0x089960E4u) goto L_089960E4;
    return;
L_089960E4:
    ctx.gpr[31] = (0x089960ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 117u, 0x08A8C948u>(ctx, &aot_mem) && ctx.pc == 0x089960ECu) goto L_089960EC;
    return;
L_089960EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089960F4;
    }
L_089960F4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0899610Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899610Cu) goto L_0899610C;
    return;
L_0899610C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7252), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996120;
    }
L_08996120:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0899613Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899613Cu) goto L_0899613C;
    return;
L_0899613C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08996174;
      }
      goto L_0899615C;
    }
L_0899615C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08996168u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08996168u) goto L_08996168;
    return;
L_08996168:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    goto L_08996174;
L_08996174:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08996184u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x08996184u) goto L_08996184;
    return;
L_08996184:
    ctx.gpr[31] = (0x0899618Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A822ACu>(ctx, &aot_mem) && ctx.pc == 0x0899618Cu) goto L_0899618C;
    return;
L_0899618C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_08996198;
      }
      goto L_08996198;
    }
L_08996198:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(306)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089961D4u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 206u, 0x08A84F08u>(ctx, &aot_mem) && ctx.pc == 0x089961D4u) goto L_089961D4;
    return;
L_089961D4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089961E8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089961E8u) goto L_089961E8;
    return;
L_089961E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089961F0;
    }
L_089961F0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0899620Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899620Cu) goto L_0899620C;
    return;
L_0899620C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996248;
      }
      goto L_0899623C;
    }
L_0899623C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(358), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0899624C;
      }
      goto L_08996248;
    }
L_08996248:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(358), static_cast<std::uint8_t>(0u));
    goto L_0899624C;
L_0899624C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996254;
    }
L_08996254:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08996270u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08996270u) goto L_08996270;
    return;
L_08996270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(359)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(359), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(359)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6520), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089962CC;
    }
L_089962CC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089962E8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089962E8u) goto L_089962E8;
    return;
L_089962E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(360), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6520), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996344;
    }
L_08996344:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0899635Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899635Cu) goto L_0899635C;
    return;
L_0899635C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0899636Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0899636Cu) goto L_0899636C;
    return;
L_0899636C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899637Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 37u, 0x08AA01F0u>(ctx, &aot_mem) && ctx.pc == 0x0899637Cu) goto L_0899637C;
    return;
L_0899637C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (65504u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089963F0;
      }
      goto L_089963DC;
    }
L_089963DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089963F0;
L_089963F0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08996440;
      }
      goto L_08996410;
    }
L_08996410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996438;
      }
      goto L_0899641C;
    }
L_0899641C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_08996438;
    }
    goto L_08996428;
L_08996428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08996434u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08996434u) goto L_08996434;
    return;
L_08996434:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_08996438;
L_08996438:
    ctx.gpr[31] = (0x08996440u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08996440u) goto L_08996440;
    return;
L_08996440:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(504), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(504));
    ctx.gpr[31] = (0x08996458u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08996458u) goto L_08996458;
    return;
L_08996458:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1332), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1332));
    ctx.gpr[31] = (0x08996468u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08996468u) goto L_08996468;
    return;
L_08996468:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899649C;
      }
      goto L_08996494;
    }
L_08996494:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0899649C;
L_0899649C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x089964B8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 281u, 0x08871AF4u>(ctx, &aot_mem) && ctx.pc == 0x089964B8u) goto L_089964B8;
    return;
L_089964B8:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7020)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7020), ctx.gpr[6]);
    ctx.gpr[31] = (0x089964DCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x089964DCu) goto L_089964DC;
    return;
L_089964DC:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089964F4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089964F4u) goto L_089964F4;
    return;
L_089964F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996518;
      }
      goto L_08996500;
    }
L_08996500:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08996518u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x08996518u) goto L_08996518;
    return;
L_08996518:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996520;
    }
L_08996520:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08996538u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08996538u) goto L_08996538;
    return;
L_08996538:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996548u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08996548u) goto L_08996548;
    return;
L_08996548:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08996558u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 37u, 0x08AA01F0u>(ctx, &aot_mem) && ctx.pc == 0x08996558u) goto L_08996558;
    return;
L_08996558:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (65504u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089965CC;
      }
      goto L_089965B8;
    }
L_089965B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089965CC;
L_089965CC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020), ctx.gpr[6]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089965F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 281u, 0x08871AF4u>(ctx, &aot_mem) && ctx.pc == 0x089965F8u) goto L_089965F8;
    return;
L_089965F8:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08996624;
      }
      goto L_08996610;
    }
L_08996610:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899661Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 643u, 0x0889F120u>(ctx, &aot_mem) && ctx.pc == 0x0899661Cu) goto L_0899661C;
    return;
L_0899661C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996640;
      }
      goto L_08996624;
    }
L_08996624:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x08996640u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 654u, 0x0889F270u>(ctx, &aot_mem) && ctx.pc == 0x08996640u) goto L_08996640;
    return;
L_08996640:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1332), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1332));
    ctx.gpr[31] = (0x08996650u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08996650u) goto L_08996650;
    return;
L_08996650:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08996698;
      }
      goto L_08996668;
    }
L_08996668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996690;
      }
      goto L_08996674;
    }
L_08996674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_08996690;
    }
    goto L_08996680;
L_08996680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x0899668Cu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0899668Cu) goto L_0899668C;
    return;
L_0899668C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_08996690;
L_08996690:
    ctx.gpr[31] = (0x08996698u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08996698u) goto L_08996698;
    return;
L_08996698:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x089966B0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x089966B0u) goto L_089966B0;
    return;
L_089966B0:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089966C8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089966C8u) goto L_089966C8;
    return;
L_089966C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089966EC;
      }
      goto L_089966D4;
    }
L_089966D4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089966ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x089966ECu) goto L_089966EC;
    return;
L_089966EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089966F4;
    }
L_089966F4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08996710u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08996710u) goto L_08996710;
    return;
L_08996710:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996720u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08996720u) goto L_08996720;
    return;
L_08996720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0899673C;
      }
      goto L_0899672C;
    }
L_0899672C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0899674C;
      }
      goto L_0899673C;
    }
L_0899673C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_0899674C;
L_0899674C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996754;
    }
L_08996754:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0899676Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899676Cu) goto L_0899676C;
    return;
L_0899676C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899685C;
      }
      goto L_089967A0;
    }
L_089967A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1568)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089967FC;
      }
      goto L_089967B0;
    }
L_089967B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1580)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899685C;
      }
      goto L_089967D0;
    }
L_089967D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1568));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089967F4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 668u, 0x0899F758u>(ctx, &aot_mem) && ctx.pc == 0x089967F4u) goto L_089967F4;
    return;
L_089967F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899685C;
      }
      goto L_089967FC;
    }
L_089967FC:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[31] = (0x08996818u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08996818u) goto L_08996818;
    return;
L_08996818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1708)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08996850;
      }
      goto L_0899682C;
    }
L_0899682C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1708), ctx.gpr[5]);
    goto L_08996850;
L_08996850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0899685Cu);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x0899685Cu) goto L_0899685C;
    return;
L_0899685C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996864;
    }
L_08996864:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0899687Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899687Cu) goto L_0899687C;
    return;
L_0899687C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0899688Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0899688Cu) goto L_0899688C;
    return;
L_0899688C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089968A0;
    }
L_089968A0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089968BCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089968BCu) goto L_089968BC;
    return;
L_089968BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x089968F8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 406u, 0x08A46A1Cu>(ctx, &aot_mem) && ctx.pc == 0x089968F8u) goto L_089968F8;
    return;
L_089968F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996900;
    }
L_08996900:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0899691Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0899691Cu) goto L_0899691C;
    return;
L_0899691C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0899692Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x0899692Cu) goto L_0899692C;
    return;
L_0899692C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_0899693C;
    }
L_0899693C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08996958u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08996958u) goto L_08996958;
    return;
L_08996958:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996968u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08996968u) goto L_08996968;
    return;
L_08996968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08996984;
      }
      goto L_08996974;
    }
L_08996974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08996994;
      }
      goto L_08996984;
    }
L_08996984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_08996994;
L_08996994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_0899699C;
    }
L_0899699C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089969BCu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089969BCu) goto L_089969BC;
    return;
L_089969BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x089969D0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 67u, 0x0882477Cu>(ctx, &aot_mem) && ctx.pc == 0x089969D0u) goto L_089969D0;
    return;
L_089969D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_089969D8;
    }
L_089969D8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(939)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089969EC;
      }
      goto L_089969E8;
    }
L_089969E8:
    ctx.gpr[4] = (0u | 1u);
    goto L_089969EC;
L_089969EC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08996A18;
      }
      goto L_08996A10;
    }
L_08996A10:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996A68;
      }
      goto L_08996A18;
    }
L_08996A18:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08996A48;
    }
    goto L_08996A34;
L_08996A34:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996A68;
      }
      goto L_08996A48;
    }
L_08996A48:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996A68;
      }
      goto L_08996A64;
    }
L_08996A64:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08996A68;
L_08996A68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996A70;
    }
L_08996A70:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08996A8Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08996A8Cu) goto L_08996A8C;
    return;
L_08996A8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996A9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08996A9Cu) goto L_08996A9C;
    return;
L_08996A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08996AB8;
      }
      goto L_08996AA8;
    }
L_08996AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08996AC8;
      }
      goto L_08996AB8;
    }
L_08996AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_08996AC8;
L_08996AC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996AD0;
    }
L_08996AD0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08996AE8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08996AE8u) goto L_08996AE8;
    return;
L_08996AE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996AF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08996AF8u) goto L_08996AF8;
    return;
L_08996AF8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08996B3C;
      }
      goto L_08996B08;
    }
L_08996B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996B3C;
      }
      goto L_08996B14;
    }
L_08996B14:
    ctx.gpr[31] = (0x08996B1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 99u, 0x088A078Cu>(ctx, &aot_mem) && ctx.pc == 0x08996B1Cu) goto L_08996B1C;
    return;
L_08996B1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996B3C;
      }
      goto L_08996B24;
    }
L_08996B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08996B3C;
      }
      goto L_08996B38;
    }
L_08996B38:
    ctx.gpr[17] = (0u | 1u);
    goto L_08996B3C;
L_08996B3C:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08996B68;
      }
      goto L_08996B60;
    }
L_08996B60:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08996BB8;
      }
      goto L_08996B68;
    }
L_08996B68:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08996B98;
    }
    goto L_08996B84;
L_08996B84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996BB8;
      }
      goto L_08996B98;
    }
L_08996B98:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996BB8;
      }
      goto L_08996BB4;
    }
L_08996BB4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08996BB8;
L_08996BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996BC0;
    }
L_08996BC0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08996BD8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08996BD8u) goto L_08996BD8;
    return;
L_08996BD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996BE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08996BE8u) goto L_08996BE8;
    return;
L_08996BE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08996BF4;
      }
      goto L_08996BF0;
    }
L_08996BF0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08996BF4;
L_08996BF4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08996C20;
      }
      goto L_08996C18;
    }
L_08996C18:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996C70;
      }
      goto L_08996C20;
    }
L_08996C20:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08996C50;
    }
    goto L_08996C3C;
L_08996C3C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996C70;
      }
      goto L_08996C50;
    }
L_08996C50:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996C70;
      }
      goto L_08996C6C;
    }
L_08996C6C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08996C70;
L_08996C70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996C78;
    }
L_08996C78:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08996C90u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08996C90u) goto L_08996C90;
    return;
L_08996C90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996CA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08996CA0u) goto L_08996CA0;
    return;
L_08996CA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08996CD4;
      }
      goto L_08996CA8;
    }
L_08996CA8:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (2269u << 16u);
      if (branch_taken) {
          goto L_08996CD4;
      }
      goto L_08996CBC;
    }
L_08996CBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996CD4;
      }
      goto L_08996CD0;
    }
L_08996CD0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08996CD4;
L_08996CD4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08996D00;
      }
      goto L_08996CF8;
    }
L_08996CF8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996D50;
      }
      goto L_08996D00;
    }
L_08996D00:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08996D30;
    }
    goto L_08996D1C;
L_08996D1C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996D50;
      }
      goto L_08996D30;
    }
L_08996D30:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996D50;
      }
      goto L_08996D4C;
    }
L_08996D4C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08996D50;
L_08996D50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996D58;
    }
L_08996D58:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08996D74u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08996D74u) goto L_08996D74;
    return;
L_08996D74:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08996DA4;
      }
      goto L_08996D94;
    }
L_08996D94:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08996DA0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08996DA0u) goto L_08996DA0;
    return;
L_08996DA0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08996DA4;
L_08996DA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08996DB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x08996DB4u) goto L_08996DB4;
    return;
L_08996DB4:
    ctx.gpr[31] = (0x08996DBCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x08996DBCu) goto L_08996DBC;
    return;
L_08996DBC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_08996DC8;
      }
      goto L_08996DC8;
    }
L_08996DC8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08996DE8u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 5u, 0x0896803Cu>(ctx, &aot_mem) && ctx.pc == 0x08996DE8u) goto L_08996DE8;
    return;
L_08996DE8:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08996E00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 79u, 0x0896854Cu>(ctx, &aot_mem) && ctx.pc == 0x08996E00u) goto L_08996E00;
    return;
L_08996E00:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08996E14u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08996E14u) goto L_08996E14;
    return;
L_08996E14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996E1C;
    }
L_08996E1C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08996E34u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08996E34u) goto L_08996E34;
    return;
L_08996E34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996E44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08996E44u) goto L_08996E44;
    return;
L_08996E44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(864)));
    ctx.gpr[6] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08996E58;
      }
      goto L_08996E54;
    }
L_08996E54:
    ctx.gpr[4] = (0u | 1u);
    goto L_08996E58;
L_08996E58:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08996E84;
      }
      goto L_08996E7C;
    }
L_08996E7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996ED4;
      }
      goto L_08996E84;
    }
L_08996E84:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08996EB4;
    }
    goto L_08996EA0;
L_08996EA0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996ED4;
      }
      goto L_08996EB4;
    }
L_08996EB4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996ED4;
      }
      goto L_08996ED0;
    }
L_08996ED0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08996ED4;
L_08996ED4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996EDC;
    }
L_08996EDC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08996EF4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08996EF4u) goto L_08996EF4;
    return;
L_08996EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996F10;
      }
      goto L_08996F00;
    }
L_08996F00:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16177), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996F18;
      }
      goto L_08996F10;
    }
L_08996F10:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16177), static_cast<std::uint8_t>(0u));
    goto L_08996F18;
L_08996F18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996F20;
    }
L_08996F20:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08996F3Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08996F3Cu) goto L_08996F3C;
    return;
L_08996F3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996F4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08996F4Cu) goto L_08996F4C;
    return;
L_08996F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08996F8C;
      }
      goto L_08996F58;
    }
L_08996F58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
      if (branch_taken) {
          goto L_08996FC0;
      }
      goto L_08996F8C;
    }
L_08996F8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (63488u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    goto L_08996FC0;
L_08996FC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08996FC8;
    }
L_08996FC8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08996FE4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08996FE4u) goto L_08996FE4;
    return;
L_08996FE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996FF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08996FF4u) goto L_08996FF4;
    return;
L_08996FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08997048;
      }
      goto L_08997000;
    }
L_08997000:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997068;
      }
      goto L_08997024;
    }
L_08997024:
    ctx.gpr[31] = (0x0899702Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x0899702Cu) goto L_0899702C;
    return;
L_0899702C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    ctx.gpr[31] = (0x08997040u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08997040u) goto L_08997040;
    return;
L_08997040:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08997068;
      }
      goto L_08997048;
    }
L_08997048:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(322))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08997068;
L_08997068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08997070;
    }
L_08997070:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08997074;
L_08997074:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089970A8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24508)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24512)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-24484)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2228u << 16u);
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[3] = (2228u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-24504), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2228u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-24496), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-24500), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24492), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-24480), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899713C:
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
L_08997168:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0899719Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x0899719Cu) goto L_0899719C;
    return;
L_0899719C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089971A8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x089971A8u) goto L_089971A8;
    return;
L_089971A8:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089971BCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 539u, 0x08942434u>(ctx, &aot_mem) && ctx.pc == 0x089971BCu) goto L_089971BC;
    return;
L_089971BC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20252));
    ctx.gpr[31] = (0x089971D0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0899713C;
L_089971D0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x089971E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089971E0u) goto L_089971E0;
    return;
L_089971E0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089971FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997218u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08997218u) goto L_08997218;
    return;
L_08997218:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0899722Cu);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x0899722Cu) goto L_0899722C;
    return;
L_0899722C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08997240u);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08997240u) goto L_08997240;
    return;
L_08997240:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997268;
      }
      goto L_0899724C;
    }
L_0899724C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08997268;
      }
      goto L_08997254;
    }
L_08997254:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] << 16u);
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    ctx.gpr[31] = (0x08997268u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 784u, 0x0893BE94u>(ctx, &aot_mem) && ctx.pc == 0x08997268u) goto L_08997268;
    return;
L_08997268:
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
L_08997280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089972ACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x089972ACu) goto L_089972AC;
    return;
L_089972AC:
    ctx.gpr[17] = (2232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089972D0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 457u, 0x08A01F64u>(ctx, &aot_mem) && ctx.pc == 0x089972D0u) goto L_089972D0;
    return;
L_089972D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089972E8;
      }
      goto L_089972D8;
    }
L_089972D8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089972E4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 459u, 0x08A01F88u>(ctx, &aot_mem) && ctx.pc == 0x089972E4u) goto L_089972E4;
    return;
L_089972E4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089972E8;
L_089972E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089972F8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x089972F8u) goto L_089972F8;
    return;
L_089972F8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089973AC;
      }
      goto L_08997304;
    }
L_08997304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (0u | 65535u);
      if (branch_taken) {
          goto L_08997330;
      }
      goto L_08997310;
    }
L_08997310:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08997320u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08997320u) goto L_08997320;
    return;
L_08997320:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08997330;
L_08997330:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08997344;
      }
      goto L_0899733C;
    }
L_0899733C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08997354;
      }
      goto L_08997344;
    }
L_08997344:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08997350u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08997350u) goto L_08997350;
    return;
L_08997350:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08997354;
L_08997354:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089973AC;
      }
      goto L_0899735C;
    }
L_0899735C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_0899738C;
    }
    goto L_08997368;
L_08997368:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08997378u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08997378u) goto L_08997378;
    return;
L_08997378:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_0899738C;
L_0899738C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0899739C;
      }
      goto L_08997394;
    }
L_08997394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089973AC;
      }
      goto L_0899739C;
    }
L_0899739C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x089973A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x089973A8u) goto L_089973A8;
    return;
L_089973A8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_089973AC;
L_089973AC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089973D0;
      }
      goto L_089973B4;
    }
L_089973B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089973D0;
      }
      goto L_089973BC;
    }
L_089973BC:
    ctx.gpr[5] = (ctx.gpr[16] << 16u);
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[31] = (0x089973D0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 784u, 0x0893BE94u>(ctx, &aot_mem) && ctx.pc == 0x089973D0u) goto L_089973D0;
    return;
L_089973D0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089973F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997418u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08997418u) goto L_08997418;
    return;
L_08997418:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x0899742Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 790u, 0x0893BF08u>(ctx, &aot_mem) && ctx.pc == 0x0899742Cu) goto L_0899742C;
    return;
L_0899742C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997438u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08997438u) goto L_08997438;
    return;
L_08997438:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997450:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997474u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08997474u) goto L_08997474;
    return;
L_08997474:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08997488u);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08997488u) goto L_08997488;
    return;
L_08997488:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2232u << 16u);
      if (branch_taken) {
          goto L_089974C0;
      }
      goto L_08997494;
    }
L_08997494:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089974C8;
      }
      goto L_089974B8;
    }
L_089974B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_089974CC;
      }
      goto L_089974C0;
    }
L_089974C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997538;
      }
      goto L_089974C8;
    }
L_089974C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    goto L_089974CC;
L_089974CC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089974E8;
      }
      goto L_089974D4;
    }
L_089974D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089974E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x089974E0u) goto L_089974E0;
    return;
L_089974E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08997534;
      }
      goto L_089974E8;
    }
L_089974E8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] << 8u);
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11856));
    ctx.gpr[31] = (0x0899750Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 129u, 0x0893884Cu>(ctx, &aot_mem) && ctx.pc == 0x0899750Cu) goto L_0899750C;
    return;
L_0899750C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997528;
      }
      goto L_08997514;
    }
L_08997514:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997520u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08997520u) goto L_08997520;
    return;
L_08997520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08997534;
      }
      goto L_08997528;
    }
L_08997528:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997534u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08997534u) goto L_08997534;
    return;
L_08997534:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08997538;
L_08997538:
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
L_08997550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997570u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08997570u) goto L_08997570;
    return;
L_08997570:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11856));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089975B0;
      }
      goto L_0899759C;
    }
L_0899759C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089975A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x089975A8u) goto L_089975A8;
    return;
L_089975A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089975BC;
      }
      goto L_089975B0;
    }
L_089975B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089975BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x089975BCu) goto L_089975BC;
    return;
L_089975BC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089975D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089975F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x089975F4u) goto L_089975F4;
    return;
L_089975F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11856));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08997628u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08997628u) goto L_08997628;
    return;
L_08997628:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997640:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997658u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08997658u) goto L_08997658;
    return;
L_08997658:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0899766Cu);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x0899766Cu) goto L_0899766C;
    return;
L_0899766C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] << 8u);
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11856));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089976A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089976C4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x089976C4u) goto L_089976C4;
    return;
L_089976C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089976D4;
      }
      goto L_089976CC;
    }
L_089976CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997710;
      }
      goto L_089976D4;
    }
L_089976D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089976E0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x089976E0u) goto L_089976E0;
    return;
L_089976E0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(11856));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0899770Cu);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(215)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x0899770Cu) goto L_0899770C;
    return;
L_0899770C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08997710;
L_08997710:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997724:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_08997750;
      }
      goto L_08997740;
    }
L_08997740:
    ctx.gpr[31] = (0x08997748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08997748u) goto L_08997748;
    return;
L_08997748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2228u << 16u);
    goto L_08997750;
L_08997750:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24444));
    ctx.gpr[31] = (0x08997760u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20228));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 5u, 0x0883C058u>(ctx, &aot_mem) && ctx.pc == 0x08997760u) goto L_08997760;
    return;
L_08997760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_0899777C;
      }
      goto L_0899776C;
    }
L_0899776C:
    ctx.gpr[31] = (0x08997774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08997774u) goto L_08997774;
    return;
L_08997774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2228u << 16u);
    goto L_0899777C;
L_0899777C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08997788u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24436));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 787u, 0x0883BFF4u>(ctx, &aot_mem) && ctx.pc == 0x08997788u) goto L_08997788;
    return;
L_08997788:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997798:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24468)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24472)));
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
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-24464), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-24456), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-24460), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-24452), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-24448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997810:
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
L_0899783C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08997860;
      }
      goto L_08997854;
    }
L_08997854:
    ctx.gpr[31] = (0x0899785Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0899785Cu) goto L_0899785C;
    return;
L_0899785C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08997860;
L_08997860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899787C;
      }
      goto L_0899787C;
    }
L_0899787C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997888:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089979C8;
      }
      goto L_089978A4;
    }
L_089978A4:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089978D8;
      }
      goto L_089978B0;
    }
L_089978B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08997998;
      }
      goto L_089978B8;
    }
L_089978B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08997908;
      }
      goto L_089978C0;
    }
L_089978C0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08997938;
      }
      goto L_089978C8;
    }
L_089978C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08997968;
      }
      goto L_089978D0;
    }
L_089978D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089979F4;
      }
      goto L_089978D8;
    }
L_089978D8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997900;
      }
      goto L_089978E0;
    }
L_089978E0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20204));
    ctx.gpr[31] = (0x089978F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x089978F0u) goto L_089978F0;
    return;
L_089978F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997900u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08997900u) goto L_08997900;
    return;
L_08997900:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089979F4;
      }
      goto L_08997908;
    }
L_08997908:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997930;
      }
      goto L_08997910;
    }
L_08997910:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20172));
    ctx.gpr[31] = (0x08997920u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08997920u) goto L_08997920;
    return;
L_08997920:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997930u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08997930u) goto L_08997930;
    return;
L_08997930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089979F4;
      }
      goto L_08997938;
    }
L_08997938:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997960;
      }
      goto L_08997940;
    }
L_08997940:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20128));
    ctx.gpr[31] = (0x08997950u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08997950u) goto L_08997950;
    return;
L_08997950:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997960u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08997960u) goto L_08997960;
    return;
L_08997960:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089979F4;
      }
      goto L_08997968;
    }
L_08997968:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997990;
      }
      goto L_08997970;
    }
L_08997970:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20096));
    ctx.gpr[31] = (0x08997980u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x08997980u) goto L_08997980;
    return;
L_08997980:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997990u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08997990u) goto L_08997990;
    return;
L_08997990:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089979F4;
      }
      goto L_08997998;
    }
L_08997998:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089979C0;
      }
      goto L_089979A0;
    }
L_089979A0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20024));
    ctx.gpr[31] = (0x089979B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x089979B0u) goto L_089979B0;
    return;
L_089979B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089979C0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x089979C0u) goto L_089979C0;
    return;
L_089979C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089979F4;
      }
      goto L_089979C8;
    }
L_089979C8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089979F0;
      }
      goto L_089979D0;
    }
L_089979D0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19984));
    ctx.gpr[31] = (0x089979E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 498u, 0x08AEDD14u>(ctx, &aot_mem) && ctx.pc == 0x089979E0u) goto L_089979E0;
    return;
L_089979E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089979F0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 685u, 0x08AFAE2Cu>(ctx, &aot_mem) && ctx.pc == 0x089979F0u) goto L_089979F0;
    return;
L_089979F0:
    ctx.gpr[2] = (0u | 0u);
    goto L_089979F4;
L_089979F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997A08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997A34u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08997A34u) goto L_08997A34;
    return;
L_08997A34:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[19] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21008));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997A58u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08997888;
L_08997A58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08997B00;
      }
      goto L_08997A60;
    }
L_08997A60:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2226u << 16u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-19964));
      if (branch_taken) {
          goto L_08997AA4;
      }
      goto L_08997A7C;
    }
L_08997A7C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997AA4;
      }
      goto L_08997A88;
    }
L_08997A88:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997A9C;
      }
      goto L_08997A90;
    }
L_08997A90:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08997A9Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFB6BCu>(ctx, &aot_mem) && ctx.pc == 0x08997A9Cu) goto L_08997A9C;
    return;
L_08997A9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08997AD4;
      }
      goto L_08997AA4;
    }
L_08997AA4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08997AD4;
      }
      goto L_08997AAC;
    }
L_08997AAC:
    ctx.gpr[31] = (0x08997AB4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x08997AB4u) goto L_08997AB4;
    return;
L_08997AB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997AD4;
      }
      goto L_08997ABC;
    }
L_08997ABC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997AC8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x08997AC8u) goto L_08997AC8;
    return;
L_08997AC8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08997AD4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFB6BCu>(ctx, &aot_mem) && ctx.pc == 0x08997AD4u) goto L_08997AD4;
    return;
L_08997AD4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08997AE0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 800u, 0x08AFB6BCu>(ctx, &aot_mem) && ctx.pc == 0x08997AE0u) goto L_08997AE0;
    return;
L_08997AE0:
    ctx.gpr[31] = (0x08997AE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 772u, 0x089C30F8u>(ctx, &aot_mem) && ctx.pc == 0x08997AE8u) goto L_08997AE8;
    return;
L_08997AE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997AF4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08997AF4u) goto L_08997AF4;
    return;
L_08997AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08997B00u);
    ctx.gpr[17] = (0u | 0u);
    goto L_0899783C;
L_08997B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08997B18;
      }
      goto L_08997B0C;
    }
L_08997B0C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08997B18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x08997B18u) goto L_08997B18;
    return;
L_08997B18:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997B3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997B64u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08997B64u) goto L_08997B64;
    return;
L_08997B64:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08997B7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19960));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08997B7Cu) goto L_08997B7C;
    return;
L_08997B7C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997B88u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 706u, 0x0890BEF0u>(ctx, &aot_mem) && ctx.pc == 0x08997B88u) goto L_08997B88;
    return;
L_08997B88:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997B94u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x08997B94u) goto L_08997B94;
    return;
L_08997B94:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08997BA0;
    }
    goto L_08997BA0;
L_08997BA0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997BB4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 49u, 0x0890C434u>(ctx, &aot_mem) && ctx.pc == 0x08997BB4u) goto L_08997BB4;
    return;
L_08997BB4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997BC4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 560u, 0x0890B468u>(ctx, &aot_mem) && ctx.pc == 0x08997BC4u) goto L_08997BC4;
    return;
L_08997BC4:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997BD4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08997A08;
L_08997BD4:
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
L_08997BF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 128u, 0x0897494Cu>(ctx, &aot_mem) && ctx.pc == 0x08997C04u) goto L_08997C04;
    return;
L_08997C04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997C50;
      }
      goto L_08997C0C;
    }
L_08997C0C:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08997C24;
      }
      goto L_08997C1C;
    }
L_08997C1C:
    ctx.gpr[31] = (0x08997C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08997C24u) goto L_08997C24;
    return;
L_08997C24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27760));
    ctx.gpr[31] = (0x08997C40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x08997C40u) goto L_08997C40;
    return;
L_08997C40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08997C50u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08997B3C;
L_08997C50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997C60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997C84u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08997C84u) goto L_08997C84;
    return;
L_08997C84:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08997C98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08997C98u) goto L_08997C98;
    return;
L_08997C98:
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08997CC8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08997CC8u) goto L_08997CC8;
    return;
L_08997CC8:
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
L_08997CE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997D04u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08997D04u) goto L_08997D04;
    return;
L_08997D04:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08997D3Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08997D3Cu) goto L_08997D3C;
    return;
L_08997D3C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997D54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997D68u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 423u, 0x08A4B554u>(ctx, &aot_mem) && ctx.pc == 0x08997D68u) goto L_08997D68;
    return;
L_08997D68:
    ctx.gpr[31] = (0x08997D70u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 39u, 0x088245A4u>(ctx, &aot_mem) && ctx.pc == 0x08997D70u) goto L_08997D70;
    return;
L_08997D70:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997D80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(940)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997DA0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08997DA0u) goto L_08997DA0;
    return;
L_08997DA0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997DB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 544u, 0x08AE7428u>(ctx, &aot_mem) && ctx.pc == 0x08997DC0u) goto L_08997DC0;
    return;
L_08997DC0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997DD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997DE4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 581u, 0x08AE77D8u>(ctx, &aot_mem) && ctx.pc == 0x08997DE4u) goto L_08997DE4;
    return;
L_08997DE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997DF0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08997DF0u) goto L_08997DF0;
    return;
L_08997DF0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997E04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997E18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19944));
    goto L_08997810;
L_08997E18:
    ctx.gpr[31] = (0x08997E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 41u, 0x088245C0u>(ctx, &aot_mem) && ctx.pc == 0x08997E20u) goto L_08997E20;
    return;
L_08997E20:
    ctx.gpr[31] = (0x08997E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 7u, 0x08958070u>(ctx, &aot_mem) && ctx.pc == 0x08997E28u) goto L_08997E28;
    return;
L_08997E28:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997E38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997E4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19924));
    goto L_08997810;
L_08997E4C:
    ctx.gpr[31] = (0x08997E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 771u, 0x089C30ECu>(ctx, &aot_mem) && ctx.pc == 0x08997E54u) goto L_08997E54;
    return;
L_08997E54:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997E64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997E78u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19900));
    goto L_08997810;
L_08997E78:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-29364), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08997E8Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 404u, 0x08961D90u>(ctx, &aot_mem) && ctx.pc == 0x08997E8Cu) goto L_08997E8C;
    return;
L_08997E8C:
    ctx.gpr[31] = (0x08997E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 28u, 0x089581D4u>(ctx, &aot_mem) && ctx.pc == 0x08997E94u) goto L_08997E94;
    return;
L_08997E94:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997EA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997EB8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 472u, 0x08962494u>(ctx, &aot_mem) && ctx.pc == 0x08997EB8u) goto L_08997EB8;
    return;
L_08997EB8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29364)));
    ctx.gpr[31] = (0x08997EC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08997EC8u) goto L_08997EC8;
    return;
L_08997EC8:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997EDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08997F00u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08997F00u) goto L_08997F00;
    return;
L_08997F00:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27616));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997F24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997F50u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08997F50u) goto L_08997F50;
    return;
L_08997F50:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997F60u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08997F60u) goto L_08997F60;
    return;
L_08997F60:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997F70u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08997F70u) goto L_08997F70;
    return;
L_08997F70:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997F80u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08997F80u) goto L_08997F80;
    return;
L_08997F80:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08997F94u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 234u, 0x08A1D254u>(ctx, &aot_mem) && ctx.pc == 0x08997F94u) goto L_08997F94;
    return;
L_08997F94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997FA0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08997FA0u) goto L_08997FA0;
    return;
L_08997FA0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997FC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08997FFCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08997FFCu) goto L_08997FFC;
    return;
L_08997FFC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08998000u; return;
}

void recomp_unit_0100(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0100_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_100(Runtime &runtime) {
    runtime.register_generated_unit(100u, 0x08994000u, 16384u, &recomp_unit_0100, &recomp_unit_0100_entry);
    runtime.register_function(0x08994000u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994018u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899402Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994048u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899404Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994054u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899406Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994088u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994130u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994144u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994154u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994160u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994164u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994188u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994190u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089941ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089941C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089941DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089941E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089941E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994204u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994234u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994240u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994244u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899424Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994268u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994278u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994290u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089942D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089942D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089942F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994314u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899431Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994338u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899436Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994384u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994390u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089943A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089943A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089943B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089943C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089943D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089943E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089943E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994408u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089944A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089944A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089944C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899455Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994564u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899457Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899458Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994594u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899459Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089945B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089945C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089945D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089945D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089945FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994604u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994620u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994634u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994650u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994654u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899465Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994678u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994688u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899469Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089946A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089946C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089946D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994704u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899470Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994710u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994734u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899473Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994758u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899476Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994788u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899478Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994794u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994814u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994824u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994840u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994848u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899484Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994874u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994918u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994928u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994938u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994940u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994948u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994964u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994984u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994990u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899499Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A10u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A30u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A64u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994AA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994AC0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994ACCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994AD8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994AF4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B10u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B28u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B30u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B60u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B6Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BE0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BFCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C5Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C6Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994CA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994CA4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994CB0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994CC0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994CC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994CD4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994CF8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D30u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D74u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D98u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994DA4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994DB0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994DBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994DC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994DD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994DF4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994DFCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E80u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994ED8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EE0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F10u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F64u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FD8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995008u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995010u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899502Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995040u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899505Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995060u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995068u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995074u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995084u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899508Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995098u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995104u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995108u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899512Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995134u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995150u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995164u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995180u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995184u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899518Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899519Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995204u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995220u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995234u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995250u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995254u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899525Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995278u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995288u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995298u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995310u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899532Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995334u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995350u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995360u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899536Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995380u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995394u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899539Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995400u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995410u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899541Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995424u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899542Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995434u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899543Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995458u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995510u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995518u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995520u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995538u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995540u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995548u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995564u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995574u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995580u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995598u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995600u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995614u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899561Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995628u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995644u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899564Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995678u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995680u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995688u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995694u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899569Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089956A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089956C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089956D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089956E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995700u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995708u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995718u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899571Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995724u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899573Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995744u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995760u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995770u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899577Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995790u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899579Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995808u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995820u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995828u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995840u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995850u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995870u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995884u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899590Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995940u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995958u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995964u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899596Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995984u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899598Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995994u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089959ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089959B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089959BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089959D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089959DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089959E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089959ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A60u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A80u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A98u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995ABCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995AC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995AE0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995AF4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B10u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B14u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BDCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BF8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C64u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CCCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CD4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D20u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D80u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DCCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DE0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DE8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E14u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E28u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E74u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E80u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E98u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995EA4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995EB0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995EB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995ED0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995EE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995EFCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F0Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F20u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F5Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FB0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FD8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FF8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996000u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996018u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996024u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996034u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899603Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996044u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899605Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996070u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899608Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899610Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996120u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899613Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899615Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996168u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996174u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996184u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899618Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996198u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089961D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089961E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089961F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899620Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899623Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996248u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899624Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996254u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996270u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089962CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089962E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996344u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899635Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899636Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899637Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089963DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089963F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996410u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899641Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996428u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996434u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996438u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996440u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996458u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996468u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996494u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899649Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996500u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996518u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996520u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996538u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996548u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996558u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089965B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089965CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089965F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996610u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899661Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996624u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996640u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996650u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996668u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996674u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996680u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899668Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996690u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996698u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996710u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996720u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899672Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899673Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899674Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996754u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899676Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996818u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899682Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996850u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899685Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996864u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899687Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899688Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089968A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089968BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089968F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996900u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899691Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899692Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899693Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996958u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996968u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996974u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996984u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996994u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899699Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A10u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A64u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AE8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AF8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B14u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B60u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B98u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BC0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BD8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BE8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BF4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C20u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C6Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C90u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CD4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CF8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D30u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D74u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996DA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996DA4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996DB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996DBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996DC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996DE8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E14u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996EA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996EB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996ED0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996ED4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996EDCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996EF4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F10u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F20u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FC0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FF4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997000u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997024u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899702Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997040u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997048u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997068u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997070u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997074u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899713Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997168u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899719Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089971A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089971BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089971D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089971E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089971FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997218u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899722Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997240u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899724Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997254u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997268u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997280u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997304u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997310u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997320u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997330u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899733Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997344u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997350u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997354u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899735Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997368u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997378u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899738Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997394u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899739Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997418u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899742Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997438u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997450u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997474u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997488u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997494u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899750Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997514u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997520u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997528u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997534u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997538u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997550u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997570u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899759Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089975A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089975B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089975BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089975D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089975F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997628u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997640u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997658u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899766Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089976A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089976C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089976CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089976D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089976E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899770Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997710u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997724u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997740u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997748u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997750u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997760u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899776Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997774u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899777Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997788u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997798u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997810u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899783Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997854u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899785Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997860u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899787Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997888u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089978A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089978B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089978B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089978C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089978C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089978D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089978D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089978E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089978F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997900u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997908u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997910u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997920u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997930u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997938u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997940u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997950u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997960u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997968u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997970u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997980u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997990u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997998u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089979A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089979B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089979C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089979C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089979D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089979E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089979F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089979F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A60u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A90u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997AA4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997AACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997AB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997ABCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997AC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997AD4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997AE0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997AE8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997AF4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B0Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B64u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997BA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997BB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997BC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997BD4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997BF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C0Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C60u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C98u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997CC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997CE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D80u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997DA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997DB0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997DC0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997DD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997DE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997DF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E20u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E28u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E64u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997EA4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997EB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997EC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997EDCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F60u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F80u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997FA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997FC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997FFCu, &recomp_unit_0100, "recomp_unit_0100");
}
} // namespace psprecomp
