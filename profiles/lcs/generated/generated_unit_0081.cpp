#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0081[4089] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15,
    0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 21, 0, 22, 0, 0, 23, 0, 24, 0, 0, 25, 0, 0, 26, 0, 27,
    0, 0, 28, 0, 0, 29, 0, 0, 30, 31, 0, 32, 0, 33, 0, 34, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 38, 0, 39, 0, 40, 0,
    0, 41, 0, 42, 0, 43, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 60,
    0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76, 77, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 87, 0,
    0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 0,
    102, 0, 103, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 0, 112,
    0, 113, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 118, 0, 119, 120, 0, 121, 122, 0, 123, 0, 124,
    0, 0, 0, 0, 125, 0, 0, 126, 0, 127, 0, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 143,
    0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 0,
    151, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 157, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 160, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0,
    0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172,
    0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 177, 178, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188,
    0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    197, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206,
    0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 217, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0,
    0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 241, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0,
    0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0,
    0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 275, 276, 0, 0, 0,
    0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 279, 280, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 282, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 288, 289, 0, 0, 290, 0, 0, 291, 0, 292, 293, 0, 0, 294, 0, 0, 295, 0, 296, 297, 0, 0, 298, 0, 0, 299, 0, 300, 301, 0, 0,
    302, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 309, 0, 310, 311, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0,
    314, 0, 0, 0, 0, 315, 0, 0, 316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323,
    0, 324, 0, 0, 0, 325, 0, 326, 0, 327, 0, 0, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 0, 335, 0, 0, 0,
    336, 0, 0, 337, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 348, 0, 349, 0, 0, 350, 0, 0, 0, 351, 352, 0, 0, 353, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 360, 0, 0, 361, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364,
    0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0,
    0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 376,
    0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 381, 382, 0, 383, 0, 0, 384, 0, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0,
    0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390,
    0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 401,
    0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 406, 0, 407, 0, 408, 0,
    0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 412, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0, 423, 0, 0,
    424, 0, 425, 0, 0, 426, 0, 427, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 432, 0, 433, 0, 434, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 440,
    0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 446, 0,
    447, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 451, 452, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 457, 0,
    458, 0, 459, 0, 460, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0,
    0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471,
    0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0,
    0, 477, 0, 0, 0, 478, 0, 479, 0, 0, 480, 481, 0, 482, 0, 483, 0, 0, 484, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 487, 0, 488, 0, 0, 489, 0, 0, 490, 0, 491, 492, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 496,
    0, 497, 0, 0, 498, 0, 0, 499, 0, 500, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0,
    0, 506, 507, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0,
    513, 0, 514, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0,
    523, 0, 524, 0, 0, 525, 0, 0, 526, 0, 527, 0, 528, 0, 0, 0, 529, 0, 530, 0, 531, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0,
    0, 534, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 542, 0, 543, 0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0,
    547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 557, 0, 0, 0, 0, 0,
    0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0,
    562, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0, 567, 0, 568, 0, 569, 0, 0, 0, 0,
    570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0,
    0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0,
    579, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 584, 0, 585, 0, 0, 0, 586, 587, 0, 588, 0, 0,
    589, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 592, 0, 593, 0, 0, 0, 594, 595, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0,
    0, 0, 599, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 603, 0, 604, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0,
    0, 608, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 0, 0, 0, 614,
    0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0,
    0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 624, 625, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0,
    0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0,
    0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 0, 0, 0, 639, 0, 640, 0, 641, 642, 0, 643, 0, 0, 0,
    644, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 648, 0, 0, 649, 0,
    0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 652, 0, 653, 0, 654, 0, 0, 0, 0, 655, 0, 0, 656,
    0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 0, 0, 662, 0, 663, 0, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 667, 0, 668,
    0, 0, 0, 0, 0, 669, 0, 670, 0, 671, 0, 0, 0, 0, 672, 0, 673, 0, 674, 0, 675, 0, 0, 0, 676, 0, 677, 0, 678, 0, 679, 0,
    680, 0, 0, 0, 0, 0, 0, 681, 0, 682, 0, 683, 0, 684, 0, 0, 0, 0, 0, 685, 0, 686, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0,
    0, 689, 0, 690, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 693, 694, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0,
    0, 0, 697, 0, 698, 0, 699, 0, 0, 0, 700, 0, 701, 0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 707, 708, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    712, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 718, 0, 719, 0, 0,
    0, 0, 0, 0, 0, 720, 0, 721, 0, 722, 0, 0, 723, 0, 0, 0, 724, 0, 725, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 728, 0, 729,
    0, 0, 730, 0, 731, 0, 732, 0, 733, 0, 734, 0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 0, 739, 0, 740, 0, 0,
    741, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745,
    0, 0, 746, 0, 747, 0, 0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 0, 753, 0,
    0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 757, 758, 0, 759, 0, 760, 0, 761, 0,
    0, 0, 0, 0, 0, 0, 762, 0, 763, 764, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 767, 0, 768, 0, 0, 0, 769, 0,
    0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 0, 775, 0, 0, 0, 776, 0, 0, 0, 777, 0,
    0, 0, 778, 0, 0, 0, 779, 0, 0, 780, 0, 781, 0, 0, 0, 782, 0, 0, 0, 783, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 786, 0,
    787, 0, 788, 0, 789, 0, 0, 0, 790, 0, 0, 791, 0, 792, 0, 793, 0, 0, 794, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 796, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 799, 800, 0, 801, 0, 0, 802, 0, 803, 0, 0, 0, 0,
    0, 0, 804, 0, 0, 0, 0, 0, 805, 0, 806, 807, 0, 808, 0, 0, 809, 0, 810, 0, 0, 0, 0, 0, 811, 0, 812, 813, 0, 814, 0, 0,
    815, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 818, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 820, 0, 0, 821, 0, 822, 0, 0, 0, 0, 0, 0,
    0, 0, 823, 0, 0, 0, 0, 0, 824, 0, 0, 825, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 827, 0, 828, 0, 0, 0, 829, 0, 830, 0,
    831, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 834, 0, 0, 835, 0, 0, 0, 0, 836, 837, 0, 838, 0, 0, 0, 839, 840, 0, 0, 841, 0,
    0, 0, 842, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 845, 0, 0, 846, 0, 0, 0, 0, 0, 0, 0, 847, 0,
    0, 848, 0, 0, 0, 0, 0, 849, 0, 0, 0, 850, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0, 0, 853, 0, 0, 854, 0, 0, 0, 855, 0,
    0, 0, 856, 0, 0, 0, 857, 0, 858, 0, 859, 0, 0, 0, 860, 0, 861, 0, 0, 862, 0, 0, 0, 863, 0, 0, 0, 864, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 868, 0, 0, 0, 869, 0,
    0, 870, 0, 0, 0, 871, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 872, 0, 873, 0, 0, 0, 0, 0, 0, 0, 874, 0, 0, 0,
    875, 0, 0, 876, 0, 0, 0, 877, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 878, 0, 879, 0, 0, 0, 0, 0, 0, 0, 880, 0,
    0, 0, 881, 0, 0, 882, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 885,
};
void recomp_unit_0081_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08948000u;
        entry_id = (entry_delta < 16356u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0081[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08948000;
    case 2u: goto L_0894800C;
    case 3u: goto L_08948014;
    case 4u: goto L_08948024;
    case 5u: goto L_08948038;
    case 6u: goto L_08948048;
    case 7u: goto L_08948058;
    case 8u: goto L_08948098;
    case 9u: goto L_089480A0;
    case 10u: goto L_089480B8;
    case 11u: goto L_089480C0;
    case 12u: goto L_089480D0;
    case 13u: goto L_089480E8;
    case 14u: goto L_089480F4;
    case 15u: goto L_089480FC;
    case 16u: goto L_08948104;
    case 17u: goto L_08948114;
    case 18u: goto L_0894811C;
    case 19u: goto L_0894812C;
    case 20u: goto L_08948134;
    case 21u: goto L_08948140;
    case 22u: goto L_08948148;
    case 23u: goto L_08948154;
    case 24u: goto L_0894815C;
    case 25u: goto L_08948168;
    case 26u: goto L_08948174;
    case 27u: goto L_0894817C;
    case 28u: goto L_08948188;
    case 29u: goto L_08948194;
    case 30u: goto L_089481A0;
    case 31u: goto L_089481A4;
    case 32u: goto L_089481AC;
    case 33u: goto L_089481B4;
    case 34u: goto L_089481BC;
    case 35u: goto L_089481C8;
    case 36u: goto L_089481D4;
    case 37u: goto L_089481DC;
    case 38u: goto L_089481E8;
    case 39u: goto L_089481F0;
    case 40u: goto L_089481F8;
    case 41u: goto L_08948204;
    case 42u: goto L_0894820C;
    case 43u: goto L_08948214;
    case 44u: goto L_08948224;
    case 45u: goto L_0894822C;
    case 46u: goto L_08948234;
    case 47u: goto L_08948244;
    case 48u: goto L_0894824C;
    case 49u: goto L_08948254;
    case 50u: goto L_08948264;
    case 51u: goto L_08948270;
    case 52u: goto L_0894828C;
    case 53u: goto L_08948298;
    case 54u: goto L_089482AC;
    case 55u: goto L_089482C8;
    case 56u: goto L_089482D0;
    case 57u: goto L_089482E4;
    case 58u: goto L_089482EC;
    case 59u: goto L_089482F4;
    case 60u: goto L_089482FC;
    case 61u: goto L_08948304;
    case 62u: goto L_08948310;
    case 63u: goto L_0894832C;
    case 64u: goto L_08948340;
    case 65u: goto L_0894835C;
    case 66u: goto L_08948370;
    case 67u: goto L_0894838C;
    case 68u: goto L_089483A8;
    case 69u: goto L_089483C4;
    case 70u: goto L_089483E4;
    case 71u: goto L_08948418;
    case 72u: goto L_08948428;
    case 73u: goto L_0894843C;
    case 74u: goto L_08948444;
    case 75u: goto L_08948454;
    case 76u: goto L_08948468;
    case 77u: goto L_0894846C;
    case 78u: goto L_089484B4;
    case 79u: goto L_089484C8;
    case 80u: goto L_089484F0;
    case 81u: goto L_089484F8;
    case 82u: goto L_08948520;
    case 83u: goto L_0894852C;
    case 84u: goto L_08948534;
    case 85u: goto L_0894855C;
    case 86u: goto L_08948564;
    case 87u: goto L_08948578;
    case 88u: goto L_08948590;
    case 89u: goto L_08948598;
    case 90u: goto L_089485A0;
    case 91u: goto L_089485BC;
    case 92u: goto L_089485D8;
    case 93u: goto L_089485F4;
    case 94u: goto L_0894861C;
    case 95u: goto L_08948630;
    case 96u: goto L_08948640;
    case 97u: goto L_08948648;
    case 98u: goto L_08948650;
    case 99u: goto L_08948658;
    case 100u: goto L_08948668;
    case 101u: goto L_08948670;
    case 102u: goto L_08948680;
    case 103u: goto L_08948688;
    case 104u: goto L_08948698;
    case 105u: goto L_089486A0;
    case 106u: goto L_089486B4;
    case 107u: goto L_089486BC;
    case 108u: goto L_089486CC;
    case 109u: goto L_089486D4;
    case 110u: goto L_089486E4;
    case 111u: goto L_089486EC;
    case 112u: goto L_089486FC;
    case 113u: goto L_08948704;
    case 114u: goto L_08948718;
    case 115u: goto L_08948724;
    case 116u: goto L_0894873C;
    case 117u: goto L_08948750;
    case 118u: goto L_08948754;
    case 119u: goto L_0894875C;
    case 120u: goto L_08948760;
    case 121u: goto L_08948768;
    case 122u: goto L_0894876C;
    case 123u: goto L_08948774;
    case 124u: goto L_0894877C;
    case 125u: goto L_08948790;
    case 126u: goto L_0894879C;
    case 127u: goto L_089487A4;
    case 128u: goto L_089487B0;
    case 129u: goto L_089487B8;
    case 130u: goto L_089487C4;
    case 131u: goto L_089487CC;
    case 132u: goto L_089487DC;
    case 133u: goto L_089487E4;
    case 134u: goto L_08948818;
    case 135u: goto L_0894882C;
    case 136u: goto L_08948838;
    case 137u: goto L_08948870;
    case 138u: goto L_089488B0;
    case 139u: goto L_089488CC;
    case 140u: goto L_089488DC;
    case 141u: goto L_089488EC;
    case 142u: goto L_089488F4;
    case 143u: goto L_089488FC;
    case 144u: goto L_08948910;
    case 145u: goto L_08948920;
    case 146u: goto L_08948934;
    case 147u: goto L_08948938;
    case 148u: goto L_08948958;
    case 149u: goto L_08948968;
    case 150u: goto L_08948970;
    case 151u: goto L_08948980;
    case 152u: goto L_0894898C;
    case 153u: goto L_08948994;
    case 154u: goto L_089489AC;
    case 155u: goto L_089489D4;
    case 156u: goto L_089489E8;
    case 157u: goto L_089489EC;
    case 158u: goto L_08948A18;
    case 159u: goto L_08948A28;
    case 160u: goto L_08948A2C;
    case 161u: goto L_08948A34;
    case 162u: goto L_08948A40;
    case 163u: goto L_08948A4C;
    case 164u: goto L_08948A5C;
    case 165u: goto L_08948A74;
    case 166u: goto L_08948A88;
    case 167u: goto L_08948A98;
    case 168u: goto L_08948AB4;
    case 169u: goto L_08948ABC;
    case 170u: goto L_08948AD0;
    case 171u: goto L_08948AE8;
    case 172u: goto L_08948AFC;
    case 173u: goto L_08948B04;
    case 174u: goto L_08948B34;
    case 175u: goto L_08948BD4;
    case 176u: goto L_08948BDC;
    case 177u: goto L_08948BEC;
    case 178u: goto L_08948BF0;
    case 179u: goto L_08948BFC;
    case 180u: goto L_08948C1C;
    case 181u: goto L_08948C34;
    case 182u: goto L_08948C3C;
    case 183u: goto L_08948C44;
    case 184u: goto L_08948C4C;
    case 185u: goto L_08948C54;
    case 186u: goto L_08948C5C;
    case 187u: goto L_08948C68;
    case 188u: goto L_08948C7C;
    case 189u: goto L_08948C90;
    case 190u: goto L_08948C98;
    case 191u: goto L_08948CA8;
    case 192u: goto L_08948CB0;
    case 193u: goto L_08948CBC;
    case 194u: goto L_08948CC8;
    case 195u: goto L_08948D00;
    case 196u: goto L_08948D24;
    case 197u: goto L_08948D80;
    case 198u: goto L_08948D88;
    case 199u: goto L_08948D98;
    case 200u: goto L_08948DA8;
    case 201u: goto L_08948DC4;
    case 202u: goto L_08948DCC;
    case 203u: goto L_08948DDC;
    case 204u: goto L_08948DE4;
    case 205u: goto L_08948DEC;
    case 206u: goto L_08948DFC;
    case 207u: goto L_08948E08;
    case 208u: goto L_08948E18;
    case 209u: goto L_08948E28;
    case 210u: goto L_08948E30;
    case 211u: goto L_08948E38;
    case 212u: goto L_08948E40;
    case 213u: goto L_08948E48;
    case 214u: goto L_08948E50;
    case 215u: goto L_08948E58;
    case 216u: goto L_08948E60;
    case 217u: goto L_08948E6C;
    case 218u: goto L_08948E70;
    case 219u: goto L_08948E98;
    case 220u: goto L_08948EA0;
    case 221u: goto L_08948EA8;
    case 222u: goto L_08948EB0;
    case 223u: goto L_08948EB8;
    case 224u: goto L_08948EBC;
    case 225u: goto L_08948EC4;
    case 226u: goto L_08948ECC;
    case 227u: goto L_08948EF4;
    case 228u: goto L_08948F10;
    case 229u: goto L_08948F18;
    case 230u: goto L_08948F4C;
    case 231u: goto L_08948F78;
    case 232u: goto L_08948F88;
    case 233u: goto L_08948FA0;
    case 234u: goto L_08948FD4;
    case 235u: goto L_08948FEC;
    case 236u: goto L_08949008;
    case 237u: goto L_08949024;
    case 238u: goto L_0894905C;
    case 239u: goto L_08949064;
    case 240u: goto L_0894906C;
    case 241u: goto L_08949074;
    case 242u: goto L_0894909C;
    case 243u: goto L_089490B8;
    case 244u: goto L_089490C0;
    case 245u: goto L_089490D4;
    case 246u: goto L_089490F8;
    case 247u: goto L_08949114;
    case 248u: goto L_08949168;
    case 249u: goto L_0894917C;
    case 250u: goto L_089491EC;
    case 251u: goto L_08949230;
    case 252u: goto L_08949248;
    case 253u: goto L_08949254;
    case 254u: goto L_08949288;
    case 255u: goto L_089492B0;
    case 256u: goto L_089493C4;
    case 257u: goto L_08949458;
    case 258u: goto L_08949468;
    case 259u: goto L_08949478;
    case 260u: goto L_08949488;
    case 261u: goto L_08949498;
    case 262u: goto L_089494A8;
    case 263u: goto L_089494CC;
    case 264u: goto L_089494DC;
    case 265u: goto L_08949524;
    case 266u: goto L_0894955C;
    case 267u: goto L_08949588;
    case 268u: goto L_08949598;
    case 269u: goto L_089495C4;
    case 270u: goto L_08949614;
    case 271u: goto L_0894962C;
    case 272u: goto L_08949634;
    case 273u: goto L_08949648;
    case 274u: goto L_08949658;
    case 275u: goto L_0894966C;
    case 276u: goto L_08949670;
    case 277u: goto L_08949684;
    case 278u: goto L_08949694;
    case 279u: goto L_089496A8;
    case 280u: goto L_089496AC;
    case 281u: goto L_089496CC;
    case 282u: goto L_08949708;
    case 283u: goto L_08949710;
    case 284u: goto L_0894971C;
    case 285u: goto L_08949734;
    case 286u: goto L_089497C8;
    case 287u: goto L_089497DC;
    case 288u: goto L_08949804;
    case 289u: goto L_08949808;
    case 290u: goto L_08949814;
    case 291u: goto L_08949820;
    case 292u: goto L_08949828;
    case 293u: goto L_0894982C;
    case 294u: goto L_08949838;
    case 295u: goto L_08949844;
    case 296u: goto L_0894984C;
    case 297u: goto L_08949850;
    case 298u: goto L_0894985C;
    case 299u: goto L_08949868;
    case 300u: goto L_08949870;
    case 301u: goto L_08949874;
    case 302u: goto L_08949880;
    case 303u: goto L_0894988C;
    case 304u: goto L_08949894;
    case 305u: goto L_089498DC;
    case 306u: goto L_0894991C;
    case 307u: goto L_08949928;
    case 308u: goto L_08949940;
    case 309u: goto L_08949948;
    case 310u: goto L_08949950;
    case 311u: goto L_08949954;
    case 312u: goto L_08949958;
    case 313u: goto L_08949974;
    case 314u: goto L_08949980;
    case 315u: goto L_08949994;
    case 316u: goto L_089499A0;
    case 317u: goto L_089499A8;
    case 318u: goto L_089499B0;
    case 319u: goto L_089499B8;
    case 320u: goto L_089499C0;
    case 321u: goto L_089499D0;
    case 322u: goto L_089499E0;
    case 323u: goto L_089499FC;
    case 324u: goto L_08949A04;
    case 325u: goto L_08949A14;
    case 326u: goto L_08949A1C;
    case 327u: goto L_08949A24;
    case 328u: goto L_08949A34;
    case 329u: goto L_08949A3C;
    case 330u: goto L_08949A44;
    case 331u: goto L_08949A4C;
    case 332u: goto L_08949A54;
    case 333u: goto L_08949A5C;
    case 334u: goto L_08949A64;
    case 335u: goto L_08949A70;
    case 336u: goto L_08949A80;
    case 337u: goto L_08949A8C;
    case 338u: goto L_08949A94;
    case 339u: goto L_08949A9C;
    case 340u: goto L_08949AB8;
    case 341u: goto L_08949AC0;
    case 342u: goto L_08949ACC;
    case 343u: goto L_08949AD4;
    case 344u: goto L_08949B08;
    case 345u: goto L_08949B18;
    case 346u: goto L_08949B30;
    case 347u: goto L_08949B3C;
    case 348u: goto L_08949B44;
    case 349u: goto L_08949B4C;
    case 350u: goto L_08949B58;
    case 351u: goto L_08949B68;
    case 352u: goto L_08949B6C;
    case 353u: goto L_08949B78;
    case 354u: goto L_08949BA0;
    case 355u: goto L_08949BC8;
    case 356u: goto L_08949BF0;
    case 357u: goto L_08949C18;
    case 358u: goto L_08949C20;
    case 359u: goto L_08949C2C;
    case 360u: goto L_08949C38;
    case 361u: goto L_08949C44;
    case 362u: goto L_08949C48;
    case 363u: goto L_08949C68;
    case 364u: goto L_08949C7C;
    case 365u: goto L_08949C84;
    case 366u: goto L_08949CAC;
    case 367u: goto L_08949CD4;
    case 368u: goto L_08949CE8;
    case 369u: goto L_08949CF0;
    case 370u: goto L_08949D14;
    case 371u: goto L_08949D28;
    case 372u: goto L_08949D30;
    case 373u: goto L_08949D44;
    case 374u: goto L_08949D60;
    case 375u: goto L_08949D70;
    case 376u: goto L_08949D7C;
    case 377u: goto L_08949D84;
    case 378u: goto L_08949D94;
    case 379u: goto L_08949DA0;
    case 380u: goto L_08949DAC;
    case 381u: goto L_08949DB8;
    case 382u: goto L_08949DBC;
    case 383u: goto L_08949DC4;
    case 384u: goto L_08949DD0;
    case 385u: goto L_08949DD8;
    case 386u: goto L_08949DE0;
    case 387u: goto L_08949E04;
    case 388u: goto L_08949E2C;
    case 389u: goto L_08949E54;
    case 390u: goto L_08949E7C;
    case 391u: goto L_08949E84;
    case 392u: goto L_08949E8C;
    case 393u: goto L_08949E94;
    case 394u: goto L_08949E9C;
    case 395u: goto L_08949EA8;
    case 396u: goto L_08949EB4;
    case 397u: goto L_08949EC0;
    case 398u: goto L_08949ED0;
    case 399u: goto L_08949EE4;
    case 400u: goto L_08949EF0;
    case 401u: goto L_08949EFC;
    case 402u: goto L_08949F08;
    case 403u: goto L_08949F48;
    case 404u: goto L_08949F54;
    case 405u: goto L_08949F5C;
    case 406u: goto L_08949F68;
    case 407u: goto L_08949F70;
    case 408u: goto L_08949F78;
    case 409u: goto L_08949F84;
    case 410u: goto L_08949F90;
    case 411u: goto L_08949FA8;
    case 412u: goto L_08949FB4;
    case 413u: goto L_08949FB8;
    case 414u: goto L_08949FD8;
    case 415u: goto L_0894A000;
    case 416u: goto L_0894A01C;
    case 417u: goto L_0894A024;
    case 418u: goto L_0894A02C;
    case 419u: goto L_0894A048;
    case 420u: goto L_0894A058;
    case 421u: goto L_0894A060;
    case 422u: goto L_0894A06C;
    case 423u: goto L_0894A074;
    case 424u: goto L_0894A080;
    case 425u: goto L_0894A088;
    case 426u: goto L_0894A094;
    case 427u: goto L_0894A09C;
    case 428u: goto L_0894A0A4;
    case 429u: goto L_0894A0B0;
    case 430u: goto L_0894A0B8;
    case 431u: goto L_0894A0DC;
    case 432u: goto L_0894A104;
    case 433u: goto L_0894A10C;
    case 434u: goto L_0894A114;
    case 435u: goto L_0894A120;
    case 436u: goto L_0894A128;
    case 437u: goto L_0894A148;
    case 438u: goto L_0894A16C;
    case 439u: goto L_0894A174;
    case 440u: goto L_0894A17C;
    case 441u: goto L_0894A188;
    case 442u: goto L_0894A194;
    case 443u: goto L_0894A1BC;
    case 444u: goto L_0894A1D8;
    case 445u: goto L_0894A1F0;
    case 446u: goto L_0894A1F8;
    case 447u: goto L_0894A200;
    case 448u: goto L_0894A208;
    case 449u: goto L_0894A218;
    case 450u: goto L_0894A228;
    case 451u: goto L_0894A234;
    case 452u: goto L_0894A238;
    case 453u: goto L_0894A244;
    case 454u: goto L_0894A24C;
    case 455u: goto L_0894A264;
    case 456u: goto L_0894A270;
    case 457u: goto L_0894A278;
    case 458u: goto L_0894A280;
    case 459u: goto L_0894A288;
    case 460u: goto L_0894A290;
    case 461u: goto L_0894A298;
    case 462u: goto L_0894A2A4;
    case 463u: goto L_0894A2D4;
    case 464u: goto L_0894A2FC;
    case 465u: goto L_0894A348;
    case 466u: goto L_0894A378;
    case 467u: goto L_0894A394;
    case 468u: goto L_0894A39C;
    case 469u: goto L_0894A3B8;
    case 470u: goto L_0894A3CC;
    case 471u: goto L_0894A3FC;
    case 472u: goto L_0894A404;
    case 473u: goto L_0894A448;
    case 474u: goto L_0894A454;
    case 475u: goto L_0894A468;
    case 476u: goto L_0894A470;
    case 477u: goto L_0894A484;
    case 478u: goto L_0894A494;
    case 479u: goto L_0894A49C;
    case 480u: goto L_0894A4A8;
    case 481u: goto L_0894A4AC;
    case 482u: goto L_0894A4B4;
    case 483u: goto L_0894A4BC;
    case 484u: goto L_0894A4C8;
    case 485u: goto L_0894A4D8;
    case 486u: goto L_0894A4E4;
    case 487u: goto L_0894A50C;
    case 488u: goto L_0894A514;
    case 489u: goto L_0894A520;
    case 490u: goto L_0894A52C;
    case 491u: goto L_0894A534;
    case 492u: goto L_0894A538;
    case 493u: goto L_0894A548;
    case 494u: goto L_0894A550;
    case 495u: goto L_0894A570;
    case 496u: goto L_0894A57C;
    case 497u: goto L_0894A584;
    case 498u: goto L_0894A590;
    case 499u: goto L_0894A59C;
    case 500u: goto L_0894A5A4;
    case 501u: goto L_0894A5AC;
    case 502u: goto L_0894A5B4;
    case 503u: goto L_0894A5D0;
    case 504u: goto L_0894A5E0;
    case 505u: goto L_0894A5F0;
    case 506u: goto L_0894A604;
    case 507u: goto L_0894A608;
    case 508u: goto L_0894A614;
    case 509u: goto L_0894A628;
    case 510u: goto L_0894A63C;
    case 511u: goto L_0894A670;
    case 512u: goto L_0894A678;
    case 513u: goto L_0894A680;
    case 514u: goto L_0894A688;
    case 515u: goto L_0894A690;
    case 516u: goto L_0894A698;
    case 517u: goto L_0894A6A0;
    case 518u: goto L_0894A6A8;
    case 519u: goto L_0894A6B0;
    case 520u: goto L_0894A6BC;
    case 521u: goto L_0894A6DC;
    case 522u: goto L_0894A6F4;
    case 523u: goto L_0894A700;
    case 524u: goto L_0894A708;
    case 525u: goto L_0894A714;
    case 526u: goto L_0894A720;
    case 527u: goto L_0894A728;
    case 528u: goto L_0894A730;
    case 529u: goto L_0894A740;
    case 530u: goto L_0894A748;
    case 531u: goto L_0894A750;
    case 532u: goto L_0894A760;
    case 533u: goto L_0894A770;
    case 534u: goto L_0894A784;
    case 535u: goto L_0894A794;
    case 536u: goto L_0894A7BC;
    case 537u: goto L_0894A7DC;
    case 538u: goto L_0894A7E8;
    case 539u: goto L_0894A7F4;
    case 540u: goto L_0894A840;
    case 541u: goto L_0894A860;
    case 542u: goto L_0894A888;
    case 543u: goto L_0894A890;
    case 544u: goto L_0894A898;
    case 545u: goto L_0894A8B8;
    case 546u: goto L_0894A8E0;
    case 547u: goto L_0894A900;
    case 548u: goto L_0894A928;
    case 549u: goto L_0894A930;
    case 550u: goto L_0894A938;
    case 551u: goto L_0894A948;
    case 552u: goto L_0894A960;
    case 553u: goto L_0894A97C;
    case 554u: goto L_0894A9B8;
    case 555u: goto L_0894A9CC;
    case 556u: goto L_0894A9DC;
    case 557u: goto L_0894A9E8;
    case 558u: goto L_0894AA08;
    case 559u: goto L_0894AA18;
    case 560u: goto L_0894AA28;
    case 561u: goto L_0894AA70;
    case 562u: goto L_0894AA80;
    case 563u: goto L_0894AA84;
    case 564u: goto L_0894AAB0;
    case 565u: goto L_0894AAC0;
    case 566u: goto L_0894AAC8;
    case 567u: goto L_0894AADC;
    case 568u: goto L_0894AAE4;
    case 569u: goto L_0894AAEC;
    case 570u: goto L_0894AB00;
    case 571u: goto L_0894AB48;
    case 572u: goto L_0894AB5C;
    case 573u: goto L_0894AB74;
    case 574u: goto L_0894AB94;
    case 575u: goto L_0894ABC8;
    case 576u: goto L_0894ABD0;
    case 577u: goto L_0894ABE0;
    case 578u: goto L_0894ABF0;
    case 579u: goto L_0894AC00;
    case 580u: goto L_0894AC18;
    case 581u: goto L_0894AC24;
    case 582u: goto L_0894AC34;
    case 583u: goto L_0894AC40;
    case 584u: goto L_0894AC50;
    case 585u: goto L_0894AC58;
    case 586u: goto L_0894AC68;
    case 587u: goto L_0894AC6C;
    case 588u: goto L_0894AC74;
    case 589u: goto L_0894AC80;
    case 590u: goto L_0894AC90;
    case 591u: goto L_0894ACA0;
    case 592u: goto L_0894ACAC;
    case 593u: goto L_0894ACB4;
    case 594u: goto L_0894ACC4;
    case 595u: goto L_0894ACC8;
    case 596u: goto L_0894ACD4;
    case 597u: goto L_0894ACE4;
    case 598u: goto L_0894ACF4;
    case 599u: goto L_0894AD08;
    case 600u: goto L_0894AD14;
    case 601u: goto L_0894AD24;
    case 602u: goto L_0894AD34;
    case 603u: goto L_0894AD40;
    case 604u: goto L_0894AD48;
    case 605u: goto L_0894AD58;
    case 606u: goto L_0894AD68;
    case 607u: goto L_0894AD78;
    case 608u: goto L_0894AD84;
    case 609u: goto L_0894AD8C;
    case 610u: goto L_0894AD9C;
    case 611u: goto L_0894ADB0;
    case 612u: goto L_0894AE58;
    case 613u: goto L_0894AE64;
    case 614u: goto L_0894AE7C;
    case 615u: goto L_0894AEA0;
    case 616u: goto L_0894AEA8;
    case 617u: goto L_0894AECC;
    case 618u: goto L_0894AEF8;
    case 619u: goto L_0894AF04;
    case 620u: goto L_0894AF10;
    case 621u: goto L_0894AF1C;
    case 622u: goto L_0894AF2C;
    case 623u: goto L_0894AF3C;
    case 624u: goto L_0894AF4C;
    case 625u: goto L_0894AF50;
    case 626u: goto L_0894AF58;
    case 627u: goto L_0894AF68;
    case 628u: goto L_0894AF78;
    case 629u: goto L_0894AF88;
    case 630u: goto L_0894AF90;
    case 631u: goto L_0894AFA8;
    case 632u: goto L_0894AFB4;
    case 633u: goto L_0894AFC4;
    case 634u: goto L_0894AFD4;
    case 635u: goto L_0894AFE4;
    case 636u: goto L_0894B008;
    case 637u: goto L_0894B02C;
    case 638u: goto L_0894B044;
    case 639u: goto L_0894B054;
    case 640u: goto L_0894B05C;
    case 641u: goto L_0894B064;
    case 642u: goto L_0894B068;
    case 643u: goto L_0894B070;
    case 644u: goto L_0894B080;
    case 645u: goto L_0894B08C;
    case 646u: goto L_0894B0C0;
    case 647u: goto L_0894B0E4;
    case 648u: goto L_0894B0EC;
    case 649u: goto L_0894B0F8;
    case 650u: goto L_0894B11C;
    case 651u: goto L_0894B13C;
    case 652u: goto L_0894B14C;
    case 653u: goto L_0894B154;
    case 654u: goto L_0894B15C;
    case 655u: goto L_0894B170;
    case 656u: goto L_0894B17C;
    case 657u: goto L_0894B184;
    case 658u: goto L_0894B18C;
    case 659u: goto L_0894B194;
    case 660u: goto L_0894B19C;
    case 661u: goto L_0894B1A4;
    case 662u: goto L_0894B1B4;
    case 663u: goto L_0894B1BC;
    case 664u: goto L_0894B1C8;
    case 665u: goto L_0894B1E4;
    case 666u: goto L_0894B1EC;
    case 667u: goto L_0894B1F4;
    case 668u: goto L_0894B1FC;
    case 669u: goto L_0894B214;
    case 670u: goto L_0894B21C;
    case 671u: goto L_0894B224;
    case 672u: goto L_0894B238;
    case 673u: goto L_0894B240;
    case 674u: goto L_0894B248;
    case 675u: goto L_0894B250;
    case 676u: goto L_0894B260;
    case 677u: goto L_0894B268;
    case 678u: goto L_0894B270;
    case 679u: goto L_0894B278;
    case 680u: goto L_0894B280;
    case 681u: goto L_0894B29C;
    case 682u: goto L_0894B2A4;
    case 683u: goto L_0894B2AC;
    case 684u: goto L_0894B2B4;
    case 685u: goto L_0894B2CC;
    case 686u: goto L_0894B2D4;
    case 687u: goto L_0894B2DC;
    case 688u: goto L_0894B2F8;
    case 689u: goto L_0894B304;
    case 690u: goto L_0894B30C;
    case 691u: goto L_0894B324;
    case 692u: goto L_0894B338;
    case 693u: goto L_0894B344;
    case 694u: goto L_0894B348;
    case 695u: goto L_0894B368;
    case 696u: goto L_0894B374;
    case 697u: goto L_0894B388;
    case 698u: goto L_0894B390;
    case 699u: goto L_0894B398;
    case 700u: goto L_0894B3A8;
    case 701u: goto L_0894B3B0;
    case 702u: goto L_0894B3B8;
    case 703u: goto L_0894B3C8;
    case 704u: goto L_0894B3DC;
    case 705u: goto L_0894B408;
    case 706u: goto L_0894B420;
    case 707u: goto L_0894B428;
    case 708u: goto L_0894B42C;
    case 709u: goto L_0894B438;
    case 710u: goto L_0894B444;
    case 711u: goto L_0894B450;
    case 712u: goto L_0894B480;
    case 713u: goto L_0894B490;
    case 714u: goto L_0894B49C;
    case 715u: goto L_0894B4AC;
    case 716u: goto L_0894B4BC;
    case 717u: goto L_0894B4D8;
    case 718u: goto L_0894B4EC;
    case 719u: goto L_0894B4F4;
    case 720u: goto L_0894B514;
    case 721u: goto L_0894B51C;
    case 722u: goto L_0894B524;
    case 723u: goto L_0894B530;
    case 724u: goto L_0894B540;
    case 725u: goto L_0894B548;
    case 726u: goto L_0894B554;
    case 727u: goto L_0894B568;
    case 728u: goto L_0894B574;
    case 729u: goto L_0894B57C;
    case 730u: goto L_0894B588;
    case 731u: goto L_0894B590;
    case 732u: goto L_0894B598;
    case 733u: goto L_0894B5A0;
    case 734u: goto L_0894B5A8;
    case 735u: goto L_0894B5B8;
    case 736u: goto L_0894B5C4;
    case 737u: goto L_0894B5D4;
    case 738u: goto L_0894B5E4;
    case 739u: goto L_0894B5EC;
    case 740u: goto L_0894B5F4;
    case 741u: goto L_0894B600;
    case 742u: goto L_0894B614;
    case 743u: goto L_0894B620;
    case 744u: goto L_0894B63C;
    case 745u: goto L_0894B67C;
    case 746u: goto L_0894B688;
    case 747u: goto L_0894B690;
    case 748u: goto L_0894B6A4;
    case 749u: goto L_0894B6AC;
    case 750u: goto L_0894B6C0;
    case 751u: goto L_0894B6D8;
    case 752u: goto L_0894B6E4;
    case 753u: goto L_0894B6F8;
    case 754u: goto L_0894B71C;
    case 755u: goto L_0894B72C;
    case 756u: goto L_0894B744;
    case 757u: goto L_0894B75C;
    case 758u: goto L_0894B760;
    case 759u: goto L_0894B768;
    case 760u: goto L_0894B770;
    case 761u: goto L_0894B778;
    case 762u: goto L_0894B798;
    case 763u: goto L_0894B7A0;
    case 764u: goto L_0894B7A4;
    case 765u: goto L_0894B7C4;
    case 766u: goto L_0894B7D4;
    case 767u: goto L_0894B7E0;
    case 768u: goto L_0894B7E8;
    case 769u: goto L_0894B7F8;
    case 770u: goto L_0894B808;
    case 771u: goto L_0894B818;
    case 772u: goto L_0894B828;
    case 773u: goto L_0894B838;
    case 774u: goto L_0894B848;
    case 775u: goto L_0894B858;
    case 776u: goto L_0894B868;
    case 777u: goto L_0894B878;
    case 778u: goto L_0894B888;
    case 779u: goto L_0894B898;
    case 780u: goto L_0894B8A4;
    case 781u: goto L_0894B8AC;
    case 782u: goto L_0894B8BC;
    case 783u: goto L_0894B8CC;
    case 784u: goto L_0894B8DC;
    case 785u: goto L_0894B8EC;
    case 786u: goto L_0894B8F8;
    case 787u: goto L_0894B900;
    case 788u: goto L_0894B908;
    case 789u: goto L_0894B910;
    case 790u: goto L_0894B920;
    case 791u: goto L_0894B92C;
    case 792u: goto L_0894B934;
    case 793u: goto L_0894B93C;
    case 794u: goto L_0894B948;
    case 795u: goto L_0894B950;
    case 796u: goto L_0894B984;
    case 797u: goto L_0894B9A0;
    case 798u: goto L_0894B9C4;
    case 799u: goto L_0894B9CC;
    case 800u: goto L_0894B9D0;
    case 801u: goto L_0894B9D8;
    case 802u: goto L_0894B9E4;
    case 803u: goto L_0894B9EC;
    case 804u: goto L_0894BA08;
    case 805u: goto L_0894BA20;
    case 806u: goto L_0894BA28;
    case 807u: goto L_0894BA2C;
    case 808u: goto L_0894BA34;
    case 809u: goto L_0894BA40;
    case 810u: goto L_0894BA48;
    case 811u: goto L_0894BA60;
    case 812u: goto L_0894BA68;
    case 813u: goto L_0894BA6C;
    case 814u: goto L_0894BA74;
    case 815u: goto L_0894BA80;
    case 816u: goto L_0894BA9C;
    case 817u: goto L_0894BAE4;
    case 818u: goto L_0894BAF8;
    case 819u: goto L_0894BB48;
    case 820u: goto L_0894BB50;
    case 821u: goto L_0894BB5C;
    case 822u: goto L_0894BB64;
    case 823u: goto L_0894BB88;
    case 824u: goto L_0894BBA0;
    case 825u: goto L_0894BBAC;
    case 826u: goto L_0894BBC0;
    case 827u: goto L_0894BBD8;
    case 828u: goto L_0894BBE0;
    case 829u: goto L_0894BBF0;
    case 830u: goto L_0894BBF8;
    case 831u: goto L_0894BC00;
    case 832u: goto L_0894BC10;
    case 833u: goto L_0894BC20;
    case 834u: goto L_0894BC2C;
    case 835u: goto L_0894BC38;
    case 836u: goto L_0894BC4C;
    case 837u: goto L_0894BC50;
    case 838u: goto L_0894BC58;
    case 839u: goto L_0894BC68;
    case 840u: goto L_0894BC6C;
    case 841u: goto L_0894BC78;
    case 842u: goto L_0894BC88;
    case 843u: goto L_0894BC90;
    case 844u: goto L_0894BCC4;
    case 845u: goto L_0894BCCC;
    case 846u: goto L_0894BCD8;
    case 847u: goto L_0894BCF8;
    case 848u: goto L_0894BD04;
    case 849u: goto L_0894BD1C;
    case 850u: goto L_0894BD2C;
    case 851u: goto L_0894BD3C;
    case 852u: goto L_0894BD4C;
    case 853u: goto L_0894BD5C;
    case 854u: goto L_0894BD68;
    case 855u: goto L_0894BD78;
    case 856u: goto L_0894BD88;
    case 857u: goto L_0894BD98;
    case 858u: goto L_0894BDA0;
    case 859u: goto L_0894BDA8;
    case 860u: goto L_0894BDB8;
    case 861u: goto L_0894BDC0;
    case 862u: goto L_0894BDCC;
    case 863u: goto L_0894BDDC;
    case 864u: goto L_0894BDEC;
    case 865u: goto L_0894BE20;
    case 866u: goto L_0894BE28;
    case 867u: goto L_0894BE50;
    case 868u: goto L_0894BE68;
    case 869u: goto L_0894BE78;
    case 870u: goto L_0894BE84;
    case 871u: goto L_0894BE94;
    case 872u: goto L_0894BEC8;
    case 873u: goto L_0894BED0;
    case 874u: goto L_0894BEF0;
    case 875u: goto L_0894BF00;
    case 876u: goto L_0894BF0C;
    case 877u: goto L_0894BF1C;
    case 878u: goto L_0894BF50;
    case 879u: goto L_0894BF58;
    case 880u: goto L_0894BF78;
    case 881u: goto L_0894BF88;
    case 882u: goto L_0894BF94;
    case 883u: goto L_0894BFA4;
    case 884u: goto L_0894BFD8;
    case 885u: goto L_0894BFE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08948000:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0894800Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x0894800Cu) goto L_0894800C;
    return;
L_0894800C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089480E8;
      }
      goto L_08948014;
    }
L_08948014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089480E8;
      }
      goto L_08948024;
    }
L_08948024:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2936)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089480C0;
      }
      goto L_08948038;
    }
L_08948038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089480C0;
      }
      goto L_08948048;
    }
L_08948048:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089480C0;
      }
      goto L_08948058;
    }
L_08948058:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08948098u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x08948098u) goto L_08948098;
    return;
L_08948098:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089480C0;
      }
      goto L_089480A0;
    }
L_089480A0:
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089480B8u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089480B8u) goto L_089480B8;
    return;
L_089480B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089480E8;
      }
      goto L_089480C0;
    }
L_089480C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089480E8;
      }
      goto L_089480D0;
    }
L_089480D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089480E8u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089480E8u) goto L_089480E8;
    return;
L_089480E8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08948630;
      }
      goto L_089480F4;
    }
L_089480F4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[20] = (0u | 5u);
      if (branch_taken) {
          goto L_089481D4;
      }
      goto L_089480FC;
    }
L_089480FC:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894811C;
      }
      goto L_08948104;
    }
L_08948104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x08948114u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08948114u) goto L_08948114;
    return;
L_08948114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0894812C;
      }
      goto L_0894811C;
    }
L_0894811C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894812C;
L_0894812C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948140;
      }
      goto L_08948134;
    }
L_08948134:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08948140u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x08948140u) goto L_08948140;
    return;
L_08948140:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948154;
      }
      goto L_08948148;
    }
L_08948148:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08948154u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x08948154u) goto L_08948154;
    return;
L_08948154:
    ctx.gpr[31] = (0x0894815Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 872u, 0x088B3F18u>(ctx, &aot_mem) && ctx.pc == 0x0894815Cu) goto L_0894815C;
    return;
L_0894815C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08948168u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08948168u) goto L_08948168;
    return;
L_08948168:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894817C;
      }
      goto L_08948174;
    }
L_08948174:
    ctx.gpr[31] = (0x0894817Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 872u, 0x088B3F18u>(ctx, &aot_mem) && ctx.pc == 0x0894817Cu) goto L_0894817C;
    return;
L_0894817C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08948188u);
    ctx.gpr[5] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08948188u) goto L_08948188;
    return;
L_08948188:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089481A4;
      }
      goto L_08948194;
    }
L_08948194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089481A0u);
    ctx.gpr[5] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089481A0u) goto L_089481A0;
    return;
L_089481A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089481A4;
L_089481A4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089481B4;
      }
      goto L_089481AC;
    }
L_089481AC:
    ctx.gpr[31] = (0x089481B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 872u, 0x088B3F18u>(ctx, &aot_mem) && ctx.pc == 0x089481B4u) goto L_089481B4;
    return;
L_089481B4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089481C8;
      }
      goto L_089481BC;
    }
L_089481BC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089481C8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 863u, 0x088B3EA4u>(ctx, &aot_mem) && ctx.pc == 0x089481C8u) goto L_089481C8;
    return;
L_089481C8:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[22] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    goto L_089481D4;
L_089481D4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089481F0;
      }
      goto L_089481DC;
    }
L_089481DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089481E8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 863u, 0x088B3EA4u>(ctx, &aot_mem) && ctx.pc == 0x089481E8u) goto L_089481E8;
    return;
L_089481E8:
    ctx.gpr[31] = (0x089481F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 879u, 0x089A3B74u>(ctx, &aot_mem) && ctx.pc == 0x089481F0u) goto L_089481F0;
    return;
L_089481F0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894820C;
      }
      goto L_089481F8;
    }
L_089481F8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08948204u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 863u, 0x088B3EA4u>(ctx, &aot_mem) && ctx.pc == 0x08948204u) goto L_08948204;
    return;
L_08948204:
    ctx.gpr[31] = (0x0894820Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 879u, 0x089A3B74u>(ctx, &aot_mem) && ctx.pc == 0x0894820Cu) goto L_0894820C;
    return;
L_0894820C:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894822C;
      }
      goto L_08948214;
    }
L_08948214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x08948224u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08948224u) goto L_08948224;
    return;
L_08948224:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0894822C;
L_0894822C:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894824C;
      }
      goto L_08948234;
    }
L_08948234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x08948244u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08948244u) goto L_08948244;
    return;
L_08948244:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0894824C;
L_0894824C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894828C;
      }
      goto L_08948254;
    }
L_08948254:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894828C;
      }
      goto L_08948264;
    }
L_08948264:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08948270u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 863u, 0x088B3EA4u>(ctx, &aot_mem) && ctx.pc == 0x08948270u) goto L_08948270;
    return;
L_08948270:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0894828C;
L_0894828C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089482FC;
      }
      goto L_08948298;
    }
L_08948298:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2936)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089482EC;
      }
      goto L_089482AC;
    }
L_089482AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2936)));
    ctx.gpr[4] = (49942u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089482E4;
      }
      goto L_089482C8;
    }
L_089482C8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089482E4;
      }
      goto L_089482D0;
    }
L_089482D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089482EC;
      }
      goto L_089482E4;
    }
L_089482E4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    goto L_089482EC;
L_089482EC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089482FC;
      }
      goto L_089482F4;
    }
L_089482F4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    goto L_089482FC;
L_089482FC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089484F0;
      }
      goto L_08948304;
    }
L_08948304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_0894832C;
      }
      goto L_08948310;
    }
L_08948310:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089484F0;
      }
      goto L_0894832C;
    }
L_0894832C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894835C;
      }
      goto L_08948340;
    }
L_08948340:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08948630;
      }
      goto L_0894835C;
    }
L_0894835C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16204u << 16u);
      if (branch_taken) {
          goto L_089483C4;
      }
      goto L_08948370;
    }
L_08948370:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089483C4;
      }
      goto L_0894838C;
    }
L_0894838C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948630;
      }
      goto L_089483A8;
    }
L_089483A8:
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08948630;
      }
      goto L_089483C4;
    }
L_089483C4:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089484B4;
      }
      goto L_089483E4;
    }
L_089483E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[17] = (2202u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(15236));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08948444;
      }
      goto L_08948418;
    }
L_08948418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08948428u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08948428u) goto L_08948428;
    return;
L_08948428:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0894843Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 48u, 0x088B43F4u>(ctx, &aot_mem) && ctx.pc == 0x0894843Cu) goto L_0894843C;
    return;
L_0894843C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0894846C;
      }
      goto L_08948444;
    }
L_08948444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08948454u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08948454u) goto L_08948454;
    return;
L_08948454:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08948468u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 48u, 0x088B43F4u>(ctx, &aot_mem) && ctx.pc == 0x08948468u) goto L_08948468;
    return;
L_08948468:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0894846C;
L_0894846C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08948630;
      }
      goto L_089484B4;
    }
L_089484B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948630;
      }
      goto L_089484C8;
    }
L_089484C8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08948630;
      }
      goto L_089484F0;
    }
L_089484F0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948520;
      }
      goto L_089484F8;
    }
L_089484F8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08948630;
      }
      goto L_08948520;
    }
L_08948520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089485A0;
      }
      goto L_0894852C;
    }
L_0894852C:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948564;
      }
      goto L_08948534;
    }
L_08948534:
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (16384u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0894855Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x0894855Cu) goto L_0894855C;
    return;
L_0894855C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08948590;
      }
      goto L_08948564;
    }
L_08948564:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948590;
      }
      goto L_08948578;
    }
L_08948578:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49152u << 16u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08948590;
L_08948590:
    ctx.gpr[31] = (0x08948598u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 711u, 0x0894337Cu>(ctx, &aot_mem) && ctx.pc == 0x08948598u) goto L_08948598;
    return;
L_08948598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948630;
      }
      goto L_089485A0;
    }
L_089485A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089485D8;
      }
      goto L_089485BC;
    }
L_089485BC:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08948630;
      }
      goto L_089485D8;
    }
L_089485D8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_0894861C;
      }
      goto L_089485F4;
    }
L_089485F4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08948630;
      }
      goto L_0894861C;
    }
L_0894861C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    goto L_08948630;
L_08948630:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948718;
      }
      goto L_08948640;
    }
L_08948640:
    ctx.gpr[31] = (0x08948648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 295u, 0x08945460u>(ctx, &aot_mem) && ctx.pc == 0x08948648u) goto L_08948648;
    return;
L_08948648:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089486B4;
      }
      goto L_08948650;
    }
L_08948650:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948668;
      }
      goto L_08948658;
    }
L_08948658:
    ctx.gpr[4] = (16249u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39321u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08948668;
L_08948668:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948680;
      }
      goto L_08948670;
    }
L_08948670:
    ctx.gpr[4] = (16249u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39321u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08948680;
L_08948680:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948698;
      }
      goto L_08948688;
    }
L_08948688:
    ctx.gpr[4] = (16249u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39321u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08948698;
L_08948698:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948838;
      }
      goto L_089486A0;
    }
L_089486A0:
    ctx.gpr[4] = (16249u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39321u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08948838;
      }
      goto L_089486B4;
    }
L_089486B4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089486CC;
      }
      goto L_089486BC;
    }
L_089486BC:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089486CC;
L_089486CC:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089486E4;
      }
      goto L_089486D4;
    }
L_089486D4:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089486E4;
L_089486E4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089486FC;
      }
      goto L_089486EC;
    }
L_089486EC:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089486FC;
L_089486FC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948838;
      }
      goto L_08948704;
    }
L_08948704:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08948838;
      }
      goto L_08948718;
    }
L_08948718:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2995)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089487DC;
      }
      goto L_08948724;
    }
L_08948724:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2988)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0894877C;
      }
      goto L_0894873C;
    }
L_0894873C:
    ctx.gpr[5] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2995), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08948754;
      }
      goto L_08948750;
    }
L_08948750:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08948754;
L_08948754:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948760;
      }
      goto L_0894875C;
    }
L_0894875C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08948760;
L_08948760:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894876C;
      }
      goto L_08948768;
    }
L_08948768:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894876C;
L_0894876C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948838;
      }
      goto L_08948774;
    }
L_08948774:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08948838;
      }
      goto L_0894877C;
    }
L_0894877C:
    ctx.gpr[5] = (16042u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 43691u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894879C;
      }
      goto L_08948790;
    }
L_08948790:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894879C;
L_0894879C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089487B0;
      }
      goto L_089487A4;
    }
L_089487A4:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089487B0;
L_089487B0:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089487C4;
      }
      goto L_089487B8;
    }
L_089487B8:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089487C4;
L_089487C4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948838;
      }
      goto L_089487CC;
    }
L_089487CC:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08948838;
      }
      goto L_089487DC;
    }
L_089487DC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08948838;
      }
      goto L_089487E4;
    }
L_089487E4:
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
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894882C;
      }
      goto L_08948818;
    }
L_08948818:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08948838;
      }
      goto L_0894882C;
    }
L_0894882C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08948838;
L_08948838:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948870:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[31] = (0x089488B0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 159u, 0x08944B00u>(ctx, &aot_mem) && ctx.pc == 0x089488B0u) goto L_089488B0;
    return;
L_089488B0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089488CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 859u, 0x08A97538u>(ctx, &aot_mem) && ctx.pc == 0x089488CCu) goto L_089488CC;
    return;
L_089488CC:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089488DCu);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 868u, 0x08A9759Cu>(ctx, &aot_mem) && ctx.pc == 0x089488DCu) goto L_089488DC;
    return;
L_089488DC:
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089488ECu);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 56u, 0x089443D8u>(ctx, &aot_mem) && ctx.pc == 0x089488ECu) goto L_089488EC;
    return;
L_089488EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089488FC;
      }
      goto L_089488F4;
    }
L_089488F4:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_089488FC;
L_089488FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08948934;
      }
      goto L_08948910;
    }
L_08948910:
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_08948938;
    }
    goto L_08948920;
L_08948920:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08948958;
      }
      goto L_08948934;
    }
L_08948934:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08948938;
L_08948938:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[30] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] / ctx.fpr[14];
    goto L_08948958;
L_08948958:
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948970;
      }
      goto L_08948968;
    }
L_08948968:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948A34;
      }
      goto L_08948970;
    }
L_08948970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089489D4;
      }
      goto L_08948980;
    }
L_08948980:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    ctx.gpr[31] = (0x0894898Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0894898Cu) goto L_0894898C;
    return;
L_0894898C:
    ctx.gpr[31] = (0x08948994u);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08948994u) goto L_08948994;
    return;
L_08948994:
    ctx.gpr[5] = (0u | 41u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[28]));
    ctx.gpr[18] = (0u | 36u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_089489E8;
      }
      goto L_089489AC;
    }
L_089489AC:
    ctx.gpr[6] = (15360u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089489EC;
      }
      goto L_089489D4;
    }
L_089489D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08948CC8;
      }
      goto L_089489E8;
    }
L_089489E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089489EC;
L_089489EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[30] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948A28;
      }
      goto L_08948A18;
    }
L_08948A18:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08948A2C;
      }
      goto L_08948A28;
    }
L_08948A28:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08948A2C;
L_08948A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948A40;
      }
      goto L_08948A34;
    }
L_08948A34:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (0u | 41u);
    ctx.gpr[18] = (0u | 36u);
    goto L_08948A40;
L_08948A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08948BF0;
      }
      goto L_08948A4C;
    }
L_08948A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948BDC;
      }
      goto L_08948A5C;
    }
L_08948A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948BF0;
      }
      goto L_08948A74;
    }
L_08948A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948BF0;
      }
      goto L_08948A88;
    }
L_08948A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08948AB4;
      }
      goto L_08948A98;
    }
L_08948A98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948BF0;
      }
      goto L_08948AB4;
    }
L_08948AB4:
    ctx.gpr[31] = (0x08948ABCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08948ABCu) goto L_08948ABC;
    return;
L_08948ABC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08948AD0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08948AD0u) goto L_08948AD0;
    return;
L_08948AD0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29884)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29888)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08948AE8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08948AE8u) goto L_08948AE8;
    return;
L_08948AE8:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08948AFCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x08948AFCu) goto L_08948AFC;
    return;
L_08948AFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08948BF0;
      }
      goto L_08948B04;
    }
L_08948B04:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[4] | 55051u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08948BF0;
      }
      goto L_08948B34;
    }
L_08948B34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (15502u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64012u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49216u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08948BD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08948BD4u) goto L_08948BD4;
    return;
L_08948BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948BF0;
      }
      goto L_08948BDC;
    }
L_08948BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948BF0;
      }
      goto L_08948BEC;
    }
L_08948BEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08948BF0;
L_08948BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08948C3C;
      }
      goto L_08948BFC;
    }
L_08948BFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08948C1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08948C1Cu) goto L_08948C1C;
    return;
L_08948C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948C4C;
      }
      goto L_08948C34;
    }
L_08948C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948C98;
      }
      goto L_08948C3C;
    }
L_08948C3C:
    ctx.gpr[31] = (0x08948C44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08948C44u) goto L_08948C44;
    return;
L_08948C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948CC8;
      }
      goto L_08948C4C;
    }
L_08948C4C:
    ctx.gpr[31] = (0x08948C54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 116u, 0x08A984C8u>(ctx, &aot_mem) && ctx.pc == 0x08948C54u) goto L_08948C54;
    return;
L_08948C54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948C98;
      }
      goto L_08948C5C;
    }
L_08948C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948C90;
      }
      goto L_08948C68;
    }
L_08948C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948C90;
      }
      goto L_08948C7C;
    }
L_08948C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948C98;
      }
      goto L_08948C90;
    }
L_08948C90:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    goto L_08948C98;
L_08948C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08948CB0;
      }
      goto L_08948CA8;
    }
L_08948CA8:
    ctx.gpr[31] = (0x08948CB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08948CB0u) goto L_08948CB0;
    return;
L_08948CB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08948CBCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 658u, 0x08943084u>(ctx, &aot_mem) && ctx.pc == 0x08948CBCu) goto L_08948CBC;
    return;
L_08948CBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08948CC8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 813u, 0x08943D20u>(ctx, &aot_mem) && ctx.pc == 0x08948CC8u) goto L_08948CC8;
    return;
L_08948CC8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08948D00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08948D24u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0894B0C0;
L_08948D24:
    ctx.gpr[4] = (49942u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2936)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] | 52429u);
    ctx.gpr[18] = (2232u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[31] = (0x08948D80u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 77u, 0x08A98300u>(ctx, &aot_mem) && ctx.pc == 0x08948D80u) goto L_08948D80;
    return;
L_08948D80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948DCC;
      }
      goto L_08948D88;
    }
L_08948D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948DCC;
      }
      goto L_08948D98;
    }
L_08948D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08948DCC;
      }
      goto L_08948DA8;
    }
L_08948DA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u | 60000u);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08948DC4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 656u, 0x088875FCu>(ctx, &aot_mem) && ctx.pc == 0x08948DC4u) goto L_08948DC4;
    return;
L_08948DC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948E18;
      }
      goto L_08948DCC;
    }
L_08948DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948E18;
      }
      goto L_08948DDC;
    }
L_08948DDC:
    ctx.gpr[31] = (0x08948DE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 77u, 0x08A98300u>(ctx, &aot_mem) && ctx.pc == 0x08948DE4u) goto L_08948DE4;
    return;
L_08948DE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08948DFC;
      }
      goto L_08948DEC;
    }
L_08948DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08948E18;
      }
      goto L_08948DFC;
    }
L_08948DFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08948E08u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 683u, 0x088877D0u>(ctx, &aot_mem) && ctx.pc == 0x08948E08u) goto L_08948E08;
    return;
L_08948E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_08948E18;
L_08948E18:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948E50;
      }
      goto L_08948E28;
    }
L_08948E28:
    ctx.gpr[31] = (0x08948E30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 59u, 0x08A98240u>(ctx, &aot_mem) && ctx.pc == 0x08948E30u) goto L_08948E30;
    return;
L_08948E30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089490F8;
      }
      goto L_08948E38;
    }
L_08948E38:
    ctx.gpr[31] = (0x08948E40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 311u, 0x088D55F0u>(ctx, &aot_mem) && ctx.pc == 0x08948E40u) goto L_08948E40;
    return;
L_08948E40:
    ctx.gpr[31] = (0x08948E48u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 327u, 0x088EE310u>(ctx, &aot_mem) && ctx.pc == 0x08948E48u) goto L_08948E48;
    return;
L_08948E48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089490F8;
      }
      goto L_08948E50;
    }
L_08948E50:
    ctx.gpr[31] = (0x08948E58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 59u, 0x08A98240u>(ctx, &aot_mem) && ctx.pc == 0x08948E58u) goto L_08948E58;
    return;
L_08948E58:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_08948E70;
    }
    goto L_08948E60;
L_08948E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948EA0;
      }
      goto L_08948E6C;
    }
L_08948E6C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    goto L_08948E70;
L_08948E70:
    ctx.gpr[19] = (0u | 266u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_08948EB8;
      }
      goto L_08948E98;
    }
L_08948E98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08948EBC;
      }
      goto L_08948EA0;
    }
L_08948EA0:
    ctx.gpr[31] = (0x08948EA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x08948EA8u) goto L_08948EA8;
    return;
L_08948EA8:
    ctx.gpr[31] = (0x08948EB0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 327u, 0x088EE310u>(ctx, &aot_mem) && ctx.pc == 0x08948EB0u) goto L_08948EB0;
    return;
L_08948EB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089490F8;
      }
      goto L_08948EB8;
    }
L_08948EB8:
    ctx.gpr[19] = (0u | 333u);
    goto L_08948EBC;
L_08948EBC:
    ctx.gpr[31] = (0x08948EC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1108u, 0x08A97FCCu>(ctx, &aot_mem) && ctx.pc == 0x08948EC4u) goto L_08948EC4;
    return;
L_08948EC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948F88;
      }
      goto L_08948ECC;
    }
L_08948ECC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1444)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948F88;
      }
      goto L_08948EF4;
    }
L_08948EF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08948F10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 306u, 0x08851CF0u>(ctx, &aot_mem) && ctx.pc == 0x08948F10u) goto L_08948F10;
    return;
L_08948F10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08948F88;
      }
      goto L_08948F18;
    }
L_08948F18:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08948F4Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 616u, 0x08942D10u>(ctx, &aot_mem) && ctx.pc == 0x08948F4Cu) goto L_08948F4C;
    return;
L_08948F4C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08948F78u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 186u, 0x088550F0u>(ctx, &aot_mem) && ctx.pc == 0x08948F78u) goto L_08948F78;
    return;
L_08948F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3212), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089490D4;
      }
      goto L_08948F88;
    }
L_08948F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3212)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08949064;
      }
      goto L_08948FA0;
    }
L_08948FA0:
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
        goto L_08948FEC;
    }
    goto L_08948FD4;
L_08948FD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08949008;
      }
      goto L_08948FEC;
    }
L_08948FEC:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[4] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08949008;
L_08949008:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3212)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949064;
      }
      goto L_08949024;
    }
L_08949024:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 57u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x0894905Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0894905Cu) goto L_0894905C;
    return;
L_0894905C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089490D4;
      }
      goto L_08949064;
    }
L_08949064:
    ctx.gpr[31] = (0x0894906Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1108u, 0x08A97FCCu>(ctx, &aot_mem) && ctx.pc == 0x0894906Cu) goto L_0894906C;
    return;
L_0894906C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089490D4;
      }
      goto L_08949074;
    }
L_08949074:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1444)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089490D4;
      }
      goto L_0894909C;
    }
L_0894909C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089490B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 306u, 0x08851CF0u>(ctx, &aot_mem) && ctx.pc == 0x089490B8u) goto L_089490B8;
    return;
L_089490B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089490D4;
      }
      goto L_089490C0;
    }
L_089490C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089490D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x089490D4u) goto L_089490D4;
    return;
L_089490D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089490F8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 327u, 0x08855A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089490F8u) goto L_089490F8;
    return;
L_089490F8:
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
L_08949114:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(716), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(720), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(724), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(728), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08949168u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 246u, 0x08A98A58u>(ctx, &aot_mem) && ctx.pc == 0x08949168u) goto L_08949168;
    return;
L_08949168:
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0894917Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 261u, 0x08A98B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0894917Cu) goto L_0894917C;
    return;
L_0894917C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089491ECu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 601u, 0x088EBAD8u>(ctx, &aot_mem) && ctx.pc == 0x089491ECu) goto L_089491EC;
    return;
L_089491EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(832));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08949230u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 481u, 0x08A05DFCu>(ctx, &aot_mem) && ctx.pc == 0x08949230u) goto L_08949230;
    return;
L_08949230:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[31] = (0x08949248u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08949248u) goto L_08949248;
    return;
L_08949248:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08949254u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A06460u>(ctx, &aot_mem) && ctx.pc == 0x08949254u) goto L_08949254;
    return;
L_08949254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[31] = (0x08949288u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A06460u>(ctx, &aot_mem) && ctx.pc == 0x08949288u) goto L_08949288;
    return;
L_08949288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089492B0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 616u, 0x08942D10u>(ctx, &aot_mem) && ctx.pc == 0x089492B0u) goto L_089492B0;
    return;
L_089492B0:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[28];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089493C4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 616u, 0x08942D10u>(ctx, &aot_mem) && ctx.pc == 0x089493C4u) goto L_089493C4;
    return;
L_089493C4:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[28];
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17116u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
      if (branch_taken) {
          goto L_08949478;
      }
      goto L_08949458;
    }
L_08949458:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089494CC;
      }
      goto L_08949468;
    }
L_08949468:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089494CC;
      }
      goto L_08949478;
    }
L_08949478:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089494A8;
      }
      goto L_08949488;
    }
L_08949488:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089494CC;
      }
      goto L_08949498;
    }
L_08949498:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089494CC;
      }
      goto L_089494A8;
    }
L_089494A8:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_089494CC;
L_089494CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089494DCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 616u, 0x08942D10u>(ctx, &aot_mem) && ctx.pc == 0x089494DCu) goto L_089494DC;
    return;
L_089494DC:
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08949524u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08949524u) goto L_08949524;
    return;
L_08949524:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
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
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0894955Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x0894955Cu) goto L_0894955C;
    return;
L_0894955C:
    ctx.gpr[4] = (14749u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08949588u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08949588u) goto L_08949588;
    return;
L_08949588:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08949598u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 616u, 0x08942D10u>(ctx, &aot_mem) && ctx.pc == 0x08949598u) goto L_08949598;
    return;
L_08949598:
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089495C4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 616u, 0x08942D10u>(ctx, &aot_mem) && ctx.pc == 0x089495C4u) goto L_089495C4;
    return;
L_089495C4:
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08949614u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 234u, 0x08A1D254u>(ctx, &aot_mem) && ctx.pc == 0x08949614u) goto L_08949614;
    return;
L_08949614:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0894962Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 234u, 0x08A1D254u>(ctx, &aot_mem) && ctx.pc == 0x0894962Cu) goto L_0894962C;
    return;
L_0894962C:
    ctx.gpr[31] = (0x08949634u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 236u, 0x08A1D284u>(ctx, &aot_mem) && ctx.pc == 0x08949634u) goto L_08949634;
    return;
L_08949634:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (49884u << 16u);
      if (branch_taken) {
          goto L_08949670;
      }
      goto L_08949648;
    }
L_08949648:
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_089496CC;
      }
      goto L_08949658;
    }
L_08949658:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29848)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089496CC;
      }
      goto L_0894966C;
    }
L_0894966C:
    ctx.gpr[4] = (49884u << 16u);
    goto L_08949670;
L_08949670:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
        goto L_089496AC;
    }
    goto L_08949684;
L_08949684:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_089496CC;
      }
      goto L_08949694;
    }
L_08949694:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29848)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089496CC;
      }
      goto L_089496A8;
    }
L_089496A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
    goto L_089496AC;
L_089496AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29848), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_089496CC;
L_089496CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08949708u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 478u, 0x088C68F4u>(ctx, &aot_mem) && ctx.pc == 0x08949708u) goto L_08949708;
    return;
L_08949708:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
        goto L_08949808;
    }
    goto L_08949710;
L_08949710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    if (ctx.gpr[4] == ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
        goto L_08949808;
    }
    goto L_0894971C;
L_0894971C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[31] = (0x08949734u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 616u, 0x08942D10u>(ctx, &aot_mem) && ctx.pc == 0x08949734u) goto L_08949734;
    return;
L_08949734:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[28];
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17144u << 16u);
      if (branch_taken) {
          goto L_08949804;
      }
      goto L_089497C8;
    }
L_089497C8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08949804;
      }
      goto L_089497DC;
    }
L_089497DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08949804;
L_08949804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    goto L_08949808;
L_08949808:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_0894982C;
    }
    goto L_08949814;
L_08949814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
        goto L_0894982C;
    }
    goto L_08949820;
L_08949820:
    ctx.gpr[31] = (0x08949828u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08949828u) goto L_08949828;
    return;
L_08949828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_0894982C;
L_0894982C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
        goto L_08949850;
    }
    goto L_08949838;
L_08949838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
        goto L_08949850;
    }
    goto L_08949844;
L_08949844:
    ctx.gpr[31] = (0x0894984Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0894984Cu) goto L_0894984C;
    return;
L_0894984C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    goto L_08949850;
L_08949850:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
        goto L_08949874;
    }
    goto L_0894985C;
L_0894985C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
        goto L_08949874;
    }
    goto L_08949868;
L_08949868:
    ctx.gpr[31] = (0x08949870u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08949870u) goto L_08949870;
    return;
L_08949870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    goto L_08949874;
L_08949874:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949894;
      }
      goto L_08949880;
    }
L_08949880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949894;
      }
      goto L_0894988C;
    }
L_0894988C:
    ctx.gpr[31] = (0x08949894u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08949894u) goto L_08949894;
    return;
L_08949894:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(716)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089498DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-624));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894991Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 66u, 0x08A98290u>(ctx, &aot_mem) && ctx.pc == 0x0894991Cu) goto L_0894991C;
    return;
L_0894991C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3208)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08949954;
      }
      goto L_08949928;
    }
L_08949928:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3208)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3208), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3208)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08949958;
    }
    goto L_08949940;
L_08949940:
    ctx.gpr[31] = (0x08949948u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 59u, 0x08A98240u>(ctx, &aot_mem) && ctx.pc == 0x08949948u) goto L_08949948;
    return;
L_08949948:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08949958;
    }
    goto L_08949950;
L_08949950:
    ctx.gpr[20] = (0u | 1u);
    goto L_08949954;
L_08949954:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_08949958;
L_08949958:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08949974u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08949974u) goto L_08949974;
    return;
L_08949974:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089499B0;
      }
      goto L_08949980;
    }
L_08949980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089499B0;
      }
      goto L_08949994;
    }
L_08949994:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089499A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 327u, 0x088EE310u>(ctx, &aot_mem) && ctx.pc == 0x089499A0u) goto L_089499A0;
    return;
L_089499A0:
    ctx.gpr[31] = (0x089499A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 160u, 0x08868FB4u>(ctx, &aot_mem) && ctx.pc == 0x089499A8u) goto L_089499A8;
    return;
L_089499A8:
    ctx.gpr[31] = (0x089499B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 311u, 0x088D55F0u>(ctx, &aot_mem) && ctx.pc == 0x089499B0u) goto L_089499B0;
    return;
L_089499B0:
    ctx.gpr[31] = (0x089499B8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 77u, 0x08A98300u>(ctx, &aot_mem) && ctx.pc == 0x089499B8u) goto L_089499B8;
    return;
L_089499B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949A04;
      }
      goto L_089499C0;
    }
L_089499C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949A04;
      }
      goto L_089499D0;
    }
L_089499D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949A04;
      }
      goto L_089499E0;
    }
L_089499E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u | 60000u);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089499FCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 656u, 0x088875FCu>(ctx, &aot_mem) && ctx.pc == 0x089499FCu) goto L_089499FC;
    return;
L_089499FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949A80;
      }
      goto L_08949A04;
    }
L_08949A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949A80;
      }
      goto L_08949A14;
    }
L_08949A14:
    ctx.gpr[31] = (0x08949A1Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 77u, 0x08A98300u>(ctx, &aot_mem) && ctx.pc == 0x08949A1Cu) goto L_08949A1C;
    return;
L_08949A1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949A64;
      }
      goto L_08949A24;
    }
L_08949A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949A64;
      }
      goto L_08949A34;
    }
L_08949A34:
    ctx.gpr[31] = (0x08949A3Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 116u, 0x08A984C8u>(ctx, &aot_mem) && ctx.pc == 0x08949A3Cu) goto L_08949A3C;
    return;
L_08949A3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949A64;
      }
      goto L_08949A44;
    }
L_08949A44:
    ctx.gpr[31] = (0x08949A4Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 78u, 0x08A98308u>(ctx, &aot_mem) && ctx.pc == 0x08949A4Cu) goto L_08949A4C;
    return;
L_08949A4C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949A64;
      }
      goto L_08949A54;
    }
L_08949A54:
    ctx.gpr[31] = (0x08949A5Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1089u, 0x08A97F24u>(ctx, &aot_mem) && ctx.pc == 0x08949A5Cu) goto L_08949A5C;
    return;
L_08949A5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949A80;
      }
      goto L_08949A64;
    }
L_08949A64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08949A70u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 683u, 0x088877D0u>(ctx, &aot_mem) && ctx.pc == 0x08949A70u) goto L_08949A70;
    return;
L_08949A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_08949A80;
L_08949A80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949A9C;
      }
      goto L_08949A8C;
    }
L_08949A8C:
    ctx.gpr[31] = (0x08949A94u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 59u, 0x08A98240u>(ctx, &aot_mem) && ctx.pc == 0x08949A94u) goto L_08949A94;
    return;
L_08949A94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949AC0;
      }
      goto L_08949A9C;
    }
L_08949A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (17096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08949AD4;
      }
      goto L_08949AB8;
    }
L_08949AB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949B18;
      }
      goto L_08949AC0;
    }
L_08949AC0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3229), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08949ACCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 198u, 0x08944DA0u>(ctx, &aot_mem) && ctx.pc == 0x08949ACCu) goto L_08949ACC;
    return;
L_08949ACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B08C;
      }
      goto L_08949AD4;
    }
L_08949AD4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29904)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08949B08;
    }
    goto L_08949B08;
L_08949B08:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08949B3C;
      }
      goto L_08949B18;
    }
L_08949B18:
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08949B30;
    }
    goto L_08949B30;
L_08949B30:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08949B3C;
L_08949B3C:
    ctx.gpr[31] = (0x08949B44u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 59u, 0x08A98240u>(ctx, &aot_mem) && ctx.pc == 0x08949B44u) goto L_08949B44;
    return;
L_08949B44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08949B58;
      }
      goto L_08949B4C;
    }
L_08949B4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949B6C;
      }
      goto L_08949B58;
    }
L_08949B58:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23772)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949B6C;
      }
      goto L_08949B68;
    }
L_08949B68:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23772), static_cast<std::uint8_t>(0u));
    goto L_08949B6C;
L_08949B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949E7C;
      }
      goto L_08949B78;
    }
L_08949B78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[18] = (0u | 30u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08949C18;
      }
      goto L_08949BA0;
    }
L_08949BA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949C18;
      }
      goto L_08949BC8;
    }
L_08949BC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949C18;
      }
      goto L_08949BF0;
    }
L_08949BF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949E7C;
      }
      goto L_08949C18;
    }
L_08949C18:
    ctx.gpr[31] = (0x08949C20u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 66u, 0x08A98290u>(ctx, &aot_mem) && ctx.pc == 0x08949C20u) goto L_08949C20;
    return;
L_08949C20:
    ctx.gpr[21] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(13216));
      if (branch_taken) {
          goto L_08949C38;
      }
      goto L_08949C2C;
    }
L_08949C2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08949C48;
    }
    goto L_08949C38;
L_08949C38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949DD0;
      }
      goto L_08949C44;
    }
L_08949C44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_08949C48;
L_08949C48:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08949C84;
      }
      goto L_08949C68;
    }
L_08949C68:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08949C7Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 313u, 0x088EE22Cu>(ctx, &aot_mem) && ctx.pc == 0x08949C7Cu) goto L_08949C7C;
    return;
L_08949C7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949D44;
      }
      goto L_08949C84;
    }
L_08949C84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949CD4;
      }
      goto L_08949CAC;
    }
L_08949CAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 29u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08949CF0;
    }
    goto L_08949CD4;
L_08949CD4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08949CE8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 313u, 0x088EE22Cu>(ctx, &aot_mem) && ctx.pc == 0x08949CE8u) goto L_08949CE8;
    return;
L_08949CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949D44;
      }
      goto L_08949CF0;
    }
L_08949CF0:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949D30;
      }
      goto L_08949D14;
    }
L_08949D14:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 46u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08949D28u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 313u, 0x088EE22Cu>(ctx, &aot_mem) && ctx.pc == 0x08949D28u) goto L_08949D28;
    return;
L_08949D28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949D44;
      }
      goto L_08949D30;
    }
L_08949D30:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08949D44u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 313u, 0x088EE22Cu>(ctx, &aot_mem) && ctx.pc == 0x08949D44u) goto L_08949D44;
    return;
L_08949D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (17530u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08949D60u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x08949D60u) goto L_08949D60;
    return;
L_08949D60:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949D84;
      }
      goto L_08949D70;
    }
L_08949D70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08949D7Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 256u, 0x088D52C4u>(ctx, &aot_mem) && ctx.pc == 0x08949D7Cu) goto L_08949D7C;
    return;
L_08949D7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08949DD0;
      }
      goto L_08949D84;
    }
L_08949D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949DC4;
      }
      goto L_08949D94;
    }
L_08949D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949DBC;
      }
      goto L_08949DA0;
    }
L_08949DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_08949DBC;
    }
    goto L_08949DAC;
L_08949DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08949DB8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08949DB8u) goto L_08949DB8;
    return;
L_08949DB8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_08949DBC;
L_08949DBC:
    ctx.gpr[31] = (0x08949DC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08949DC4u) goto L_08949DC4;
    return;
L_08949DC4:
    ctx.gpr[4] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894B08C;
      }
      goto L_08949DD0;
    }
L_08949DD0:
    ctx.gpr[31] = (0x08949DD8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 335u, 0x088EE37Cu>(ctx, &aot_mem) && ctx.pc == 0x08949DD8u) goto L_08949DD8;
    return;
L_08949DD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08949E7C;
      }
      goto L_08949DE0;
    }
L_08949DE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08949E94;
      }
      goto L_08949E04;
    }
L_08949E04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949E94;
      }
      goto L_08949E2C;
    }
L_08949E2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949E94;
      }
      goto L_08949E54;
    }
L_08949E54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08949E94;
      }
      goto L_08949E7C;
    }
L_08949E7C:
    ctx.gpr[31] = (0x08949E84u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1101u, 0x08A97F90u>(ctx, &aot_mem) && ctx.pc == 0x08949E84u) goto L_08949E84;
    return;
L_08949E84:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
        goto L_08949E9C;
    }
    goto L_08949E8C;
L_08949E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A128;
      }
      goto L_08949E94;
    }
L_08949E94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B08C;
      }
      goto L_08949E9C;
    }
L_08949E9C:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A128;
      }
      goto L_08949EA8;
    }
L_08949EA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949EC0;
      }
      goto L_08949EB4;
    }
L_08949EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08949EC0;
L_08949EC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A188;
      }
      goto L_08949ED0;
    }
L_08949ED0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 16u);
      if (branch_taken) {
          goto L_08949F5C;
      }
      goto L_08949EE4;
    }
L_08949EE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949F5C;
      }
      goto L_08949EF0;
    }
L_08949EF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08949F08;
      }
      goto L_08949EFC;
    }
L_08949EFC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2960), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08949F48;
      }
      goto L_08949F08;
    }
L_08949F08:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29900)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2960)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2960), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08949F48;
L_08949F48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[31] = (0x08949F54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 224u, 0x088D915Cu>(ctx, &aot_mem) && ctx.pc == 0x08949F54u) goto L_08949F54;
    return;
L_08949F54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A188;
      }
      goto L_08949F5C;
    }
L_08949F5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08949FA8;
      }
      goto L_08949F68;
    }
L_08949F68:
    ctx.gpr[31] = (0x08949F70u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1108u, 0x08A97FCCu>(ctx, &aot_mem) && ctx.pc == 0x08949F70u) goto L_08949F70;
    return;
L_08949F70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08949F84;
      }
      goto L_08949F78;
    }
L_08949F78:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2964), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08949FB4;
      }
      goto L_08949F84;
    }
L_08949F84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2964)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08949FB8;
    }
    goto L_08949F90;
L_08949F90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2960)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7840)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2960), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08949FB4;
      }
      goto L_08949FA8;
    }
L_08949FA8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2964), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2960), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08949FB4;
L_08949FB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_08949FB8;
L_08949FB8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A01C;
      }
      goto L_08949FD8;
    }
L_08949FD8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A01C;
      }
      goto L_0894A000;
    }
L_0894A000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A088;
      }
      goto L_0894A01C;
    }
L_0894A01C:
    ctx.gpr[31] = (0x0894A024u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1108u, 0x08A97FCCu>(ctx, &aot_mem) && ctx.pc == 0x0894A024u) goto L_0894A024;
    return;
L_0894A024:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A188;
      }
      goto L_0894A02C;
    }
L_0894A02C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894A058;
      }
      goto L_0894A048;
    }
L_0894A048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A074;
      }
      goto L_0894A058;
    }
L_0894A058:
    ctx.gpr[31] = (0x0894A060u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1101u, 0x08A97F90u>(ctx, &aot_mem) && ctx.pc == 0x0894A060u) goto L_0894A060;
    return;
L_0894A060:
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (0x0894A06Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 599u, 0x088DAAD4u>(ctx, &aot_mem) && ctx.pc == 0x0894A06Cu) goto L_0894A06C;
    return;
L_0894A06C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A188;
      }
      goto L_0894A074;
    }
L_0894A074:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A080u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 224u, 0x088D915Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A080u) goto L_0894A080;
    return;
L_0894A080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A188;
      }
      goto L_0894A088;
    }
L_0894A088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_0894A0B8;
    }
    goto L_0894A094;
L_0894A094:
    ctx.gpr[31] = (0x0894A09Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1108u, 0x08A97FCCu>(ctx, &aot_mem) && ctx.pc == 0x0894A09Cu) goto L_0894A09C;
    return;
L_0894A09C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A188;
      }
      goto L_0894A0A4;
    }
L_0894A0A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A0B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 224u, 0x088D915Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A0B0u) goto L_0894A0B0;
    return;
L_0894A0B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A188;
      }
      goto L_0894A0B8;
    }
L_0894A0B8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A104;
      }
      goto L_0894A0DC;
    }
L_0894A0DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A114;
      }
      goto L_0894A104;
    }
L_0894A104:
    ctx.gpr[31] = (0x0894A10Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1108u, 0x08A97FCCu>(ctx, &aot_mem) && ctx.pc == 0x0894A10Cu) goto L_0894A10C;
    return;
L_0894A10C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A188;
      }
      goto L_0894A114;
    }
L_0894A114:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A120u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 224u, 0x088D915Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A120u) goto L_0894A120;
    return;
L_0894A120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A188;
      }
      goto L_0894A128;
    }
L_0894A128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(828)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(828), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A188;
      }
      goto L_0894A148;
    }
L_0894A148:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2964), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0894A188;
      }
      goto L_0894A16C;
    }
L_0894A16C:
    ctx.gpr[31] = (0x0894A174u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 335u, 0x088EE37Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A174u) goto L_0894A174;
    return;
L_0894A174:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A188;
      }
      goto L_0894A17C;
    }
L_0894A17C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A188u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 256u, 0x088D52C4u>(ctx, &aot_mem) && ctx.pc == 0x0894A188u) goto L_0894A188;
    return;
L_0894A188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A1F8;
      }
      goto L_0894A194;
    }
L_0894A194:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894A1F8;
      }
      goto L_0894A1BC;
    }
L_0894A1BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A1F8;
      }
      goto L_0894A1D8;
    }
L_0894A1D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894A1F8;
      }
      goto L_0894A1F0;
    }
L_0894A1F0:
    ctx.gpr[31] = (0x0894A1F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 198u, 0x08944DA0u>(ctx, &aot_mem) && ctx.pc == 0x0894A1F8u) goto L_0894A1F8;
    return;
L_0894A1F8:
    ctx.gpr[31] = (0x0894A200u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 59u, 0x08A98240u>(ctx, &aot_mem) && ctx.pc == 0x0894A200u) goto L_0894A200;
    return;
L_0894A200:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AAC8;
      }
      goto L_0894A208;
    }
L_0894A208:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894AAC8;
      }
      goto L_0894A218;
    }
L_0894A218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[21] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[18] = (2232u << 16u);
      if (branch_taken) {
          goto L_0894A238;
      }
      goto L_0894A228;
    }
L_0894A228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AAC8;
      }
      goto L_0894A234;
    }
L_0894A234:
    ctx.gpr[18] = (2232u << 16u);
    goto L_0894A238;
L_0894A238:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x0894A244u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 335u, 0x088EE37Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A244u) goto L_0894A244;
    return;
L_0894A244:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AAC8;
      }
      goto L_0894A24C;
    }
L_0894A24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AAC8;
      }
      goto L_0894A264;
    }
L_0894A264:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3208)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0894A288;
      }
      goto L_0894A270;
    }
L_0894A270:
    ctx.gpr[31] = (0x0894A278u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 775u, 0x08A97150u>(ctx, &aot_mem) && ctx.pc == 0x0894A278u) goto L_0894A278;
    return;
L_0894A278:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
        goto L_0894A290;
    }
    goto L_0894A280;
L_0894A280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A470;
      }
      goto L_0894A288;
    }
L_0894A288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B08C;
      }
      goto L_0894A290;
    }
L_0894A290:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A470;
      }
      goto L_0894A298;
    }
L_0894A298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A470;
      }
      goto L_0894A2A4;
    }
L_0894A2A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A470;
      }
      goto L_0894A2D4;
    }
L_0894A2D4:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3229), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A2FCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 451u, 0x08945DA0u>(ctx, &aot_mem) && ctx.pc == 0x0894A2FCu) goto L_0894A2FC;
    return;
L_0894A2FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0894A348u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 601u, 0x088EBAD8u>(ctx, &aot_mem) && ctx.pc == 0x0894A348u) goto L_0894A348;
    return;
L_0894A348:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0894A378u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 234u, 0x08A1D254u>(ctx, &aot_mem) && ctx.pc == 0x0894A378u) goto L_0894A378;
    return;
L_0894A378:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0894A394u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 234u, 0x08A1D254u>(ctx, &aot_mem) && ctx.pc == 0x0894A394u) goto L_0894A394;
    return;
L_0894A394:
    ctx.gpr[31] = (0x0894A39Cu);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 236u, 0x08A1D284u>(ctx, &aot_mem) && ctx.pc == 0x0894A39Cu) goto L_0894A39C;
    return;
L_0894A39C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (49884u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17116u << 16u);
      if (branch_taken) {
          goto L_0894A3CC;
      }
      goto L_0894A3B8;
    }
L_0894A3B8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894A404;
      }
      goto L_0894A3CC;
    }
L_0894A3CC:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x0894A3FCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A3FCu) goto L_0894A3FC;
    return;
L_0894A3FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0894A404;
L_0894A404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0894A448u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 168u, 0x0886904Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A448u) goto L_0894A448;
    return;
L_0894A448:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x0894A454u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 505u, 0x0899ED08u>(ctx, &aot_mem) && ctx.pc == 0x0894A454u) goto L_0894A454;
    return;
L_0894A454:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29896), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x0894A468u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 256u, 0x088D52C4u>(ctx, &aot_mem) && ctx.pc == 0x0894A468u) goto L_0894A468;
    return;
L_0894A468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AAEC;
      }
      goto L_0894A470;
    }
L_0894A470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A584;
      }
      goto L_0894A484;
    }
L_0894A484:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0894A514;
      }
      goto L_0894A494;
    }
L_0894A494:
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
        goto L_0894A4AC;
    }
    goto L_0894A49C;
L_0894A49C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A4B4;
      }
      goto L_0894A4A8;
    }
L_0894A4A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    goto L_0894A4AC;
L_0894A4AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A538;
      }
      goto L_0894A4B4;
    }
L_0894A4B4:
    ctx.gpr[31] = (0x0894A4BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894BA9C;
L_0894A4BC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A538;
      }
      goto L_0894A4C8;
    }
L_0894A4C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A538;
      }
      goto L_0894A4D8;
    }
L_0894A4D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A538;
      }
      goto L_0894A4E4;
    }
L_0894A4E4:
    ctx.gpr[10] = (16204u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | 52429u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0894A50Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 168u, 0x0886904Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A50Cu) goto L_0894A50C;
    return;
L_0894A50C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A538;
      }
      goto L_0894A514;
    }
L_0894A514:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A52C;
      }
      goto L_0894A520;
    }
L_0894A520:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A538;
      }
      goto L_0894A52C;
    }
L_0894A52C:
    ctx.gpr[31] = (0x0894A534u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0894BA9C;
L_0894A534:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_0894A538;
L_0894A538:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A57C;
      }
      goto L_0894A548;
    }
L_0894A548:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A57C;
      }
      goto L_0894A550;
    }
L_0894A550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A57C;
      }
      goto L_0894A570;
    }
L_0894A570:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3236), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894A57C;
L_0894A57C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AAEC;
      }
      goto L_0894A584;
    }
L_0894A584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A5A4;
      }
      goto L_0894A590;
    }
L_0894A590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
        goto L_0894A5B4;
    }
    goto L_0894A59C;
L_0894A59C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A63C;
      }
      goto L_0894A5A4;
    }
L_0894A5A4:
    ctx.gpr[31] = (0x0894A5ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 198u, 0x08944DA0u>(ctx, &aot_mem) && ctx.pc == 0x0894A5ACu) goto L_0894A5AC;
    return;
L_0894A5AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B08C;
      }
      goto L_0894A5B4;
    }
L_0894A5B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A63C;
      }
      goto L_0894A5D0;
    }
L_0894A5D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0894A608;
      }
      goto L_0894A5E0;
    }
L_0894A5E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A6A0;
      }
      goto L_0894A5F0;
    }
L_0894A5F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0894A6A0;
      }
      goto L_0894A604;
    }
L_0894A604:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0894A608;
L_0894A608:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A63C;
      }
      goto L_0894A614;
    }
L_0894A614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A6A0;
      }
      goto L_0894A628;
    }
L_0894A628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894A6A0;
      }
      goto L_0894A63C;
    }
L_0894A63C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0894A670u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 235u, 0x08944FF8u>(ctx, &aot_mem) && ctx.pc == 0x0894A670u) goto L_0894A670;
    return;
L_0894A670:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A690;
      }
      goto L_0894A678;
    }
L_0894A678:
    ctx.gpr[31] = (0x0894A680u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 469u, 0x088D63A4u>(ctx, &aot_mem) && ctx.pc == 0x0894A680u) goto L_0894A680;
    return;
L_0894A680:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
        goto L_0894A6B0;
    }
    goto L_0894A688;
L_0894A688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A6F4;
      }
      goto L_0894A690;
    }
L_0894A690:
    ctx.gpr[31] = (0x0894A698u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 198u, 0x08944DA0u>(ctx, &aot_mem) && ctx.pc == 0x0894A698u) goto L_0894A698;
    return;
L_0894A698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B08C;
      }
      goto L_0894A6A0;
    }
L_0894A6A0:
    ctx.gpr[31] = (0x0894A6A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 198u, 0x08944DA0u>(ctx, &aot_mem) && ctx.pc == 0x0894A6A8u) goto L_0894A6A8;
    return;
L_0894A6A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B08C;
      }
      goto L_0894A6B0;
    }
L_0894A6B0:
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A6F4;
      }
      goto L_0894A6BC;
    }
L_0894A6BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0894A6DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A6DCu) goto L_0894A6DC;
    return;
L_0894A6DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A690;
      }
      goto L_0894A6F4;
    }
L_0894A6F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A708;
      }
      goto L_0894A700;
    }
L_0894A700:
    ctx.gpr[31] = (0x0894A708u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 45u, 0x089442C4u>(ctx, &aot_mem) && ctx.pc == 0x0894A708u) goto L_0894A708;
    return;
L_0894A708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A760;
      }
      goto L_0894A714;
    }
L_0894A714:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894A760;
      }
      goto L_0894A720;
    }
L_0894A720:
    ctx.gpr[31] = (0x0894A728u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 134u, 0x08A9859Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A728u) goto L_0894A728;
    return;
L_0894A728:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A740;
      }
      goto L_0894A730;
    }
L_0894A730:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A740u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 20u, 0x0894C164u>(ctx, &aot_mem) && ctx.pc == 0x0894A740u) goto L_0894A740;
    return;
L_0894A740:
    ctx.gpr[31] = (0x0894A748u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 142u, 0x08A985ECu>(ctx, &aot_mem) && ctx.pc == 0x0894A748u) goto L_0894A748;
    return;
L_0894A748:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894A760;
      }
      goto L_0894A750;
    }
L_0894A750:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894A760u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 20u, 0x0894C164u>(ctx, &aot_mem) && ctx.pc == 0x0894A760u) goto L_0894A760;
    return;
L_0894A760:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AAC0;
      }
      goto L_0894A770;
    }
L_0894A770:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0894A784u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 313u, 0x088EE22Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A784u) goto L_0894A784;
    return;
L_0894A784:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
        goto L_0894AA84;
    }
    goto L_0894A794;
L_0894A794:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0894A7E8;
      }
      goto L_0894A7BC;
    }
L_0894A7BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0894A7DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0894A7DCu) goto L_0894A7DC;
    return;
L_0894A7DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0894A7F4;
      }
      goto L_0894A7E8;
    }
L_0894A7E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3032), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3024), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0894AA80;
      }
      goto L_0894A7F4;
    }
L_0894A7F4:
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (17692u << 16u);
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3236)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_0894A860;
      }
      goto L_0894A840;
    }
L_0894A840:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[15];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
      if (branch_taken) {
          goto L_0894A888;
      }
      goto L_0894A860;
    }
L_0894A860:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[15];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    goto L_0894A888;
L_0894A888:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[5] = (20352u << 16u);
      if (branch_taken) {
          goto L_0894A898;
      }
      goto L_0894A890;
    }
L_0894A890:
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    goto L_0894A898;
L_0894A898:
    ctx.fpr[17] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3236), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_0894A8B8;
    }
    goto L_0894A8B8;
L_0894A8B8:
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3028), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3028), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3240)));
      if (branch_taken) {
          goto L_0894A900;
      }
      goto L_0894A8E0;
    }
L_0894A8E0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0894A928;
      }
      goto L_0894A900;
    }
L_0894A900:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_0894A928;
L_0894A928:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (20352u << 16u);
      if (branch_taken) {
          goto L_0894A938;
      }
      goto L_0894A930;
    }
L_0894A930:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_0894A938;
L_0894A938:
    ctx.fpr[12] = ctx.fpr[17] + ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3036)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894A960;
      }
      goto L_0894A948;
    }
L_0894A948:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3240)));
    ctx.gpr[4] = (17146u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3036), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894A960;
L_0894A960:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3240)));
    ctx.fpr[18] = ctx.fpr[12] / ctx.fpr[18];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
        goto L_0894A97C;
    }
    goto L_0894A97C;
L_0894A97C:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3032), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3032), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3024), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AA80;
      }
      goto L_0894A9B8;
    }
L_0894A9B8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_0894A9E8;
      }
      goto L_0894A9CC;
    }
L_0894A9CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x0894A9DCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0894A9DCu) goto L_0894A9DC;
    return;
L_0894A9DC:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894A9E8;
L_0894A9E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_0894AA28;
    }
    goto L_0894AA08;
L_0894AA08:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(385));
    ctx.gpr[31] = (0x0894AA18u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0894AA18u) goto L_0894AA18;
    return;
L_0894AA18:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(385)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_0894AA28;
L_0894AA28:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0894AA70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0894AA70u) goto L_0894AA70;
    return;
L_0894AA70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894AA80;
L_0894AA80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(127)));
    goto L_0894AA84;
L_0894AA84:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894AAC0;
      }
      goto L_0894AAB0;
    }
L_0894AAB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0894AAC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 312u, 0x088EE218u>(ctx, &aot_mem) && ctx.pc == 0x0894AAC0u) goto L_0894AAC0;
    return;
L_0894AAC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AAEC;
      }
      goto L_0894AAC8;
    }
L_0894AAC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AAEC;
      }
      goto L_0894AADC;
    }
L_0894AADC:
    ctx.gpr[31] = (0x0894AAE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 198u, 0x08944DA0u>(ctx, &aot_mem) && ctx.pc == 0x0894AAE4u) goto L_0894AAE4;
    return;
L_0894AAE4:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3208), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894AAEC;
L_0894AAEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B070;
      }
      goto L_0894AB00;
    }
L_0894AB00:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_0894AB74;
      }
      goto L_0894AB48;
    }
L_0894AB48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0894AB5Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 38u, 0x08AA8314u>(ctx, &aot_mem) && ctx.pc == 0x0894AB5Cu) goto L_0894AB5C;
    return;
L_0894AB5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD9C;
      }
      goto L_0894AB74;
    }
L_0894AB74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD8C;
      }
      goto L_0894AB94;
    }
L_0894AB94:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0894ABC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18268));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894ABC8u) goto L_0894ABC8;
    return;
L_0894ABC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD48;
      }
      goto L_0894ABD0;
    }
L_0894ABD0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_0894AC00;
    }
    goto L_0894ABE0;
L_0894ABE0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[31] = (0x0894ABF0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0894ABF0u) goto L_0894ABF0;
    return;
L_0894ABF0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_0894AC00;
L_0894AC00:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 65535u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD08;
      }
      goto L_0894AC18;
    }
L_0894AC18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (0u | 65535u);
      if (branch_taken) {
          goto L_0894AC40;
      }
      goto L_0894AC24;
    }
L_0894AC24:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(417));
    ctx.gpr[31] = (0x0894AC34u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0894AC34u) goto L_0894AC34;
    return;
L_0894AC34:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(417)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894AC40;
L_0894AC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    if (ctx.gpr[5] != ctx.gpr[23]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
        goto L_0894AC58;
    }
    goto L_0894AC50;
L_0894AC50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0894AC6C;
      }
      goto L_0894AC58;
    }
L_0894AC58:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0894AC68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0894AC68u) goto L_0894AC68;
    return;
L_0894AC68:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0894AC6C;
L_0894AC6C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD08;
      }
      goto L_0894AC74;
    }
L_0894AC74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_0894ACA0;
    }
    goto L_0894AC80;
L_0894AC80:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(418));
    ctx.gpr[31] = (0x0894AC90u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0894AC90u) goto L_0894AC90;
    return;
L_0894AC90:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(418)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_0894ACA0;
L_0894ACA0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    if (ctx.gpr[5] != ctx.gpr[23]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
        goto L_0894ACB4;
    }
    goto L_0894ACAC;
L_0894ACAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0894ACC8;
      }
      goto L_0894ACB4;
    }
L_0894ACB4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0894ACC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x0894ACC4u) goto L_0894ACC4;
    return;
L_0894ACC4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_0894ACC8;
L_0894ACC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_0894ACF4;
    }
    goto L_0894ACD4;
L_0894ACD4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(419));
    ctx.gpr[31] = (0x0894ACE4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0894ACE4u) goto L_0894ACE4;
    return;
L_0894ACE4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(419)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_0894ACF4;
L_0894ACF4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD40;
      }
      goto L_0894AD08;
    }
L_0894AD08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_0894AD34;
    }
    goto L_0894AD14;
L_0894AD14:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(420));
    ctx.gpr[31] = (0x0894AD24u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0894AD24u) goto L_0894AD24;
    return;
L_0894AD24:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_0894AD34;
L_0894AD34:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0894AD40;
L_0894AD40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD84;
      }
      goto L_0894AD48;
    }
L_0894AD48:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_0894AD78;
    }
    goto L_0894AD58;
L_0894AD58:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(421));
    ctx.gpr[31] = (0x0894AD68u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0894AD68u) goto L_0894AD68;
    return;
L_0894AD68:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(421)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_0894AD78;
L_0894AD78:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0894AD84;
L_0894AD84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AD9C;
      }
      goto L_0894AD8C;
    }
L_0894AD8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_0894AD9C;
L_0894AD9C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AE58;
      }
      goto L_0894ADB0;
    }
L_0894ADB0:
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3028)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3024)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3028)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3024)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0894AE58u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0894AE58u) goto L_0894AE58;
    return;
L_0894AE58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894AECC;
      }
      goto L_0894AE64;
    }
L_0894AE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0894AEA8;
      }
      goto L_0894AE7C;
    }
L_0894AE7C:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0894AEA0u);
    ctx.gpr[8] = (0u | 225u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 168u, 0x0886904Cu>(ctx, &aot_mem) && ctx.pc == 0x0894AEA0u) goto L_0894AEA0;
    return;
L_0894AEA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AECC;
      }
      goto L_0894AEA8;
    }
L_0894AEA8:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0894AECCu);
    ctx.gpr[8] = (0u | 225u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 168u, 0x0886904Cu>(ctx, &aot_mem) && ctx.pc == 0x0894AECCu) goto L_0894AECC;
    return;
L_0894AECC:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3008));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AF90;
      }
      goto L_0894AEF8;
    }
L_0894AEF8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AF90;
      }
      goto L_0894AF04;
    }
L_0894AF04:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_0894AF50;
    }
    goto L_0894AF10;
L_0894AF10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_0894AF3C;
    }
    goto L_0894AF1C;
L_0894AF1C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x0894AF2Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0894AF2Cu) goto L_0894AF2C;
    return;
L_0894AF2C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_0894AF3C;
L_0894AF3C:
    ctx.gpr[5] = (0u | 41u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894AF88;
      }
      goto L_0894AF4C;
    }
L_0894AF4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_0894AF50;
L_0894AF50:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_0894AF78;
    }
    goto L_0894AF58;
L_0894AF58:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(513));
    ctx.gpr[31] = (0x0894AF68u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0894AF68u) goto L_0894AF68;
    return;
L_0894AF68:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(513)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_0894AF78;
L_0894AF78:
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894AF90;
      }
      goto L_0894AF88;
    }
L_0894AF88:
    ctx.gpr[31] = (0x0894AF90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 198u, 0x08944DA0u>(ctx, &aot_mem) && ctx.pc == 0x0894AF90u) goto L_0894AF90;
    return;
L_0894AF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894AFD4;
      }
      goto L_0894AFA8;
    }
L_0894AFA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B068;
      }
      goto L_0894AFB4;
    }
L_0894AFB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894AFD4;
      }
      goto L_0894AFC4;
    }
L_0894AFC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B068;
      }
      goto L_0894AFD4;
    }
L_0894AFD4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_0894B008;
      }
      goto L_0894AFE4;
    }
L_0894AFE4:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
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
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B02C;
      }
      goto L_0894B008;
    }
L_0894B008:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
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
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0894B02C;
L_0894B02C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
      if (branch_taken) {
          goto L_0894B054;
      }
      goto L_0894B044;
    }
L_0894B044:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894B064;
      }
      goto L_0894B054;
    }
L_0894B054:
    ctx.gpr[31] = (0x0894B05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B05Cu) goto L_0894B05C;
    return;
L_0894B05C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0894B064;
      }
      goto L_0894B064;
    }
L_0894B064:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0894B068;
L_0894B068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B080;
      }
      goto L_0894B070;
    }
L_0894B070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B080;
      }
      goto L_0894B080;
    }
L_0894B080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2996), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894B08C;
L_0894B08C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B0C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894B0E4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 78u, 0x089184E0u>(ctx, &aot_mem) && ctx.pc == 0x0894B0E4u) goto L_0894B0E4;
    return;
L_0894B0E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B5B8;
      }
      goto L_0894B0EC;
    }
L_0894B0EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B5B8;
      }
      goto L_0894B0F8;
    }
L_0894B0F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29896)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 34u);
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B11C;
    }
L_0894B11C:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B13C;
    }
L_0894B13C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B14C;
    }
L_0894B14C:
    ctx.gpr[31] = (0x0894B154u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 52u, 0x08A981F4u>(ctx, &aot_mem) && ctx.pc == 0x0894B154u) goto L_0894B154;
    return;
L_0894B154:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B214;
      }
      goto L_0894B15C;
    }
L_0894B15C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B170;
    }
L_0894B170:
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B17C;
    }
L_0894B17C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 39u);
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B184;
    }
L_0894B184:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B18C;
    }
L_0894B18C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 40u);
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B194;
    }
L_0894B194:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B19C;
    }
L_0894B19C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B1A4;
    }
L_0894B1A4:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    goto L_0894B1B4;
L_0894B1B4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B1C8;
      }
      goto L_0894B1BC;
    }
L_0894B1BC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B1C8;
    }
L_0894B1C8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B1FC;
      }
      goto L_0894B1E4;
    }
L_0894B1E4:
    ctx.gpr[31] = (0x0894B1ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 306u, 0x08851CF0u>(ctx, &aot_mem) && ctx.pc == 0x0894B1ECu) goto L_0894B1EC;
    return;
L_0894B1EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B1FC;
      }
      goto L_0894B1F4;
    }
L_0894B1F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B1FC;
    }
L_0894B1FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_0894B1B4;
      }
      goto L_0894B214;
    }
L_0894B214:
    ctx.gpr[31] = (0x0894B21Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 45u, 0x08A981A8u>(ctx, &aot_mem) && ctx.pc == 0x0894B21Cu) goto L_0894B21C;
    return;
L_0894B21C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B224;
    }
L_0894B224:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B238;
    }
L_0894B238:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B240;
    }
L_0894B240:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B248;
    }
L_0894B248:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B250;
    }
L_0894B250:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[19] = (0u | 9u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    goto L_0894B260;
L_0894B260:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0894B270;
      }
      goto L_0894B268;
    }
L_0894B268:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    goto L_0894B270;
L_0894B270:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B280;
      }
      goto L_0894B278;
    }
L_0894B278:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B280;
    }
L_0894B280:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B2B4;
      }
      goto L_0894B29C;
    }
L_0894B29C:
    ctx.gpr[31] = (0x0894B2A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 306u, 0x08851CF0u>(ctx, &aot_mem) && ctx.pc == 0x0894B2A4u) goto L_0894B2A4;
    return;
L_0894B2A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B2B4;
      }
      goto L_0894B2AC;
    }
L_0894B2AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B2B4;
    }
L_0894B2B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B2D4;
      }
      goto L_0894B2CC;
    }
L_0894B2CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_0894B2DC;
      }
      goto L_0894B2D4;
    }
L_0894B2D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B260;
      }
      goto L_0894B2DC;
    }
L_0894B2DC:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0894B2F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B2F8u) goto L_0894B2F8;
    return;
L_0894B2F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_0894B348;
    }
    goto L_0894B304;
L_0894B304:
    ctx.gpr[31] = (0x0894B30Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1101u, 0x08A97F90u>(ctx, &aot_mem) && ctx.pc == 0x0894B30Cu) goto L_0894B30C;
    return;
L_0894B30C:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0894B338;
      }
      goto L_0894B324;
    }
L_0894B324:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 33u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_0894B348;
    }
    goto L_0894B338;
L_0894B338:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0894B374;
      }
      goto L_0894B344;
    }
L_0894B344:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_0894B348;
L_0894B348:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0894B5B8;
      }
      goto L_0894B368;
    }
L_0894B368:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0894B5B8;
      }
      goto L_0894B374;
    }
L_0894B374:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2388))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[6] = (0u | 7u);
      if (branch_taken) {
          goto L_0894B3B0;
      }
      goto L_0894B388;
    }
L_0894B388:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_0894B3B0;
      }
      goto L_0894B390;
    }
L_0894B390:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B3B0;
      }
      goto L_0894B398;
    }
L_0894B398:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0894B3B8;
      }
      goto L_0894B3A8;
    }
L_0894B3A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B524;
      }
      goto L_0894B3B0;
    }
L_0894B3B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B620;
      }
      goto L_0894B3B8;
    }
L_0894B3B8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0894B3C8u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0894B3C8u) goto L_0894B3C8;
    return;
L_0894B3C8:
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0894B4EC;
      }
      goto L_0894B3DC;
    }
L_0894B3DC:
    ctx.gpr[4] = (ctx.gpr[8] << 5u);
    ctx.gpr[9] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[3] = (0u | 80u);
    ctx.gpr[12] = (0u | 2u);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[4]);
    goto L_0894B408;
L_0894B408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_0894B428;
    }
    goto L_0894B420;
L_0894B420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_0894B42C;
      }
      goto L_0894B428;
    }
L_0894B428:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    goto L_0894B42C;
L_0894B42C:
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B4D8;
      }
      goto L_0894B438;
    }
L_0894B438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B4D8;
      }
      goto L_0894B444;
    }
L_0894B444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(1512)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B4D8;
      }
      goto L_0894B450;
    }
L_0894B450:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[11] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[11] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[11]) < 1 ? 1u : 0u);
    if (ctx.gpr[14] != 0u) {
    ctx.gpr[2] = (ctx.gpr[11] | 0u);
        goto L_0894B480;
    }
    goto L_0894B480;
L_0894B480:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1440), ctx.gpr[2]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(648)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B4D8;
      }
      goto L_0894B490;
    }
L_0894B490:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(646)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) > 0;
    // nop
      if (branch_taken) {
          goto L_0894B4D8;
      }
      goto L_0894B49C;
    }
L_0894B49C:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[11] = (ctx.gpr[11] & 64u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B4D8;
      }
      goto L_0894B4AC;
    }
L_0894B4AC:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(68)));
    ctx.gpr[11] = (ctx.gpr[11] & 496u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0894B4D8;
      }
      goto L_0894B4BC;
    }
L_0894B4BC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1440), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1509))))));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(648), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[13]);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(1512), 0u);
    goto L_0894B4D8;
L_0894B4D8:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_0894B408;
      }
      goto L_0894B4EC;
    }
L_0894B4EC:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B51C;
      }
      goto L_0894B4F4;
    }
L_0894B4F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0894B51C;
      }
      goto L_0894B514;
    }
L_0894B514:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894B51C;
L_0894B51C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
      if (branch_taken) {
          goto L_0894B530;
      }
      goto L_0894B524;
    }
L_0894B524:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    goto L_0894B530;
L_0894B530:
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[7] = (0u | 15u);
    ctx.gpr[8] = (0u | 14u);
    ctx.gpr[9] = (0u | 12u);
    goto L_0894B540;
L_0894B540:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0894B554;
      }
      goto L_0894B548;
    }
L_0894B548:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0894B5B8;
      }
      goto L_0894B554;
    }
L_0894B554:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[10] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0894B57C;
      }
      goto L_0894B568;
    }
L_0894B568:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1428)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894B57C;
      }
      goto L_0894B574;
    }
L_0894B574:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0894B5B8;
      }
      goto L_0894B57C;
    }
L_0894B57C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0894B5A8;
      }
      goto L_0894B588;
    }
L_0894B588:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0894B5A8;
      }
      goto L_0894B590;
    }
L_0894B590:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0894B5A8;
      }
      goto L_0894B598;
    }
L_0894B598:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0894B5A8;
      }
      goto L_0894B5A0;
    }
L_0894B5A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0894B5B8;
      }
      goto L_0894B5A8;
    }
L_0894B5A8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_0894B540;
      }
      goto L_0894B5B8;
    }
L_0894B5B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B620;
      }
      goto L_0894B5C4;
    }
L_0894B5C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894B620;
      }
      goto L_0894B5D4;
    }
L_0894B5D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 22u);
      if (branch_taken) {
          goto L_0894B620;
      }
      goto L_0894B5E4;
    }
L_0894B5E4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 17u);
      if (branch_taken) {
          goto L_0894B620;
      }
      goto L_0894B5EC;
    }
L_0894B5EC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_0894B620;
      }
      goto L_0894B5F4;
    }
L_0894B5F4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1676)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B620;
      }
      goto L_0894B600;
    }
L_0894B600:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894B614u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 450u, 0x088D6278u>(ctx, &aot_mem) && ctx.pc == 0x0894B614u) goto L_0894B614;
    return;
L_0894B614:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[31] = (0x0894B620u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 7u, 0x08944058u>(ctx, &aot_mem) && ctx.pc == 0x0894B620u) goto L_0894B620;
    return;
L_0894B620:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894B63C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894B67Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B67Cu) goto L_0894B67C;
    return;
L_0894B67C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0894B688u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0894B688u) goto L_0894B688;
    return;
L_0894B688:
    ctx.gpr[31] = (0x0894B690u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 845u, 0x08A9746Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B690u) goto L_0894B690;
    return;
L_0894B690:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0894B6A4u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0894B6A4u) goto L_0894B6A4;
    return;
L_0894B6A4:
    ctx.gpr[31] = (0x0894B6ACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 877u, 0x08A97600u>(ctx, &aot_mem) && ctx.pc == 0x0894B6ACu) goto L_0894B6AC;
    return;
L_0894B6AC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0894B6C0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0894B6C0u) goto L_0894B6C0;
    return;
L_0894B6C0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 30u);
      if (branch_taken) {
          goto L_0894B760;
      }
      goto L_0894B6D8;
    }
L_0894B6D8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B760;
      }
      goto L_0894B6E4;
    }
L_0894B6E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B760;
      }
      goto L_0894B6F8;
    }
L_0894B6F8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894B760;
      }
      goto L_0894B71C;
    }
L_0894B71C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (48991u << 16u);
      if (branch_taken) {
          goto L_0894B760;
      }
      goto L_0894B72C;
    }
L_0894B72C:
    ctx.gpr[5] = (ctx.gpr[5] | 26355u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (16223u << 16u);
      if (branch_taken) {
          goto L_0894B75C;
      }
      goto L_0894B744;
    }
L_0894B744:
    ctx.gpr[5] = (ctx.gpr[5] | 26355u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894B760;
      }
      goto L_0894B75C;
    }
L_0894B75C:
    ctx.gpr[4] = (0u | 1u);
    goto L_0894B760;
L_0894B760:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_0894B7A4;
    }
    goto L_0894B768;
L_0894B768:
    ctx.gpr[31] = (0x0894B770u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 377u, 0x0899E2F4u>(ctx, &aot_mem) && ctx.pc == 0x0894B770u) goto L_0894B770;
    return;
L_0894B770:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_0894B7A4;
    }
    goto L_0894B778;
L_0894B778:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0894B798u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 291u, 0x08851C78u>(ctx, &aot_mem) && ctx.pc == 0x0894B798u) goto L_0894B798;
    return;
L_0894B798:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894B950;
      }
      goto L_0894B7A0;
    }
L_0894B7A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_0894B7A4;
L_0894B7A4:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0894B7E8;
      }
      goto L_0894B7C4;
    }
L_0894B7C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BA80;
      }
      goto L_0894B7D4;
    }
L_0894B7D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894B7E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 643u, 0x08942F58u>(ctx, &aot_mem) && ctx.pc == 0x0894B7E0u) goto L_0894B7E0;
    return;
L_0894B7E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BA80;
      }
      goto L_0894B7E8;
    }
L_0894B7E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B888;
      }
      goto L_0894B7F8;
    }
L_0894B7F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B888;
      }
      goto L_0894B808;
    }
L_0894B808:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B888;
      }
      goto L_0894B818;
    }
L_0894B818:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B888;
      }
      goto L_0894B828;
    }
L_0894B828:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B888;
      }
      goto L_0894B838;
    }
L_0894B838:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B888;
      }
      goto L_0894B848;
    }
L_0894B848:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B888;
      }
      goto L_0894B858;
    }
L_0894B858:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B888;
      }
      goto L_0894B868;
    }
L_0894B868:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B888;
      }
      goto L_0894B878;
    }
L_0894B878:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B8AC;
      }
      goto L_0894B888;
    }
L_0894B888:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[4] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BA80;
      }
      goto L_0894B898;
    }
L_0894B898:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894B8A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 643u, 0x08942F58u>(ctx, &aot_mem) && ctx.pc == 0x0894B8A4u) goto L_0894B8A4;
    return;
L_0894B8A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BA80;
      }
      goto L_0894B8AC;
    }
L_0894B8AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B8DC;
      }
      goto L_0894B8BC;
    }
L_0894B8BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0894B8DC;
      }
      goto L_0894B8CC;
    }
L_0894B8CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0894B900;
      }
      goto L_0894B8DC;
    }
L_0894B8DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[4] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BA80;
      }
      goto L_0894B8EC;
    }
L_0894B8EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894B8F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 643u, 0x08942F58u>(ctx, &aot_mem) && ctx.pc == 0x0894B8F8u) goto L_0894B8F8;
    return;
L_0894B8F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BA80;
      }
      goto L_0894B900;
    }
L_0894B900:
    ctx.gpr[31] = (0x0894B908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 140u, 0x08850DC0u>(ctx, &aot_mem) && ctx.pc == 0x0894B908u) goto L_0894B908;
    return;
L_0894B908:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
      if (branch_taken) {
          goto L_0894B934;
      }
      goto L_0894B910;
    }
L_0894B910:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BA80;
      }
      goto L_0894B920;
    }
L_0894B920:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894B92Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 643u, 0x08942F58u>(ctx, &aot_mem) && ctx.pc == 0x0894B92Cu) goto L_0894B92C;
    return;
L_0894B92C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BA80;
      }
      goto L_0894B934;
    }
L_0894B934:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0894BA80;
      }
      goto L_0894B93C;
    }
L_0894B93C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[17]);
    ctx.gpr[31] = (0x0894B948u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 643u, 0x08942F58u>(ctx, &aot_mem) && ctx.pc == 0x0894B948u) goto L_0894B948;
    return;
L_0894B948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BA80;
      }
      goto L_0894B950;
    }
L_0894B950:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[22];
    ctx.gpr[5] = (49169u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] | 13854u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
      if (branch_taken) {
          goto L_0894B9A0;
      }
      goto L_0894B984;
    }
L_0894B984:
    ctx.gpr[6] = (16401u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13854u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894B9EC;
      }
      goto L_0894B9A0;
    }
L_0894B9A0:
    ctx.gpr[6] = (16457u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0894B9CC;
      }
      goto L_0894B9C4;
    }
L_0894B9C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 57u);
      if (branch_taken) {
          goto L_0894B9D0;
      }
      goto L_0894B9CC;
    }
L_0894B9CC:
    ctx.gpr[4] = (0u | 54u);
    goto L_0894B9D0;
L_0894B9D0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BA80;
      }
      goto L_0894B9D8;
    }
L_0894B9D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894B9E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 643u, 0x08942F58u>(ctx, &aot_mem) && ctx.pc == 0x0894B9E4u) goto L_0894B9E4;
    return;
L_0894B9E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BA80;
      }
      goto L_0894B9EC;
    }
L_0894B9EC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (16329u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 4059u);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_0894BA48;
      }
      goto L_0894BA08;
    }
L_0894BA08:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0894BA28;
      }
      goto L_0894BA20;
    }
L_0894BA20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 58u);
      if (branch_taken) {
          goto L_0894BA2C;
      }
      goto L_0894BA28;
    }
L_0894BA28:
    ctx.gpr[4] = (0u | 55u);
    goto L_0894BA2C;
L_0894BA2C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BA80;
      }
      goto L_0894BA34;
    }
L_0894BA34:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894BA40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 643u, 0x08942F58u>(ctx, &aot_mem) && ctx.pc == 0x0894BA40u) goto L_0894BA40;
    return;
L_0894BA40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BA80;
      }
      goto L_0894BA48;
    }
L_0894BA48:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0894BA68;
      }
      goto L_0894BA60;
    }
L_0894BA60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 59u);
      if (branch_taken) {
          goto L_0894BA6C;
      }
      goto L_0894BA68;
    }
L_0894BA68:
    ctx.gpr[4] = (0u | 56u);
    goto L_0894BA6C;
L_0894BA6C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BA80;
      }
      goto L_0894BA74;
    }
L_0894BA74:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894BA80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 643u, 0x08942F58u>(ctx, &aot_mem) && ctx.pc == 0x0894BA80u) goto L_0894BA80;
    return;
L_0894BA80:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894BA9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[31] = (0x0894BAE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0894BAE4u) goto L_0894BAE4;
    return;
L_0894BAE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0894BB64;
      }
      goto L_0894BAF8;
    }
L_0894BAF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894BB50;
      }
      goto L_0894BB48;
    }
L_0894BB48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 19u, 0x0894C140u>(ctx, &aot_mem); return;
      }
      goto L_0894BB50;
    }
L_0894BB50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BB5Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 505u, 0x0899ED08u>(ctx, &aot_mem) && ctx.pc == 0x0894BB5Cu) goto L_0894BB5C;
    return;
L_0894BB5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 19u, 0x0894C140u>(ctx, &aot_mem); return;
      }
      goto L_0894BB64;
    }
L_0894BB64:
    ctx.gpr[4] = (50716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0894BB88u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0894BB88u) goto L_0894BB88;
    return;
L_0894BB88:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_0894BBAC;
      }
      goto L_0894BBA0;
    }
L_0894BBA0:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_0894BBAC;
L_0894BBAC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0894BD04;
      }
      goto L_0894BBC0;
    }
L_0894BBC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_0894BBE0;
      }
      goto L_0894BBD8;
    }
L_0894BBD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0894BBF0;
      }
      goto L_0894BBE0;
    }
L_0894BBE0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    goto L_0894BBF0;
L_0894BBF0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BCF8;
      }
      goto L_0894BBF8;
    }
L_0894BBF8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0894BCF8;
      }
      goto L_0894BC00;
    }
L_0894BC00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BCF8;
      }
      goto L_0894BC10;
    }
L_0894BC10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BCF8;
      }
      goto L_0894BC20;
    }
L_0894BC20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(628)));
        goto L_0894BC50;
    }
    goto L_0894BC2C;
L_0894BC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BCF8;
      }
      goto L_0894BC38;
    }
L_0894BC38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BCF8;
      }
      goto L_0894BC4C;
    }
L_0894BC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(628)));
    goto L_0894BC50;
L_0894BC50:
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(416)));
        goto L_0894BC6C;
    }
    goto L_0894BC58;
L_0894BC58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BCF8;
      }
      goto L_0894BC68;
    }
L_0894BC68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(416)));
    goto L_0894BC6C;
L_0894BC6C:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BCF8;
      }
      goto L_0894BC78;
    }
L_0894BC78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0894BC88u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 299u, 0x0899DD38u>(ctx, &aot_mem) && ctx.pc == 0x0894BC88u) goto L_0894BC88;
    return;
L_0894BC88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BCF8;
      }
      goto L_0894BC90;
    }
L_0894BC90:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BCC4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 242u, 0x08945088u>(ctx, &aot_mem) && ctx.pc == 0x0894BCC4u) goto L_0894BCC4;
    return;
L_0894BCC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BCF8;
      }
      goto L_0894BCCC;
    }
L_0894BCCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BCD8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 140u, 0x08944A38u>(ctx, &aot_mem) && ctx.pc == 0x0894BCD8u) goto L_0894BCD8;
    return;
L_0894BCD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0894BCF8u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 64u, 0x0894445Cu>(ctx, &aot_mem) && ctx.pc == 0x0894BCF8u) goto L_0894BCF8;
    return;
L_0894BCF8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0894BBC0;
      }
      goto L_0894BD04;
    }
L_0894BD04:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27960)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BE68;
      }
      goto L_0894BD1C;
    }
L_0894BD1C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0894BD4C;
    }
    goto L_0894BD2C;
L_0894BD2C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x0894BD3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0894BD3Cu) goto L_0894BD3C;
    return;
L_0894BD3C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0894BD4C;
L_0894BD4C:
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BE50;
      }
      goto L_0894BD5C;
    }
L_0894BD5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0894BD88;
    }
    goto L_0894BD68;
L_0894BD68:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(97));
    ctx.gpr[31] = (0x0894BD78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0894BD78u) goto L_0894BD78;
    return;
L_0894BD78:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0894BD88;
L_0894BD88:
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894BE50;
      }
      goto L_0894BD98;
    }
L_0894BD98:
    ctx.gpr[31] = (0x0894BDA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 751u, 0x08A2F74Cu>(ctx, &aot_mem) && ctx.pc == 0x0894BDA0u) goto L_0894BDA0;
    return;
L_0894BDA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BE28;
      }
      goto L_0894BDA8;
    }
L_0894BDA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BDB8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 299u, 0x0899DD38u>(ctx, &aot_mem) && ctx.pc == 0x0894BDB8u) goto L_0894BDB8;
    return;
L_0894BDB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BE50;
      }
      goto L_0894BDC0;
    }
L_0894BDC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0894BDEC;
    }
    goto L_0894BDCC;
L_0894BDCC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(98));
    ctx.gpr[31] = (0x0894BDDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x0894BDDCu) goto L_0894BDDC;
    return;
L_0894BDDC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_0894BDEC;
L_0894BDEC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BE20u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 242u, 0x08945088u>(ctx, &aot_mem) && ctx.pc == 0x0894BE20u) goto L_0894BE20;
    return;
L_0894BE20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BE50;
      }
      goto L_0894BE28;
    }
L_0894BE28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[31] = (0x0894BE50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 64u, 0x0894445Cu>(ctx, &aot_mem) && ctx.pc == 0x0894BE50u) goto L_0894BE50;
    return;
L_0894BE50:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0894BD1C;
      }
      goto L_0894BE68;
    }
L_0894BE68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2972)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0894BE78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x0894BE78u) goto L_0894BE78;
    return;
L_0894BE78:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BEF0;
      }
      goto L_0894BE84;
    }
L_0894BE84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BEF0;
      }
      goto L_0894BE94;
    }
L_0894BE94:
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BEC8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 242u, 0x08945088u>(ctx, &aot_mem) && ctx.pc == 0x0894BEC8u) goto L_0894BEC8;
    return;
L_0894BEC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BEF0;
      }
      goto L_0894BED0;
    }
L_0894BED0:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0894BEF0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 64u, 0x0894445Cu>(ctx, &aot_mem) && ctx.pc == 0x0894BEF0u) goto L_0894BEF0;
    return;
L_0894BEF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2976)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0894BF00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x0894BF00u) goto L_0894BF00;
    return;
L_0894BF00:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BF78;
      }
      goto L_0894BF0C;
    }
L_0894BF0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894BF78;
      }
      goto L_0894BF1C;
    }
L_0894BF1C:
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BF50u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 242u, 0x08945088u>(ctx, &aot_mem) && ctx.pc == 0x0894BF50u) goto L_0894BF50;
    return;
L_0894BF50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894BF78;
      }
      goto L_0894BF58;
    }
L_0894BF58:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0894BF78u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 64u, 0x0894445Cu>(ctx, &aot_mem) && ctx.pc == 0x0894BF78u) goto L_0894BF78;
    return;
L_0894BF78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2980)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0894BF88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x0894BF88u) goto L_0894BF88;
    return;
L_0894BF88:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 1u, 0x0894C000u>(ctx, &aot_mem); return;
      }
      goto L_0894BF94;
    }
L_0894BF94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 1u, 0x0894C000u>(ctx, &aot_mem); return;
      }
      goto L_0894BFA4;
    }
L_0894BFA4:
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894BFD8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 242u, 0x08945088u>(ctx, &aot_mem) && ctx.pc == 0x0894BFD8u) goto L_0894BFD8;
    return;
L_0894BFD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 1u, 0x0894C000u>(ctx, &aot_mem); return;
      }
      goto L_0894BFE0;
    }
L_0894BFE0:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0894C000u);
    ctx.gpr[8] = (0u | 1u);
    (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 64u, 0x0894445Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0081(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0081_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_81(Runtime &runtime) {
    runtime.register_generated_unit(81u, 0x08948000u, 16384u, &recomp_unit_0081, &recomp_unit_0081_entry);
    runtime.register_function(0x08948000u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894800Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948014u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948024u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948038u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948048u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948058u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948098u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089480FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948104u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948114u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894811Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894812Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948134u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948140u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948148u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948154u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894815Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948168u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948174u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894817Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948188u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948194u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089481F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948204u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894820Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948214u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948224u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894822Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948234u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948244u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894824Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948254u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948264u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948270u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894828Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948298u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089482FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948304u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948310u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894832Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948340u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894835Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948370u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894838Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089483E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948418u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948428u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894843Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948444u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948454u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948468u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894846Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089484F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948520u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894852Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948534u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894855Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948564u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948578u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948590u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948598u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089485F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894861Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948630u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948640u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948648u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948650u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948658u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948668u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948670u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948680u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948688u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948698u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089486FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948704u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948718u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948724u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894873Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948750u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948754u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894875Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948760u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948768u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894876Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948774u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894877Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948790u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894879Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089487E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948818u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894882Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948838u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948870u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089488FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948910u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948920u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948934u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948938u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948958u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948968u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948970u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948980u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894898Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948994u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089489ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948A98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948ABCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948AFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948B34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948BFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948C98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948CC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948D98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948DFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948E98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948ECCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948EF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948F88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08948FECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949008u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949024u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894905Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949064u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894906Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949074u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894909Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089490F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949114u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949168u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894917Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089491ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949230u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949248u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949254u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949288u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089492B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089493C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949458u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949468u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949478u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949488u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949498u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089494DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949524u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894955Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949588u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949598u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089495C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949614u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894962Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949634u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949648u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949658u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894966Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949670u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949684u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949694u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089496CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949708u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949710u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894971Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949734u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089497C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089497DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949804u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949808u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949814u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949820u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949828u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894982Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949838u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949844u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894984Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949850u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894985Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949868u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949870u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949874u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949880u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894988Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949894u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089498DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894991Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949928u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949940u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949948u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949950u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949954u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949958u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949974u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949980u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949994u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x089499FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949A9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949ACCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949AD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949B78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949BF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949C84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CE8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949CF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D30u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D44u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949D94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DBCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949DE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949E9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949EA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949EB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949EC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949ED0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949EE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949EF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949EFCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F54u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949F90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949FA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949FB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949FB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x08949FD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A000u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A01Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A024u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A02Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A048u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A058u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A060u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A06Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A074u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A080u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A088u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A094u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A09Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A0DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A104u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A10Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A114u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A120u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A128u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A148u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A16Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A174u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A17Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A188u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A194u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A1F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A200u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A208u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A218u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A228u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A234u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A238u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A244u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A24Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A264u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A270u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A278u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A280u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A288u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A290u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A298u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A2A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A2D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A2FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A348u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A378u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A394u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A39Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A3FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A404u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A448u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A454u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A468u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A470u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A484u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A494u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A49Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A4E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A50Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A514u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A520u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A52Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A534u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A538u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A548u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A550u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A570u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A57Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A584u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A590u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A59Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A5F0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A604u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A608u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A614u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A628u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A63Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A670u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A678u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A680u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A688u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A690u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A698u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A6F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A700u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A708u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A714u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A720u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A728u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A730u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A740u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A748u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A750u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A760u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A770u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A784u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A794u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A7F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A840u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A860u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A888u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A890u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A898u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A8B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A8E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A900u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A928u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A930u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A938u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A948u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A960u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A97Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894A9E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA70u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AA84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AADCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AAECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AB94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABD0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ABF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC18u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AC90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ACF4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD14u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD24u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD8Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AD9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894ADB0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AE7Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AECCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AEF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AF90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFB4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFD4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894AFE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B008u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B02Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B044u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B054u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B05Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B064u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B068u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B070u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B080u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B08Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B0F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B11Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B13Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B14Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B154u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B15Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B170u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B17Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B184u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B18Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B194u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B19Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B1FCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B214u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B21Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B224u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B238u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B240u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B248u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B250u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B260u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B268u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B270u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B278u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B280u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B29Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2B4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B2F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B304u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B30Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B324u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B338u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B344u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B348u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B368u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B374u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B388u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B390u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B398u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3B0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3C8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B3DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B408u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B420u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B428u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B42Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B438u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B444u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B450u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B480u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B490u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B49Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B4F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B514u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B51Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B524u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B530u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B540u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B548u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B554u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B568u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B574u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B57Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B588u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B590u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B598u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5A8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5B8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B5F4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B600u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B614u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B620u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B63Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B67Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B688u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B690u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6C0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B6F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B71Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B72Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B744u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B75Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B760u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B768u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B770u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B778u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B798u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7D4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7E0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7E8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B7F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B808u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B818u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B828u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B838u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B848u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B858u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B868u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B878u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B888u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B898u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8A4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8ACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8BCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8DCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B8F8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B900u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B908u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B910u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B920u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B92Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B934u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B93Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B948u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B950u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B984u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9A0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9C4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9CCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9D0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9D8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9E4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894B9ECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA08u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA34u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA40u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA60u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA74u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA80u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BA9Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAE4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BAF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB48u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB64u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BB88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBACu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBE0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BBF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC10u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC38u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC6Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BC90u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCC4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BCF8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD04u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD2Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD3Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD4Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD5Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BD98u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDA0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDA8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDB8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDC0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDCCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDDCu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BDECu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE20u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE28u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE68u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE84u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BE94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BEC8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BED0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BEF0u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF00u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF0Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF1Cu, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF50u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF58u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF78u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF88u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BF94u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFA4u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFD8u, &recomp_unit_0081, "recomp_unit_0081");
    runtime.register_function(0x0894BFE0u, &recomp_unit_0081, "recomp_unit_0081");
}
} // namespace psprecomp
