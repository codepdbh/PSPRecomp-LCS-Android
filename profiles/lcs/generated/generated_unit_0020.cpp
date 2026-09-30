#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0020[4080] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 5, 0, 6, 0, 0, 7, 0, 8, 0, 0, 9, 0, 10, 0,
    0, 11, 0, 12, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0,
    0, 0, 21, 0, 0, 0, 22, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 36,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 0, 39, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 51, 0, 52, 0,
    53, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 56, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0,
    0, 69, 0, 0, 0, 70, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92,
    0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 106, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 115, 0, 116, 117, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0,
    0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0,
    0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 141, 0, 0, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0, 151, 0, 0,
    0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 156, 0, 0, 157, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0,
    0, 0, 0, 0, 0, 0, 166, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0,
    173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 182,
    0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 193, 0, 194, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0,
    201, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0,
    0, 211, 0, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 217, 218, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0,
    222, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 235, 236, 0, 237, 0, 0, 0,
    0, 238, 239, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 248, 0, 0, 0, 249,
    250, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 253, 254, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0,
    0, 0, 258, 0, 259, 0, 0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 265, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0,
    0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 271, 272, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0, 0, 0, 0, 0, 0,
    0, 276, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 284, 0,
    0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0, 291, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 294,
    0, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 314, 0, 315, 0, 316,
    0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321,
    0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324, 0, 325, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 330, 0, 331, 0, 332, 0, 0, 333, 0, 334, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 338,
    0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 344, 0, 0, 345, 0, 0,
    346, 0, 0, 0, 0, 347, 0, 348, 349, 0, 350, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0,
    362, 363, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 369,
    0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 379, 0, 380, 381, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 386, 387, 0, 388, 0, 0, 0, 0, 0, 0,
    0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 397, 0, 398,
    0, 399, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407,
    0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 411, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 415, 0, 416, 0,
    417, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423,
    0, 424, 0, 425, 0, 426, 0, 0, 0, 427, 0, 0, 0, 428, 429, 0, 430, 0, 0, 431, 0, 0, 432, 433, 0, 434, 0, 435, 0, 0, 0, 436,
    0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 446, 0, 0, 0, 447, 0, 0, 0, 448, 449, 0, 0, 450,
    0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0,
    456, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 461, 0, 0,
    0, 0, 462, 0, 463, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 468, 0, 0, 469, 0, 0, 470,
    0, 471, 0, 472, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 0, 0, 484, 485, 0, 486, 0,
    487, 0, 488, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    490, 0, 491, 0, 492, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 496, 497, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0,
    500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 504, 0, 505, 506, 0, 0, 0, 0, 0, 507, 508, 0, 0, 0, 509, 0,
    0, 510, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 516, 0, 0, 517, 0, 0, 518, 0,
    519, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 528,
    529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 533, 0, 534, 0, 535, 0, 0, 536, 0, 537, 0, 538, 0, 539, 0, 0, 540,
    0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 0, 0,
    550, 0, 551, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 556, 0, 557, 0, 558, 0, 0, 0, 559,
    0, 560, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 566, 0, 567, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 578, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 581, 582, 0, 583, 0, 0, 0, 0,
    584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0,
    0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 602, 603, 0, 604, 0, 0, 605, 0, 606, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 609, 0,
    0, 0, 0, 610, 0, 611, 0, 612, 0, 613, 0, 0, 0, 614, 615, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 623, 0, 624, 0, 625, 0, 0, 0, 0, 0, 626, 0, 627, 0, 0,
    0, 0, 0, 628, 0, 0, 0, 629, 0, 630, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 643,
    0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0,
    0, 651, 0, 652, 0, 0, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 656, 0, 0, 0, 0, 657, 0, 0,
    0, 658, 659, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 663, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 665, 0, 666, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    670, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 675, 0, 676, 0, 677, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 680, 0, 0, 0, 0, 681, 0, 0, 0, 682, 683, 0, 684,
    0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 687, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 690,
    691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 697, 0, 0, 698, 0, 0,
    699, 0, 700, 0, 701, 0, 702, 0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 705, 0, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 0, 708, 0,
    0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0,
    0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0,
    0, 0, 719, 0, 720, 0, 721, 0, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0,
    726, 0, 0, 0, 727, 0, 0, 0, 0, 0, 728, 729, 0, 730, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0,
    734, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 737, 0, 0, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 0, 740,
    0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 744, 0, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 747, 0,
    0, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 0, 0, 754, 0,
    0, 0, 0, 0, 755, 0, 0, 756, 0, 757, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 0, 761, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 767, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 769, 770, 0, 0, 0, 0,
    0, 0, 771, 0, 0, 0, 772, 0, 0, 0, 0, 773, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 778, 0, 779, 0, 780, 781,
};
void recomp_unit_0020_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08854000u;
        entry_id = (entry_delta < 16320u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0020[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08854000;
    case 2u: goto L_08854028;
    case 3u: goto L_08854034;
    case 4u: goto L_0885403C;
    case 5u: goto L_08854048;
    case 6u: goto L_08854050;
    case 7u: goto L_0885405C;
    case 8u: goto L_08854064;
    case 9u: goto L_08854070;
    case 10u: goto L_08854078;
    case 11u: goto L_08854084;
    case 12u: goto L_0885408C;
    case 13u: goto L_08854090;
    case 14u: goto L_08854098;
    case 15u: goto L_088540B0;
    case 16u: goto L_088540B8;
    case 17u: goto L_088540C8;
    case 18u: goto L_088540D0;
    case 19u: goto L_088540E4;
    case 20u: goto L_088540F8;
    case 21u: goto L_08854108;
    case 22u: goto L_08854118;
    case 23u: goto L_08854124;
    case 24u: goto L_0885412C;
    case 25u: goto L_08854134;
    case 26u: goto L_08854144;
    case 27u: goto L_0885414C;
    case 28u: goto L_08854160;
    case 29u: goto L_08854178;
    case 30u: goto L_088541A4;
    case 31u: goto L_088541B0;
    case 32u: goto L_088541C8;
    case 33u: goto L_088541D8;
    case 34u: goto L_088541E8;
    case 35u: goto L_088541F8;
    case 36u: goto L_088541FC;
    case 37u: goto L_0885423C;
    case 38u: goto L_08854244;
    case 39u: goto L_08854254;
    case 40u: goto L_08854258;
    case 41u: goto L_08854280;
    case 42u: goto L_08854294;
    case 43u: goto L_088542A4;
    case 44u: goto L_088542E0;
    case 45u: goto L_08854350;
    case 46u: goto L_088543A0;
    case 47u: goto L_088543D8;
    case 48u: goto L_08854430;
    case 49u: goto L_08854454;
    case 50u: goto L_08854460;
    case 51u: goto L_08854470;
    case 52u: goto L_08854478;
    case 53u: goto L_08854480;
    case 54u: goto L_0885449C;
    case 55u: goto L_088544A4;
    case 56u: goto L_088544B0;
    case 57u: goto L_088544B8;
    case 58u: goto L_088544C0;
    case 59u: goto L_088544DC;
    case 60u: goto L_088544E8;
    case 61u: goto L_088545A0;
    case 62u: goto L_088545A8;
    case 63u: goto L_088545B0;
    case 64u: goto L_088545C0;
    case 65u: goto L_088545CC;
    case 66u: goto L_088545D8;
    case 67u: goto L_088545E8;
    case 68u: goto L_088545F8;
    case 69u: goto L_08854604;
    case 70u: goto L_08854614;
    case 71u: goto L_08854618;
    case 72u: goto L_08854634;
    case 73u: goto L_0885464C;
    case 74u: goto L_08854654;
    case 75u: goto L_08854660;
    case 76u: goto L_08854670;
    case 77u: goto L_08854698;
    case 78u: goto L_088546A0;
    case 79u: goto L_088546A8;
    case 80u: goto L_08854710;
    case 81u: goto L_08854738;
    case 82u: goto L_08854760;
    case 83u: goto L_0885476C;
    case 84u: goto L_08854788;
    case 85u: goto L_088547A4;
    case 86u: goto L_088547E4;
    case 87u: goto L_088547EC;
    case 88u: goto L_08854808;
    case 89u: goto L_08854848;
    case 90u: goto L_08854850;
    case 91u: goto L_08854864;
    case 92u: goto L_0885487C;
    case 93u: goto L_08854884;
    case 94u: goto L_08854898;
    case 95u: goto L_088548CC;
    case 96u: goto L_08854904;
    case 97u: goto L_08854918;
    case 98u: goto L_0885495C;
    case 99u: goto L_088549AC;
    case 100u: goto L_088549EC;
    case 101u: goto L_08854A00;
    case 102u: goto L_08854A70;
    case 103u: goto L_08854A98;
    case 104u: goto L_08854AC0;
    case 105u: goto L_08854AE8;
    case 106u: goto L_08854AEC;
    case 107u: goto L_08854B2C;
    case 108u: goto L_08854B38;
    case 109u: goto L_08854B48;
    case 110u: goto L_08854B60;
    case 111u: goto L_08854B7C;
    case 112u: goto L_08854B8C;
    case 113u: goto L_08854B94;
    case 114u: goto L_08854B9C;
    case 115u: goto L_08854BA8;
    case 116u: goto L_08854BB0;
    case 117u: goto L_08854BB4;
    case 118u: goto L_08854BD4;
    case 119u: goto L_08854BDC;
    case 120u: goto L_08854C10;
    case 121u: goto L_08854C24;
    case 122u: goto L_08854C58;
    case 123u: goto L_08854C60;
    case 124u: goto L_08854C94;
    case 125u: goto L_08854CA0;
    case 126u: goto L_08854CA8;
    case 127u: goto L_08854CB0;
    case 128u: goto L_08854CCC;
    case 129u: goto L_08854CD4;
    case 130u: goto L_08854CF0;
    case 131u: goto L_08854CF8;
    case 132u: goto L_08854D04;
    case 133u: goto L_08854D10;
    case 134u: goto L_08854D38;
    case 135u: goto L_08854D40;
    case 136u: goto L_08854D74;
    case 137u: goto L_08854D88;
    case 138u: goto L_08854DB0;
    case 139u: goto L_08854DB8;
    case 140u: goto L_08854DEC;
    case 141u: goto L_08854DF0;
    case 142u: goto L_08854E0C;
    case 143u: goto L_08854E28;
    case 144u: goto L_08854E34;
    case 145u: goto L_08854E3C;
    case 146u: goto L_08854E48;
    case 147u: goto L_08854E50;
    case 148u: goto L_08854E58;
    case 149u: goto L_08854E60;
    case 150u: goto L_08854E68;
    case 151u: goto L_08854E74;
    case 152u: goto L_08854E8C;
    case 153u: goto L_08854E94;
    case 154u: goto L_08854EC0;
    case 155u: goto L_08854ED4;
    case 156u: goto L_08854ED8;
    case 157u: goto L_08854EE4;
    case 158u: goto L_08854EF0;
    case 159u: goto L_08854F14;
    case 160u: goto L_08854F24;
    case 161u: goto L_08854F30;
    case 162u: goto L_08854F44;
    case 163u: goto L_08854F58;
    case 164u: goto L_08854F68;
    case 165u: goto L_08854F74;
    case 166u: goto L_08854F98;
    case 167u: goto L_08854FA0;
    case 168u: goto L_08854FAC;
    case 169u: goto L_08854FBC;
    case 170u: goto L_08854FD4;
    case 171u: goto L_08854FDC;
    case 172u: goto L_08854FEC;
    case 173u: goto L_08855000;
    case 174u: goto L_0885500C;
    case 175u: goto L_0885501C;
    case 176u: goto L_08855030;
    case 177u: goto L_08855038;
    case 178u: goto L_08855044;
    case 179u: goto L_08855050;
    case 180u: goto L_08855068;
    case 181u: goto L_08855074;
    case 182u: goto L_0885507C;
    case 183u: goto L_08855088;
    case 184u: goto L_08855098;
    case 185u: goto L_088550AC;
    case 186u: goto L_088550F0;
    case 187u: goto L_08855148;
    case 188u: goto L_0885515C;
    case 189u: goto L_08855168;
    case 190u: goto L_08855174;
    case 191u: goto L_08855194;
    case 192u: goto L_088551A4;
    case 193u: goto L_088551AC;
    case 194u: goto L_088551B4;
    case 195u: goto L_088551B8;
    case 196u: goto L_08855248;
    case 197u: goto L_08855254;
    case 198u: goto L_08855264;
    case 199u: goto L_0885526C;
    case 200u: goto L_08855278;
    case 201u: goto L_08855280;
    case 202u: goto L_08855288;
    case 203u: goto L_08855294;
    case 204u: goto L_088552A0;
    case 205u: goto L_088552B0;
    case 206u: goto L_088552B8;
    case 207u: goto L_088552C0;
    case 208u: goto L_088552C8;
    case 209u: goto L_088552DC;
    case 210u: goto L_088552F4;
    case 211u: goto L_08855304;
    case 212u: goto L_08855310;
    case 213u: goto L_08855318;
    case 214u: goto L_08855320;
    case 215u: goto L_0885532C;
    case 216u: goto L_08855334;
    case 217u: goto L_08855344;
    case 218u: goto L_08855348;
    case 219u: goto L_08855350;
    case 220u: goto L_08855368;
    case 221u: goto L_08855378;
    case 222u: goto L_08855380;
    case 223u: goto L_08855388;
    case 224u: goto L_08855394;
    case 225u: goto L_088553A0;
    case 226u: goto L_088553B0;
    case 227u: goto L_088553B8;
    case 228u: goto L_088553C0;
    case 229u: goto L_088553D4;
    case 230u: goto L_088553E0;
    case 231u: goto L_08855438;
    case 232u: goto L_08855440;
    case 233u: goto L_08855448;
    case 234u: goto L_0885545C;
    case 235u: goto L_08855464;
    case 236u: goto L_08855468;
    case 237u: goto L_08855470;
    case 238u: goto L_08855484;
    case 239u: goto L_08855488;
    case 240u: goto L_08855490;
    case 241u: goto L_08855498;
    case 242u: goto L_088554A0;
    case 243u: goto L_088554C4;
    case 244u: goto L_088554CC;
    case 245u: goto L_088554E0;
    case 246u: goto L_088554EC;
    case 247u: goto L_08855568;
    case 248u: goto L_0885556C;
    case 249u: goto L_0885557C;
    case 250u: goto L_08855580;
    case 251u: goto L_08855590;
    case 252u: goto L_08855598;
    case 253u: goto L_088555B4;
    case 254u: goto L_088555B8;
    case 255u: goto L_088555C8;
    case 256u: goto L_088555DC;
    case 257u: goto L_088555E8;
    case 258u: goto L_08855608;
    case 259u: goto L_08855610;
    case 260u: goto L_08855620;
    case 261u: goto L_08855628;
    case 262u: goto L_08855630;
    case 263u: goto L_08855640;
    case 264u: goto L_0885564C;
    case 265u: goto L_08855654;
    case 266u: goto L_08855660;
    case 267u: goto L_08855668;
    case 268u: goto L_08855684;
    case 269u: goto L_08855694;
    case 270u: goto L_088556AC;
    case 271u: goto L_088556B4;
    case 272u: goto L_088556B8;
    case 273u: goto L_088556D0;
    case 274u: goto L_088556D8;
    case 275u: goto L_088556E4;
    case 276u: goto L_08855704;
    case 277u: goto L_08855710;
    case 278u: goto L_08855724;
    case 279u: goto L_0885573C;
    case 280u: goto L_08855744;
    case 281u: goto L_0885574C;
    case 282u: goto L_0885575C;
    case 283u: goto L_08855764;
    case 284u: goto L_08855778;
    case 285u: goto L_08855784;
    case 286u: goto L_08855790;
    case 287u: goto L_0885579C;
    case 288u: goto L_088557AC;
    case 289u: goto L_088557B4;
    case 290u: goto L_088557C4;
    case 291u: goto L_088557CC;
    case 292u: goto L_088557D4;
    case 293u: goto L_088557EC;
    case 294u: goto L_088557FC;
    case 295u: goto L_08855808;
    case 296u: goto L_08855814;
    case 297u: goto L_08855824;
    case 298u: goto L_0885583C;
    case 299u: goto L_08855850;
    case 300u: goto L_0885585C;
    case 301u: goto L_08855894;
    case 302u: goto L_0885589C;
    case 303u: goto L_088558A8;
    case 304u: goto L_088558B0;
    case 305u: goto L_088558C8;
    case 306u: goto L_088558E0;
    case 307u: goto L_088558E8;
    case 308u: goto L_08855918;
    case 309u: goto L_08855920;
    case 310u: goto L_08855940;
    case 311u: goto L_08855948;
    case 312u: goto L_08855950;
    case 313u: goto L_08855958;
    case 314u: goto L_0885596C;
    case 315u: goto L_08855974;
    case 316u: goto L_0885597C;
    case 317u: goto L_0885598C;
    case 318u: goto L_08855994;
    case 319u: goto L_088559C8;
    case 320u: goto L_088559D8;
    case 321u: goto L_088559FC;
    case 322u: goto L_08855A0C;
    case 323u: goto L_08855A18;
    case 324u: goto L_08855A28;
    case 325u: goto L_08855A30;
    case 326u: goto L_08855A34;
    case 327u: goto L_08855A5C;
    case 328u: goto L_08855A90;
    case 329u: goto L_08855AA0;
    case 330u: goto L_08855AA8;
    case 331u: goto L_08855AB0;
    case 332u: goto L_08855AB8;
    case 333u: goto L_08855AC4;
    case 334u: goto L_08855ACC;
    case 335u: goto L_08855AD4;
    case 336u: goto L_08855AE8;
    case 337u: goto L_08855AF4;
    case 338u: goto L_08855AFC;
    case 339u: goto L_08855B04;
    case 340u: goto L_08855B30;
    case 341u: goto L_08855B38;
    case 342u: goto L_08855B54;
    case 343u: goto L_08855B5C;
    case 344u: goto L_08855B68;
    case 345u: goto L_08855B74;
    case 346u: goto L_08855B80;
    case 347u: goto L_08855B94;
    case 348u: goto L_08855B9C;
    case 349u: goto L_08855BA0;
    case 350u: goto L_08855BA8;
    case 351u: goto L_08855BB0;
    case 352u: goto L_08855BC0;
    case 353u: goto L_08855BC8;
    case 354u: goto L_08855BE0;
    case 355u: goto L_08855C10;
    case 356u: goto L_08855C18;
    case 357u: goto L_08855C20;
    case 358u: goto L_08855C40;
    case 359u: goto L_08855C48;
    case 360u: goto L_08855C54;
    case 361u: goto L_08855C74;
    case 362u: goto L_08855C80;
    case 363u: goto L_08855C84;
    case 364u: goto L_08855C8C;
    case 365u: goto L_08855C9C;
    case 366u: goto L_08855CB8;
    case 367u: goto L_08855CD8;
    case 368u: goto L_08855CF0;
    case 369u: goto L_08855CFC;
    case 370u: goto L_08855D0C;
    case 371u: goto L_08855D1C;
    case 372u: goto L_08855D2C;
    case 373u: goto L_08855D38;
    case 374u: goto L_08855D50;
    case 375u: goto L_08855D70;
    case 376u: goto L_08855D90;
    case 377u: goto L_08855DA4;
    case 378u: goto L_08855DD0;
    case 379u: goto L_08855DD4;
    case 380u: goto L_08855DDC;
    case 381u: goto L_08855DE0;
    case 382u: goto L_08855E10;
    case 383u: goto L_08855E20;
    case 384u: goto L_08855E3C;
    case 385u: goto L_08855E50;
    case 386u: goto L_08855E58;
    case 387u: goto L_08855E5C;
    case 388u: goto L_08855E64;
    case 389u: goto L_08855E88;
    case 390u: goto L_08855ED8;
    case 391u: goto L_08855F08;
    case 392u: goto L_08855F20;
    case 393u: goto L_08855F28;
    case 394u: goto L_08855F44;
    case 395u: goto L_08855F64;
    case 396u: goto L_08855F6C;
    case 397u: goto L_08855F74;
    case 398u: goto L_08855F7C;
    case 399u: goto L_08855F84;
    case 400u: goto L_08855F8C;
    case 401u: goto L_08855F9C;
    case 402u: goto L_08855FAC;
    case 403u: goto L_08855FBC;
    case 404u: goto L_08855FCC;
    case 405u: goto L_08855FDC;
    case 406u: goto L_08855FEC;
    case 407u: goto L_08855FFC;
    case 408u: goto L_0885600C;
    case 409u: goto L_08856020;
    case 410u: goto L_08856030;
    case 411u: goto L_08856038;
    case 412u: goto L_08856040;
    case 413u: goto L_08856058;
    case 414u: goto L_08856068;
    case 415u: goto L_08856070;
    case 416u: goto L_08856078;
    case 417u: goto L_08856080;
    case 418u: goto L_08856088;
    case 419u: goto L_08856090;
    case 420u: goto L_088560B0;
    case 421u: goto L_088560D0;
    case 422u: goto L_088560E4;
    case 423u: goto L_088560FC;
    case 424u: goto L_08856104;
    case 425u: goto L_0885610C;
    case 426u: goto L_08856114;
    case 427u: goto L_08856124;
    case 428u: goto L_08856134;
    case 429u: goto L_08856138;
    case 430u: goto L_08856140;
    case 431u: goto L_0885614C;
    case 432u: goto L_08856158;
    case 433u: goto L_0885615C;
    case 434u: goto L_08856164;
    case 435u: goto L_0885616C;
    case 436u: goto L_0885617C;
    case 437u: goto L_08856184;
    case 438u: goto L_0885618C;
    case 439u: goto L_08856194;
    case 440u: goto L_0885619C;
    case 441u: goto L_088561A4;
    case 442u: goto L_088561AC;
    case 443u: goto L_088561B4;
    case 444u: goto L_088561BC;
    case 445u: goto L_088561C4;
    case 446u: goto L_088561CC;
    case 447u: goto L_088561DC;
    case 448u: goto L_088561EC;
    case 449u: goto L_088561F0;
    case 450u: goto L_088561FC;
    case 451u: goto L_08856208;
    case 452u: goto L_08856218;
    case 453u: goto L_08856234;
    case 454u: goto L_0885623C;
    case 455u: goto L_08856274;
    case 456u: goto L_08856280;
    case 457u: goto L_08856288;
    case 458u: goto L_088562C8;
    case 459u: goto L_088562E0;
    case 460u: goto L_088562EC;
    case 461u: goto L_088562F4;
    case 462u: goto L_08856308;
    case 463u: goto L_08856310;
    case 464u: goto L_08856320;
    case 465u: goto L_08856330;
    case 466u: goto L_08856348;
    case 467u: goto L_0885635C;
    case 468u: goto L_08856364;
    case 469u: goto L_08856370;
    case 470u: goto L_0885637C;
    case 471u: goto L_08856384;
    case 472u: goto L_0885638C;
    case 473u: goto L_088563A0;
    case 474u: goto L_088563A8;
    case 475u: goto L_088563F8;
    case 476u: goto L_0885645C;
    case 477u: goto L_0885649C;
    case 478u: goto L_088564A4;
    case 479u: goto L_088564BC;
    case 480u: goto L_088564C4;
    case 481u: goto L_088564CC;
    case 482u: goto L_088564D4;
    case 483u: goto L_088564DC;
    case 484u: goto L_088564EC;
    case 485u: goto L_088564F0;
    case 486u: goto L_088564F8;
    case 487u: goto L_08856500;
    case 488u: goto L_08856508;
    case 489u: goto L_08856510;
    case 490u: goto L_08856580;
    case 491u: goto L_08856588;
    case 492u: goto L_08856590;
    case 493u: goto L_0885659C;
    case 494u: goto L_088565AC;
    case 495u: goto L_088565BC;
    case 496u: goto L_088565C8;
    case 497u: goto L_088565CC;
    case 498u: goto L_088565E0;
    case 499u: goto L_088565F0;
    case 500u: goto L_08856600;
    case 501u: goto L_08856610;
    case 502u: goto L_08856620;
    case 503u: goto L_08856630;
    case 504u: goto L_08856640;
    case 505u: goto L_08856648;
    case 506u: goto L_0885664C;
    case 507u: goto L_08856664;
    case 508u: goto L_08856668;
    case 509u: goto L_08856678;
    case 510u: goto L_08856684;
    case 511u: goto L_08856690;
    case 512u: goto L_088566A4;
    case 513u: goto L_088566C0;
    case 514u: goto L_088566CC;
    case 515u: goto L_088566D8;
    case 516u: goto L_088566E0;
    case 517u: goto L_088566EC;
    case 518u: goto L_088566F8;
    case 519u: goto L_08856700;
    case 520u: goto L_08856708;
    case 521u: goto L_08856718;
    case 522u: goto L_08856728;
    case 523u: goto L_08856734;
    case 524u: goto L_0885673C;
    case 525u: goto L_0885674C;
    case 526u: goto L_0885675C;
    case 527u: goto L_0885676C;
    case 528u: goto L_0885677C;
    case 529u: goto L_08856780;
    case 530u: goto L_0885679C;
    case 531u: goto L_088567A8;
    case 532u: goto L_088567B4;
    case 533u: goto L_088567BC;
    case 534u: goto L_088567C4;
    case 535u: goto L_088567CC;
    case 536u: goto L_088567D8;
    case 537u: goto L_088567E0;
    case 538u: goto L_088567E8;
    case 539u: goto L_088567F0;
    case 540u: goto L_088567FC;
    case 541u: goto L_0885680C;
    case 542u: goto L_08856814;
    case 543u: goto L_08856830;
    case 544u: goto L_08856848;
    case 545u: goto L_08856850;
    case 546u: goto L_08856858;
    case 547u: goto L_08856860;
    case 548u: goto L_08856868;
    case 549u: goto L_08856870;
    case 550u: goto L_08856880;
    case 551u: goto L_08856888;
    case 552u: goto L_08856898;
    case 553u: goto L_088568A0;
    case 554u: goto L_088568BC;
    case 555u: goto L_088568D4;
    case 556u: goto L_088568DC;
    case 557u: goto L_088568E4;
    case 558u: goto L_088568EC;
    case 559u: goto L_088568FC;
    case 560u: goto L_08856904;
    case 561u: goto L_08856914;
    case 562u: goto L_0885691C;
    case 563u: goto L_08856934;
    case 564u: goto L_0885693C;
    case 565u: goto L_08856960;
    case 566u: goto L_08856968;
    case 567u: goto L_08856970;
    case 568u: goto L_088569E4;
    case 569u: goto L_08856A0C;
    case 570u: goto L_08856A34;
    case 571u: goto L_08856A3C;
    case 572u: goto L_08856A5C;
    case 573u: goto L_08856A78;
    case 574u: goto L_08856AC4;
    case 575u: goto L_08856ACC;
    case 576u: goto L_08856AE8;
    case 577u: goto L_08856B28;
    case 578u: goto L_08856B2C;
    case 579u: goto L_08856B3C;
    case 580u: goto L_08856B48;
    case 581u: goto L_08856B60;
    case 582u: goto L_08856B64;
    case 583u: goto L_08856B6C;
    case 584u: goto L_08856B80;
    case 585u: goto L_08856BC0;
    case 586u: goto L_08856BC4;
    case 587u: goto L_08856C30;
    case 588u: goto L_08856C74;
    case 589u: goto L_08856CC4;
    case 590u: goto L_08856D04;
    case 591u: goto L_08856D2C;
    case 592u: goto L_08856D38;
    case 593u: goto L_08856D54;
    case 594u: goto L_08856D5C;
    case 595u: goto L_08856D74;
    case 596u: goto L_08856D90;
    case 597u: goto L_08856D9C;
    case 598u: goto L_08856DAC;
    case 599u: goto L_08856E1C;
    case 600u: goto L_08856E4C;
    case 601u: goto L_08856E74;
    case 602u: goto L_08856E9C;
    case 603u: goto L_08856EA0;
    case 604u: goto L_08856EA8;
    case 605u: goto L_08856EB4;
    case 606u: goto L_08856EBC;
    case 607u: goto L_08856EC4;
    case 608u: goto L_08856EDC;
    case 609u: goto L_08856EF8;
    case 610u: goto L_08856F0C;
    case 611u: goto L_08856F14;
    case 612u: goto L_08856F1C;
    case 613u: goto L_08856F24;
    case 614u: goto L_08856F34;
    case 615u: goto L_08856F38;
    case 616u: goto L_08856F5C;
    case 617u: goto L_08856F68;
    case 618u: goto L_08856FA4;
    case 619u: goto L_08856FD0;
    case 620u: goto L_08857004;
    case 621u: goto L_0885700C;
    case 622u: goto L_0885703C;
    case 623u: goto L_08857044;
    case 624u: goto L_0885704C;
    case 625u: goto L_08857054;
    case 626u: goto L_0885706C;
    case 627u: goto L_08857074;
    case 628u: goto L_0885708C;
    case 629u: goto L_0885709C;
    case 630u: goto L_088570A4;
    case 631u: goto L_088570B4;
    case 632u: goto L_088570C0;
    case 633u: goto L_088570E8;
    case 634u: goto L_088570F4;
    case 635u: goto L_08857130;
    case 636u: goto L_0885715C;
    case 637u: goto L_08857188;
    case 638u: goto L_08857190;
    case 639u: goto L_088571C0;
    case 640u: goto L_088571CC;
    case 641u: goto L_088571DC;
    case 642u: goto L_088571EC;
    case 643u: goto L_088571FC;
    case 644u: goto L_0885720C;
    case 645u: goto L_0885721C;
    case 646u: goto L_08857234;
    case 647u: goto L_0885723C;
    case 648u: goto L_08857254;
    case 649u: goto L_0885725C;
    case 650u: goto L_0885726C;
    case 651u: goto L_08857284;
    case 652u: goto L_0885728C;
    case 653u: goto L_088572A4;
    case 654u: goto L_088572AC;
    case 655u: goto L_0885735C;
    case 656u: goto L_08857360;
    case 657u: goto L_08857374;
    case 658u: goto L_08857384;
    case 659u: goto L_08857388;
    case 660u: goto L_08857390;
    case 661u: goto L_088573A4;
    case 662u: goto L_088573BC;
    case 663u: goto L_088573C0;
    case 664u: goto L_088573CC;
    case 665u: goto L_08857408;
    case 666u: goto L_08857410;
    case 667u: goto L_08857414;
    case 668u: goto L_08857498;
    case 669u: goto L_088574C0;
    case 670u: goto L_08857500;
    case 671u: goto L_0885750C;
    case 672u: goto L_08857528;
    case 673u: goto L_08857534;
    case 674u: goto L_08857554;
    case 675u: goto L_0885755C;
    case 676u: goto L_08857564;
    case 677u: goto L_0885756C;
    case 678u: goto L_0885762C;
    case 679u: goto L_08857648;
    case 680u: goto L_0885764C;
    case 681u: goto L_08857660;
    case 682u: goto L_08857670;
    case 683u: goto L_08857674;
    case 684u: goto L_0885767C;
    case 685u: goto L_08857690;
    case 686u: goto L_088576A8;
    case 687u: goto L_088576AC;
    case 688u: goto L_088576B8;
    case 689u: goto L_088576F4;
    case 690u: goto L_088576FC;
    case 691u: goto L_08857700;
    case 692u: goto L_0885772C;
    case 693u: goto L_08857734;
    case 694u: goto L_0885774C;
    case 695u: goto L_088577A4;
    case 696u: goto L_088577DC;
    case 697u: goto L_088577E8;
    case 698u: goto L_088577F4;
    case 699u: goto L_08857800;
    case 700u: goto L_08857808;
    case 701u: goto L_08857810;
    case 702u: goto L_08857818;
    case 703u: goto L_08857834;
    case 704u: goto L_0885783C;
    case 705u: goto L_08857844;
    case 706u: goto L_08857850;
    case 707u: goto L_08857868;
    case 708u: goto L_08857878;
    case 709u: goto L_08857888;
    case 710u: goto L_088578F8;
    case 711u: goto L_08857974;
    case 712u: goto L_0885798C;
    case 713u: goto L_088579A8;
    case 714u: goto L_088579B0;
    case 715u: goto L_088579CC;
    case 716u: goto L_088579D4;
    case 717u: goto L_088579E8;
    case 718u: goto L_088579F0;
    case 719u: goto L_08857A08;
    case 720u: goto L_08857A10;
    case 721u: goto L_08857A18;
    case 722u: goto L_08857A34;
    case 723u: goto L_08857A3C;
    case 724u: goto L_08857A54;
    case 725u: goto L_08857A6C;
    case 726u: goto L_08857A80;
    case 727u: goto L_08857A90;
    case 728u: goto L_08857AA8;
    case 729u: goto L_08857AAC;
    case 730u: goto L_08857AB4;
    case 731u: goto L_08857AD4;
    case 732u: goto L_08857AE4;
    case 733u: goto L_08857AF4;
    case 734u: goto L_08857B00;
    case 735u: goto L_08857B24;
    case 736u: goto L_08857B34;
    case 737u: goto L_08857B40;
    case 738u: goto L_08857B54;
    case 739u: goto L_08857B68;
    case 740u: goto L_08857B7C;
    case 741u: goto L_08857B8C;
    case 742u: goto L_08857BB0;
    case 743u: goto L_08857BBC;
    case 744u: goto L_08857BC8;
    case 745u: goto L_08857BD8;
    case 746u: goto L_08857BF0;
    case 747u: goto L_08857BF8;
    case 748u: goto L_08857C08;
    case 749u: goto L_08857C20;
    case 750u: goto L_08857C2C;
    case 751u: goto L_08857C40;
    case 752u: goto L_08857C54;
    case 753u: goto L_08857C68;
    case 754u: goto L_08857C78;
    case 755u: goto L_08857C90;
    case 756u: goto L_08857C9C;
    case 757u: goto L_08857CA4;
    case 758u: goto L_08857CB0;
    case 759u: goto L_08857CC4;
    case 760u: goto L_08857CD8;
    case 761u: goto L_08857CE8;
    case 762u: goto L_08857D20;
    case 763u: goto L_08857D2C;
    case 764u: goto L_08857D3C;
    case 765u: goto L_08857DA8;
    case 766u: goto L_08857E24;
    case 767u: goto L_08857E3C;
    case 768u: goto L_08857E48;
    case 769u: goto L_08857E68;
    case 770u: goto L_08857E6C;
    case 771u: goto L_08857E88;
    case 772u: goto L_08857E98;
    case 773u: goto L_08857EAC;
    case 774u: goto L_08857EB4;
    case 775u: goto L_08857EF8;
    case 776u: goto L_08857F50;
    case 777u: goto L_08857F94;
    case 778u: goto L_08857FA8;
    case 779u: goto L_08857FB0;
    case 780u: goto L_08857FB8;
    case 781u: goto L_08857FBC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08854000:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08854090;
      }
      goto L_08854028;
    }
L_08854028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08854034u);
    ctx.gpr[5] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08854034u) goto L_08854034;
    return;
L_08854034:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885408C;
      }
      goto L_0885403C;
    }
L_0885403C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08854048u);
    ctx.gpr[5] = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08854048u) goto L_08854048;
    return;
L_08854048:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885408C;
      }
      goto L_08854050;
    }
L_08854050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0885405Cu);
    ctx.gpr[5] = (0u | 205u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x0885405Cu) goto L_0885405C;
    return;
L_0885405C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885408C;
      }
      goto L_08854064;
    }
L_08854064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08854070u);
    ctx.gpr[5] = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08854070u) goto L_08854070;
    return;
L_08854070:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885408C;
      }
      goto L_08854078;
    }
L_08854078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08854084u);
    ctx.gpr[5] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08854084u) goto L_08854084;
    return;
L_08854084:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08854090;
      }
      goto L_0885408C;
    }
L_0885408C:
    ctx.gpr[20] = (0u | 1u);
    goto L_08854090;
L_08854090:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08854124;
      }
      goto L_08854098;
    }
L_08854098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2956)));
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08854124;
      }
      goto L_088540B0;
    }
L_088540B0:
    ctx.gpr[31] = (0x088540B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 122u, 0x088D49FCu>(ctx, &aot_mem) && ctx.pc == 0x088540B8u) goto L_088540B8;
    return;
L_088540B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.gpr[31] = (0x088540C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 446u, 0x08A8ABBCu>(ctx, &aot_mem) && ctx.pc == 0x088540C8u) goto L_088540C8;
    return;
L_088540C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088540F8;
      }
      goto L_088540D0;
    }
L_088540D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088540E4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088540E4u) goto L_088540E4;
    return;
L_088540E4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088540F8;
L_088540F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08854118;
      }
      goto L_08854108;
    }
L_08854108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2500));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2956), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08854124;
      }
      goto L_08854118;
    }
L_08854118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2956), ctx.gpr[4]);
    goto L_08854124;
L_08854124:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08854178;
      }
      goto L_0885412C;
    }
L_0885412C:
    ctx.gpr[31] = (0x08854134u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 122u, 0x088D49FCu>(ctx, &aot_mem) && ctx.pc == 0x08854134u) goto L_08854134;
    return;
L_08854134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.gpr[31] = (0x08854144u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 446u, 0x08A8ABBCu>(ctx, &aot_mem) && ctx.pc == 0x08854144u) goto L_08854144;
    return;
L_08854144:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
        goto L_08854178;
    }
    goto L_0885414C;
L_0885414C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08854160u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(29));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08854160u) goto L_08854160;
    return;
L_08854160:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    goto L_08854178;
L_08854178:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(7), ctx.gpr[7]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(10), ctx.gpr[7]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[31] = (0x088541A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088541A4u) goto L_088541A4;
    return;
L_088541A4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088541B0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 533u, 0x08AFA51Cu>(ctx, &aot_mem) && ctx.pc == 0x088541B0u) goto L_088541B0;
    return;
L_088541B0:
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
    ctx.gpr[18] = (0u | 8u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088541F8;
      }
      goto L_088541C8;
    }
L_088541C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088541F8;
      }
      goto L_088541D8;
    }
L_088541D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088541F8;
      }
      goto L_088541E8;
    }
L_088541E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088541FC;
      }
      goto L_088541F8;
    }
L_088541F8:
    ctx.gpr[18] = (0u | 32u);
    goto L_088541FC;
L_088541FC:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0885423Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x0885423Cu) goto L_0885423C;
    return;
L_0885423C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08854294;
      }
      goto L_08854244;
    }
L_08854244:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08854294;
      }
      goto L_08854254;
    }
L_08854254:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_08854258;
L_08854258:
    ctx.gpr[4] = (0u | 7u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08854280u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08854280u) goto L_08854280;
    return;
L_08854280:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08854258;
      }
      goto L_08854294;
    }
L_08854294:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088543A0;
      }
      goto L_088542A4;
    }
L_088542A4:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (0u | 74u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088542E0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088542E0u) goto L_088542E0;
    return;
L_088542E0:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (0u | 74u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08854350u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08854350u) goto L_08854350;
    return;
L_08854350:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 74u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088543A0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088543A0u) goto L_088543A0;
    return;
L_088543A0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088543D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-480));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[16]);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[31]);
    ctx.gpr[31] = (0x08854430u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5208));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 877u, 0x0884FE48u>(ctx, &aot_mem) && ctx.pc == 0x08854430u) goto L_08854430;
    return;
L_08854430:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(35), ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x08854454u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08854454u) goto L_08854454;
    return;
L_08854454:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08854478;
      }
      goto L_08854460;
    }
L_08854460:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08854480;
      }
      goto L_08854470;
    }
L_08854470:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
      if (branch_taken) {
          goto L_08854DF0;
      }
      goto L_08854478;
    }
L_08854478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088550AC;
      }
      goto L_08854480;
    }
L_08854480:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08854DEC;
      }
      goto L_0885449C;
    }
L_0885449C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088544B8;
      }
      goto L_088544A4;
    }
L_088544A4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088544C0;
      }
      goto L_088544B0;
    }
L_088544B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854DEC;
      }
      goto L_088544B8;
    }
L_088544B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088550AC;
      }
      goto L_088544C0;
    }
L_088544C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[7]);
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(34), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(37), ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x088544DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x088544DCu) goto L_088544DC;
    return;
L_088544DC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088545A8;
      }
      goto L_088544E8;
    }
L_088544E8:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(31)));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(7));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(11));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(19));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(23));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(27))))));
    ctx.gpr[17] = (ctx.gpr[4] & 16u);
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[22] = (0u | 54u);
    ctx.gpr[5] = (16256u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088545B0;
      }
      goto L_088545A0;
    }
L_088545A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088545CC;
      }
      goto L_088545A8;
    }
L_088545A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088550AC;
      }
      goto L_088545B0;
    }
L_088545B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088545CC;
      }
      goto L_088545C0;
    }
L_088545C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x088545CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 319u, 0x0889942Cu>(ctx, &aot_mem) && ctx.pc == 0x088545CCu) goto L_088545CC;
    return;
L_088545CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08854618;
      }
      goto L_088545D8;
    }
L_088545D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(864)));
    ctx.gpr[6] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08854614;
      }
      goto L_088545E8;
    }
L_088545E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08854614;
      }
      goto L_088545F8;
    }
L_088545F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08854614;
      }
      goto L_08854604;
    }
L_08854604:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08854618;
      }
      goto L_08854614;
    }
L_08854614:
    ctx.gpr[4] = (0u | 1u);
    goto L_08854618;
L_08854618:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(27))))));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08854634u);
    ctx.gpr[8] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 674u, 0x088DAF3Cu>(ctx, &aot_mem) && ctx.pc == 0x08854634u) goto L_08854634;
    return;
L_08854634:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[31] = (0x0885464Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0885464Cu) goto L_0885464C;
    return;
L_0885464C:
    ctx.gpr[31] = (0x08854654u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08854654u) goto L_08854654;
    return;
L_08854654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08854698;
      }
      goto L_08854660;
    }
L_08854660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08854698;
      }
      goto L_08854670;
    }
L_08854670:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(27))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 15u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08854698u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08854698u) goto L_08854698;
    return;
L_08854698:
    ctx.gpr[31] = (0x088546A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x088546A0u) goto L_088546A0;
    return;
L_088546A0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
        goto L_08854AEC;
    }
    goto L_088546A8;
L_088546A8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08854710u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08854710u) goto L_08854710;
    return;
L_08854710:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08854738u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08854738u) goto L_08854738;
    return;
L_08854738:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08854760u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08854760u) goto L_08854760;
    return;
L_08854760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 11u);
      if (branch_taken) {
          goto L_08854848;
      }
      goto L_0885476C;
    }
L_0885476C:
    ctx.gpr[4] = (48460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08854788u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08854788u) goto L_08854788;
    return;
L_08854788:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x088547A4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x088547A4u) goto L_088547A4;
    return;
L_088547A4:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[24];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[15];
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.gpr[31] = (0x088547E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088547E4u) goto L_088547E4;
    return;
L_088547E4:
    ctx.gpr[31] = (0x088547ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x088547ECu) goto L_088547EC;
    return;
L_088547EC:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08854808u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08854808u) goto L_08854808;
    return;
L_08854808:
    ctx.fpr[14] = ctx.fpr[28] - ctx.fpr[24];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (0u | 6u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[31] = (0x08854848u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08854848u) goto L_08854848;
    return;
L_08854848:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088549EC;
      }
      goto L_08854850;
    }
L_08854850:
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[4] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[4];
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0885487C;
      }
      goto L_08854864;
    }
L_08854864:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08854898;
      }
      goto L_0885487C;
    }
L_0885487C:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088548CC;
      }
      goto L_08854884;
    }
L_08854884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088548CC;
      }
      goto L_08854898;
    }
L_08854898:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (0u | 74u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088548CCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088548CCu) goto L_088548CC;
    return;
L_088548CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08854904;
L_08854904:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08854918u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08854918u) goto L_08854918;
    return;
L_08854918:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x0885495Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x0885495Cu) goto L_0885495C;
    return;
L_0885495C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088549ACu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088549ACu) goto L_088549AC;
    return;
L_088549AC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088549ECu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088549ECu) goto L_088549EC;
    return;
L_088549EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08854AE8;
      }
      goto L_08854A00;
    }
L_08854A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08854A70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08854A70u) goto L_08854A70;
    return;
L_08854A70:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08854A98u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08854A98u) goto L_08854A98;
    return;
L_08854A98:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08854AC0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08854AC0u) goto L_08854AC0;
    return;
L_08854AC0:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08854AE8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08854AE8u) goto L_08854AE8;
    return;
L_08854AE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    goto L_08854AEC;
L_08854AEC:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (0u | 42u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08854CF8;
      }
      goto L_08854B2C;
    }
L_08854B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08854CF8;
      }
      goto L_08854B38;
    }
L_08854B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08854CF8;
      }
      goto L_08854B48;
    }
L_08854B48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08854DEC;
      }
      goto L_08854B60;
    }
L_08854B60:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08854B8C;
      }
      goto L_08854B7C;
    }
L_08854B7C:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_08854BB4;
    }
    goto L_08854B8C;
L_08854B8C:
    ctx.gpr[31] = (0x08854B94u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08854B94u) goto L_08854B94;
    return;
L_08854B94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08854DEC;
      }
      goto L_08854B9C;
    }
L_08854B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08854BB0;
      }
      goto L_08854BA8;
    }
L_08854BA8:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08854DEC;
      }
      goto L_08854BB0;
    }
L_08854BB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_08854BB4;
L_08854BB4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 11u);
      if (branch_taken) {
          goto L_08854BDC;
      }
      goto L_08854BD4;
    }
L_08854BD4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08854C10;
      }
      goto L_08854BDC;
    }
L_08854BDC:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08854C10;
L_08854C10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08854C60;
      }
      goto L_08854C24;
    }
L_08854C24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08854C58u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08854C58u) goto L_08854C58;
    return;
L_08854C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854C94;
      }
      goto L_08854C60;
    }
L_08854C60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (49312u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08854C94u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08854C94u) goto L_08854C94;
    return;
L_08854C94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08854CD4;
      }
      goto L_08854CA0;
    }
L_08854CA0:
    ctx.gpr[31] = (0x08854CA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08854CA8u) goto L_08854CA8;
    return;
L_08854CA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08854CD4;
      }
      goto L_08854CB0;
    }
L_08854CB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(27))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] & 15u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25));
    ctx.gpr[5] = (0u | 3000u);
    ctx.gpr[31] = (0x08854CCCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x08854CCCu) goto L_08854CCC;
    return;
L_08854CCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854DEC;
      }
      goto L_08854CD4;
    }
L_08854CD4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(27))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] & 15u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25));
    ctx.gpr[5] = (0u | 1500u);
    ctx.gpr[31] = (0x08854CF0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x08854CF0u) goto L_08854CF0;
    return;
L_08854CF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854DEC;
      }
      goto L_08854CF8;
    }
L_08854CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08854DEC;
      }
      goto L_08854D04;
    }
L_08854D04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08854DEC;
      }
      goto L_08854D10;
    }
L_08854D10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 11u);
      if (branch_taken) {
          goto L_08854D40;
      }
      goto L_08854D38;
    }
L_08854D38:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08854D74;
      }
      goto L_08854D40;
    }
L_08854D40:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08854D74;
L_08854D74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08854DB8;
      }
      goto L_08854D88;
    }
L_08854D88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08854DB0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08854DB0u) goto L_08854DB0;
    return;
L_08854DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854DEC;
      }
      goto L_08854DB8;
    }
L_08854DB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (49312u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08854DECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08854DECu) goto L_08854DEC;
    return;
L_08854DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    goto L_08854DF0;
L_08854DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088550AC;
      }
      goto L_08854E0C;
    }
L_08854E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(35), ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x08854E28u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08854E28u) goto L_08854E28;
    return;
L_08854E28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08854E58;
      }
      goto L_08854E34;
    }
L_08854E34:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08854E50;
      }
      goto L_08854E3C;
    }
L_08854E3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08854E60;
      }
      goto L_08854E48;
    }
L_08854E48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088550AC;
      }
      goto L_08854E50;
    }
L_08854E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088550AC;
      }
      goto L_08854E58;
    }
L_08854E58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088550AC;
      }
      goto L_08854E60;
    }
L_08854E60:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(31)));
      if (branch_taken) {
          goto L_088550AC;
      }
      goto L_08854E68;
    }
L_08854E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088550AC;
      }
      goto L_08854E74;
    }
L_08854E74:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.gpr[18] = (rt.memory().aot_load_word_right(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[18]));
    ctx.gpr[18] = (rt.memory().aot_load_word_left(ctx.gpr[20] + static_cast<std::uint32_t>(39), ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08854E8Cu);
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08854E8Cu) goto L_08854E8C;
    return;
L_08854E8C:
    ctx.gpr[31] = (0x08854E94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x08854E94u) goto L_08854E94;
    return;
L_08854E94:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[31] = (0x08854EC0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 170u, 0x088214F4u>(ctx, &aot_mem) && ctx.pc == 0x08854EC0u) goto L_08854EC0;
    return;
L_08854EC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[20] = (0u | 3u);
      if (branch_taken) {
          goto L_08854ED8;
      }
      goto L_08854ED4;
    }
L_08854ED4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(671), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08854ED8;
L_08854ED8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(397))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08854F24;
      }
      goto L_08854EE4;
    }
L_08854EE4:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08854EF0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08854EF0u) goto L_08854EF0;
    return;
L_08854EF0:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08854FA0;
      }
      goto L_08854F14;
    }
L_08854F14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08854FA0;
      }
      goto L_08854F24;
    }
L_08854F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088550AC;
      }
      goto L_08854F30;
    }
L_08854F30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088550AC;
      }
      goto L_08854F44;
    }
L_08854F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088550AC;
      }
      goto L_08854F58;
    }
L_08854F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088550AC;
      }
      goto L_08854F68;
    }
L_08854F68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(397))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08854F98;
      }
      goto L_08854F74;
    }
L_08854F74:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08854F98;
L_08854F98:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_088550AC;
      }
      goto L_08854FA0;
    }
L_08854FA0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 200u);
      if (branch_taken) {
          goto L_0885501C;
      }
      goto L_08854FAC;
    }
L_08854FAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885501C;
      }
      goto L_08854FBC;
    }
L_08854FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08855000;
      }
      goto L_08854FD4;
    }
L_08854FD4:
    ctx.gpr[31] = (0x08854FDCu);
    ctx.gpr[19] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08854FDCu) goto L_08854FDC;
    return;
L_08854FDC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08854FECu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08854FECu) goto L_08854FEC;
    return;
L_08854FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(596), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1800), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0885500C;
      }
      goto L_08855000;
    }
L_08855000:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0885500Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x0885500Cu) goto L_0885500C;
    return;
L_0885500C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[17] = (0u | 400u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    goto L_0885501C;
L_0885501C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(540)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_088550AC;
      }
      goto L_08855030;
    }
L_08855030:
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    ctx.gpr[19] = (2230u << 16u);
    goto L_08855038;
L_08855038:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855098;
      }
      goto L_08855044;
    }
L_08855044:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08855098;
      }
      goto L_08855050;
    }
L_08855050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885507C;
      }
      goto L_08855068;
    }
L_08855068:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08855074u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08855074u) goto L_08855074;
    return;
L_08855074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855088;
      }
      goto L_0885507C;
    }
L_0885507C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08855088u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08855088u) goto L_08855088;
    return;
L_08855088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(200));
    goto L_08855098;
L_08855098:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(540)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08855038;
      }
      goto L_088550AC;
    }
L_088550AC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088550F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (16153u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (ctx.gpr[7] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08855168;
      }
      goto L_08855148;
    }
L_08855148:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0885515Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 878u, 0x0884FE74u>(ctx, &aot_mem) && ctx.pc == 0x0885515Cu) goto L_0885515C;
    return;
L_0885515C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    goto L_08855168;
L_08855168:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855248;
      }
      goto L_08855174;
    }
L_08855174:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088551AC;
      }
      goto L_08855194;
    }
L_08855194:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088551AC;
      }
      goto L_088551A4;
    }
L_088551A4:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_088551B8;
      }
      goto L_088551AC;
    }
L_088551AC:
    ctx.gpr[31] = (0x088551B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x088551B4u) goto L_088551B4;
    return;
L_088551B4:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_088551B8;
L_088551B8:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (15502u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 64012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.gpr[4] = (48665u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08855248;
L_08855248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855264;
      }
      goto L_08855254;
    }
L_08855254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08855280;
      }
      goto L_08855264;
    }
L_08855264:
    ctx.gpr[31] = (0x0885526Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0885526Cu) goto L_0885526C;
    return;
L_0885526C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08855288;
      }
      goto L_08855278;
    }
L_08855278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885597C;
      }
      goto L_08855280;
    }
L_08855280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08855A34;
      }
      goto L_08855288;
    }
L_08855288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_088552C8;
      }
      goto L_08855294;
    }
L_08855294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088552C0;
      }
      goto L_088552A0;
    }
L_088552A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088552C0;
      }
      goto L_088552B0;
    }
L_088552B0:
    ctx.gpr[31] = (0x088552B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 191u, 0x0885103Cu>(ctx, &aot_mem) && ctx.pc == 0x088552B8u) goto L_088552B8;
    return;
L_088552B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088552C8;
      }
      goto L_088552C0;
    }
L_088552C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08855A34;
      }
      goto L_088552C8;
    }
L_088552C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(25) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855654;
      }
      goto L_088552DC;
    }
L_088552DC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-5024)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088552F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08855304u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 125u, 0x0885CC58u>(ctx, &aot_mem) && ctx.pc == 0x08855304u) goto L_08855304;
    return;
L_08855304:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08855660;
      }
      goto L_08855310;
    }
L_08855310:
    ctx.gpr[31] = (0x08855318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08855318u) goto L_08855318;
    return;
L_08855318:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08855334;
      }
      goto L_08855320;
    }
L_08855320:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0885532Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 173u, 0x0885D3A0u>(ctx, &aot_mem) && ctx.pc == 0x0885532Cu) goto L_0885532C;
    return;
L_0885532C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08855348;
      }
      goto L_08855334;
    }
L_08855334:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08855344u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08857EF8;
L_08855344:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08855348;
L_08855348:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855660;
      }
      goto L_08855350;
    }
L_08855350:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08855378;
      }
      goto L_08855368;
    }
L_08855368:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088553A0;
      }
      goto L_08855378;
    }
L_08855378:
    ctx.gpr[31] = (0x08855380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08855380u) goto L_08855380;
    return;
L_08855380:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088553A0;
      }
      goto L_08855388;
    }
L_08855388:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08855394u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 218u, 0x0885D928u>(ctx, &aot_mem) && ctx.pc == 0x08855394u) goto L_08855394;
    return;
L_08855394:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088553B8;
      }
      goto L_088553A0;
    }
L_088553A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088553B0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08857EF8;
L_088553B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_088553B8;
L_088553B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855660;
      }
      goto L_088553C0;
    }
L_088553C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08855470;
      }
      goto L_088553D4;
    }
L_088553D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855470;
      }
      goto L_088553E0;
    }
L_088553E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08855448;
      }
      goto L_08855438;
    }
L_08855438:
    ctx.gpr[31] = (0x08855440u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08855440u) goto L_08855440;
    return;
L_08855440:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855464;
      }
      goto L_08855448;
    }
L_08855448:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0885545Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 485u, 0x0885ACA8u>(ctx, &aot_mem) && ctx.pc == 0x0885545Cu) goto L_0885545C;
    return;
L_0885545C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08855468;
      }
      goto L_08855464;
    }
L_08855464:
    ctx.gpr[18] = (0u | 0u);
    goto L_08855468;
L_08855468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855488;
      }
      goto L_08855470;
    }
L_08855470:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08855484u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 485u, 0x0885ACA8u>(ctx, &aot_mem) && ctx.pc == 0x08855484u) goto L_08855484;
    return;
L_08855484:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08855488;
L_08855488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855660;
      }
      goto L_08855490;
    }
L_08855490:
    ctx.gpr[31] = (0x08855498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08855498u) goto L_08855498;
    return;
L_08855498:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088554CC;
      }
      goto L_088554A0;
    }
L_088554A0:
    ctx.gpr[4] = (16853u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 21845u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2960)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088554C4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 485u, 0x0885ACA8u>(ctx, &aot_mem) && ctx.pc == 0x088554C4u) goto L_088554C4;
    return;
L_088554C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088555B8;
      }
      goto L_088554CC;
    }
L_088554CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08855598;
      }
      goto L_088554E0;
    }
L_088554E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855598;
      }
      goto L_088554EC;
    }
L_088554EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0885556C;
      }
      goto L_08855568;
    }
L_08855568:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0885556C;
L_0885556C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08855580;
      }
      goto L_0885557C;
    }
L_0885557C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08855580;
L_08855580:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08855590u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 485u, 0x0885ACA8u>(ctx, &aot_mem) && ctx.pc == 0x08855590u) goto L_08855590;
    return;
L_08855590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088555B8;
      }
      goto L_08855598;
    }
L_08855598:
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088555B4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 485u, 0x0885ACA8u>(ctx, &aot_mem) && ctx.pc == 0x088555B4u) goto L_088555B4;
    return;
L_088555B4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088555B8;
L_088555B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08855608;
      }
      goto L_088555C8;
    }
L_088555C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088555DCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x088555DCu) goto L_088555DC;
    return;
L_088555DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088555E8u);
    ctx.gpr[5] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x088555E8u) goto L_088555E8;
    return;
L_088555E8:
    ctx.gpr[4] = (ctx.gpr[2] << 5u);
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1432), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08855608u);
    ctx.gpr[5] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x08855608u) goto L_08855608;
    return;
L_08855608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855660;
      }
      goto L_08855610;
    }
L_08855610:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08855620u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 219u, 0x088512E4u>(ctx, &aot_mem) && ctx.pc == 0x08855620u) goto L_08855620;
    return;
L_08855620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08855660;
      }
      goto L_08855628;
    }
L_08855628:
    ctx.gpr[31] = (0x08855630u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 636u, 0x088C3EFCu>(ctx, &aot_mem) && ctx.pc == 0x08855630u) goto L_08855630;
    return;
L_08855630:
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08855660;
      }
      goto L_08855640;
    }
L_08855640:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0885564Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 254u, 0x088516F8u>(ctx, &aot_mem) && ctx.pc == 0x0885564Cu) goto L_0885564C;
    return;
L_0885564C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08855660;
      }
      goto L_08855654;
    }
L_08855654:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x08855660u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5188));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08855660u) goto L_08855660;
    return;
L_08855660:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855A0C;
      }
      goto L_08855668;
    }
L_08855668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08855710;
      }
      goto L_08855684;
    }
L_08855684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088556B8;
      }
      goto L_08855694;
    }
L_08855694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x088556ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088556ACu) goto L_088556AC;
    return;
L_088556AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088556B8;
      }
      goto L_088556B4;
    }
L_088556B4:
    ctx.gpr[20] = (0u | 1u);
    goto L_088556B8;
L_088556B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 55u);
    ctx.gpr[31] = (0x088556D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088556D0u) goto L_088556D0;
    return;
L_088556D0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855710;
      }
      goto L_088556D8;
    }
L_088556D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855710;
      }
      goto L_088556E4;
    }
L_088556E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855710;
      }
      goto L_08855704;
    }
L_08855704:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08855710u);
    ctx.gpr[5] = (0u | 116u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08855710u) goto L_08855710;
    return;
L_08855710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(24) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855778;
      }
      goto L_08855724;
    }
L_08855724:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4920)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885573C:
    ctx.gpr[31] = (0x08855744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08855744u) goto L_08855744;
    return;
L_08855744:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0885575C;
      }
      goto L_0885574C;
    }
L_0885574C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7576)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7576), ctx.gpr[5]);
    goto L_0885575C;
L_0885575C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855778;
      }
      goto L_08855764;
    }
L_08855764:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7560)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7560), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08855778;
      }
      goto L_08855778;
    }
L_08855778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08855790;
      }
      goto L_08855784;
    }
L_08855784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08855790;
L_08855790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08855808;
      }
      goto L_0885579C;
    }
L_0885579C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 25000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088557B4;
      }
      goto L_088557AC;
    }
L_088557AC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855808;
      }
      goto L_088557B4;
    }
L_088557B4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088557FC;
      }
      goto L_088557C4;
    }
L_088557C4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088557FC;
      }
      goto L_088557CC;
    }
L_088557CC:
    ctx.gpr[31] = (0x088557D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 177u, 0x08844EE8u>(ctx, &aot_mem) && ctx.pc == 0x088557D4u) goto L_088557D4;
    return;
L_088557D4:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088557FC;
      }
      goto L_088557EC;
    }
L_088557EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08855808;
      }
      goto L_088557FC;
    }
L_088557FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08855808;
L_08855808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885583C;
      }
      goto L_08855814;
    }
L_08855814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885583C;
      }
      goto L_08855824;
    }
L_08855824:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 58u);
    ctx.gpr[31] = (0x0885583Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x0885583Cu) goto L_0885583C;
    return;
L_0885583C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08855948;
      }
      goto L_08855850;
    }
L_08855850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088558B0;
      }
      goto L_0885585C;
    }
L_0885585C:
    ctx.gpr[4] = (2232u << 16u);
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
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088558A8;
      }
      goto L_08855894;
    }
L_08855894:
    ctx.gpr[31] = (0x0885589Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0885589Cu) goto L_0885589C;
    return;
L_0885589C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088558A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 632u, 0x08A96B44u>(ctx, &aot_mem) && ctx.pc == 0x088558A8u) goto L_088558A8;
    return;
L_088558A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08855A34;
      }
      goto L_088558B0;
    }
L_088558B0:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088558C8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088558C8u) goto L_088558C8;
    return;
L_088558C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088558E0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088558E0u) goto L_088558E0;
    return;
L_088558E0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08855940;
      }
      goto L_088558E8;
    }
L_088558E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(357)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855940;
      }
      goto L_08855918;
    }
L_08855918:
    ctx.gpr[31] = (0x08855920u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08855920u) goto L_08855920;
    return;
L_08855920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08855940;
L_08855940:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08855A34;
      }
      goto L_08855948;
    }
L_08855948:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_0885596C;
      }
      goto L_08855950;
    }
L_08855950:
    ctx.gpr[31] = (0x08855958u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08855958u) goto L_08855958;
    return;
L_08855958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08855974;
      }
      goto L_0885596C;
    }
L_0885596C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08855974;
L_08855974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855A0C;
      }
      goto L_0885597C;
    }
L_0885597C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088559FC;
      }
      goto L_0885598C;
    }
L_0885598C:
    ctx.gpr[31] = (0x08855994u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08855994u) goto L_08855994;
    return;
L_08855994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088559FC;
      }
      goto L_088559C8;
    }
L_088559C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088559FC;
      }
      goto L_088559D8;
    }
L_088559D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 188u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088559FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088559FCu) goto L_088559FC;
    return;
L_088559FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08855A0Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08855E88;
L_08855A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855A28;
      }
      goto L_08855A18;
    }
L_08855A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08855A30;
      }
      goto L_08855A28;
    }
L_08855A28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08855A34;
      }
      goto L_08855A30;
    }
L_08855A30:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08855A34;
L_08855A34:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855A5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08855A90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08855A90u) goto L_08855A90;
    return;
L_08855A90:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08855AB8;
      }
      goto L_08855AA0;
    }
L_08855AA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08855E64;
      }
      goto L_08855AA8;
    }
L_08855AA8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08855AD4;
      }
      goto L_08855AB0;
    }
L_08855AB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855BA8;
      }
      goto L_08855AB8;
    }
L_08855AB8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08855E64;
      }
      goto L_08855AC4;
    }
L_08855AC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855E64;
      }
      goto L_08855ACC;
    }
L_08855ACC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08855E64;
      }
      goto L_08855AD4;
    }
L_08855AD4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
      if (branch_taken) {
          goto L_08855AFC;
      }
      goto L_08855AE8;
    }
L_08855AE8:
    ctx.gpr[6] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 19u);
      if (branch_taken) {
          goto L_08855AFC;
      }
      goto L_08855AF4;
    }
L_08855AF4:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08855B5C;
      }
      goto L_08855AFC;
    }
L_08855AFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08855B5C;
      }
      goto L_08855B04;
    }
L_08855B04:
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-29636));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-7852)));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08855B5C;
      }
      goto L_08855B30;
    }
L_08855B30:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08855B5C;
      }
      goto L_08855B38;
    }
L_08855B38:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (0u | 56u);
    ctx.gpr[31] = (0x08855B54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08855B54u) goto L_08855B54;
    return;
L_08855B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    goto L_08855B5C;
L_08855B5C:
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855BA0;
      }
      goto L_08855B68;
    }
L_08855B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855B9C;
      }
      goto L_08855B74;
    }
L_08855B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08855B9C;
      }
      goto L_08855B80;
    }
L_08855B80:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x08855B94u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 239u, 0x08A82370u>(ctx, &aot_mem) && ctx.pc == 0x08855B94u) goto L_08855B94;
    return;
L_08855B94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855BA0;
      }
      goto L_08855B9C;
    }
L_08855B9C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08855BA0;
L_08855BA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855E64;
      }
      goto L_08855BA8;
    }
L_08855BA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08855E3C;
      }
      goto L_08855BB0;
    }
L_08855BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855E3C;
      }
      goto L_08855BC0;
    }
L_08855BC0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08855C84;
      }
      goto L_08855BC8;
    }
L_08855BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08855C84;
      }
      goto L_08855BE0;
    }
L_08855BE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(357)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855C20;
      }
      goto L_08855C10;
    }
L_08855C10:
    ctx.gpr[31] = (0x08855C18u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08855C18u) goto L_08855C18;
    return;
L_08855C18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08855C84;
      }
      goto L_08855C20;
    }
L_08855C20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] & 32768u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (0u | 203u);
        goto L_08855C40;
    }
    goto L_08855C40;
L_08855C40:
    ctx.gpr[31] = (0x08855C48u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08855C48u) goto L_08855C48;
    return;
L_08855C48:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08855C84;
      }
      goto L_08855C54;
    }
L_08855C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[4] & 32768u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 204u);
        goto L_08855C74;
    }
    goto L_08855C74;
L_08855C74:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08855C80u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08855C80u) goto L_08855C80;
    return;
L_08855C80:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08855C84;
L_08855C84:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08855DE0;
    }
    goto L_08855C8C;
L_08855C8C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08855DDC;
      }
      goto L_08855C9C;
    }
L_08855C9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08855DE0;
    }
    goto L_08855CB8;
L_08855CB8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-13));
    ctx.gpr[6] = (16192u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08855D38;
      }
      goto L_08855CD8;
    }
L_08855CD8:
    ctx.gpr[19] = (ctx.gpr[19] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[19]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4824)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855CF0:
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(5276)));
      if (branch_taken) {
          goto L_08855D38;
      }
      goto L_08855CFC;
    }
L_08855CFC:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5276));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08855D38;
      }
      goto L_08855D0C;
    }
L_08855D0C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5276));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08855D38;
      }
      goto L_08855D1C;
    }
L_08855D1C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5276));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08855D38;
      }
      goto L_08855D2C;
    }
L_08855D2C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5276));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_08855D38;
L_08855D38:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08855D90;
      }
      goto L_08855D50;
    }
L_08855D50:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08855D90;
      }
      goto L_08855D70;
    }
L_08855D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 56u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08855D90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08855D90u) goto L_08855D90;
    return;
L_08855D90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855DD4;
      }
      goto L_08855DA4;
    }
L_08855DA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08855DD4;
      }
      goto L_08855DD0;
    }
L_08855DD0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08855DD4;
L_08855DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855E3C;
      }
      goto L_08855DDC;
    }
L_08855DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08855DE0;
L_08855DE0:
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-29636));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7852)));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855E3C;
      }
      goto L_08855E10;
    }
L_08855E10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08855E3C;
      }
      goto L_08855E20;
    }
L_08855E20:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x08855E3Cu);
    ctx.gpr[6] = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08855E3Cu) goto L_08855E3C;
    return;
L_08855E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855E5C;
      }
      goto L_08855E50;
    }
L_08855E50:
    ctx.gpr[31] = (0x08855E58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 191u, 0x0885103Cu>(ctx, &aot_mem) && ctx.pc == 0x08855E58u) goto L_08855E58;
    return;
L_08855E58:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08855E5C;
L_08855E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855E64;
      }
      goto L_08855E64;
    }
L_08855E64:
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
L_08855E88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[30]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1020), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1024), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1028), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[31]);
    ctx.gpr[31] = (0x08855ED8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08855ED8u) goto L_08855ED8;
    return;
L_08855ED8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(1002), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1000), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] & 8192u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08855F20;
      }
      goto L_08855F08;
    }
L_08855F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_08855F20;
L_08855F20:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855F7C;
      }
      goto L_08855F28;
    }
L_08855F28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[5] & 8192u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 202u);
      if (branch_taken) {
          goto L_08855F64;
      }
      goto L_08855F44;
    }
L_08855F44:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (8u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 205u);
        goto L_08855F64;
    }
    goto L_08855F64;
L_08855F64:
    ctx.gpr[31] = (0x08855F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08855F6Cu) goto L_08855F6C;
    return;
L_08855F6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08855F7C;
      }
      goto L_08855F74;
    }
L_08855F74:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1000), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08855F7C;
L_08855F7C:
    ctx.gpr[31] = (0x08855F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08855F84u) goto L_08855F84;
    return;
L_08855F84:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08856058;
      }
      goto L_08855F8C;
    }
L_08855F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885600C;
      }
      goto L_08855F9C;
    }
L_08855F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885600C;
      }
      goto L_08855FAC;
    }
L_08855FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885600C;
      }
      goto L_08855FBC;
    }
L_08855FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885600C;
      }
      goto L_08855FCC;
    }
L_08855FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885600C;
      }
      goto L_08855FDC;
    }
L_08855FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885600C;
      }
      goto L_08855FEC;
    }
L_08855FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885600C;
      }
      goto L_08855FFC;
    }
L_08855FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856058;
      }
      goto L_0885600C;
    }
L_0885600C:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08856020u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 189u, 0x08809F14u>(ctx, &aot_mem) && ctx.pc == 0x08856020u) goto L_08856020;
    return;
L_08856020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856058;
      }
      goto L_08856030;
    }
L_08856030:
    ctx.gpr[31] = (0x08856038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08856038u) goto L_08856038;
    return;
L_08856038:
    ctx.gpr[31] = (0x08856040u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08856040u) goto L_08856040;
    return;
L_08856040:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08856058u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x08856058u) goto L_08856058;
    return;
L_08856058:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(996), ctx.gpr[16]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08856068u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(992), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08856068u) goto L_08856068;
    return;
L_08856068:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08856090;
      }
      goto L_08856070;
    }
L_08856070:
    ctx.gpr[31] = (0x08856078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08856078u) goto L_08856078;
    return;
L_08856078:
    ctx.gpr[31] = (0x08856080u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 322u, 0x08945574u>(ctx, &aot_mem) && ctx.pc == 0x08856080u) goto L_08856080;
    return;
L_08856080:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856090;
      }
      goto L_08856088;
    }
L_08856088:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(992), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08856090;
L_08856090:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[30]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(986), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088574C0;
      }
      goto L_088560B0;
    }
L_088560B0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(986)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
      if (branch_taken) {
          goto L_088560E4;
      }
      goto L_088560D0;
    }
L_088560D0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088560FC;
      }
      goto L_088560E4;
    }
L_088560E4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1872)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    goto L_088560FC;
L_088560FC:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_0885610C;
    }
    goto L_08856104;
L_08856104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
      if (branch_taken) {
          goto L_08856138;
      }
      goto L_0885610C;
    }
L_0885610C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08856134;
    }
    goto L_08856114;
L_08856114:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    ctx.gpr[31] = (0x08856124u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08856124u) goto L_08856124;
    return;
L_08856124:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08856134;
L_08856134:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(182)));
    goto L_08856138;
L_08856138:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856184;
      }
      goto L_08856140;
    }
L_08856140:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1376)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(628)));
        goto L_0885615C;
    }
    goto L_0885614C;
L_0885614C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08856164;
      }
      goto L_08856158;
    }
L_08856158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(628)));
    goto L_0885615C;
L_0885615C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08856184;
      }
      goto L_08856164;
    }
L_08856164:
    ctx.gpr[31] = (0x0885616Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0885616Cu) goto L_0885616C;
    return;
L_0885616C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856184;
      }
      goto L_0885617C;
    }
L_0885617C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08857498;
      }
      goto L_08856184;
    }
L_08856184:
    ctx.gpr[31] = (0x0885618Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 837u, 0x089A380Cu>(ctx, &aot_mem) && ctx.pc == 0x0885618Cu) goto L_0885618C;
    return;
L_0885618C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088561B4;
      }
      goto L_08856194;
    }
L_08856194:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088561B4;
      }
      goto L_0885619C;
    }
L_0885619C:
    ctx.gpr[31] = (0x088561A4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 56u, 0x08888654u>(ctx, &aot_mem) && ctx.pc == 0x088561A4u) goto L_088561A4;
    return;
L_088561A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088561B4;
      }
      goto L_088561AC;
    }
L_088561AC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08857498;
      }
      goto L_088561B4;
    }
L_088561B4:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_088561C4;
    }
    goto L_088561BC;
L_088561BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_088561F0;
      }
      goto L_088561C4;
    }
L_088561C4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_088561EC;
    }
    goto L_088561CC;
L_088561CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(625));
    ctx.gpr[31] = (0x088561DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088561DCu) goto L_088561DC;
    return;
L_088561DC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(625)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_088561EC;
L_088561EC:
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    goto L_088561F0;
L_088561F0:
    ctx.gpr[4] = (0u | 50u);
    if (ctx.gpr[20] != ctx.gpr[4]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
        goto L_0885623C;
    }
    goto L_088561FC;
L_088561FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856234;
      }
      goto L_08856208;
    }
L_08856208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856234;
      }
      goto L_08856218;
    }
L_08856218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
        goto L_0885623C;
    }
    goto L_08856234;
L_08856234:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08857498;
      }
      goto L_0885623C;
    }
L_0885623C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08856288;
      }
      goto L_08856274;
    }
L_08856274:
    ctx.gpr[4] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 50u);
      if (branch_taken) {
          goto L_08856288;
      }
      goto L_08856280;
    }
L_08856280:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08857498;
      }
      goto L_08856288;
    }
L_08856288:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08857498;
      }
      goto L_088562C8;
    }
L_088562C8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21204)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08856330;
      }
      goto L_088562E0;
    }
L_088562E0:
    ctx.gpr[6] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08856308;
      }
      goto L_088562EC;
    }
L_088562EC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856330;
      }
      goto L_088562F4;
    }
L_088562F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[7] = (4096u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08856330;
      }
      goto L_08856308;
    }
L_08856308:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856370;
      }
      goto L_08856310;
    }
L_08856310:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[7] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08856330;
      }
      goto L_08856320;
    }
L_08856320:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[7] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08856370;
      }
      goto L_08856330;
    }
L_08856330:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0885635C;
      }
      goto L_08856348;
    }
L_08856348:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0885635C;
L_0885635C:
    ctx.gpr[31] = (0x08856364u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 84u, 0x0899CB80u>(ctx, &aot_mem) && ctx.pc == 0x08856364u) goto L_08856364;
    return;
L_08856364:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0885638C;
      }
      goto L_08856370;
    }
L_08856370:
    ctx.gpr[6] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 55u);
      if (branch_taken) {
          goto L_08856384;
      }
      goto L_0885637C;
    }
L_0885637C:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0885638C;
      }
      goto L_08856384;
    }
L_08856384:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4368));
    goto L_0885638C;
L_0885638C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088564BC;
      }
      goto L_088563A0;
    }
L_088563A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088563F8;
      }
      goto L_088563A8;
    }
L_088563A8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[8] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885645C;
      }
      goto L_088563F8;
    }
L_088563F8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[8] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0885645C;
L_0885645C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[8] = (ctx.gpr[6] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088564A4;
      }
      goto L_0885649C;
    }
L_0885649C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_088564BC;
      }
      goto L_088564A4;
    }
L_088564A4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088563A0;
      }
      goto L_088564BC;
    }
L_088564BC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088564D4;
      }
      goto L_088564C4;
    }
L_088564C4:
    ctx.gpr[31] = (0x088564CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088564CCu) goto L_088564CC;
    return;
L_088564CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 43u);
      if (branch_taken) {
          goto L_088564F0;
      }
      goto L_088564D4;
    }
L_088564D4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088564F8;
      }
      goto L_088564DC;
    }
L_088564DC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088564F8;
      }
      goto L_088564EC;
    }
L_088564EC:
    ctx.gpr[4] = (0u | 43u);
    goto L_088564F0;
L_088564F0:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08857498;
      }
      goto L_088564F8;
    }
L_088564F8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[30]);
      if (branch_taken) {
          goto L_08857498;
      }
      goto L_08856500;
    }
L_08856500:
    if (ctx.gpr[16] == 0u) {
    ctx.fpr[20] = std::bit_cast<float>(0u);
        goto L_08856510;
    }
    goto L_08856508;
L_08856508:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
      if (branch_taken) {
          goto L_08856510;
      }
      goto L_08856510;
    }
L_08856510:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[30]);
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_08856590;
      }
      goto L_08856580;
    }
L_08856580:
    ctx.gpr[31] = (0x08856588u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 338u, 0x0899E180u>(ctx, &aot_mem) && ctx.pc == 0x08856588u) goto L_08856588;
    return;
L_08856588:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088565CC;
      }
      goto L_08856590;
    }
L_08856590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_088565BC;
    }
    goto L_0885659C;
L_0885659C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.gpr[31] = (0x088565ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088565ACu) goto L_088565AC;
    return;
L_088565AC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_088565BC;
L_088565BC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x088565C8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(184)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 326u, 0x0899E0A0u>(ctx, &aot_mem) && ctx.pc == 0x088565C8u) goto L_088565C8;
    return;
L_088565C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088565CC;
L_088565CC:
    ctx.gpr[21] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856640;
      }
      goto L_088565E0;
    }
L_088565E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856640;
      }
      goto L_088565F0;
    }
L_088565F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856640;
      }
      goto L_08856600;
    }
L_08856600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856640;
      }
      goto L_08856610;
    }
L_08856610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856640;
      }
      goto L_08856620;
    }
L_08856620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856640;
      }
      goto L_08856630;
    }
L_08856630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856648;
      }
      goto L_08856640;
    }
L_08856640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_0885664C;
      }
      goto L_08856648;
    }
L_08856648:
    ctx.gpr[30] = (0u | 0u);
    goto L_0885664C;
L_0885664C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(296)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08856668;
      }
      goto L_08856664;
    }
L_08856664:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(300), ctx.gpr[16]);
    goto L_08856668;
L_08856668:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(984), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(1002), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0885679C;
      }
      goto L_08856678;
    }
L_08856678:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856700;
      }
      goto L_08856684;
    }
L_08856684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856700;
      }
      goto L_08856690;
    }
L_08856690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856700;
      }
      goto L_088566A4;
    }
L_088566A4:
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[21] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088566C0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 77u, 0x08A407CCu>(ctx, &aot_mem) && ctx.pc == 0x088566C0u) goto L_088566C0;
    return;
L_088566C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088566E0;
      }
      goto L_088566CC;
    }
L_088566CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x088566D8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 319u, 0x0889942Cu>(ctx, &aot_mem) && ctx.pc == 0x088566D8u) goto L_088566D8;
    return;
L_088566D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088566F8;
      }
      goto L_088566E0;
    }
L_088566E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088566F8;
      }
      goto L_088566EC;
    }
L_088566EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (0x088566F8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 319u, 0x0889942Cu>(ctx, &aot_mem) && ctx.pc == 0x088566F8u) goto L_088566F8;
    return;
L_088566F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857498;
      }
      goto L_08856700;
    }
L_08856700:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856734;
      }
      goto L_08856708;
    }
L_08856708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856734;
      }
      goto L_08856718;
    }
L_08856718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856734;
      }
      goto L_08856728;
    }
L_08856728:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08856734u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 319u, 0x0889942Cu>(ctx, &aot_mem) && ctx.pc == 0x08856734u) goto L_08856734;
    return;
L_08856734:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08856780;
      }
      goto L_0885673C;
    }
L_0885673C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[6] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0885677C;
      }
      goto L_0885674C;
    }
L_0885674C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0885677C;
      }
      goto L_0885675C;
    }
L_0885675C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0885677C;
      }
      goto L_0885676C;
    }
L_0885676C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08856780;
      }
      goto L_0885677C;
    }
L_0885677C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08856780;
L_08856780:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(984), static_cast<std::uint16_t>(ctx.gpr[21]));
    ctx.gpr[6] = (ctx.gpr[21] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0885679Cu);
    ctx.gpr[8] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 674u, 0x088DAF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0885679Cu) goto L_0885679C;
    return;
L_0885679C:
    ctx.gpr[4] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08856960;
      }
      goto L_088567A8;
    }
L_088567A8:
    ctx.gpr[4] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08856960;
      }
      goto L_088567B4;
    }
L_088567B4:
    ctx.gpr[31] = (0x088567BCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088567BCu) goto L_088567BC;
    return;
L_088567BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088567E0;
      }
      goto L_088567C4;
    }
L_088567C4:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088567E0;
      }
      goto L_088567CC;
    }
L_088567CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088567E0;
      }
      goto L_088567D8;
    }
L_088567D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 100u);
      if (branch_taken) {
          goto L_08856934;
      }
      goto L_088567E0;
    }
L_088567E0:
    ctx.gpr[31] = (0x088567E8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088567E8u) goto L_088567E8;
    return;
L_088567E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856850;
      }
      goto L_088567F0;
    }
L_088567F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2995)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856850;
      }
      goto L_088567FC;
    }
L_088567FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08856830;
      }
      goto L_0885680C;
    }
L_0885680C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[21]);
    goto L_08856814;
L_08856814:
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08856934;
      }
      goto L_08856830;
    }
L_08856830:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_08856848;
    }
    goto L_08856848;
L_08856848:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[21]);
      if (branch_taken) {
          goto L_08856814;
      }
      goto L_08856850;
    }
L_08856850:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856868;
      }
      goto L_08856858;
    }
L_08856858:
    ctx.gpr[31] = (0x08856860u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08856860u) goto L_08856860;
    return;
L_08856860:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08856880;
      }
      goto L_08856868;
    }
L_08856868:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088568DC;
      }
      goto L_08856870;
    }
L_08856870:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088568DC;
      }
      goto L_08856880;
    }
L_08856880:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088568DC;
      }
      goto L_08856888;
    }
L_08856888:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088568BC;
      }
      goto L_08856898;
    }
L_08856898:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[21]);
    goto L_088568A0;
L_088568A0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08856934;
      }
      goto L_088568BC;
    }
L_088568BC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_088568D4;
    }
    goto L_088568D4;
L_088568D4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[21]);
      if (branch_taken) {
          goto L_088568A0;
      }
      goto L_088568DC;
    }
L_088568DC:
    ctx.gpr[31] = (0x088568E4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088568E4u) goto L_088568E4;
    return;
L_088568E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856904;
      }
      goto L_088568EC;
    }
L_088568EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856904;
      }
      goto L_088568FC;
    }
L_088568FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 100u);
      if (branch_taken) {
          goto L_08856934;
      }
      goto L_08856904;
    }
L_08856904:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0885691C;
      }
      goto L_08856914;
    }
L_08856914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08856934;
      }
      goto L_0885691C;
    }
L_0885691C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_08856934;
    }
    goto L_08856934;
L_08856934:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856960;
      }
      goto L_0885693C;
    }
L_0885693C:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(996)));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08856960u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08856960u) goto L_08856960;
    return;
L_08856960:
    ctx.gpr[31] = (0x08856968u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x08856968u) goto L_08856968;
    return;
L_08856968:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856EA0;
      }
      goto L_08856970;
    }
L_08856970:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1004), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088569E4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088569E4u) goto L_088569E4;
    return;
L_088569E4:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08856A0Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08856A0Cu) goto L_08856A0C;
    return;
L_08856A0C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08856A34u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08856A34u) goto L_08856A34;
    return;
L_08856A34:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1004)));
      if (branch_taken) {
          goto L_08856B2C;
      }
      goto L_08856A3C;
    }
L_08856A3C:
    ctx.gpr[4] = (48460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1004), ctx.gpr[21]);
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08856A5Cu);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08856A5Cu) goto L_08856A5C;
    return;
L_08856A5C:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08856A78u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08856A78u) goto L_08856A78;
    return;
L_08856A78:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08856AC4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08856AC4u) goto L_08856AC4;
    return;
L_08856AC4:
    ctx.gpr[31] = (0x08856ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08856ACCu) goto L_08856ACC;
    return;
L_08856ACC:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08856AE8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08856AE8u) goto L_08856AE8;
    return;
L_08856AE8:
    ctx.fpr[14] = ctx.fpr[24] - ctx.fpr[22];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (0u | 6u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[14];
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[31] = (0x08856B28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08856B28u) goto L_08856B28;
    return;
L_08856B28:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1004)));
    goto L_08856B2C;
L_08856B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856D9C;
      }
      goto L_08856B3C;
    }
L_08856B3C:
    ctx.gpr[4] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 55u);
      if (branch_taken) {
          goto L_08856B64;
      }
      goto L_08856B48;
    }
L_08856B48:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08856B80;
      }
      goto L_08856B60;
    }
L_08856B60:
    ctx.gpr[4] = (0u | 55u);
    goto L_08856B64;
L_08856B64:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08856BC0;
      }
      goto L_08856B6C;
    }
L_08856B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17));
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1012), ctx.gpr[20]);
        goto L_08856BC4;
    }
    goto L_08856B80;
L_08856B80:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[2] = (15948u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (0u | 74u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08856BC0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08856BC0u) goto L_08856BC0;
    return;
L_08856BC0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1012), ctx.gpr[20]);
    goto L_08856BC4;
L_08856BC4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1008), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1004), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08856C30u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08856C30u) goto L_08856C30;
    return;
L_08856C30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08856C74u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08856C74u) goto L_08856C74;
    return;
L_08856C74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08856CC4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08856CC4u) goto L_08856CC4;
    return;
L_08856CC4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08856D04u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08856D04u) goto L_08856D04;
    return;
L_08856D04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(996)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1004)));
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1008)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1012)));
      if (branch_taken) {
          goto L_08856D90;
      }
      goto L_08856D2C;
    }
L_08856D2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08856D90;
      }
      goto L_08856D38;
    }
L_08856D38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08856D54u);
    ctx.gpr[6] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08856D54u) goto L_08856D54;
    return;
L_08856D54:
    ctx.gpr[31] = (0x08856D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08856D5Cu) goto L_08856D5C;
    return;
L_08856D5C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5332)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5328)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08856D74u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08856D74u) goto L_08856D74;
    return;
L_08856D74:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08856D9C;
      }
      goto L_08856D90;
    }
L_08856D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08856D9C;
L_08856D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08856EA0;
      }
      goto L_08856DAC;
    }
L_08856DAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1004), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08856E1Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08856E1Cu) goto L_08856E1C;
    return;
L_08856E1C:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08856E4Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08856E4Cu) goto L_08856E4C;
    return;
L_08856E4C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08856E74u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08856E74u) goto L_08856E74;
    return;
L_08856E74:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08856E9Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08856E9Cu) goto L_08856E9C;
    return;
L_08856E9C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1004)));
    goto L_08856EA0;
L_08856EA0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088571C0;
      }
      goto L_08856EA8;
    }
L_08856EA8:
    ctx.gpr[4] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 54u);
      if (branch_taken) {
          goto L_088570A4;
      }
      goto L_08856EB4;
    }
L_08856EB4:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 55u);
      if (branch_taken) {
          goto L_088570A4;
      }
      goto L_08856EBC;
    }
L_08856EBC:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088570A4;
      }
      goto L_08856EC4;
    }
L_08856EC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088571C0;
      }
      goto L_08856EDC;
    }
L_08856EDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16880u << 16u);
      if (branch_taken) {
          goto L_08856F0C;
      }
      goto L_08856EF8;
    }
L_08856EF8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
        goto L_08856F38;
    }
    goto L_08856F0C;
L_08856F0C:
    ctx.gpr[31] = (0x08856F14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08856F14u) goto L_08856F14;
    return;
L_08856F14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088571C0;
      }
      goto L_08856F1C;
    }
L_08856F1C:
    if (ctx.gpr[30] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
        goto L_08856F38;
    }
    goto L_08856F24;
L_08856F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088571C0;
      }
      goto L_08856F34;
    }
L_08856F34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    goto L_08856F38;
L_08856F38:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08856F68;
      }
      goto L_08856F5C;
    }
L_08856F5C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08856FA4;
      }
      goto L_08856F68;
    }
L_08856F68:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08856FA4;
L_08856FA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
        goto L_0885700C;
    }
    goto L_08856FD0;
L_08856FD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08857004u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08857004u) goto L_08857004;
    return;
L_08857004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885703C;
      }
      goto L_0885700C;
    }
L_0885700C:
    ctx.gpr[4] = (49312u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0885703Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x0885703Cu) goto L_0885703C;
    return;
L_0885703C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857074;
      }
      goto L_08857044;
    }
L_08857044:
    ctx.gpr[31] = (0x0885704Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0885704Cu) goto L_0885704C;
    return;
L_0885704C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857074;
      }
      goto L_08857054;
    }
L_08857054:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25));
    ctx.gpr[5] = (0u | 3000u);
    ctx.gpr[31] = (0x0885706Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x0885706Cu) goto L_0885706C;
    return;
L_0885706C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885708C;
      }
      goto L_08857074;
    }
L_08857074:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25));
    ctx.gpr[5] = (0u | 1500u);
    ctx.gpr[31] = (0x0885708Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x0885708Cu) goto L_0885708C;
    return;
L_0885708C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1328), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1328));
    ctx.gpr[31] = (0x0885709Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0885709Cu) goto L_0885709C;
    return;
L_0885709C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088571C0;
      }
      goto L_088570A4;
    }
L_088570A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088571C0;
      }
      goto L_088570B4;
    }
L_088570B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088571C0;
      }
      goto L_088570C0;
    }
L_088570C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_088570F4;
      }
      goto L_088570E8;
    }
L_088570E8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08857130;
      }
      goto L_088570F4;
    }
L_088570F4:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08857130;
L_08857130:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
        goto L_08857190;
    }
    goto L_0885715C;
L_0885715C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08857188u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x08857188u) goto L_08857188;
    return;
L_08857188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088571C0;
      }
      goto L_08857190;
    }
L_08857190:
    ctx.gpr[4] = (49312u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088571C0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x088571C0u) goto L_088571C0;
    return;
L_088571C0:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088572AC;
      }
      goto L_088571CC;
    }
L_088571CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885720C;
      }
      goto L_088571DC;
    }
L_088571DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885720C;
      }
      goto L_088571EC;
    }
L_088571EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885720C;
      }
      goto L_088571FC;
    }
L_088571FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885725C;
      }
      goto L_0885720C;
    }
L_0885720C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885723C;
      }
      goto L_0885721C;
    }
L_0885721C:
    ctx.gpr[4] = (0u | 18u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08857234u);
    ctx.gpr[8] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x08857234u) goto L_08857234;
    return;
L_08857234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857498;
      }
      goto L_0885723C;
    }
L_0885723C:
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08857254u);
    ctx.gpr[8] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x08857254u) goto L_08857254;
    return;
L_08857254:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857498;
      }
      goto L_0885725C;
    }
L_0885725C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0885728C;
      }
      goto L_0885726C;
    }
L_0885726C:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08857284u);
    ctx.gpr[8] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x08857284u) goto L_08857284;
    return;
L_08857284:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857498;
      }
      goto L_0885728C;
    }
L_0885728C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088572A4u);
    ctx.gpr[8] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x088572A4u) goto L_088572A4;
    return;
L_088572A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857498;
      }
      goto L_088572AC;
    }
L_088572AC:
    ctx.gpr[4] = (0u | 38u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(400), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7120)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(402), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(403));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(415));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[10]);
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[8] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(432), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08857390;
      }
      goto L_0885735C;
    }
L_0885735C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(876), static_cast<std::uint8_t>(0u));
    goto L_08857360;
L_08857360:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08857384;
    }
    goto L_08857374;
L_08857374:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857388;
      }
      goto L_08857384;
    }
L_08857384:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08857388;
L_08857388:
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(876), static_cast<std::uint8_t>(0u));
        goto L_08857360;
    }
    goto L_08857390;
L_08857390:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (2232u << 16u);
        goto L_088573C0;
    }
    goto L_088573A4;
L_088573A4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(877), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088573CC;
      }
      goto L_088573BC;
    }
L_088573BC:
    ctx.gpr[4] = (2232u << 16u);
    goto L_088573C0;
L_088573C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (2232u << 16u);
    goto L_088573CC;
L_088573CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(872), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(872)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(888), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(868), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(888)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(864), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(864)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(868)));
        goto L_08857410;
    }
    goto L_08857408;
L_08857408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08857414;
      }
      goto L_08857410;
    }
L_08857410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08857414;
L_08857414:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(427))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] & 15u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(427), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(434), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(427))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[30] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(431), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(427), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(427))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(427), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[31] = (0x08857498u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08857498u) goto L_08857498;
    return;
L_08857498:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(986)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(986), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088560B0;
      }
      goto L_088574C0;
    }
L_088574C0:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08857500u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x08857500u) goto L_08857500;
    return;
L_08857500:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088577A4;
      }
      goto L_0885750C;
    }
L_0885750C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088577A4;
      }
      goto L_08857528;
    }
L_08857528:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885755C;
      }
      goto L_08857534;
    }
L_08857534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (2224u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08857554u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24108));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08857554u) goto L_08857554;
    return;
L_08857554:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857564;
      }
      goto L_0885755C;
    }
L_0885755C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08857564;
      }
      goto L_08857564;
    }
L_08857564:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088577A4;
      }
      goto L_0885756C;
    }
L_0885756C:
    ctx.gpr[4] = (0u | 38u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(450), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7120)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(452), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(453));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[7]);
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(438))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(439))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(440))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(465), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(466), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(467), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(441))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(442))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(443))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(468), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(469), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(470), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(444))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(445))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(446))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(471), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(472), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(473), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(447))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(448))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(449))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(474), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(475), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(482), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0885762Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x0885762Cu) goto L_0885762C;
    return;
L_0885762C:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0885767C;
      }
      goto L_08857648;
    }
L_08857648:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(912), static_cast<std::uint8_t>(0u));
    goto L_0885764C;
L_0885764C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08857670;
    }
    goto L_08857660;
L_08857660:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857674;
      }
      goto L_08857670;
    }
L_08857670:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08857674;
L_08857674:
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(912), static_cast<std::uint8_t>(0u));
        goto L_0885764C;
    }
    goto L_0885767C;
L_0885767C:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(104)));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (2232u << 16u);
        goto L_088576AC;
    }
    goto L_08857690;
L_08857690:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(913), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088576B8;
      }
      goto L_088576A8;
    }
L_088576A8:
    ctx.gpr[4] = (2232u << 16u);
    goto L_088576AC;
L_088576AC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (2232u << 16u);
    goto L_088576B8;
L_088576B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(908), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(908)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(924), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(904), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(904)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(900), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(904)));
        goto L_088576FC;
    }
    goto L_088576F4;
L_088576F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08857700;
      }
      goto L_088576FC;
    }
L_088576FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08857700;
L_08857700:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(477))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(484), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(477), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(481), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08857734;
      }
      goto L_0885772C;
    }
L_0885772C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0885774C;
      }
      goto L_08857734;
    }
L_08857734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_0885774C;
    }
    goto L_0885774C;
L_0885774C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(477))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(477), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(478), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(477))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4272));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(477), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(486), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(450));
    ctx.gpr[31] = (0x088577A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x088577A4u) goto L_088577A4;
    return;
L_088577A4:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088577DCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x088577DCu) goto L_088577DC;
    return;
L_088577DC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857CD8;
      }
      goto L_088577E8;
    }
L_088577E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857CD8;
      }
      goto L_088577F4;
    }
L_088577F4:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08857800u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08857800u) goto L_08857800;
    return;
L_08857800:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08857868;
      }
      goto L_08857808;
    }
L_08857808:
    ctx.gpr[31] = (0x08857810u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 99u, 0x088A078Cu>(ctx, &aot_mem) && ctx.pc == 0x08857810u) goto L_08857810;
    return;
L_08857810:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857850;
      }
      goto L_08857818;
    }
L_08857818:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (16928u << 16u);
    ctx.gpr[31] = (0x08857834u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 429u, 0x08ACDABCu>(ctx, &aot_mem) && ctx.pc == 0x08857834u) goto L_08857834;
    return;
L_08857834:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08857850;
      }
      goto L_0885783C;
    }
L_0885783C:
    ctx.gpr[31] = (0x08857844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08857844u) goto L_08857844;
    return;
L_08857844:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08857850u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 206u, 0x08944E10u>(ctx, &aot_mem) && ctx.pc == 0x08857850u) goto L_08857850;
    return;
L_08857850:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08857868u);
    ctx.gpr[8] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x08857868u) goto L_08857868;
    return;
L_08857868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
      if (branch_taken) {
          goto L_0885798C;
      }
      goto L_08857878;
    }
L_08857878:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0885798C;
      }
      goto L_08857888;
    }
L_08857888:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), ctx.gpr[22]);
    ctx.gpr[20] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-4272));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088578F8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088578F8u) goto L_088578F8;
    return;
L_088578F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08857974u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08857974u) goto L_08857974;
    return;
L_08857974:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
      if (branch_taken) {
          goto L_08857888;
      }
      goto L_0885798C;
    }
L_0885798C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4272));
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(31)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08857A10;
      }
      goto L_088579A8;
    }
L_088579A8:
    ctx.gpr[31] = (0x088579B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x088579B0u) goto L_088579B0;
    return;
L_088579B0:
    ctx.gpr[5] = (14916u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.gpr[5] = (ctx.gpr[5] | 39846u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088579F0;
      }
      goto L_088579CC;
    }
L_088579CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088579D4;
L_088579D4:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088579E8u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 170u, 0x088214F4u>(ctx, &aot_mem) && ctx.pc == 0x088579E8u) goto L_088579E8;
    return;
L_088579E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857A6C;
      }
      goto L_088579F0;
    }
L_088579F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08857A08;
    }
    goto L_08857A08;
L_08857A08:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088579D4;
      }
      goto L_08857A10;
    }
L_08857A10:
    ctx.gpr[31] = (0x08857A18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x08857A18u) goto L_08857A18;
    return;
L_08857A18:
    ctx.gpr[5] = (15395u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08857A3C;
      }
      goto L_08857A34;
    }
L_08857A34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08857A54;
      }
      goto L_08857A3C;
    }
L_08857A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08857A54;
    }
    goto L_08857A54;
L_08857A54:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08857A6Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 170u, 0x088214F4u>(ctx, &aot_mem) && ctx.pc == 0x08857A6Cu) goto L_08857A6C;
    return;
L_08857A6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(616)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08857A90;
      }
      goto L_08857A80;
    }
L_08857A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(996)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(671), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(664), ctx.gpr[5]);
    goto L_08857A90;
L_08857A90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(296)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08857AAC;
      }
      goto L_08857AA8;
    }
L_08857AA8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(300), ctx.gpr[16]);
    goto L_08857AAC;
L_08857AAC:
    ctx.gpr[31] = (0x08857AB4u);
    ctx.gpr[17] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08857AB4u) goto L_08857AB4;
    return;
L_08857AB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(1002), static_cast<std::uint16_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08857CD8;
      }
      goto L_08857AD4;
    }
L_08857AD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08857CD8;
      }
      goto L_08857AE4;
    }
L_08857AE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(397))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08857B34;
      }
      goto L_08857AF4;
    }
L_08857AF4:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08857B00u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08857B00u) goto L_08857B00;
    return;
L_08857B00:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08857BBC;
      }
      goto L_08857B24;
    }
L_08857B24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08857BBC;
      }
      goto L_08857B34;
    }
L_08857B34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857CD8;
      }
      goto L_08857B40;
    }
L_08857B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08857CD8;
      }
      goto L_08857B54;
    }
L_08857B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08857CD8;
      }
      goto L_08857B68;
    }
L_08857B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08857CD8;
      }
      goto L_08857B7C;
    }
L_08857B7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(397))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08857BB0;
      }
      goto L_08857B8C;
    }
L_08857B8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08857BB0;
L_08857BB0:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08857CD8;
      }
      goto L_08857BBC;
    }
L_08857BBC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[17] = (0u | 200u);
      if (branch_taken) {
          goto L_08857C40;
      }
      goto L_08857BC8;
    }
L_08857BC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08857C40;
      }
      goto L_08857BD8;
    }
L_08857BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857C20;
      }
      goto L_08857BF0;
    }
L_08857BF0:
    ctx.gpr[31] = (0x08857BF8u);
    ctx.gpr[21] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08857BF8u) goto L_08857BF8;
    return;
L_08857BF8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08857C08u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08857C08u) goto L_08857C08;
    return;
L_08857C08:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(596), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1800), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08857C2C;
      }
      goto L_08857C20;
    }
L_08857C20:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08857C2Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08857C2Cu) goto L_08857C2C;
    return;
L_08857C2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(200));
    goto L_08857C40;
L_08857C40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(540)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857CD8;
      }
      goto L_08857C54;
    }
L_08857C54:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857CC4;
      }
      goto L_08857C68;
    }
L_08857C68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08857CC4;
      }
      goto L_08857C78;
    }
L_08857C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857CA4;
      }
      goto L_08857C90;
    }
L_08857C90:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08857C9Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08857C9Cu) goto L_08857C9C;
    return;
L_08857C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857CB0;
      }
      goto L_08857CA4;
    }
L_08857CA4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08857CB0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08857CB0u) goto L_08857CB0;
    return;
L_08857CB0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1772), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(200));
    goto L_08857CC4;
L_08857CC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(540)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857C54;
      }
      goto L_08857CD8;
    }
L_08857CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08857EB4;
      }
      goto L_08857CE8;
    }
L_08857CE8:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08857D20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x08857D20u) goto L_08857D20;
    return;
L_08857D20:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857EB4;
      }
      goto L_08857D2C;
    }
L_08857D2C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857E3C;
      }
      goto L_08857D3C;
    }
L_08857D3C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(-4272));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08857DA8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08857DA8u) goto L_08857DA8;
    return;
L_08857DA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08857E24u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x08857E24u) goto L_08857E24;
    return;
L_08857E24:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857D3C;
      }
      goto L_08857E3C;
    }
L_08857E3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1002))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857E6C;
      }
      goto L_08857E48;
    }
L_08857E48:
    ctx.gpr[4] = (0u | 4u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08857E6C;
      }
      goto L_08857E68;
    }
L_08857E68:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(300), ctx.gpr[23]);
    goto L_08857E6C;
L_08857E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08857EB4;
      }
      goto L_08857E88;
    }
L_08857E88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08857EB4;
      }
      goto L_08857E98;
    }
L_08857E98:
    ctx.gpr[6] = (17224u << 16u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08857EACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 484u, 0x0883F1F4u>(ctx, &aot_mem) && ctx.pc == 0x08857EACu) goto L_08857EAC;
    return;
L_08857EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(424), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08857EB4;
L_08857EB4:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1020)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1024)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857EF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    ctx.gpr[31] = (0x08857F50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08857F50u) goto L_08857F50;
    return;
L_08857F50:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08857FB0;
      }
      goto L_08857F94;
    }
L_08857F94:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08857FB0;
      }
      goto L_08857FA8;
    }
L_08857FA8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08857FBC;
      }
      goto L_08857FB0;
    }
L_08857FB0:
    ctx.gpr[31] = (0x08857FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08857FB8u) goto L_08857FB8;
    return;
L_08857FB8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08857FBC;
L_08857FBC:
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.pc = 0x08858000u; return;
}

void recomp_unit_0020(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0020_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_20(Runtime &runtime) {
    runtime.register_generated_unit(20u, 0x08854000u, 16384u, &recomp_unit_0020, &recomp_unit_0020_entry);
    runtime.register_function(0x08854000u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854028u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854034u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885403Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854048u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854050u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885405Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854064u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854070u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854078u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854084u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885408Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854090u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854098u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854108u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854118u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854124u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885412Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854134u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854144u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885414Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854160u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854178u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885423Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854244u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854254u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854258u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854280u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854294u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088542A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088542E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854350u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854430u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854454u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854460u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854470u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854478u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854480u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885449Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854604u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854614u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854618u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854634u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885464Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854654u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854660u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854670u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854698u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854710u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854738u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854760u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885476Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854788u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854808u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854848u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854850u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854864u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885487Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854884u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854898u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088548CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854904u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854918u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885495Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A00u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AC0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B48u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B60u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C60u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CCCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D40u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E28u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E48u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E60u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854EC0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854ED4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854ED8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854EE4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854EF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F44u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855000u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885500Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885501Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855030u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855038u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855044u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855050u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855068u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855074u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885507Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855088u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855098u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855148u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885515Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855168u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855174u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855194u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855248u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855254u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855264u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885526Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855278u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855280u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855288u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855294u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088552A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088552B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088552B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088552C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088552C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088552DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088552F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855304u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855310u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855318u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855320u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885532Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855334u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855344u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855348u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855350u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855368u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855378u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855380u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855388u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855394u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088553A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088553B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088553B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088553C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088553D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088553E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855438u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855440u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855448u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885545Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855464u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855468u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855470u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855484u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855488u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855490u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855498u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855568u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885556Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885557Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855580u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855590u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855598u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855608u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855610u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855620u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855628u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855630u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855640u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885564Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855654u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855660u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855668u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855684u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855694u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855704u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855710u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855724u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885573Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855744u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885574Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885575Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855764u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855778u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855784u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855790u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885579Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855808u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855814u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855824u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885583Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855850u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885585Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855894u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885589Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855918u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855920u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855940u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855948u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855950u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855958u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885596Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855974u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885597Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885598Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855994u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A28u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855ACCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B80u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855BA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855BA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855BB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855BC0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855BC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855BE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C20u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C40u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C48u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C80u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DA4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DE0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E20u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855ED8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F20u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F28u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F44u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FCCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885600Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856020u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856030u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856038u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856040u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856058u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856068u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856070u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856078u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856080u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856088u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856090u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856104u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885610Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856114u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856124u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856134u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856138u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856140u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885614Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856158u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885615Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856164u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885616Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885617Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856184u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885618Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856194u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885619Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856208u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856218u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856234u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885623Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856274u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856280u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856288u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856308u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856310u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856320u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856330u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856348u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885635Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856364u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856370u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885637Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856384u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885638Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885645Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885649Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856500u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856508u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856510u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856580u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856588u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856590u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885659Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856600u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856610u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856620u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856630u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856640u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856648u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885664Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856664u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856668u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856678u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856684u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856690u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856700u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856708u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856718u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856728u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856734u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885673Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885674Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885675Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885676Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885677Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856780u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885679Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885680Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856814u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856830u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856848u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856850u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856858u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856860u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856868u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856870u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856880u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856888u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856898u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856904u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856914u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885691Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856934u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885693Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856960u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856968u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856970u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088569E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856ACCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B28u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B48u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B60u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B80u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BC0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D04u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856DACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E4Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856EA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856EA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856EB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856EBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856EC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856EDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856EF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FA4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857004u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885700Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885703Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857044u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885704Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857054u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885706Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857074u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885708Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885709Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857130u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885715Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857188u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857190u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571ECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885720Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885721Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857234u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885723Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857254u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885725Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885726Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857284u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885728Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088572A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088572ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885735Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857360u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857374u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857384u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857388u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857390u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857408u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857410u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857414u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857498u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857500u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885750Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857528u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857534u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857554u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885755Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857564u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885756Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885762Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857648u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885764Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857660u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857670u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857674u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885767Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857690u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576ACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857700u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885772Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857734u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885774Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857800u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857808u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857810u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857818u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857834u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885783Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857844u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857850u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857868u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857878u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857888u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088578F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857974u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885798Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A80u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AE4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B00u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B40u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C20u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C40u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CA4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D20u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E48u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FBCu, &recomp_unit_0020, "recomp_unit_0020");
}
} // namespace psprecomp
