#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0110[4094] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0,
    0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0,
    0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0,
    0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0,
    32, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 47, 0, 48, 0, 0, 0, 0, 0, 49,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56,
    0, 57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 64,
    0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0,
    0, 87, 0, 88, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 95,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 98, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0,
    0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 111, 0, 112, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0,
    0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 125, 126, 0, 127, 128, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 0, 0, 130, 0, 131, 0, 132, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 137, 138, 0, 139, 140,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 144, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 148, 0, 149, 150, 0, 151, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 156, 157, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 161, 162, 0, 163, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0, 167, 0, 168,
    169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 0, 0, 0, 175, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 178, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0,
    0, 0, 0, 0, 0, 181, 182, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 188,
    0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0,
    195, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202,
    0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0,
    0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0,
    217, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 224, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0,
    234, 235, 0, 236, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 241,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 247, 0, 248, 0, 0, 249, 0,
    0, 0, 250, 0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 0, 0,
    0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0,
    273, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0,
    0, 286, 287, 0, 288, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 292, 0, 293, 0,
    294, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 297, 0, 0, 298, 0, 0, 0, 299, 0, 300, 0, 0, 301, 0, 0, 0, 302, 0, 303, 0, 0,
    304, 0, 0, 0, 305, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 309, 0, 310, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 0, 314,
    0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0,
    0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 324,
    0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 332, 0, 333, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 335,
    0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0,
    0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 346, 0, 347, 0, 0, 348, 0,
    349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 354, 0, 0, 0, 0, 0, 0, 0, 0,
    355, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358,
    0, 0, 0, 359, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365,
    0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0,
    376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378,
    0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 387, 0, 0, 0, 388, 0, 389, 0, 390, 391,
    0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 396, 0, 397, 0, 0, 398, 0, 399, 0, 400, 0, 0, 0, 0, 401, 0, 402, 0,
    0, 0, 403, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0,
    0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 414, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 0, 0,
    0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 423, 0, 424, 425,
    0, 0, 426, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0,
    0, 432, 0, 433, 0, 434, 0, 435, 0, 436, 0, 0, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 0, 0, 442, 0, 443, 0, 444, 0, 445,
    0, 446, 0, 0, 0, 447, 0, 448, 0, 449, 0, 450, 0, 451, 0, 0, 0, 452, 0, 453, 0, 454, 0, 455, 0, 456, 0, 0, 0, 457, 0, 458,
    0, 459, 0, 460, 0, 461, 0, 0, 0, 462, 0, 463, 0, 464, 0, 465, 0, 466, 0, 0, 0, 467, 0, 468, 0, 469, 0, 470, 0, 471, 0, 0,
    0, 472, 0, 473, 0, 474, 0, 475, 0, 476, 0, 0, 0, 477, 0, 478, 0, 479, 0, 480, 0, 481, 0, 0, 0, 482, 0, 483, 0, 484, 0, 485,
    0, 486, 0, 0, 0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 0, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 0, 0, 497, 0, 498,
    0, 499, 0, 500, 0, 501, 0, 0, 0, 502, 0, 503, 0, 504, 0, 505, 0, 506, 0, 0, 0, 507, 0, 508, 0, 509, 0, 510, 0, 511, 0, 0,
    0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 0, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 0, 0, 522, 0, 523, 0, 524, 0, 525,
    0, 526, 0, 0, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 0, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 0, 0, 537, 0, 538,
    0, 539, 0, 540, 0, 541, 0, 0, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 0, 0, 547, 0, 548, 0, 549, 0, 550, 0, 0, 0, 551,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552,
    0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0, 556, 0, 0, 0, 557, 558, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0,
    0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0,
    569, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 574, 0, 0,
    0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0,
    0, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 590, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0,
    0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 597, 0, 598, 0, 0, 0, 599, 0, 0,
    0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0,
    0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0,
    0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614,
    0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 624,
    0, 0, 0, 0, 0, 625, 626, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0,
    0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 636, 0, 637, 0, 638, 0, 0, 639, 0, 0, 0, 0, 0,
    0, 640, 0, 641, 0, 642, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 647, 0, 648, 0, 0,
    0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 653, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 655, 0, 656, 0, 0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 0, 659,
    0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 663, 0, 664, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0,
    667, 0, 0, 0, 668, 0, 0, 0, 669, 0, 670, 0, 671, 672, 0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 677, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    679, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 683, 684, 0, 0, 0, 0, 0,
    0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0,
    0, 688, 0, 0, 0, 689, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 0, 695, 0, 0,
    696, 0, 0, 0, 697, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 705, 0, 0, 706, 0, 0, 707, 0, 0, 708, 0, 0, 709, 710, 0, 711, 0, 0, 0, 0, 712, 713,
    0, 0, 0, 0, 0, 0, 714, 0, 715, 0, 0, 716, 0, 717, 0, 718, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 0,
    722, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 726, 0, 727, 0, 728, 0, 729, 0, 730, 0, 0, 731, 732, 0, 0, 0, 733,
    0, 0, 734, 0, 0, 0, 735, 0, 0, 0, 736, 0, 737, 0, 0, 738, 0, 739, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 0, 0,
    743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 745, 0, 746, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 749, 0, 0, 750,
    0, 0, 751, 0, 0, 0, 752, 0, 0, 753, 0, 0, 754, 0, 0, 755, 0, 756, 757, 0, 0, 0, 758, 0, 0, 759, 0, 0, 0, 0, 760, 0,
    761, 0, 0, 0, 0, 762, 0, 0, 0, 763, 0, 0, 764, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 767, 0, 0, 0, 0, 768, 0, 769, 0,
    0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 775, 0, 0, 0, 0, 776, 0, 777, 0, 0, 0,
    0, 778, 0, 0, 0, 779, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0, 783, 0, 784, 0, 785, 0, 0, 0, 0, 786, 0, 787,
    0, 0, 0, 0, 0, 788, 0, 0, 0, 789, 0, 0, 790, 0, 0, 0, 791, 0, 0, 792, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 0, 796, 0, 0, 797, 0, 0, 0, 798, 0, 0, 0, 799, 0, 0,
    800, 0, 0, 0, 0, 0, 0, 801, 0, 0, 802, 0, 803, 0, 0, 804, 805, 0, 0, 0, 806, 0, 0, 807, 0, 808, 0, 0, 809, 810, 0, 0,
    811, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 818, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0,
    0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 823, 0, 0,
    0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 825, 0, 826, 0, 827, 0, 0, 828, 0, 0, 829, 0, 830, 0, 831, 0, 0, 0, 832, 0,
    0, 833, 0, 834, 0, 835, 0, 836, 0, 0, 837, 0, 838, 0, 839, 0, 0, 840, 0, 0, 841, 0, 842, 0, 843, 0, 0, 0, 844, 0, 0, 845,
    0, 846, 0, 847, 0, 848, 0, 0, 849, 0, 850, 0, 851, 0, 0, 852, 0, 0, 853, 0, 854, 0, 855, 0, 0, 0, 856, 0, 0, 857,
};
void recomp_unit_0110_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089BC004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0110[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089BC004;
    case 2u: goto L_089BC00C;
    case 3u: goto L_089BC014;
    case 4u: goto L_089BC02C;
    case 5u: goto L_089BC050;
    case 6u: goto L_089BC060;
    case 7u: goto L_089BC074;
    case 8u: goto L_089BC07C;
    case 9u: goto L_089BC094;
    case 10u: goto L_089BC09C;
    case 11u: goto L_089BC0B0;
    case 12u: goto L_089BC0B8;
    case 13u: goto L_089BC0C8;
    case 14u: goto L_089BC0E0;
    case 15u: goto L_089BC0F8;
    case 16u: goto L_089BC110;
    case 17u: goto L_089BC118;
    case 18u: goto L_089BC12C;
    case 19u: goto L_089BC134;
    case 20u: goto L_089BC140;
    case 21u: goto L_089BC15C;
    case 22u: goto L_089BC17C;
    case 23u: goto L_089BC190;
    case 24u: goto L_089BC198;
    case 25u: goto L_089BC1A0;
    case 26u: goto L_089BC1B0;
    case 27u: goto L_089BC1B8;
    case 28u: goto L_089BC1C0;
    case 29u: goto L_089BC1E0;
    case 30u: goto L_089BC1F4;
    case 31u: goto L_089BC1FC;
    case 32u: goto L_089BC204;
    case 33u: goto L_089BC21C;
    case 34u: goto L_089BC228;
    case 35u: goto L_089BC230;
    case 36u: goto L_089BC240;
    case 37u: goto L_089BC248;
    case 38u: goto L_089BC258;
    case 39u: goto L_089BC264;
    case 40u: goto L_089BC274;
    case 41u: goto L_089BC294;
    case 42u: goto L_089BC29C;
    case 43u: goto L_089BC2B4;
    case 44u: goto L_089BC2C0;
    case 45u: goto L_089BC2C8;
    case 46u: goto L_089BC2D8;
    case 47u: goto L_089BC2E0;
    case 48u: goto L_089BC2E8;
    case 49u: goto L_089BC300;
    case 50u: goto L_089BC314;
    case 51u: goto L_089BC32C;
    case 52u: goto L_089BC334;
    case 53u: goto L_089BC33C;
    case 54u: goto L_089BC360;
    case 55u: goto L_089BC378;
    case 56u: goto L_089BC380;
    case 57u: goto L_089BC388;
    case 58u: goto L_089BC39C;
    case 59u: goto L_089BC3A8;
    case 60u: goto L_089BC3D0;
    case 61u: goto L_089BC3E8;
    case 62u: goto L_089BC3F0;
    case 63u: goto L_089BC3F8;
    case 64u: goto L_089BC400;
    case 65u: goto L_089BC410;
    case 66u: goto L_089BC418;
    case 67u: goto L_089BC420;
    case 68u: goto L_089BC440;
    case 69u: goto L_089BC448;
    case 70u: goto L_089BC450;
    case 71u: goto L_089BC458;
    case 72u: goto L_089BC464;
    case 73u: goto L_089BC470;
    case 74u: goto L_089BC47C;
    case 75u: goto L_089BC4FC;
    case 76u: goto L_089BC510;
    case 77u: goto L_089BC57C;
    case 78u: goto L_089BC598;
    case 79u: goto L_089BC5A0;
    case 80u: goto L_089BC5A8;
    case 81u: goto L_089BC5BC;
    case 82u: goto L_089BC5C4;
    case 83u: goto L_089BC5D4;
    case 84u: goto L_089BC5E4;
    case 85u: goto L_089BC5EC;
    case 86u: goto L_089BC5F4;
    case 87u: goto L_089BC608;
    case 88u: goto L_089BC610;
    case 89u: goto L_089BC618;
    case 90u: goto L_089BC628;
    case 91u: goto L_089BC64C;
    case 92u: goto L_089BC654;
    case 93u: goto L_089BC65C;
    case 94u: goto L_089BC670;
    case 95u: goto L_089BC680;
    case 96u: goto L_089BC68C;
    case 97u: goto L_089BC6C0;
    case 98u: goto L_089BC6C4;
    case 99u: goto L_089BC6D0;
    case 100u: goto L_089BC6D8;
    case 101u: goto L_089BC6E4;
    case 102u: goto L_089BC6F4;
    case 103u: goto L_089BC708;
    case 104u: goto L_089BC710;
    case 105u: goto L_089BC728;
    case 106u: goto L_089BC730;
    case 107u: goto L_089BC738;
    case 108u: goto L_089BC750;
    case 109u: goto L_089BC758;
    case 110u: goto L_089BC760;
    case 111u: goto L_089BC76C;
    case 112u: goto L_089BC774;
    case 113u: goto L_089BC7A4;
    case 114u: goto L_089BC874;
    case 115u: goto L_089BC8BC;
    case 116u: goto L_089BC8C4;
    case 117u: goto L_089BC98C;
    case 118u: goto L_089BC9A8;
    case 119u: goto L_089BC9C4;
    case 120u: goto L_089BC9E0;
    case 121u: goto L_089BC9F8;
    case 122u: goto L_089BCA08;
    case 123u: goto L_089BCA34;
    case 124u: goto L_089BCA48;
    case 125u: goto L_089BCA50;
    case 126u: goto L_089BCA54;
    case 127u: goto L_089BCA5C;
    case 128u: goto L_089BCA60;
    case 129u: goto L_089BCA7C;
    case 130u: goto L_089BCA90;
    case 131u: goto L_089BCA98;
    case 132u: goto L_089BCAA0;
    case 133u: goto L_089BCAA4;
    case 134u: goto L_089BCAAC;
    case 135u: goto L_089BCAD4;
    case 136u: goto L_089BCAE8;
    case 137u: goto L_089BCAF0;
    case 138u: goto L_089BCAF4;
    case 139u: goto L_089BCAFC;
    case 140u: goto L_089BCB00;
    case 141u: goto L_089BCB1C;
    case 142u: goto L_089BCB30;
    case 143u: goto L_089BCB38;
    case 144u: goto L_089BCB40;
    case 145u: goto L_089BCB44;
    case 146u: goto L_089BCB4C;
    case 147u: goto L_089BCB74;
    case 148u: goto L_089BCB88;
    case 149u: goto L_089BCB90;
    case 150u: goto L_089BCB94;
    case 151u: goto L_089BCB9C;
    case 152u: goto L_089BCBA0;
    case 153u: goto L_089BCBBC;
    case 154u: goto L_089BCBD0;
    case 155u: goto L_089BCBD8;
    case 156u: goto L_089BCBE0;
    case 157u: goto L_089BCBE4;
    case 158u: goto L_089BCBEC;
    case 159u: goto L_089BCC14;
    case 160u: goto L_089BCC28;
    case 161u: goto L_089BCC30;
    case 162u: goto L_089BCC34;
    case 163u: goto L_089BCC3C;
    case 164u: goto L_089BCC40;
    case 165u: goto L_089BCC5C;
    case 166u: goto L_089BCC70;
    case 167u: goto L_089BCC78;
    case 168u: goto L_089BCC80;
    case 169u: goto L_089BCC84;
    case 170u: goto L_089BCC8C;
    case 171u: goto L_089BCCB0;
    case 172u: goto L_089BCCD0;
    case 173u: goto L_089BCCD4;
    case 174u: goto L_089BCCF8;
    case 175u: goto L_089BCD18;
    case 176u: goto L_089BCD1C;
    case 177u: goto L_089BCD38;
    case 178u: goto L_089BCD58;
    case 179u: goto L_089BCD5C;
    case 180u: goto L_089BCD78;
    case 181u: goto L_089BCD98;
    case 182u: goto L_089BCD9C;
    case 183u: goto L_089BCDB0;
    case 184u: goto L_089BCDC0;
    case 185u: goto L_089BCDD0;
    case 186u: goto L_089BCDDC;
    case 187u: goto L_089BCDF4;
    case 188u: goto L_089BCE00;
    case 189u: goto L_089BCE18;
    case 190u: goto L_089BCE24;
    case 191u: goto L_089BCE3C;
    case 192u: goto L_089BCE48;
    case 193u: goto L_089BCE60;
    case 194u: goto L_089BCE6C;
    case 195u: goto L_089BCE84;
    case 196u: goto L_089BCE90;
    case 197u: goto L_089BCEA8;
    case 198u: goto L_089BCEB4;
    case 199u: goto L_089BCECC;
    case 200u: goto L_089BCED8;
    case 201u: goto L_089BCEF0;
    case 202u: goto L_089BCF00;
    case 203u: goto L_089BCF10;
    case 204u: goto L_089BCF20;
    case 205u: goto L_089BCF2C;
    case 206u: goto L_089BCF44;
    case 207u: goto L_089BCF50;
    case 208u: goto L_089BCF68;
    case 209u: goto L_089BCF74;
    case 210u: goto L_089BCF8C;
    case 211u: goto L_089BCF98;
    case 212u: goto L_089BCFB0;
    case 213u: goto L_089BCFBC;
    case 214u: goto L_089BCFD4;
    case 215u: goto L_089BCFE0;
    case 216u: goto L_089BCFF8;
    case 217u: goto L_089BD004;
    case 218u: goto L_089BD01C;
    case 219u: goto L_089BD028;
    case 220u: goto L_089BD03C;
    case 221u: goto L_089BD044;
    case 222u: goto L_089BD09C;
    case 223u: goto L_089BD0B4;
    case 224u: goto L_089BD0BC;
    case 225u: goto L_089BD0C0;
    case 226u: goto L_089BD0EC;
    case 227u: goto L_089BD120;
    case 228u: goto L_089BD128;
    case 229u: goto L_089BD140;
    case 230u: goto L_089BD150;
    case 231u: goto L_089BD160;
    case 232u: goto L_089BD16C;
    case 233u: goto L_089BD178;
    case 234u: goto L_089BD184;
    case 235u: goto L_089BD188;
    case 236u: goto L_089BD190;
    case 237u: goto L_089BD194;
    case 238u: goto L_089BD1D0;
    case 239u: goto L_089BD1DC;
    case 240u: goto L_089BD1E8;
    case 241u: goto L_089BD200;
    case 242u: goto L_089BD210;
    case 243u: goto L_089BD230;
    case 244u: goto L_089BD23C;
    case 245u: goto L_089BD24C;
    case 246u: goto L_089BD258;
    case 247u: goto L_089BD268;
    case 248u: goto L_089BD270;
    case 249u: goto L_089BD27C;
    case 250u: goto L_089BD28C;
    case 251u: goto L_089BD294;
    case 252u: goto L_089BD2A0;
    case 253u: goto L_089BD2B0;
    case 254u: goto L_089BD2B8;
    case 255u: goto L_089BD2C4;
    case 256u: goto L_089BD2D4;
    case 257u: goto L_089BD2DC;
    case 258u: goto L_089BD2E4;
    case 259u: goto L_089BD2EC;
    case 260u: goto L_089BD2F4;
    case 261u: goto L_089BD30C;
    case 262u: goto L_089BD314;
    case 263u: goto L_089BD31C;
    case 264u: goto L_089BD32C;
    case 265u: goto L_089BD334;
    case 266u: goto L_089BD35C;
    case 267u: goto L_089BD36C;
    case 268u: goto L_089BD38C;
    case 269u: goto L_089BD39C;
    case 270u: goto L_089BD3BC;
    case 271u: goto L_089BD3CC;
    case 272u: goto L_089BD3F4;
    case 273u: goto L_089BD404;
    case 274u: goto L_089BD420;
    case 275u: goto L_089BD428;
    case 276u: goto L_089BD438;
    case 277u: goto L_089BD44C;
    case 278u: goto L_089BD470;
    case 279u: goto L_089BD4A4;
    case 280u: goto L_089BD4AC;
    case 281u: goto L_089BD4C4;
    case 282u: goto L_089BD4D4;
    case 283u: goto L_089BD4E4;
    case 284u: goto L_089BD4F0;
    case 285u: goto L_089BD4FC;
    case 286u: goto L_089BD508;
    case 287u: goto L_089BD50C;
    case 288u: goto L_089BD514;
    case 289u: goto L_089BD518;
    case 290u: goto L_089BD558;
    case 291u: goto L_089BD564;
    case 292u: goto L_089BD574;
    case 293u: goto L_089BD57C;
    case 294u: goto L_089BD584;
    case 295u: goto L_089BD598;
    case 296u: goto L_089BD5A8;
    case 297u: goto L_089BD5B0;
    case 298u: goto L_089BD5BC;
    case 299u: goto L_089BD5CC;
    case 300u: goto L_089BD5D4;
    case 301u: goto L_089BD5E0;
    case 302u: goto L_089BD5F0;
    case 303u: goto L_089BD5F8;
    case 304u: goto L_089BD604;
    case 305u: goto L_089BD614;
    case 306u: goto L_089BD61C;
    case 307u: goto L_089BD628;
    case 308u: goto L_089BD638;
    case 309u: goto L_089BD640;
    case 310u: goto L_089BD648;
    case 311u: goto L_089BD660;
    case 312u: goto L_089BD668;
    case 313u: goto L_089BD670;
    case 314u: goto L_089BD680;
    case 315u: goto L_089BD688;
    case 316u: goto L_089BD6B8;
    case 317u: goto L_089BD6C8;
    case 318u: goto L_089BD6E8;
    case 319u: goto L_089BD6F8;
    case 320u: goto L_089BD718;
    case 321u: goto L_089BD728;
    case 322u: goto L_089BD750;
    case 323u: goto L_089BD764;
    case 324u: goto L_089BD780;
    case 325u: goto L_089BD788;
    case 326u: goto L_089BD798;
    case 327u: goto L_089BD7AC;
    case 328u: goto L_089BD7D8;
    case 329u: goto L_089BD824;
    case 330u: goto L_089BD8E0;
    case 331u: goto L_089BD8EC;
    case 332u: goto L_089BD8F4;
    case 333u: goto L_089BD8FC;
    case 334u: goto L_089BD97C;
    case 335u: goto L_089BD980;
    case 336u: goto L_089BD988;
    case 337u: goto L_089BD9A4;
    case 338u: goto L_089BD9B0;
    case 339u: goto L_089BD9D8;
    case 340u: goto L_089BD9FC;
    case 341u: goto L_089BDA20;
    case 342u: goto L_089BDA30;
    case 343u: goto L_089BDA3C;
    case 344u: goto L_089BDA48;
    case 345u: goto L_089BDA60;
    case 346u: goto L_089BDA68;
    case 347u: goto L_089BDA70;
    case 348u: goto L_089BDA7C;
    case 349u: goto L_089BDA84;
    case 350u: goto L_089BDA8C;
    case 351u: goto L_089BDAB0;
    case 352u: goto L_089BDAB8;
    case 353u: goto L_089BDADC;
    case 354u: goto L_089BDAE0;
    case 355u: goto L_089BDB04;
    case 356u: goto L_089BDB10;
    case 357u: goto L_089BDB1C;
    case 358u: goto L_089BDB80;
    case 359u: goto L_089BDB90;
    case 360u: goto L_089BDB98;
    case 361u: goto L_089BDBA4;
    case 362u: goto L_089BDBF8;
    case 363u: goto L_089BDC48;
    case 364u: goto L_089BDC4C;
    case 365u: goto L_089BDC80;
    case 366u: goto L_089BDC90;
    case 367u: goto L_089BDCA8;
    case 368u: goto L_089BDCBC;
    case 369u: goto L_089BDCC8;
    case 370u: goto L_089BDCE0;
    case 371u: goto L_089BDD34;
    case 372u: goto L_089BDDB0;
    case 373u: goto L_089BDDCC;
    case 374u: goto L_089BDDE0;
    case 375u: goto L_089BDDEC;
    case 376u: goto L_089BDE04;
    case 377u: goto L_089BDE30;
    case 378u: goto L_089BDE80;
    case 379u: goto L_089BDE90;
    case 380u: goto L_089BDEA0;
    case 381u: goto L_089BDEB4;
    case 382u: goto L_089BDEF0;
    case 383u: goto L_089BDF1C;
    case 384u: goto L_089BDF54;
    case 385u: goto L_089BDFCC;
    case 386u: goto L_089BDFD4;
    case 387u: goto L_089BDFDC;
    case 388u: goto L_089BDFEC;
    case 389u: goto L_089BDFF4;
    case 390u: goto L_089BDFFC;
    case 391u: goto L_089BE000;
    case 392u: goto L_089BE008;
    case 393u: goto L_089BE010;
    case 394u: goto L_089BE02C;
    case 395u: goto L_089BE034;
    case 396u: goto L_089BE03C;
    case 397u: goto L_089BE044;
    case 398u: goto L_089BE050;
    case 399u: goto L_089BE058;
    case 400u: goto L_089BE060;
    case 401u: goto L_089BE074;
    case 402u: goto L_089BE07C;
    case 403u: goto L_089BE08C;
    case 404u: goto L_089BE094;
    case 405u: goto L_089BE0A0;
    case 406u: goto L_089BE0B4;
    case 407u: goto L_089BE0C8;
    case 408u: goto L_089BE0E4;
    case 409u: goto L_089BE0F4;
    case 410u: goto L_089BE108;
    case 411u: goto L_089BE118;
    case 412u: goto L_089BE130;
    case 413u: goto L_089BE13C;
    case 414u: goto L_089BE144;
    case 415u: goto L_089BE148;
    case 416u: goto L_089BE158;
    case 417u: goto L_089BE164;
    case 418u: goto L_089BE170;
    case 419u: goto L_089BE190;
    case 420u: goto L_089BE1B0;
    case 421u: goto L_089BE1DC;
    case 422u: goto L_089BE1E8;
    case 423u: goto L_089BE1F4;
    case 424u: goto L_089BE1FC;
    case 425u: goto L_089BE200;
    case 426u: goto L_089BE20C;
    case 427u: goto L_089BE218;
    case 428u: goto L_089BE220;
    case 429u: goto L_089BE244;
    case 430u: goto L_089BE260;
    case 431u: goto L_089BE278;
    case 432u: goto L_089BE288;
    case 433u: goto L_089BE290;
    case 434u: goto L_089BE298;
    case 435u: goto L_089BE2A0;
    case 436u: goto L_089BE2A8;
    case 437u: goto L_089BE2B8;
    case 438u: goto L_089BE2C0;
    case 439u: goto L_089BE2C8;
    case 440u: goto L_089BE2D0;
    case 441u: goto L_089BE2D8;
    case 442u: goto L_089BE2E8;
    case 443u: goto L_089BE2F0;
    case 444u: goto L_089BE2F8;
    case 445u: goto L_089BE300;
    case 446u: goto L_089BE308;
    case 447u: goto L_089BE318;
    case 448u: goto L_089BE320;
    case 449u: goto L_089BE328;
    case 450u: goto L_089BE330;
    case 451u: goto L_089BE338;
    case 452u: goto L_089BE348;
    case 453u: goto L_089BE350;
    case 454u: goto L_089BE358;
    case 455u: goto L_089BE360;
    case 456u: goto L_089BE368;
    case 457u: goto L_089BE378;
    case 458u: goto L_089BE380;
    case 459u: goto L_089BE388;
    case 460u: goto L_089BE390;
    case 461u: goto L_089BE398;
    case 462u: goto L_089BE3A8;
    case 463u: goto L_089BE3B0;
    case 464u: goto L_089BE3B8;
    case 465u: goto L_089BE3C0;
    case 466u: goto L_089BE3C8;
    case 467u: goto L_089BE3D8;
    case 468u: goto L_089BE3E0;
    case 469u: goto L_089BE3E8;
    case 470u: goto L_089BE3F0;
    case 471u: goto L_089BE3F8;
    case 472u: goto L_089BE408;
    case 473u: goto L_089BE410;
    case 474u: goto L_089BE418;
    case 475u: goto L_089BE420;
    case 476u: goto L_089BE428;
    case 477u: goto L_089BE438;
    case 478u: goto L_089BE440;
    case 479u: goto L_089BE448;
    case 480u: goto L_089BE450;
    case 481u: goto L_089BE458;
    case 482u: goto L_089BE468;
    case 483u: goto L_089BE470;
    case 484u: goto L_089BE478;
    case 485u: goto L_089BE480;
    case 486u: goto L_089BE488;
    case 487u: goto L_089BE498;
    case 488u: goto L_089BE4A0;
    case 489u: goto L_089BE4A8;
    case 490u: goto L_089BE4B0;
    case 491u: goto L_089BE4B8;
    case 492u: goto L_089BE4C8;
    case 493u: goto L_089BE4D0;
    case 494u: goto L_089BE4D8;
    case 495u: goto L_089BE4E0;
    case 496u: goto L_089BE4E8;
    case 497u: goto L_089BE4F8;
    case 498u: goto L_089BE500;
    case 499u: goto L_089BE508;
    case 500u: goto L_089BE510;
    case 501u: goto L_089BE518;
    case 502u: goto L_089BE528;
    case 503u: goto L_089BE530;
    case 504u: goto L_089BE538;
    case 505u: goto L_089BE540;
    case 506u: goto L_089BE548;
    case 507u: goto L_089BE558;
    case 508u: goto L_089BE560;
    case 509u: goto L_089BE568;
    case 510u: goto L_089BE570;
    case 511u: goto L_089BE578;
    case 512u: goto L_089BE588;
    case 513u: goto L_089BE590;
    case 514u: goto L_089BE598;
    case 515u: goto L_089BE5A0;
    case 516u: goto L_089BE5A8;
    case 517u: goto L_089BE5B8;
    case 518u: goto L_089BE5C0;
    case 519u: goto L_089BE5C8;
    case 520u: goto L_089BE5D0;
    case 521u: goto L_089BE5D8;
    case 522u: goto L_089BE5E8;
    case 523u: goto L_089BE5F0;
    case 524u: goto L_089BE5F8;
    case 525u: goto L_089BE600;
    case 526u: goto L_089BE608;
    case 527u: goto L_089BE618;
    case 528u: goto L_089BE620;
    case 529u: goto L_089BE628;
    case 530u: goto L_089BE630;
    case 531u: goto L_089BE638;
    case 532u: goto L_089BE648;
    case 533u: goto L_089BE650;
    case 534u: goto L_089BE658;
    case 535u: goto L_089BE660;
    case 536u: goto L_089BE668;
    case 537u: goto L_089BE678;
    case 538u: goto L_089BE680;
    case 539u: goto L_089BE688;
    case 540u: goto L_089BE690;
    case 541u: goto L_089BE698;
    case 542u: goto L_089BE6A8;
    case 543u: goto L_089BE6B0;
    case 544u: goto L_089BE6B8;
    case 545u: goto L_089BE6C0;
    case 546u: goto L_089BE6C8;
    case 547u: goto L_089BE6D8;
    case 548u: goto L_089BE6E0;
    case 549u: goto L_089BE6E8;
    case 550u: goto L_089BE6F0;
    case 551u: goto L_089BE700;
    case 552u: goto L_089BE780;
    case 553u: goto L_089BE790;
    case 554u: goto L_089BE7AC;
    case 555u: goto L_089BE7B4;
    case 556u: goto L_089BE7BC;
    case 557u: goto L_089BE7CC;
    case 558u: goto L_089BE7D0;
    case 559u: goto L_089BE7E0;
    case 560u: goto L_089BE7F0;
    case 561u: goto L_089BE80C;
    case 562u: goto L_089BE824;
    case 563u: goto L_089BE83C;
    case 564u: goto L_089BE85C;
    case 565u: goto L_089BE8B4;
    case 566u: goto L_089BE8BC;
    case 567u: goto L_089BE8D8;
    case 568u: goto L_089BE8F4;
    case 569u: goto L_089BE904;
    case 570u: goto L_089BE908;
    case 571u: goto L_089BE94C;
    case 572u: goto L_089BE960;
    case 573u: goto L_089BE970;
    case 574u: goto L_089BE978;
    case 575u: goto L_089BE998;
    case 576u: goto L_089BE9B4;
    case 577u: goto L_089BE9CC;
    case 578u: goto L_089BE9E0;
    case 579u: goto L_089BE9FC;
    case 580u: goto L_089BEA18;
    case 581u: goto L_089BEA20;
    case 582u: goto L_089BEA3C;
    case 583u: goto L_089BEA4C;
    case 584u: goto L_089BEAAC;
    case 585u: goto L_089BEAB4;
    case 586u: goto L_089BEAD4;
    case 587u: goto L_089BEAE0;
    case 588u: goto L_089BEAF0;
    case 589u: goto L_089BEB28;
    case 590u: goto L_089BEB88;
    case 591u: goto L_089BEBA8;
    case 592u: goto L_089BEBE8;
    case 593u: goto L_089BEBF0;
    case 594u: goto L_089BEC08;
    case 595u: goto L_089BEC10;
    case 596u: goto L_089BEC5C;
    case 597u: goto L_089BEC60;
    case 598u: goto L_089BEC68;
    case 599u: goto L_089BEC78;
    case 600u: goto L_089BEC94;
    case 601u: goto L_089BEC9C;
    case 602u: goto L_089BECC0;
    case 603u: goto L_089BECE0;
    case 604u: goto L_089BECFC;
    case 605u: goto L_089BED0C;
    case 606u: goto L_089BED5C;
    case 607u: goto L_089BED7C;
    case 608u: goto L_089BED8C;
    case 609u: goto L_089BEDA0;
    case 610u: goto L_089BEDB4;
    case 611u: goto L_089BEDBC;
    case 612u: goto L_089BEDCC;
    case 613u: goto L_089BEDF0;
    case 614u: goto L_089BEE00;
    case 615u: goto L_089BEE1C;
    case 616u: goto L_089BEE34;
    case 617u: goto L_089BEE48;
    case 618u: goto L_089BEE58;
    case 619u: goto L_089BEE90;
    case 620u: goto L_089BEE9C;
    case 621u: goto L_089BEEB4;
    case 622u: goto L_089BEEE8;
    case 623u: goto L_089BEEFC;
    case 624u: goto L_089BEF00;
    case 625u: goto L_089BEF18;
    case 626u: goto L_089BEF1C;
    case 627u: goto L_089BEF24;
    case 628u: goto L_089BEF54;
    case 629u: goto L_089BEF74;
    case 630u: goto L_089BEF8C;
    case 631u: goto L_089BEFA0;
    case 632u: goto L_089BEFC0;
    case 633u: goto L_089BEFD4;
    case 634u: goto L_089BEFE8;
    case 635u: goto L_089BF04C;
    case 636u: goto L_089BF050;
    case 637u: goto L_089BF058;
    case 638u: goto L_089BF060;
    case 639u: goto L_089BF06C;
    case 640u: goto L_089BF088;
    case 641u: goto L_089BF090;
    case 642u: goto L_089BF098;
    case 643u: goto L_089BF0AC;
    case 644u: goto L_089BF0B8;
    case 645u: goto L_089BF0D0;
    case 646u: goto L_089BF0D8;
    case 647u: goto L_089BF0F0;
    case 648u: goto L_089BF0F8;
    case 649u: goto L_089BF11C;
    case 650u: goto L_089BF13C;
    case 651u: goto L_089BF158;
    case 652u: goto L_089BF16C;
    case 653u: goto L_089BF170;
    case 654u: goto L_089BF1B8;
    case 655u: goto L_089BF1C4;
    case 656u: goto L_089BF1CC;
    case 657u: goto L_089BF1D8;
    case 658u: goto L_089BF1F4;
    case 659u: goto L_089BF200;
    case 660u: goto L_089BF208;
    case 661u: goto L_089BF224;
    case 662u: goto L_089BF234;
    case 663u: goto L_089BF244;
    case 664u: goto L_089BF24C;
    case 665u: goto L_089BF254;
    case 666u: goto L_089BF268;
    case 667u: goto L_089BF284;
    case 668u: goto L_089BF294;
    case 669u: goto L_089BF2A4;
    case 670u: goto L_089BF2AC;
    case 671u: goto L_089BF2B4;
    case 672u: goto L_089BF2B8;
    case 673u: goto L_089BF2CC;
    case 674u: goto L_089BF2DC;
    case 675u: goto L_089BF328;
    case 676u: goto L_089BF34C;
    case 677u: goto L_089BF354;
    case 678u: goto L_089BF35C;
    case 679u: goto L_089BF384;
    case 680u: goto L_089BF38C;
    case 681u: goto L_089BF3CC;
    case 682u: goto L_089BF3E0;
    case 683u: goto L_089BF3E8;
    case 684u: goto L_089BF3EC;
    case 685u: goto L_089BF410;
    case 686u: goto L_089BF428;
    case 687u: goto L_089BF47C;
    case 688u: goto L_089BF488;
    case 689u: goto L_089BF498;
    case 690u: goto L_089BF49C;
    case 691u: goto L_089BF4E0;
    case 692u: goto L_089BF5B0;
    case 693u: goto L_089BF5DC;
    case 694u: goto L_089BF5E8;
    case 695u: goto L_089BF5F8;
    case 696u: goto L_089BF604;
    case 697u: goto L_089BF614;
    case 698u: goto L_089BF620;
    case 699u: goto L_089BF630;
    case 700u: goto L_089BF64C;
    case 701u: goto L_089BF664;
    case 702u: goto L_089BF670;
    case 703u: goto L_089BF69C;
    case 704u: goto L_089BF6A4;
    case 705u: goto L_089BF6AC;
    case 706u: goto L_089BF6B8;
    case 707u: goto L_089BF6C4;
    case 708u: goto L_089BF6D0;
    case 709u: goto L_089BF6DC;
    case 710u: goto L_089BF6E0;
    case 711u: goto L_089BF6E8;
    case 712u: goto L_089BF6FC;
    case 713u: goto L_089BF700;
    case 714u: goto L_089BF71C;
    case 715u: goto L_089BF724;
    case 716u: goto L_089BF730;
    case 717u: goto L_089BF738;
    case 718u: goto L_089BF740;
    case 719u: goto L_089BF750;
    case 720u: goto L_089BF760;
    case 721u: goto L_089BF770;
    case 722u: goto L_089BF784;
    case 723u: goto L_089BF794;
    case 724u: goto L_089BF7A4;
    case 725u: goto L_089BF7B4;
    case 726u: goto L_089BF7C0;
    case 727u: goto L_089BF7C8;
    case 728u: goto L_089BF7D0;
    case 729u: goto L_089BF7D8;
    case 730u: goto L_089BF7E0;
    case 731u: goto L_089BF7EC;
    case 732u: goto L_089BF7F0;
    case 733u: goto L_089BF800;
    case 734u: goto L_089BF80C;
    case 735u: goto L_089BF81C;
    case 736u: goto L_089BF82C;
    case 737u: goto L_089BF834;
    case 738u: goto L_089BF840;
    case 739u: goto L_089BF848;
    case 740u: goto L_089BF84C;
    case 741u: goto L_089BF85C;
    case 742u: goto L_089BF868;
    case 743u: goto L_089BF884;
    case 744u: goto L_089BF8B8;
    case 745u: goto L_089BF8C0;
    case 746u: goto L_089BF8C8;
    case 747u: goto L_089BF8D8;
    case 748u: goto L_089BF8EC;
    case 749u: goto L_089BF8F4;
    case 750u: goto L_089BF900;
    case 751u: goto L_089BF90C;
    case 752u: goto L_089BF91C;
    case 753u: goto L_089BF928;
    case 754u: goto L_089BF934;
    case 755u: goto L_089BF940;
    case 756u: goto L_089BF948;
    case 757u: goto L_089BF94C;
    case 758u: goto L_089BF95C;
    case 759u: goto L_089BF968;
    case 760u: goto L_089BF97C;
    case 761u: goto L_089BF984;
    case 762u: goto L_089BF998;
    case 763u: goto L_089BF9A8;
    case 764u: goto L_089BF9B4;
    case 765u: goto L_089BF9C4;
    case 766u: goto L_089BF9D4;
    case 767u: goto L_089BF9E0;
    case 768u: goto L_089BF9F4;
    case 769u: goto L_089BF9FC;
    case 770u: goto L_089BFA10;
    case 771u: goto L_089BFA20;
    case 772u: goto L_089BFA2C;
    case 773u: goto L_089BFA3C;
    case 774u: goto L_089BFA4C;
    case 775u: goto L_089BFA58;
    case 776u: goto L_089BFA6C;
    case 777u: goto L_089BFA74;
    case 778u: goto L_089BFA88;
    case 779u: goto L_089BFA98;
    case 780u: goto L_089BFAA4;
    case 781u: goto L_089BFAB4;
    case 782u: goto L_089BFAC4;
    case 783u: goto L_089BFAD4;
    case 784u: goto L_089BFADC;
    case 785u: goto L_089BFAE4;
    case 786u: goto L_089BFAF8;
    case 787u: goto L_089BFB00;
    case 788u: goto L_089BFB18;
    case 789u: goto L_089BFB28;
    case 790u: goto L_089BFB34;
    case 791u: goto L_089BFB44;
    case 792u: goto L_089BFB50;
    case 793u: goto L_089BFB68;
    case 794u: goto L_089BFB94;
    case 795u: goto L_089BFBC0;
    case 796u: goto L_089BFBCC;
    case 797u: goto L_089BFBD8;
    case 798u: goto L_089BFBE8;
    case 799u: goto L_089BFBF8;
    case 800u: goto L_089BFC04;
    case 801u: goto L_089BFC20;
    case 802u: goto L_089BFC2C;
    case 803u: goto L_089BFC34;
    case 804u: goto L_089BFC40;
    case 805u: goto L_089BFC44;
    case 806u: goto L_089BFC54;
    case 807u: goto L_089BFC60;
    case 808u: goto L_089BFC68;
    case 809u: goto L_089BFC74;
    case 810u: goto L_089BFC78;
    case 811u: goto L_089BFC84;
    case 812u: goto L_089BFC9C;
    case 813u: goto L_089BFCD4;
    case 814u: goto L_089BFCEC;
    case 815u: goto L_089BFD1C;
    case 816u: goto L_089BFD3C;
    case 817u: goto L_089BFD68;
    case 818u: goto L_089BFD7C;
    case 819u: goto L_089BFDF4;
    case 820u: goto L_089BFE0C;
    case 821u: goto L_089BFE44;
    case 822u: goto L_089BFE5C;
    case 823u: goto L_089BFE78;
    case 824u: goto L_089BFE98;
    case 825u: goto L_089BFEB4;
    case 826u: goto L_089BFEBC;
    case 827u: goto L_089BFEC4;
    case 828u: goto L_089BFED0;
    case 829u: goto L_089BFEDC;
    case 830u: goto L_089BFEE4;
    case 831u: goto L_089BFEEC;
    case 832u: goto L_089BFEFC;
    case 833u: goto L_089BFF08;
    case 834u: goto L_089BFF10;
    case 835u: goto L_089BFF18;
    case 836u: goto L_089BFF20;
    case 837u: goto L_089BFF2C;
    case 838u: goto L_089BFF34;
    case 839u: goto L_089BFF3C;
    case 840u: goto L_089BFF48;
    case 841u: goto L_089BFF54;
    case 842u: goto L_089BFF5C;
    case 843u: goto L_089BFF64;
    case 844u: goto L_089BFF74;
    case 845u: goto L_089BFF80;
    case 846u: goto L_089BFF88;
    case 847u: goto L_089BFF90;
    case 848u: goto L_089BFF98;
    case 849u: goto L_089BFFA4;
    case 850u: goto L_089BFFAC;
    case 851u: goto L_089BFFB4;
    case 852u: goto L_089BFFC0;
    case 853u: goto L_089BFFCC;
    case 854u: goto L_089BFFD4;
    case 855u: goto L_089BFFDC;
    case 856u: goto L_089BFFEC;
    case 857u: goto L_089BFFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089BC004:
    ctx.gpr[31] = (0x089BC00Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC00Cu) goto L_089BC00C;
    return;
L_089BC00C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC074;
      }
      goto L_089BC014;
    }
L_089BC014:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC074;
      }
      goto L_089BC02C;
    }
L_089BC02C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x089BC050u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BC050u) goto L_089BC050;
    return;
L_089BC050:
    ctx.gpr[4] = (0u | 2000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x089BC060u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC060u) goto L_089BC060;
    return;
L_089BC060:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x089BC074u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089BC074u) goto L_089BC074;
    return;
L_089BC074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC760;
      }
      goto L_089BC07C;
    }
L_089BC07C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC0B0;
      }
      goto L_089BC094;
    }
L_089BC094:
    ctx.gpr[31] = (0x089BC09Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC09Cu) goto L_089BC09C;
    return;
L_089BC09C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089BC0B0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089BC0B0u) goto L_089BC0B0;
    return;
L_089BC0B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC760;
      }
      goto L_089BC0B8;
    }
L_089BC0B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_089BC0F8;
      }
      goto L_089BC0C8;
    }
L_089BC0C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x089BC0E0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089BC0E0u) goto L_089BC0E0;
    return;
L_089BC0E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089BC0F8;
L_089BC0F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC134;
      }
      goto L_089BC110;
    }
L_089BC110:
    ctx.gpr[31] = (0x089BC118u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC118u) goto L_089BC118;
    return;
L_089BC118:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089BC12Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089BC12Cu) goto L_089BC12C;
    return;
L_089BC12C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC1FC;
      }
      goto L_089BC134;
    }
L_089BC134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC198;
      }
      goto L_089BC140;
    }
L_089BC140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BC198;
      }
      goto L_089BC15C;
    }
L_089BC15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1400), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x089BC17Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC17Cu) goto L_089BC17C;
    return;
L_089BC17C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089BC190u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089BC190u) goto L_089BC190;
    return;
L_089BC190:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC760;
      }
      goto L_089BC198;
    }
L_089BC198:
    ctx.gpr[31] = (0x089BC1A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 743u, 0x089AB604u>(ctx, &aot_mem) && ctx.pc == 0x089BC1A0u) goto L_089BC1A0;
    return;
L_089BC1A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (512u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (128u << 16u);
      if (branch_taken) {
          goto L_089BC1C0;
      }
      goto L_089BC1B0;
    }
L_089BC1B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (16u << 16u);
      if (branch_taken) {
          goto L_089BC1C0;
      }
      goto L_089BC1B8;
    }
L_089BC1B8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BC1FC;
      }
      goto L_089BC1C0;
    }
L_089BC1C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1400), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x089BC1E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC1E0u) goto L_089BC1E0;
    return;
L_089BC1E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089BC1F4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x089BC1F4u) goto L_089BC1F4;
    return;
L_089BC1F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC1FC;
      }
      goto L_089BC1FC;
    }
L_089BC1FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC760;
      }
      goto L_089BC204;
    }
L_089BC204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC294;
      }
      goto L_089BC21C;
    }
L_089BC21C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC240;
      }
      goto L_089BC228;
    }
L_089BC228:
    ctx.gpr[31] = (0x089BC230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x089BC230u) goto L_089BC230;
    return;
L_089BC230:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BC240u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 566u, 0x08A2ABB4u>(ctx, &aot_mem) && ctx.pc == 0x089BC240u) goto L_089BC240;
    return;
L_089BC240:
    ctx.gpr[31] = (0x089BC248u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC248u) goto L_089BC248;
    return;
L_089BC248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC294;
      }
      goto L_089BC258;
    }
L_089BC258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1400)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC294;
      }
      goto L_089BC264;
    }
L_089BC264:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1400)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BC274u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x089BC274u) goto L_089BC274;
    return;
L_089BC274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1400), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BC294u);
    ctx.gpr[5] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089BC294u) goto L_089BC294;
    return;
L_089BC294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC760;
      }
      goto L_089BC29C;
    }
L_089BC29C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC2E0;
      }
      goto L_089BC2B4;
    }
L_089BC2B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC2D8;
      }
      goto L_089BC2C0;
    }
L_089BC2C0:
    ctx.gpr[31] = (0x089BC2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 267u, 0x08A295CCu>(ctx, &aot_mem) && ctx.pc == 0x089BC2C8u) goto L_089BC2C8;
    return;
L_089BC2C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1352)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089BC2D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 566u, 0x08A2ABB4u>(ctx, &aot_mem) && ctx.pc == 0x089BC2D8u) goto L_089BC2D8;
    return;
L_089BC2D8:
    ctx.gpr[31] = (0x089BC2E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC2E0u) goto L_089BC2E0;
    return;
L_089BC2E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC760;
      }
      goto L_089BC2E8;
    }
L_089BC2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC33C;
      }
      goto L_089BC300;
    }
L_089BC300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC33C;
      }
      goto L_089BC314;
    }
L_089BC314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x089BC32Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 347u, 0x089ADDC8u>(ctx, &aot_mem) && ctx.pc == 0x089BC32Cu) goto L_089BC32C;
    return;
L_089BC32C:
    ctx.gpr[31] = (0x089BC334u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC334u) goto L_089BC334;
    return;
L_089BC334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC5A0;
      }
      goto L_089BC33C;
    }
L_089BC33C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7808)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BC388;
      }
      goto L_089BC360;
    }
L_089BC360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x089BC378u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 347u, 0x089ADDC8u>(ctx, &aot_mem) && ctx.pc == 0x089BC378u) goto L_089BC378;
    return;
L_089BC378:
    ctx.gpr[31] = (0x089BC380u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC380u) goto L_089BC380;
    return;
L_089BC380:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC5A0;
      }
      goto L_089BC388;
    }
L_089BC388:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7768)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_089BC3F8;
      }
      goto L_089BC39C;
    }
L_089BC39C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x089BC3A8u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089BC3A8u) goto L_089BC3A8;
    return;
L_089BC3A8:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (15267u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BC3F8;
      }
      goto L_089BC3D0;
    }
L_089BC3D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x089BC3E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 347u, 0x089ADDC8u>(ctx, &aot_mem) && ctx.pc == 0x089BC3E8u) goto L_089BC3E8;
    return;
L_089BC3E8:
    ctx.gpr[31] = (0x089BC3F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC3F0u) goto L_089BC3F0;
    return;
L_089BC3F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC5A0;
      }
      goto L_089BC3F8;
    }
L_089BC3F8:
    ctx.gpr[31] = (0x089BC400u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 743u, 0x089AB604u>(ctx, &aot_mem) && ctx.pc == 0x089BC400u) goto L_089BC400;
    return;
L_089BC400:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (512u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (128u << 16u);
      if (branch_taken) {
          goto L_089BC420;
      }
      goto L_089BC410;
    }
L_089BC410:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (16u << 16u);
      if (branch_taken) {
          goto L_089BC420;
      }
      goto L_089BC418;
    }
L_089BC418:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BC450;
      }
      goto L_089BC420;
    }
L_089BC420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1400), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x089BC440u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 347u, 0x089ADDC8u>(ctx, &aot_mem) && ctx.pc == 0x089BC440u) goto L_089BC440;
    return;
L_089BC440:
    ctx.gpr[31] = (0x089BC448u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC448u) goto L_089BC448;
    return;
L_089BC448:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC450;
      }
      goto L_089BC450;
    }
L_089BC450:
    ctx.gpr[31] = (0x089BC458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089BC458u) goto L_089BC458;
    return;
L_089BC458:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC5A0;
      }
      goto L_089BC464;
    }
L_089BC464:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC5A0;
      }
      goto L_089BC470;
    }
L_089BC470:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC5A0;
      }
      goto L_089BC47C;
    }
L_089BC47C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-28956)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[8] = (16640u << 16u);
      if (branch_taken) {
          goto L_089BC5A0;
      }
      goto L_089BC4FC;
    }
L_089BC4FC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BC5A0;
      }
      goto L_089BC510;
    }
L_089BC510:
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[8]);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BC5A0;
      }
      goto L_089BC57C;
    }
L_089BC57C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1400), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[31] = (0x089BC598u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 347u, 0x089ADDC8u>(ctx, &aot_mem) && ctx.pc == 0x089BC598u) goto L_089BC598;
    return;
L_089BC598:
    ctx.gpr[31] = (0x089BC5A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC5A0u) goto L_089BC5A0;
    return;
L_089BC5A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC760;
      }
      goto L_089BC5A8;
    }
L_089BC5A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[6] = (0u | 222u);
    ctx.gpr[31] = (0x089BC5BCu);
    ctx.gpr[7] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 172u, 0x0899D494u>(ctx, &aot_mem) && ctx.pc == 0x089BC5BCu) goto L_089BC5BC;
    return;
L_089BC5BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC760;
      }
      goto L_089BC5C4;
    }
L_089BC5C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BC5E4;
      }
      goto L_089BC5D4;
    }
L_089BC5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BC5F4;
      }
      goto L_089BC5E4;
    }
L_089BC5E4:
    ctx.gpr[31] = (0x089BC5ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC5ECu) goto L_089BC5EC;
    return;
L_089BC5EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC760;
      }
      goto L_089BC5F4;
    }
L_089BC5F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (0u | 215u);
    ctx.gpr[31] = (0x089BC608u);
    ctx.gpr[7] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 172u, 0x0899D494u>(ctx, &aot_mem) && ctx.pc == 0x089BC608u) goto L_089BC608;
    return;
L_089BC608:
    ctx.gpr[31] = (0x089BC610u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089BC610u) goto L_089BC610;
    return;
L_089BC610:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC708;
      }
      goto L_089BC618;
    }
L_089BC618:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x089BC628u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089BC628u) goto L_089BC628;
    return;
L_089BC628:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BC708;
      }
      goto L_089BC64C;
    }
L_089BC64C:
    ctx.gpr[31] = (0x089BC654u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 663u, 0x08A9F0C0u>(ctx, &aot_mem) && ctx.pc == 0x089BC654u) goto L_089BC654;
    return;
L_089BC654:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC708;
      }
      goto L_089BC65C;
    }
L_089BC65C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (17096u << 16u);
      if (branch_taken) {
          goto L_089BC708;
      }
      goto L_089BC670;
    }
L_089BC670:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_089BC680;
L_089BC680:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC6F4;
      }
      goto L_089BC68C;
    }
L_089BC68C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BC6F4;
      }
      goto L_089BC6C0;
    }
L_089BC6C0:
    ctx.gpr[22] = (0u | 222u);
    goto L_089BC6C4;
L_089BC6C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BC6D0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BC6D0u) goto L_089BC6D0;
    return;
L_089BC6D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC6E4;
      }
      goto L_089BC6D8;
    }
L_089BC6D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BC6E4u);
    ctx.gpr[5] = (0u | 149u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089BC6E4u) goto L_089BC6E4;
    return;
L_089BC6E4:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 229 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BC6C4;
      }
      goto L_089BC6F4;
    }
L_089BC6F4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089BC680;
      }
      goto L_089BC708;
    }
L_089BC708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC760;
      }
      goto L_089BC710;
    }
L_089BC710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC730;
      }
      goto L_089BC728;
    }
L_089BC728:
    ctx.gpr[31] = (0x089BC730u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC730u) goto L_089BC730;
    return;
L_089BC730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC760;
      }
      goto L_089BC738;
    }
L_089BC738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC758;
      }
      goto L_089BC750;
    }
L_089BC750:
    ctx.gpr[31] = (0x089BC758u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 465u, 0x089B9FF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC758u) goto L_089BC758;
    return;
L_089BC758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BC760;
      }
      goto L_089BC760;
    }
L_089BC760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BC774;
      }
      goto L_089BC76C;
    }
L_089BC76C:
    ctx.gpr[31] = (0x089BC774u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 879u, 0x089A3B74u>(ctx, &aot_mem) && ctx.pc == 0x089BC774u) goto L_089BC774;
    return;
L_089BC774:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BC7A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 0u);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (16025u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(836)));
    ctx.gpr[8] = (0u | 5u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_089BC874;
    }
    goto L_089BC874;
L_089BC874:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089BC8BCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x089BC8BCu) goto L_089BC8BC;
    return;
L_089BC8BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BC8C4;
    }
L_089BC8C4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089BC98Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 102u, 0x0899CDF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC98Cu) goto L_089BC98C;
    return;
L_089BC98C:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089BC9A8u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 102u, 0x0899CDF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC9A8u) goto L_089BC9A8;
    return;
L_089BC9A8:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089BC9C4u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 102u, 0x0899CDF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC9C4u) goto L_089BC9C4;
    return;
L_089BC9C4:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089BC9E0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 102u, 0x0899CDF8u>(ctx, &aot_mem) && ctx.pc == 0x089BC9E0u) goto L_089BC9E0;
    return;
L_089BC9E0:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089BC9F8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x089BC9F8u) goto L_089BC9F8;
    return;
L_089BC9F8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089BCA08u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 102u, 0x0899CDF8u>(ctx, &aot_mem) && ctx.pc == 0x089BCA08u) goto L_089BCA08;
    return;
L_089BCA08:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[22])) && ctx.fpr[20] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
      if (branch_taken) {
          goto L_089BCA50;
      }
      goto L_089BCA34;
    }
L_089BCA34:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089BCA54;
    }
    goto L_089BCA48;
L_089BCA48:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089BCA60;
      }
      goto L_089BCA50;
    }
L_089BCA50:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BCA54;
L_089BCA54:
    ctx.gpr[31] = (0x089BCA5Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCA5Cu) goto L_089BCA5C;
    return;
L_089BCA5C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BCA60;
L_089BCA60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089BCA98;
      }
      goto L_089BCA7C;
    }
L_089BCA7C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BCA98;
      }
      goto L_089BCA90;
    }
L_089BCA90:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089BCAA4;
      }
      goto L_089BCA98;
    }
L_089BCA98:
    ctx.gpr[31] = (0x089BCAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCAA0u) goto L_089BCAA0;
    return;
L_089BCAA0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BCAA4;
L_089BCAA4:
    ctx.gpr[31] = (0x089BCAACu);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089BCAACu) goto L_089BCAAC;
    return;
L_089BCAAC:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[13])) && ctx.fpr[20] == ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
      if (branch_taken) {
          goto L_089BCAF0;
      }
      goto L_089BCAD4;
    }
L_089BCAD4:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089BCAF4;
    }
    goto L_089BCAE8;
L_089BCAE8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089BCB00;
      }
      goto L_089BCAF0;
    }
L_089BCAF0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BCAF4;
L_089BCAF4:
    ctx.gpr[31] = (0x089BCAFCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCAFCu) goto L_089BCAFC;
    return;
L_089BCAFC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BCB00;
L_089BCB00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089BCB38;
      }
      goto L_089BCB1C;
    }
L_089BCB1C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BCB38;
      }
      goto L_089BCB30;
    }
L_089BCB30:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089BCB44;
      }
      goto L_089BCB38;
    }
L_089BCB38:
    ctx.gpr[31] = (0x089BCB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCB40u) goto L_089BCB40;
    return;
L_089BCB40:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BCB44;
L_089BCB44:
    ctx.gpr[31] = (0x089BCB4Cu);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089BCB4Cu) goto L_089BCB4C;
    return;
L_089BCB4C:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[13])) && ctx.fpr[20] == ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
      if (branch_taken) {
          goto L_089BCB90;
      }
      goto L_089BCB74;
    }
L_089BCB74:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089BCB94;
    }
    goto L_089BCB88;
L_089BCB88:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089BCBA0;
      }
      goto L_089BCB90;
    }
L_089BCB90:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BCB94;
L_089BCB94:
    ctx.gpr[31] = (0x089BCB9Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCB9Cu) goto L_089BCB9C;
    return;
L_089BCB9C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BCBA0;
L_089BCBA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089BCBD8;
      }
      goto L_089BCBBC;
    }
L_089BCBBC:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BCBD8;
      }
      goto L_089BCBD0;
    }
L_089BCBD0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089BCBE4;
      }
      goto L_089BCBD8;
    }
L_089BCBD8:
    ctx.gpr[31] = (0x089BCBE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCBE0u) goto L_089BCBE0;
    return;
L_089BCBE0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BCBE4;
L_089BCBE4:
    ctx.gpr[31] = (0x089BCBECu);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089BCBECu) goto L_089BCBEC;
    return;
L_089BCBEC:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[13])) && ctx.fpr[20] == ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
      if (branch_taken) {
          goto L_089BCC30;
      }
      goto L_089BCC14;
    }
L_089BCC14:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089BCC34;
    }
    goto L_089BCC28;
L_089BCC28:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089BCC40;
      }
      goto L_089BCC30;
    }
L_089BCC30:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BCC34;
L_089BCC34:
    ctx.gpr[31] = (0x089BCC3Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCC3Cu) goto L_089BCC3C;
    return;
L_089BCC3C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BCC40;
L_089BCC40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089BCC78;
      }
      goto L_089BCC5C;
    }
L_089BCC5C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BCC78;
      }
      goto L_089BCC70;
    }
L_089BCC70:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089BCC84;
      }
      goto L_089BCC78;
    }
L_089BCC78:
    ctx.gpr[31] = (0x089BCC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089BCC80u) goto L_089BCC80;
    return;
L_089BCC80:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BCC84;
L_089BCC84:
    ctx.gpr[31] = (0x089BCC8Cu);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089BCC8Cu) goto L_089BCC8C;
    return;
L_089BCC8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (49225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089BCCD0;
      }
      goto L_089BCCB0;
    }
L_089BCCB0:
    ctx.gpr[5] = (49097u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BCCD4;
      }
      goto L_089BCCD0;
    }
L_089BCCD0:
    ctx.gpr[4] = (0u | 1u);
    goto L_089BCCD4;
L_089BCCD4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (16329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089BCD18;
      }
      goto L_089BCCF8;
    }
L_089BCCF8:
    ctx.gpr[5] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BCD1C;
      }
      goto L_089BCD18;
    }
L_089BCD18:
    ctx.gpr[4] = (0u | 1u);
    goto L_089BCD1C;
L_089BCD1C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089BCD58;
      }
      goto L_089BCD38;
    }
L_089BCD38:
    ctx.gpr[5] = (49097u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BCD5C;
      }
      goto L_089BCD58;
    }
L_089BCD58:
    ctx.gpr[4] = (0u | 1u);
    goto L_089BCD5C;
L_089BCD5C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(226), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089BCD98;
      }
      goto L_089BCD78;
    }
L_089BCD78:
    ctx.gpr[5] = (16329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BCD9C;
      }
      goto L_089BCD98;
    }
L_089BCD98:
    ctx.gpr[4] = (0u | 1u);
    goto L_089BCD9C;
L_089BCD9C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(227), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BCDC0;
      }
      goto L_089BCDB0;
    }
L_089BCDB0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BCEF0;
      }
      goto L_089BCDC0;
    }
L_089BCDC0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BCE60;
      }
      goto L_089BCDD0;
    }
L_089BCDD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(226)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCDF4;
      }
      goto L_089BCDDC;
    }
L_089BCDDC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCDF4;
    }
L_089BCDF4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCE18;
      }
      goto L_089BCE00;
    }
L_089BCE00:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCE18;
    }
L_089BCE18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(227)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCE3C;
      }
      goto L_089BCE24;
    }
L_089BCE24:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCE3C;
    }
L_089BCE3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCE48;
    }
L_089BCE48:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCE60;
    }
L_089BCE60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCE84;
      }
      goto L_089BCE6C;
    }
L_089BCE6C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCE84;
    }
L_089BCE84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(226)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCEA8;
      }
      goto L_089BCE90;
    }
L_089BCE90:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCEA8;
    }
L_089BCEA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCECC;
      }
      goto L_089BCEB4;
    }
L_089BCEB4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCECC;
    }
L_089BCECC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(227)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCED8;
    }
L_089BCED8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCEF0;
    }
L_089BCEF0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BCF10;
      }
      goto L_089BCF00;
    }
L_089BCF00:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCF10;
    }
L_089BCF10:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BCFB0;
      }
      goto L_089BCF20;
    }
L_089BCF20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(227)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCF44;
      }
      goto L_089BCF2C;
    }
L_089BCF2C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCF44;
    }
L_089BCF44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCF68;
      }
      goto L_089BCF50;
    }
L_089BCF50:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCF68;
    }
L_089BCF68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(226)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCF8C;
      }
      goto L_089BCF74;
    }
L_089BCF74:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCF8C;
    }
L_089BCF8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCF98;
    }
L_089BCF98:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCFB0;
    }
L_089BCFB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(225)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCFD4;
      }
      goto L_089BCFBC;
    }
L_089BCFBC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCFD4;
    }
L_089BCFD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(227)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BCFF8;
      }
      goto L_089BCFE0;
    }
L_089BCFE0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BCFF8;
    }
L_089BCFF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD01C;
      }
      goto L_089BD004;
    }
L_089BD004:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BD01C;
    }
L_089BD01C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(226)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD03C;
      }
      goto L_089BD028;
    }
L_089BD028:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (0u | 1u);
    goto L_089BD03C;
L_089BD03C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD0BC;
      }
      goto L_089BD044;
    }
L_089BD044:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BD0B4;
      }
      goto L_089BD09C;
    }
L_089BD09C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089BD0C0;
      }
      goto L_089BD0B4;
    }
L_089BD0B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089BD0C0;
      }
      goto L_089BD0BC;
    }
L_089BD0BC:
    ctx.gpr[2] = (0u | 0u);
    goto L_089BD0C0;
L_089BD0C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BD0EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 18u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089BD128;
      }
      goto L_089BD120;
    }
L_089BD120:
    ctx.gpr[31] = (0x089BD128u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 618u, 0x0888F080u>(ctx, &aot_mem) && ctx.pc == 0x089BD128u) goto L_089BD128;
    return;
L_089BD128:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1332), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1332));
    ctx.gpr[31] = (0x089BD140u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BD140u) goto L_089BD140;
    return;
L_089BD140:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(604), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(604));
    ctx.gpr[31] = (0x089BD150u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BD150u) goto L_089BD150;
    return;
L_089BD150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 50u);
      if (branch_taken) {
          goto L_089BD194;
      }
      goto L_089BD160;
    }
L_089BD160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD188;
      }
      goto L_089BD16C;
    }
L_089BD16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_089BD188;
    }
    goto L_089BD178;
L_089BD178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089BD184u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089BD184u) goto L_089BD184;
    return;
L_089BD184:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_089BD188;
L_089BD188:
    ctx.gpr[31] = (0x089BD190u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089BD190u) goto L_089BD190;
    return;
L_089BD190:
    ctx.gpr[4] = (0u | 50u);
    goto L_089BD194;
L_089BD194:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089BD200;
      }
      goto L_089BD1D0;
    }
L_089BD1D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BD1DCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 193u, 0x088A1304u>(ctx, &aot_mem) && ctx.pc == 0x089BD1DCu) goto L_089BD1DC;
    return;
L_089BD1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x089BD1E8u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(504));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BD1E8u) goto L_089BD1E8;
    return;
L_089BD1E8:
    ctx.gpr[4] = (50298u << 16u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-497));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089BD2E4;
      }
      goto L_089BD200;
    }
L_089BD200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BD2DC;
      }
      goto L_089BD210;
    }
L_089BD210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[5] = (0u | 5u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089BD24C;
      }
      goto L_089BD230;
    }
L_089BD230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD24C;
      }
      goto L_089BD23C;
    }
L_089BD23C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(508), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(508));
    ctx.gpr[31] = (0x089BD24Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BD24Cu) goto L_089BD24C;
    return;
L_089BD24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD270;
      }
      goto L_089BD258;
    }
L_089BD258:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(508), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(508));
    ctx.gpr[31] = (0x089BD268u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BD268u) goto L_089BD268;
    return;
L_089BD268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD2E4;
      }
      goto L_089BD270;
    }
L_089BD270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD294;
      }
      goto L_089BD27C;
    }
L_089BD27C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(512), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x089BD28Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BD28Cu) goto L_089BD28C;
    return;
L_089BD28C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD2E4;
      }
      goto L_089BD294;
    }
L_089BD294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD2B8;
      }
      goto L_089BD2A0;
    }
L_089BD2A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(516), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(516));
    ctx.gpr[31] = (0x089BD2B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BD2B0u) goto L_089BD2B0;
    return;
L_089BD2B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD2E4;
      }
      goto L_089BD2B8;
    }
L_089BD2B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD2E4;
      }
      goto L_089BD2C4;
    }
L_089BD2C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(520), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(520));
    ctx.gpr[31] = (0x089BD2D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BD2D4u) goto L_089BD2D4;
    return;
L_089BD2D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD2E4;
      }
      goto L_089BD2DC;
    }
L_089BD2DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD44C;
      }
      goto L_089BD2E4;
    }
L_089BD2E4:
    ctx.gpr[31] = (0x089BD2ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089BD2ECu) goto L_089BD2EC;
    return;
L_089BD2EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD31C;
      }
      goto L_089BD2F4;
    }
L_089BD2F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x089BD30Cu);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 500u, 0x08A5EC3Cu>(ctx, &aot_mem) && ctx.pc == 0x089BD30Cu) goto L_089BD30C;
    return;
L_089BD30C:
    ctx.gpr[31] = (0x089BD314u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 174u, 0x089ED314u>(ctx, &aot_mem) && ctx.pc == 0x089BD314u) goto L_089BD314;
    return;
L_089BD314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD32C;
      }
      goto L_089BD31C;
    }
L_089BD31C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_089BD32C;
L_089BD32C:
    ctx.gpr[31] = (0x089BD334u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x089BD334u) goto L_089BD334;
    return;
L_089BD334:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089BD35Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x089BD35Cu) goto L_089BD35C;
    return;
L_089BD35C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD38C;
      }
      goto L_089BD36C;
    }
L_089BD36C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17164)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17164), ctx.gpr[5]);
    goto L_089BD38C;
L_089BD38C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD3BC;
      }
      goto L_089BD39C;
    }
L_089BD39C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17160)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17160), ctx.gpr[5]);
    goto L_089BD3BC;
L_089BD3BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD3F4;
      }
      goto L_089BD3CC;
    }
L_089BD3CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 18u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BD3F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089BD3F4u) goto L_089BD3F4;
    return;
L_089BD3F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089BD404u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 314u, 0x08865714u>(ctx, &aot_mem) && ctx.pc == 0x089BD404u) goto L_089BD404;
    return;
L_089BD404:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x089BD420u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 725u, 0x08887A68u>(ctx, &aot_mem) && ctx.pc == 0x089BD420u) goto L_089BD420;
    return;
L_089BD420:
    ctx.gpr[31] = (0x089BD428u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 687u, 0x0899F8B4u>(ctx, &aot_mem) && ctx.pc == 0x089BD428u) goto L_089BD428;
    return;
L_089BD428:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD44C;
      }
      goto L_089BD438;
    }
L_089BD438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089BD44C;
L_089BD44C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BD470:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[8] = (0u | 18u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089BD4AC;
      }
      goto L_089BD4A4;
    }
L_089BD4A4:
    ctx.gpr[31] = (0x089BD4ACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 618u, 0x0888F080u>(ctx, &aot_mem) && ctx.pc == 0x089BD4ACu) goto L_089BD4AC;
    return;
L_089BD4AC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1332), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1332));
    ctx.gpr[31] = (0x089BD4C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BD4C4u) goto L_089BD4C4;
    return;
L_089BD4C4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(604), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(604));
    ctx.gpr[31] = (0x089BD4D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BD4D4u) goto L_089BD4D4;
    return;
L_089BD4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 51u);
      if (branch_taken) {
          goto L_089BD518;
      }
      goto L_089BD4E4;
    }
L_089BD4E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD50C;
      }
      goto L_089BD4F0;
    }
L_089BD4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_089BD50C;
    }
    goto L_089BD4FC;
L_089BD4FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089BD508u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089BD508u) goto L_089BD508;
    return;
L_089BD508:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_089BD50C;
L_089BD50C:
    ctx.gpr[31] = (0x089BD514u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089BD514u) goto L_089BD514;
    return;
L_089BD514:
    ctx.gpr[4] = (0u | 51u);
    goto L_089BD518;
L_089BD518:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BD57C;
      }
      goto L_089BD558;
    }
L_089BD558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD638;
      }
      goto L_089BD564;
    }
L_089BD564:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(508), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(508));
    ctx.gpr[31] = (0x089BD574u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BD574u) goto L_089BD574;
    return;
L_089BD574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD638;
      }
      goto L_089BD57C;
    }
L_089BD57C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BD5B0;
      }
      goto L_089BD584;
    }
L_089BD584:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[16] = (ctx.gpr[17] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD638;
      }
      goto L_089BD598;
    }
L_089BD598:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(508), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(508));
    ctx.gpr[31] = (0x089BD5A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BD5A8u) goto L_089BD5A8;
    return;
L_089BD5A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD638;
      }
      goto L_089BD5B0;
    }
L_089BD5B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD5D4;
      }
      goto L_089BD5BC;
    }
L_089BD5BC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(508), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(508));
    ctx.gpr[31] = (0x089BD5CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BD5CCu) goto L_089BD5CC;
    return;
L_089BD5CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD638;
      }
      goto L_089BD5D4;
    }
L_089BD5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD5F8;
      }
      goto L_089BD5E0;
    }
L_089BD5E0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(512), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x089BD5F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BD5F0u) goto L_089BD5F0;
    return;
L_089BD5F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD638;
      }
      goto L_089BD5F8;
    }
L_089BD5F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD61C;
      }
      goto L_089BD604;
    }
L_089BD604:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(516), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(516));
    ctx.gpr[31] = (0x089BD614u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BD614u) goto L_089BD614;
    return;
L_089BD614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD638;
      }
      goto L_089BD61C;
    }
L_089BD61C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD638;
      }
      goto L_089BD628;
    }
L_089BD628:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(520), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(520));
    ctx.gpr[31] = (0x089BD638u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BD638u) goto L_089BD638;
    return;
L_089BD638:
    ctx.gpr[31] = (0x089BD640u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089BD640u) goto L_089BD640;
    return;
L_089BD640:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD670;
      }
      goto L_089BD648;
    }
L_089BD648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x089BD660u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 500u, 0x08A5EC3Cu>(ctx, &aot_mem) && ctx.pc == 0x089BD660u) goto L_089BD660;
    return;
L_089BD660:
    ctx.gpr[31] = (0x089BD668u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 174u, 0x089ED314u>(ctx, &aot_mem) && ctx.pc == 0x089BD668u) goto L_089BD668;
    return;
L_089BD668:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD680;
      }
      goto L_089BD670;
    }
L_089BD670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_089BD680;
L_089BD680:
    ctx.gpr[31] = (0x089BD688u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x089BD688u) goto L_089BD688;
    return;
L_089BD688:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089BD6B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x089BD6B8u) goto L_089BD6B8;
    return;
L_089BD6B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD6E8;
      }
      goto L_089BD6C8;
    }
L_089BD6C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17164)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17164), ctx.gpr[5]);
    goto L_089BD6E8;
L_089BD6E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD718;
      }
      goto L_089BD6F8;
    }
L_089BD6F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17160)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17160), ctx.gpr[5]);
    goto L_089BD718;
L_089BD718:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD750;
      }
      goto L_089BD728;
    }
L_089BD728:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 18u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x089BD750u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089BD750u) goto L_089BD750;
    return;
L_089BD750:
    ctx.gpr[6] = (50298u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x089BD764u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 314u, 0x08865714u>(ctx, &aot_mem) && ctx.pc == 0x089BD764u) goto L_089BD764;
    return;
L_089BD764:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x089BD780u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 725u, 0x08887A68u>(ctx, &aot_mem) && ctx.pc == 0x089BD780u) goto L_089BD780;
    return;
L_089BD780:
    ctx.gpr[31] = (0x089BD788u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 687u, 0x0899F8B4u>(ctx, &aot_mem) && ctx.pc == 0x089BD788u) goto L_089BD788;
    return;
L_089BD788:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD7AC;
      }
      goto L_089BD798;
    }
L_089BD798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089BD7AC;
L_089BD7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BD7D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 41u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089BD8F4;
      }
      goto L_089BD824;
    }
L_089BD824:
    ctx.gpr[4] = (15800u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089BD8E0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x089BD8E0u) goto L_089BD8E0;
    return;
L_089BD8E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD8FC;
      }
      goto L_089BD8EC;
    }
L_089BD8EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BD980;
      }
      goto L_089BD8F4;
    }
L_089BD8F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BDEB4;
      }
      goto L_089BD8FC;
    }
L_089BD8FC:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089BD97Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x089BD97Cu) goto L_089BD97C;
    return;
L_089BD97C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089BD980;
L_089BD980:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BD9D8;
      }
      goto L_089BD988;
    }
L_089BD988:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089BD9A4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BD9A4u) goto L_089BD9A4;
    return;
L_089BD9A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089BDA30;
      }
      goto L_089BD9B0;
    }
L_089BD9B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52428u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (15918u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 5243u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[14];
      if (branch_taken) {
          goto L_089BDA60;
      }
      goto L_089BD9D8;
    }
L_089BD9D8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BD9FCu);
    ctx.gpr[6] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089BD9FCu) goto L_089BD9FC;
    return;
L_089BD9FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089BDA20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18788));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x089BDA20u) goto L_089BDA20;
    return;
L_089BDA20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BDEB4;
      }
      goto L_089BDA30;
    }
L_089BDA30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BDA3Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BDA3Cu) goto L_089BDA3C;
    return;
L_089BDA3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BDA60;
      }
      goto L_089BDA48;
    }
L_089BDA48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[24];
    goto L_089BDA60;
L_089BDA60:
    ctx.gpr[31] = (0x089BDA68u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089BDA68u) goto L_089BDA68;
    return;
L_089BDA68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BDA8C;
      }
      goto L_089BDA70;
    }
L_089BDA70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BDAB8;
      }
      goto L_089BDA7C;
    }
L_089BDA7C:
    ctx.gpr[31] = (0x089BDA84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089BDA84u) goto L_089BDA84;
    return;
L_089BDA84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BDAB8;
      }
      goto L_089BDA8C;
    }
L_089BDA8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16648u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089BDAB0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x089BDAB0u) goto L_089BDAB0;
    return;
L_089BDAB0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_089BDAE0;
      }
      goto L_089BDAB8;
    }
L_089BDAB8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16528u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089BDADCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x089BDADCu) goto L_089BDADC;
    return;
L_089BDADC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    goto L_089BDAE0;
L_089BDAE0:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BDB10;
      }
      goto L_089BDB04;
    }
L_089BDB04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1264)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
        goto L_089BDC4C;
    }
    goto L_089BDB10;
L_089BDB10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BDB80;
      }
      goto L_089BDB1C;
    }
L_089BDB1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1264)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BDC48;
      }
      goto L_089BDB80;
    }
L_089BDB80:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x089BDB90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 483u, 0x088EAB10u>(ctx, &aot_mem) && ctx.pc == 0x089BDB90u) goto L_089BDB90;
    return;
L_089BDB90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BDBF8;
      }
      goto L_089BDB98;
    }
L_089BDB98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x089BDBA4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 272u, 0x0899DBC8u>(ctx, &aot_mem) && ctx.pc == 0x089BDBA4u) goto L_089BDBA4;
    return;
L_089BDBA4:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
      if (branch_taken) {
          goto L_089BDC4C;
      }
      goto L_089BDBF8;
    }
L_089BDBF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1248)));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BDC48;
L_089BDC48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    goto L_089BDC4C;
L_089BDC4C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (50298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089BDC80u);
    ctx.gpr[6] = (0u | 137u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x089BDC80u) goto L_089BDC80;
    return;
L_089BDC80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BDEB4;
      }
      goto L_089BDC90;
    }
L_089BDC90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x089BDCA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x089BDCA8u) goto L_089BDCA8;
    return;
L_089BDCA8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x089BDCBCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x089BDCBCu) goto L_089BDCBC;
    return;
L_089BDCBC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089BDCC8u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x089BDCC8u) goto L_089BDCC8;
    return;
L_089BDCC8:
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BDCE0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 643u, 0x088B7F1Cu>(ctx, &aot_mem) && ctx.pc == 0x089BDCE0u) goto L_089BDCE0;
    return;
L_089BDCE0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BDD34u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089BDD34u) goto L_089BDD34;
    return;
L_089BDD34:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27944)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (16005u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (15887u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[11] = (0u | 3000u);
    ctx.gpr[31] = (0x089BDDB0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x089BDDB0u) goto L_089BDDB0;
    return;
L_089BDDB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[31] = (0x089BDDCCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x089BDDCCu) goto L_089BDDCC;
    return;
L_089BDDCC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(708)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x089BDDE0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x089BDDE0u) goto L_089BDDE0;
    return;
L_089BDDE0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089BDDECu);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x089BDDECu) goto L_089BDDEC;
    return;
L_089BDDEC:
    ctx.gpr[7] = (ctx.gpr[21] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BDE04u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 643u, 0x088B7F1Cu>(ctx, &aot_mem) && ctx.pc == 0x089BDE04u) goto L_089BDE04;
    return;
L_089BDE04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BDE30u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x089BDE30u) goto L_089BDE30;
    return;
L_089BDE30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(27944)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[11] = (0u | 3000u);
    ctx.gpr[31] = (0x089BDE80u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x089BDE80u) goto L_089BDE80;
    return;
L_089BDE80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BDEA0;
      }
      goto L_089BDE90;
    }
L_089BDE90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1812), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BDEB4;
      }
      goto L_089BDEA0;
    }
L_089BDEA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1812), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089BDEB4;
L_089BDEB4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BDEF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1924)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089BDFD4;
      }
      goto L_089BDF1C;
    }
L_089BDF1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    ctx.gpr[31] = (0x089BDF54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x089BDF54u) goto L_089BDF54;
    return;
L_089BDF54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1936));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[13])) && ctx.fpr[20] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089BDFDC;
      }
      goto L_089BDFCC;
    }
L_089BDFCC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BDFF4;
      }
      goto L_089BDFD4;
    }
L_089BDFD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE220;
      }
      goto L_089BDFDC;
    }
L_089BDFDC:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089BDFF4;
    }
    goto L_089BDFEC;
L_089BDFEC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089BE000;
      }
      goto L_089BDFF4;
    }
L_089BDFF4:
    ctx.gpr[31] = (0x089BDFFCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089BDFFCu) goto L_089BDFFC;
    return;
L_089BDFFC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BE000;
L_089BE000:
    ctx.gpr[31] = (0x089BE008u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089BE008u) goto L_089BE008;
    return;
L_089BE008:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BE148;
      }
      goto L_089BE010;
    }
L_089BE010:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1952)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089BE044;
      }
      goto L_089BE02C;
    }
L_089BE02C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BE08C;
      }
      goto L_089BE034;
    }
L_089BE034:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_089BE060;
      }
      goto L_089BE03C;
    }
L_089BE03C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE08C;
      }
      goto L_089BE044;
    }
L_089BE044:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089BE074;
      }
      goto L_089BE050;
    }
L_089BE050:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BE07C;
      }
      goto L_089BE058;
    }
L_089BE058:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE08C;
      }
      goto L_089BE060;
    }
L_089BE060:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_089BE08C;
      }
      goto L_089BE074;
    }
L_089BE074:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_089BE08C;
      }
      goto L_089BE07C;
    }
L_089BE07C:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    goto L_089BE08C;
L_089BE08C:
    ctx.gpr[31] = (0x089BE094u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089BE094u) goto L_089BE094;
    return;
L_089BE094:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x089BE0A0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089BE0A0u) goto L_089BE0A0;
    return;
L_089BE0A0:
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089BE0C8;
      }
      goto L_089BE0B4;
    }
L_089BE0B4:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
      if (branch_taken) {
          goto L_089BE0F4;
      }
      goto L_089BE0C8;
    }
L_089BE0C8:
    ctx.gpr[4] = (49225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BE0F4;
      }
      goto L_089BE0E4;
    }
L_089BE0E4:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089BE0F4;
L_089BE0F4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1956)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BE118;
      }
      goto L_089BE108;
    }
L_089BE108:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1956)));
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BE13C;
      }
      goto L_089BE118;
    }
L_089BE118:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1956)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BE13C;
      }
      goto L_089BE130;
    }
L_089BE130:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1956)));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BE13C;
L_089BE13C:
    ctx.gpr[31] = (0x089BE144u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089BE144u) goto L_089BE144;
    return;
L_089BE144:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BE148;
L_089BE148:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089BE158u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 490u, 0x08A05FD4u>(ctx, &aot_mem) && ctx.pc == 0x089BE158u) goto L_089BE158;
    return;
L_089BE158:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BE164u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 522u, 0x08A069A4u>(ctx, &aot_mem) && ctx.pc == 0x089BE164u) goto L_089BE164;
    return;
L_089BE164:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BE170u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE170u) goto L_089BE170;
    return;
L_089BE170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BE1B0;
      }
      goto L_089BE190;
    }
L_089BE190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
        goto L_089BE1DC;
    }
    goto L_089BE1B0;
L_089BE1B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    goto L_089BE1DC;
L_089BE1DC:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_089BE200;
    }
    goto L_089BE1E8;
L_089BE1E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_089BE200;
    }
    goto L_089BE1F4;
L_089BE1F4:
    ctx.gpr[31] = (0x089BE1FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089BE1FCu) goto L_089BE1FC;
    return;
L_089BE1FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_089BE200;
L_089BE200:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE220;
      }
      goto L_089BE20C;
    }
L_089BE20C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE220;
      }
      goto L_089BE218;
    }
L_089BE218:
    ctx.gpr[31] = (0x089BE220u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089BE220u) goto L_089BE220;
    return;
L_089BE220:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE244:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-36));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(50) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE260;
    }
L_089BE260:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-16320)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE278:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18228));
    ctx.gpr[31] = (0x089BE288u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE288u) goto L_089BE288;
    return;
L_089BE288:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE2A0;
      }
      goto L_089BE290;
    }
L_089BE290:
    ctx.gpr[31] = (0x089BE298u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE298u) goto L_089BE298;
    return;
L_089BE298:
    ctx.gpr[31] = (0x089BE2A0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE2A0u) goto L_089BE2A0;
    return;
L_089BE2A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE2A8;
    }
L_089BE2A8:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18220));
    ctx.gpr[31] = (0x089BE2B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE2B8u) goto L_089BE2B8;
    return;
L_089BE2B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE2D0;
      }
      goto L_089BE2C0;
    }
L_089BE2C0:
    ctx.gpr[31] = (0x089BE2C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE2C8u) goto L_089BE2C8;
    return;
L_089BE2C8:
    ctx.gpr[31] = (0x089BE2D0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE2D0u) goto L_089BE2D0;
    return;
L_089BE2D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE2D8;
    }
L_089BE2D8:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18212));
    ctx.gpr[31] = (0x089BE2E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE2E8u) goto L_089BE2E8;
    return;
L_089BE2E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE300;
      }
      goto L_089BE2F0;
    }
L_089BE2F0:
    ctx.gpr[31] = (0x089BE2F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE2F8u) goto L_089BE2F8;
    return;
L_089BE2F8:
    ctx.gpr[31] = (0x089BE300u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE300u) goto L_089BE300;
    return;
L_089BE300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE308;
    }
L_089BE308:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18204));
    ctx.gpr[31] = (0x089BE318u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE318u) goto L_089BE318;
    return;
L_089BE318:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE330;
      }
      goto L_089BE320;
    }
L_089BE320:
    ctx.gpr[31] = (0x089BE328u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE328u) goto L_089BE328;
    return;
L_089BE328:
    ctx.gpr[31] = (0x089BE330u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE330u) goto L_089BE330;
    return;
L_089BE330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE338;
    }
L_089BE338:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18196));
    ctx.gpr[31] = (0x089BE348u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE348u) goto L_089BE348;
    return;
L_089BE348:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE360;
      }
      goto L_089BE350;
    }
L_089BE350:
    ctx.gpr[31] = (0x089BE358u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE358u) goto L_089BE358;
    return;
L_089BE358:
    ctx.gpr[31] = (0x089BE360u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE360u) goto L_089BE360;
    return;
L_089BE360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE368;
    }
L_089BE368:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18188));
    ctx.gpr[31] = (0x089BE378u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE378u) goto L_089BE378;
    return;
L_089BE378:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE390;
      }
      goto L_089BE380;
    }
L_089BE380:
    ctx.gpr[31] = (0x089BE388u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE388u) goto L_089BE388;
    return;
L_089BE388:
    ctx.gpr[31] = (0x089BE390u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE390u) goto L_089BE390;
    return;
L_089BE390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE398;
    }
L_089BE398:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18180));
    ctx.gpr[31] = (0x089BE3A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE3A8u) goto L_089BE3A8;
    return;
L_089BE3A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE3C0;
      }
      goto L_089BE3B0;
    }
L_089BE3B0:
    ctx.gpr[31] = (0x089BE3B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE3B8u) goto L_089BE3B8;
    return;
L_089BE3B8:
    ctx.gpr[31] = (0x089BE3C0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE3C0u) goto L_089BE3C0;
    return;
L_089BE3C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE3C8;
    }
L_089BE3C8:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18172));
    ctx.gpr[31] = (0x089BE3D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE3D8u) goto L_089BE3D8;
    return;
L_089BE3D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE3F0;
      }
      goto L_089BE3E0;
    }
L_089BE3E0:
    ctx.gpr[31] = (0x089BE3E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE3E8u) goto L_089BE3E8;
    return;
L_089BE3E8:
    ctx.gpr[31] = (0x089BE3F0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE3F0u) goto L_089BE3F0;
    return;
L_089BE3F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE3F8;
    }
L_089BE3F8:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18164));
    ctx.gpr[31] = (0x089BE408u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE408u) goto L_089BE408;
    return;
L_089BE408:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE420;
      }
      goto L_089BE410;
    }
L_089BE410:
    ctx.gpr[31] = (0x089BE418u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE418u) goto L_089BE418;
    return;
L_089BE418:
    ctx.gpr[31] = (0x089BE420u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE420u) goto L_089BE420;
    return;
L_089BE420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE428;
    }
L_089BE428:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18156));
    ctx.gpr[31] = (0x089BE438u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE438u) goto L_089BE438;
    return;
L_089BE438:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE450;
      }
      goto L_089BE440;
    }
L_089BE440:
    ctx.gpr[31] = (0x089BE448u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE448u) goto L_089BE448;
    return;
L_089BE448:
    ctx.gpr[31] = (0x089BE450u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE450u) goto L_089BE450;
    return;
L_089BE450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE458;
    }
L_089BE458:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18148));
    ctx.gpr[31] = (0x089BE468u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE468u) goto L_089BE468;
    return;
L_089BE468:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE480;
      }
      goto L_089BE470;
    }
L_089BE470:
    ctx.gpr[31] = (0x089BE478u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE478u) goto L_089BE478;
    return;
L_089BE478:
    ctx.gpr[31] = (0x089BE480u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE480u) goto L_089BE480;
    return;
L_089BE480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE488;
    }
L_089BE488:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18140));
    ctx.gpr[31] = (0x089BE498u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE498u) goto L_089BE498;
    return;
L_089BE498:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE4B0;
      }
      goto L_089BE4A0;
    }
L_089BE4A0:
    ctx.gpr[31] = (0x089BE4A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE4A8u) goto L_089BE4A8;
    return;
L_089BE4A8:
    ctx.gpr[31] = (0x089BE4B0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE4B0u) goto L_089BE4B0;
    return;
L_089BE4B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE4B8;
    }
L_089BE4B8:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18132));
    ctx.gpr[31] = (0x089BE4C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE4C8u) goto L_089BE4C8;
    return;
L_089BE4C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE4E0;
      }
      goto L_089BE4D0;
    }
L_089BE4D0:
    ctx.gpr[31] = (0x089BE4D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE4D8u) goto L_089BE4D8;
    return;
L_089BE4D8:
    ctx.gpr[31] = (0x089BE4E0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE4E0u) goto L_089BE4E0;
    return;
L_089BE4E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE4E8;
    }
L_089BE4E8:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18124));
    ctx.gpr[31] = (0x089BE4F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE4F8u) goto L_089BE4F8;
    return;
L_089BE4F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE510;
      }
      goto L_089BE500;
    }
L_089BE500:
    ctx.gpr[31] = (0x089BE508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE508u) goto L_089BE508;
    return;
L_089BE508:
    ctx.gpr[31] = (0x089BE510u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE510u) goto L_089BE510;
    return;
L_089BE510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE518;
    }
L_089BE518:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18116));
    ctx.gpr[31] = (0x089BE528u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE528u) goto L_089BE528;
    return;
L_089BE528:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE540;
      }
      goto L_089BE530;
    }
L_089BE530:
    ctx.gpr[31] = (0x089BE538u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE538u) goto L_089BE538;
    return;
L_089BE538:
    ctx.gpr[31] = (0x089BE540u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE540u) goto L_089BE540;
    return;
L_089BE540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE548;
    }
L_089BE548:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18108));
    ctx.gpr[31] = (0x089BE558u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE558u) goto L_089BE558;
    return;
L_089BE558:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE570;
      }
      goto L_089BE560;
    }
L_089BE560:
    ctx.gpr[31] = (0x089BE568u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE568u) goto L_089BE568;
    return;
L_089BE568:
    ctx.gpr[31] = (0x089BE570u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE570u) goto L_089BE570;
    return;
L_089BE570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE578;
    }
L_089BE578:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18100));
    ctx.gpr[31] = (0x089BE588u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE588u) goto L_089BE588;
    return;
L_089BE588:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE5A0;
      }
      goto L_089BE590;
    }
L_089BE590:
    ctx.gpr[31] = (0x089BE598u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE598u) goto L_089BE598;
    return;
L_089BE598:
    ctx.gpr[31] = (0x089BE5A0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE5A0u) goto L_089BE5A0;
    return;
L_089BE5A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE5A8;
    }
L_089BE5A8:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18092));
    ctx.gpr[31] = (0x089BE5B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE5B8u) goto L_089BE5B8;
    return;
L_089BE5B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE5D0;
      }
      goto L_089BE5C0;
    }
L_089BE5C0:
    ctx.gpr[31] = (0x089BE5C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE5C8u) goto L_089BE5C8;
    return;
L_089BE5C8:
    ctx.gpr[31] = (0x089BE5D0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE5D0u) goto L_089BE5D0;
    return;
L_089BE5D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE5D8;
    }
L_089BE5D8:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18084));
    ctx.gpr[31] = (0x089BE5E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE5E8u) goto L_089BE5E8;
    return;
L_089BE5E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE600;
      }
      goto L_089BE5F0;
    }
L_089BE5F0:
    ctx.gpr[31] = (0x089BE5F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE5F8u) goto L_089BE5F8;
    return;
L_089BE5F8:
    ctx.gpr[31] = (0x089BE600u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE600u) goto L_089BE600;
    return;
L_089BE600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE608;
    }
L_089BE608:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18076));
    ctx.gpr[31] = (0x089BE618u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE618u) goto L_089BE618;
    return;
L_089BE618:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE630;
      }
      goto L_089BE620;
    }
L_089BE620:
    ctx.gpr[31] = (0x089BE628u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE628u) goto L_089BE628;
    return;
L_089BE628:
    ctx.gpr[31] = (0x089BE630u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE630u) goto L_089BE630;
    return;
L_089BE630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE638;
    }
L_089BE638:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18068));
    ctx.gpr[31] = (0x089BE648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE648u) goto L_089BE648;
    return;
L_089BE648:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE660;
      }
      goto L_089BE650;
    }
L_089BE650:
    ctx.gpr[31] = (0x089BE658u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE658u) goto L_089BE658;
    return;
L_089BE658:
    ctx.gpr[31] = (0x089BE660u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE660u) goto L_089BE660;
    return;
L_089BE660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE668;
    }
L_089BE668:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18060));
    ctx.gpr[31] = (0x089BE678u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE678u) goto L_089BE678;
    return;
L_089BE678:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE690;
      }
      goto L_089BE680;
    }
L_089BE680:
    ctx.gpr[31] = (0x089BE688u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE688u) goto L_089BE688;
    return;
L_089BE688:
    ctx.gpr[31] = (0x089BE690u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE690u) goto L_089BE690;
    return;
L_089BE690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE698;
    }
L_089BE698:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18052));
    ctx.gpr[31] = (0x089BE6A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE6A8u) goto L_089BE6A8;
    return;
L_089BE6A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6C0;
      }
      goto L_089BE6B0;
    }
L_089BE6B0:
    ctx.gpr[31] = (0x089BE6B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE6B8u) goto L_089BE6B8;
    return;
L_089BE6B8:
    ctx.gpr[31] = (0x089BE6C0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE6C0u) goto L_089BE6C0;
    return;
L_089BE6C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE6C8;
    }
L_089BE6C8:
    ctx.gpr[16] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-18044));
    ctx.gpr[31] = (0x089BE6D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 521u, 0x08A8B1C4u>(ctx, &aot_mem) && ctx.pc == 0x089BE6D8u) goto L_089BE6D8;
    return;
L_089BE6D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE6F0;
      }
      goto L_089BE6E0;
    }
L_089BE6E0:
    ctx.gpr[31] = (0x089BE6E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x089BE6E8u) goto L_089BE6E8;
    return;
L_089BE6E8:
    ctx.gpr[31] = (0x089BE6F0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x089BE6F0u) goto L_089BE6F0;
    return;
L_089BE6F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BE700:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-416));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[30]);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[8] = (48665u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[8] = (ctx.gpr[8] | 39322u);
    ctx.gpr[7] = (ctx.gpr[7] & 512u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[23]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[6]);
      if (branch_taken) {
          goto L_089BE790;
      }
      goto L_089BE780;
    }
L_089BE780:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE7B4;
      }
      goto L_089BE790;
    }
L_089BE790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_089BE7BC;
      }
      goto L_089BE7AC;
    }
L_089BE7AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE7D0;
      }
      goto L_089BE7B4;
    }
L_089BE7B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089BF49C;
      }
      goto L_089BE7BC;
    }
L_089BE7BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BE7D0;
      }
      goto L_089BE7CC;
    }
L_089BE7CC:
    ctx.gpr[22] = (0u | 1u);
    goto L_089BE7D0;
L_089BE7D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
        goto L_089BF170;
    }
    goto L_089BE7E0;
L_089BE7E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
        goto L_089BF170;
    }
    goto L_089BE7F0;
L_089BE7F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
        goto L_089BF170;
    }
    goto L_089BE80C;
L_089BE80C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (1u << 16u);
      if (branch_taken) {
          goto L_089BEA3C;
      }
      goto L_089BE824;
    }
L_089BE824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1264), 0u);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_089BE85C;
      }
      goto L_089BE83C;
    }
L_089BE83C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    goto L_089BE85C;
L_089BE85C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1025));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 1024u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x089BE8B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089BE8B4u) goto L_089BE8B4;
    return;
L_089BE8B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BEA20;
      }
      goto L_089BE8BC;
    }
L_089BE8BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
        goto L_089BE908;
    }
    goto L_089BE8D8;
L_089BE8D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BEA20;
      }
      goto L_089BE8F4;
    }
L_089BE8F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BEA20;
      }
      goto L_089BE904;
    }
L_089BE904:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_089BE908;
L_089BE908:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (16261u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 7864u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[22];
    ctx.gpr[5] = (ctx.gpr[7] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(336));
      if (branch_taken) {
          goto L_089BE960;
      }
      goto L_089BE94C;
    }
L_089BE94C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (48768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089BE960;
L_089BE960:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089BE970u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 591u, 0x088CB538u>(ctx, &aot_mem) && ctx.pc == 0x089BE970u) goto L_089BE970;
    return;
L_089BE970:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE9FC;
      }
      goto L_089BE978;
    }
L_089BE978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (64u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BE9B4;
      }
      goto L_089BE998;
    }
L_089BE998:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BE9E0;
      }
      goto L_089BE9B4;
    }
L_089BE9B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BE9E0;
      }
      goto L_089BE9CC;
    }
L_089BE9CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65472u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089BE9E0;
L_089BE9E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BEA18;
      }
      goto L_089BE9FC;
    }
L_089BE9FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65024u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(384), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089BEA18;
L_089BEA18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEA3C;
      }
      goto L_089BEA20;
    }
L_089BEA20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65024u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(384), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089BEA3C;
L_089BEA3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16133u << 16u);
      if (branch_taken) {
          goto L_089BF16C;
      }
      goto L_089BEA4C;
    }
L_089BEA4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[24];
      if (branch_taken) {
          goto L_089BEAE0;
      }
      goto L_089BEAAC;
    }
L_089BEAAC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_089BEAD4;
      }
      goto L_089BEAB4;
    }
L_089BEAB4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) & 0x7FFFFFFFu);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_089BEAE0;
      }
      goto L_089BEAD4;
    }
L_089BEAD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BEAE0;
L_089BEAE0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089BEAF0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 213u, 0x0899D7C8u>(ctx, &aot_mem) && ctx.pc == 0x089BEAF0u) goto L_089BEAF0;
    return;
L_089BEAF0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BF16C;
      }
      goto L_089BEB28;
    }
L_089BEB28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (16261u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(336));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_089BEBA8;
      }
      goto L_089BEB88;
    }
L_089BEB88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (48768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089BEBA8;
L_089BEBA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089BEBE8u);
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 278u, 0x088CE3B0u>(ctx, &aot_mem) && ctx.pc == 0x089BEBE8u) goto L_089BEBE8;
    return;
L_089BEBE8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089BEC60;
      }
      goto L_089BEBF0;
    }
L_089BEBF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEC60;
      }
      goto L_089BEC08;
    }
L_089BEC08:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BEC60;
      }
      goto L_089BEC10;
    }
L_089BEC10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089BEC5Cu);
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 278u, 0x088CE3B0u>(ctx, &aot_mem) && ctx.pc == 0x089BEC5Cu) goto L_089BEC5C;
    return;
L_089BEC5C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    goto L_089BEC60;
L_089BEC60:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BF158;
      }
      goto L_089BEC68;
    }
L_089BEC68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089BECC0;
      }
      goto L_089BEC78;
    }
L_089BEC78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BECC0;
      }
      goto L_089BEC94;
    }
L_089BEC94:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[4] = (16455u << 16u);
      if (branch_taken) {
          goto L_089BEE90;
      }
      goto L_089BEC9C;
    }
L_089BEC9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 44564u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BEE90;
      }
      goto L_089BECC0;
    }
L_089BECC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1296));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (64u << 16u);
      if (branch_taken) {
          goto L_089BECFC;
      }
      goto L_089BECE0;
    }
L_089BECE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEDBC;
      }
      goto L_089BECFC;
    }
L_089BECFC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1264), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1264));
    ctx.gpr[31] = (0x089BED0Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BED0Cu) goto L_089BED0C;
    return;
L_089BED0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1280));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1296), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089BED5Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BED5Cu) goto L_089BED5C;
    return;
L_089BED5C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(384), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEDA0;
      }
      goto L_089BED7C;
    }
L_089BED7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089BEDA0;
      }
      goto L_089BED8C;
    }
L_089BED8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BEDB4;
      }
      goto L_089BEDA0;
    }
L_089BEDA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65520u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089BEDB4;
L_089BEDB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEDF0;
      }
      goto L_089BEDBC;
    }
L_089BEDBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1296), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089BEDCCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089BEDCCu) goto L_089BEDCC;
    return;
L_089BEDCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65520u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089BEDF0;
L_089BEDF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BEE1C;
      }
      goto L_089BEE00;
    }
L_089BEE00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BEE48;
      }
      goto L_089BEE1C;
    }
L_089BEE1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BEE48;
      }
      goto L_089BEE34;
    }
L_089BEE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65472u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_089BEE48;
L_089BEE48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(325), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089BEE90;
      }
      goto L_089BEE58;
    }
L_089BEE58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089BEE90;
L_089BEE90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089BEE9Cu);
    ctx.gpr[5] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089BEE9Cu) goto L_089BEE9C;
    return;
L_089BEE9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089BF0D8;
      }
      goto L_089BEEB4;
    }
L_089BEEB4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16168u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 62915u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_089BEF00;
    }
    goto L_089BEEE8;
L_089BEEE8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[7] = (16384u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
        goto L_089BEF1C;
    }
    goto L_089BEEFC;
L_089BEEFC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    goto L_089BEF00;
L_089BEF00:
    ctx.gpr[6] = (48768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BF0D8;
      }
      goto L_089BEF18;
    }
L_089BEF18:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1412)));
    goto L_089BEF1C;
L_089BEF1C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089BF0D8;
      }
      goto L_089BEF24;
    }
L_089BEF24:
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15395u << 16u);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[22];
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (48768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_089BEF54;
    }
    goto L_089BEF54;
L_089BEF54:
    ctx.gpr[5] = (17096u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089BEF8C;
      }
      goto L_089BEF74;
    }
L_089BEF74:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (17302u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[24] + ctx.fpr[22];
    goto L_089BEF8C;
L_089BEF8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_089BEFE8;
      }
      goto L_089BEFA0;
    }
L_089BEFA0:
    ctx.gpr[5] = (48163u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BEFE8;
      }
      goto L_089BEFC0;
    }
L_089BEFC0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BEFE8;
      }
      goto L_089BEFD4;
    }
L_089BEFD4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BF050;
      }
      goto L_089BEFE8;
    }
L_089BEFE8:
    ctx.gpr[5] = (49024u << 16u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.gpr[31] = (0x089BF04Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 338u, 0x0899E180u>(ctx, &aot_mem) && ctx.pc == 0x089BF04Cu) goto L_089BF04C;
    return;
L_089BF04C:
    ctx.gpr[17] = (ctx.gpr[2] & 255u);
    goto L_089BF050;
L_089BF050:
    ctx.gpr[31] = (0x089BF058u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(62)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 218u, 0x089258A4u>(ctx, &aot_mem) && ctx.pc == 0x089BF058u) goto L_089BF058;
    return;
L_089BF058:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BF06C;
      }
      goto L_089BF060;
    }
L_089BF060:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_089BF06C;
L_089BF06C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 44u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089BF088u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089BF088u) goto L_089BF088;
    return;
L_089BF088:
    ctx.gpr[31] = (0x089BF090u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089BF090u) goto L_089BF090;
    return;
L_089BF090:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_089BF0D0;
      }
      goto L_089BF098;
    }
L_089BF098:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BF0D0;
      }
      goto L_089BF0AC;
    }
L_089BF0AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF0B8u);
    ctx.gpr[5] = (0u | 106u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089BF0B8u) goto L_089BF0B8;
    return;
L_089BF0B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[31] = (0x089BF0D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x089BF0D0u) goto L_089BF0D0;
    return;
L_089BF0D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BF13C;
      }
      goto L_089BF0D8;
    }
L_089BF0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BF13C;
      }
      goto L_089BF0F0;
    }
L_089BF0F0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (48259u << 16u);
      if (branch_taken) {
          goto L_089BF13C;
      }
      goto L_089BF0F8;
    }
L_089BF0F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BF13C;
      }
      goto L_089BF11C;
    }
L_089BF11C:
    ctx.gpr[9] = (16752u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 44u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089BF13Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089BF13Cu) goto L_089BF13C;
    return;
L_089BF13C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089BF16C;
      }
      goto L_089BF158;
    }
L_089BF158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65520u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089BF16C;
L_089BF16C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    goto L_089BF170;
L_089BF170:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089BF1B8u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 325u, 0x088CE900u>(ctx, &aot_mem) && ctx.pc == 0x089BF1B8u) goto L_089BF1B8;
    return;
L_089BF1B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    // nop
      if (branch_taken) {
          goto L_089BF1CC;
      }
      goto L_089BF1C4;
    }
L_089BF1C4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BF268;
      }
      goto L_089BF1CC;
    }
L_089BF1CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF1D8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 244u, 0x08A0DF48u>(ctx, &aot_mem) && ctx.pc == 0x089BF1D8u) goto L_089BF1D8;
    return;
L_089BF1D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BF200;
      }
      goto L_089BF1F4;
    }
L_089BF1F4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089BF200u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 244u, 0x08A0DF48u>(ctx, &aot_mem) && ctx.pc == 0x089BF200u) goto L_089BF200;
    return;
L_089BF200:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089BF268;
      }
      goto L_089BF208;
    }
L_089BF208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BF254;
      }
      goto L_089BF224;
    }
L_089BF224:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089BF244;
      }
      goto L_089BF234;
    }
L_089BF234:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089BF24C;
      }
      goto L_089BF244;
    }
L_089BF244:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089BF24C;
L_089BF24C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BF268;
      }
      goto L_089BF254;
    }
L_089BF254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089BF268;
L_089BF268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
        goto L_089BF2B8;
    }
    goto L_089BF284;
L_089BF284:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089BF2A4;
      }
      goto L_089BF294;
    }
L_089BF294:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089BF2AC;
      }
      goto L_089BF2A4;
    }
L_089BF2A4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089BF2AC;
L_089BF2AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BF498;
      }
      goto L_089BF2B4;
    }
L_089BF2B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    goto L_089BF2B8;
L_089BF2B8:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BF498;
      }
      goto L_089BF2CC;
    }
L_089BF2CC:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BF498;
      }
      goto L_089BF2DC;
    }
L_089BF2DC:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (49021u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (14979u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 26u);
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (64u << 16u);
    ctx.gpr[20] = (512u << 16u);
    goto L_089BF328;
L_089BF328:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BF3E8;
      }
      goto L_089BF34C;
    }
L_089BF34C:
    ctx.gpr[31] = (0x089BF354u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x089BF354u) goto L_089BF354;
    return;
L_089BF354:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
        goto L_089BF3EC;
    }
    goto L_089BF35C;
L_089BF35C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_089BF38C;
    }
    goto L_089BF384;
L_089BF384:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_089BF38C;
L_089BF38C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BF428;
      }
      goto L_089BF3CC;
    }
L_089BF3CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BF428;
      }
      goto L_089BF3E0;
    }
L_089BF3E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_089BF428;
      }
      goto L_089BF3E8;
    }
L_089BF3E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    goto L_089BF3EC;
L_089BF3EC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BF428;
      }
      goto L_089BF410;
    }
L_089BF410:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089BF428;
L_089BF428:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089BF488;
      }
      goto L_089BF47C;
    }
L_089BF47C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089BF488;
L_089BF488:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089BF328;
      }
      goto L_089BF498;
    }
L_089BF498:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_089BF49C;
L_089BF49C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BF4E0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28956)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28960)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28932)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[14] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-28952), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[15] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[11] = (48896u << 16u);
    ctx.gpr[6] = (ctx.gpr[10] + static_cast<std::uint32_t>(-28912));
    ctx.gpr[2] = (49024u << 16u);
    ctx.gpr[3] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[3] + static_cast<std::uint32_t>(-6784));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-28944), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-28948), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-28940), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-28936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-28928), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-28912), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-6784), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BF5B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089BF5DCu);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 712u, 0x0890BFC8u>(ctx, &aot_mem) && ctx.pc == 0x089BF5DCu) goto L_089BF5DC;
    return;
L_089BF5DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF5E8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089BF5E8u) goto L_089BF5E8;
    return;
L_089BF5E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x089BF5F8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 26u, 0x0890C234u>(ctx, &aot_mem) && ctx.pc == 0x089BF5F8u) goto L_089BF5F8;
    return;
L_089BF5F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF604u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089BF604u) goto L_089BF604;
    return;
L_089BF604:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x089BF614u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 26u, 0x0890C234u>(ctx, &aot_mem) && ctx.pc == 0x089BF614u) goto L_089BF614;
    return;
L_089BF614:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF620u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089BF620u) goto L_089BF620;
    return;
L_089BF620:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x089BF630u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 26u, 0x0890C234u>(ctx, &aot_mem) && ctx.pc == 0x089BF630u) goto L_089BF630;
    return;
L_089BF630:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BF64C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089BF664u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_089BF5B0;
L_089BF664:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BF670:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089BF6AC;
      }
      goto L_089BF69C;
    }
L_089BF69C:
    ctx.gpr[31] = (0x089BF6A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x089BF6A4u) goto L_089BF6A4;
    return;
L_089BF6A4:
    ctx.gpr[16] = (ctx.gpr[2] + ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089BF6AC;
L_089BF6AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BF6B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x089BF6B8u) goto L_089BF6B8;
    return;
L_089BF6B8:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089BF784;
      }
      goto L_089BF6C4;
    }
L_089BF6C4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089BF6E0;
      }
      goto L_089BF6D0;
    }
L_089BF6D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BF6DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x089BF6DCu) goto L_089BF6DC;
    return;
L_089BF6DC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_089BF6E0;
L_089BF6E0:
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
        goto L_089BF700;
    }
    goto L_089BF6E8;
L_089BF6E8:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF6FCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-16120));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 359u, 0x08A4B0F4u>(ctx, &aot_mem) && ctx.pc == 0x089BF6FCu) goto L_089BF6FC;
    return;
L_089BF6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    goto L_089BF700;
L_089BF700:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (2224u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089BF71Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11360));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BF71Cu) goto L_089BF71C;
    return;
L_089BF71C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BF738;
      }
      goto L_089BF724;
    }
L_089BF724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BF750;
      }
      goto L_089BF730;
    }
L_089BF730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_089BF770;
      }
      goto L_089BF738;
    }
L_089BF738:
    ctx.gpr[31] = (0x089BF740u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 111u, 0x08A34AF8u>(ctx, &aot_mem) && ctx.pc == 0x089BF740u) goto L_089BF740;
    return;
L_089BF740:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BF868;
      }
      goto L_089BF750;
    }
L_089BF750:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089BF760u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x089BF760u) goto L_089BF760;
    return;
L_089BF760:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_089BF770;
L_089BF770:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BF868;
      }
      goto L_089BF784;
    }
L_089BF784:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF794u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x089BF794u) goto L_089BF794;
    return;
L_089BF794:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF7A4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x089BF7A4u) goto L_089BF7A4;
    return;
L_089BF7A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF7B4u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x089BF7B4u) goto L_089BF7B4;
    return;
L_089BF7B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BF7C0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x089BF7C0u) goto L_089BF7C0;
    return;
L_089BF7C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089BF7D8;
      }
      goto L_089BF7C8;
    }
L_089BF7C8:
    ctx.gpr[31] = (0x089BF7D0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x089BF7D0u) goto L_089BF7D0;
    return;
L_089BF7D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BF800;
      }
      goto L_089BF7D8;
    }
L_089BF7D8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2226u << 16u);
      if (branch_taken) {
          goto L_089BF7EC;
      }
      goto L_089BF7E0;
    }
L_089BF7E0:
    ctx.gpr[4] = (2226u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16120));
      if (branch_taken) {
          goto L_089BF7F0;
      }
      goto L_089BF7EC;
    }
L_089BF7EC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16100));
    goto L_089BF7F0;
L_089BF7F0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BF800u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 359u, 0x08A4B0F4u>(ctx, &aot_mem) && ctx.pc == 0x089BF800u) goto L_089BF800;
    return;
L_089BF800:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BF80Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x089BF80Cu) goto L_089BF80C;
    return;
L_089BF80C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BF81Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x089BF81Cu) goto L_089BF81C;
    return;
L_089BF81C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BF82Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x089BF82Cu) goto L_089BF82C;
    return;
L_089BF82C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (49864u << 16u);
      if (branch_taken) {
          goto L_089BF848;
      }
      goto L_089BF834;
    }
L_089BF834:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BF840u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x089BF840u) goto L_089BF840;
    return;
L_089BF840:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089BF84C;
      }
      goto L_089BF848;
    }
L_089BF848:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089BF84C;
L_089BF84C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BF85Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x089BF85Cu) goto L_089BF85C;
    return;
L_089BF85C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    goto L_089BF868;
L_089BF868:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BF884:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x089BF8B8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x089BF8B8u) goto L_089BF8B8;
    return;
L_089BF8B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BF8F4;
      }
      goto L_089BF8C0;
    }
L_089BF8C0:
    ctx.gpr[31] = (0x089BF8C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x089BF8C8u) goto L_089BF8C8;
    return;
L_089BF8C8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF8D8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x089BF8D8u) goto L_089BF8D8;
    return;
L_089BF8D8:
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_089BF90C;
      }
      goto L_089BF8EC;
    }
L_089BF8EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BF94C;
      }
      goto L_089BF8F4;
    }
L_089BF8F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF900u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089BF900u) goto L_089BF900;
    return;
L_089BF900:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BFB68;
      }
      goto L_089BF90C;
    }
L_089BF90C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF91Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16092));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x089BF91Cu) goto L_089BF91C;
    return;
L_089BF91C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF928u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 703u, 0x0890BE84u>(ctx, &aot_mem) && ctx.pc == 0x089BF928u) goto L_089BF928;
    return;
L_089BF928:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF934u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x089BF934u) goto L_089BF934;
    return;
L_089BF934:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF940u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 706u, 0x0890BEF0u>(ctx, &aot_mem) && ctx.pc == 0x089BF940u) goto L_089BF940;
    return;
L_089BF940:
    ctx.gpr[31] = (0x089BF948u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x089BF948u) goto L_089BF948;
    return;
L_089BF948:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_089BF94C;
L_089BF94C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BF95Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x089BF95Cu) goto L_089BF95C;
    return;
L_089BF95C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF968u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x089BF968u) goto L_089BF968;
    return;
L_089BF968:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17279u << 16u);
      if (branch_taken) {
          goto L_089BF984;
      }
      goto L_089BF97C;
    }
L_089BF97C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089BF998;
      }
      goto L_089BF984;
    }
L_089BF984:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089BF998;
    }
    goto L_089BF998;
L_089BF998:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
        goto L_089BF9B4;
    }
    goto L_089BF9A8;
L_089BF9A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BF9C4;
      }
      goto L_089BF9B4;
    }
L_089BF9B4:
    ctx.gpr[19] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_089BF9C4;
L_089BF9C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BF9D4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x089BF9D4u) goto L_089BF9D4;
    return;
L_089BF9D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BF9E0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x089BF9E0u) goto L_089BF9E0;
    return;
L_089BF9E0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17279u << 16u);
      if (branch_taken) {
          goto L_089BF9FC;
      }
      goto L_089BF9F4;
    }
L_089BF9F4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089BFA10;
      }
      goto L_089BF9FC;
    }
L_089BF9FC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089BFA10;
    }
    goto L_089BFA10;
L_089BFA10:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
        goto L_089BFA2C;
    }
    goto L_089BFA20;
L_089BFA20:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BFA3C;
      }
      goto L_089BFA2C;
    }
L_089BFA2C:
    ctx.gpr[20] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_089BFA3C;
L_089BFA3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BFA4Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x089BFA4Cu) goto L_089BFA4C;
    return;
L_089BFA4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BFA58u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x089BFA58u) goto L_089BFA58;
    return;
L_089BFA58:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17279u << 16u);
      if (branch_taken) {
          goto L_089BFA74;
      }
      goto L_089BFA6C;
    }
L_089BFA6C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_089BFA88;
      }
      goto L_089BFA74;
    }
L_089BFA74:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089BFA88;
    }
    goto L_089BFA88;
L_089BFA88:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
        goto L_089BFAA4;
    }
    goto L_089BFA98;
L_089BFA98:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BFAB4;
      }
      goto L_089BFAA4;
    }
L_089BFAA4:
    ctx.gpr[21] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_089BFAB4;
L_089BFAB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BFAC4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x089BFAC4u) goto L_089BFAC4;
    return;
L_089BFAC4:
    ctx.gpr[17] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BFAD4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x089BFAD4u) goto L_089BFAD4;
    return;
L_089BFAD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089BFB44;
      }
      goto L_089BFADC;
    }
L_089BFADC:
    ctx.gpr[31] = (0x089BFAE4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x089BFAE4u) goto L_089BFAE4;
    return;
L_089BFAE4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089BFB00;
    }
    goto L_089BFAF8;
L_089BFAF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFB18;
      }
      goto L_089BFB00;
    }
L_089BFB00:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089BFB18;
    }
    goto L_089BFB18;
L_089BFB18:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
        goto L_089BFB34;
    }
    goto L_089BFB28;
L_089BFB28:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089BFB44;
      }
      goto L_089BFB34;
    }
L_089BFB34:
    ctx.gpr[17] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_089BFB44;
L_089BFB44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BFB50u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x089BFB50u) goto L_089BFB50;
    return;
L_089BFB50:
    ctx.gpr[4] = (ctx.gpr[21] << 8u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[20] << 16u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] << 24u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_089BFB68;
L_089BFB68:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BFB94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089BFBC0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x089BFBC0u) goto L_089BFBC0;
    return;
L_089BFBC0:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089BFBE8;
      }
      goto L_089BFBCC;
    }
L_089BFBCC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BFBD8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089BFBD8u) goto L_089BFBD8;
    return;
L_089BFBD8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089BFC84;
      }
      goto L_089BFBE8;
    }
L_089BFBE8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BFBF8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x089BFBF8u) goto L_089BFBF8;
    return;
L_089BFBF8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BFC04u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089BFC04u) goto L_089BFC04;
    return;
L_089BFC04:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BFC20u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x089BFC20u) goto L_089BFC20;
    return;
L_089BFC20:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BFC2Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x089BFC2Cu) goto L_089BFC2C;
    return;
L_089BFC2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFC44;
      }
      goto L_089BFC34;
    }
L_089BFC34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BFC40u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x089BFC40u) goto L_089BFC40;
    return;
L_089BFC40:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BFC44;
L_089BFC44:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089BFC54u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 709u, 0x0890BF54u>(ctx, &aot_mem) && ctx.pc == 0x089BFC54u) goto L_089BFC54;
    return;
L_089BFC54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BFC60u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x089BFC60u) goto L_089BFC60;
    return;
L_089BFC60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BFC78;
      }
      goto L_089BFC68;
    }
L_089BFC68:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BFC74u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x089BFC74u) goto L_089BFC74;
    return;
L_089BFC74:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BFC78;
L_089BFC78:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089BFC84u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x089BFC84u) goto L_089BFC84;
    return;
L_089BFC84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BFC9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089BFCD4u);
    ctx.gpr[7] = (0u | 1u);
    goto L_089BF670;
L_089BFCD4:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089BFCECu);
    ctx.gpr[7] = (0u | 1u);
    goto L_089BF670;
L_089BFCEC:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089BFD1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089BFD1Cu) goto L_089BFD1C;
    return;
L_089BFD1C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BFD3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x089BFD68u);
    ctx.gpr[7] = (0u | 1u);
    goto L_089BF670;
L_089BFD68:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089BFD7Cu);
    ctx.gpr[7] = (0u | 1u);
    goto L_089BF670;
L_089BFD7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[31] = (0x089BFDF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x089BFDF4u) goto L_089BFDF4;
    return;
L_089BFDF4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BFE0C:
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
    ctx.gpr[31] = (0x089BFE44u);
    ctx.gpr[7] = (0u | 1u);
    goto L_089BF670;
L_089BFE44:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089BFE5Cu);
    ctx.gpr[7] = (0u | 1u);
    goto L_089BF670;
L_089BFE5C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089BFE78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089BF64C;
L_089BFE78:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BFE98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089BFEC4;
      }
      goto L_089BFEB4;
    }
L_089BFEB4:
    ctx.gpr[31] = (0x089BFEBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089BFEBCu) goto L_089BFEBC;
    return;
L_089BFEBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2226u << 16u);
    goto L_089BFEC4;
L_089BFEC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089BFED0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16084));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x089BFED0u) goto L_089BFED0;
    return;
L_089BFED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2204u << 16u);
      if (branch_taken) {
          goto L_089BFEEC;
      }
      goto L_089BFEDC;
    }
L_089BFEDC:
    ctx.gpr[31] = (0x089BFEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089BFEE4u) goto L_089BFEE4;
    return;
L_089BFEE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2204u << 16u);
    goto L_089BFEEC;
L_089BFEEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089BFEFCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-868));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x089BFEFCu) goto L_089BFEFC;
    return;
L_089BFEFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089BFF18;
    }
    goto L_089BFF08;
L_089BFF08:
    ctx.gpr[31] = (0x089BFF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089BFF10u) goto L_089BFF10;
    return;
L_089BFF10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089BFF18;
L_089BFF18:
    ctx.gpr[31] = (0x089BFF20u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x089BFF20u) goto L_089BFF20;
    return;
L_089BFF20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089BFF3C;
      }
      goto L_089BFF2C;
    }
L_089BFF2C:
    ctx.gpr[31] = (0x089BFF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089BFF34u) goto L_089BFF34;
    return;
L_089BFF34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2226u << 16u);
    goto L_089BFF3C;
L_089BFF3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089BFF48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16072));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x089BFF48u) goto L_089BFF48;
    return;
L_089BFF48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2204u << 16u);
      if (branch_taken) {
          goto L_089BFF64;
      }
      goto L_089BFF54;
    }
L_089BFF54:
    ctx.gpr[31] = (0x089BFF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089BFF5Cu) goto L_089BFF5C;
    return;
L_089BFF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2204u << 16u);
    goto L_089BFF64;
L_089BFF64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089BFF74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-708));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x089BFF74u) goto L_089BFF74;
    return;
L_089BFF74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_089BFF90;
    }
    goto L_089BFF80;
L_089BFF80:
    ctx.gpr[31] = (0x089BFF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089BFF88u) goto L_089BFF88;
    return;
L_089BFF88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_089BFF90;
L_089BFF90:
    ctx.gpr[31] = (0x089BFF98u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 20u, 0x0890C174u>(ctx, &aot_mem) && ctx.pc == 0x089BFF98u) goto L_089BFF98;
    return;
L_089BFF98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_089BFFB4;
      }
      goto L_089BFFA4;
    }
L_089BFFA4:
    ctx.gpr[31] = (0x089BFFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089BFFACu) goto L_089BFFAC;
    return;
L_089BFFAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2226u << 16u);
    goto L_089BFFB4;
L_089BFFB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089BFFC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16060));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x089BFFC0u) goto L_089BFFC0;
    return;
L_089BFFC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2204u << 16u);
      if (branch_taken) {
          goto L_089BFFDC;
      }
      goto L_089BFFCC;
    }
L_089BFFCC:
    ctx.gpr[31] = (0x089BFFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x089BFFD4u) goto L_089BFFD4;
    return;
L_089BFFD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2204u << 16u);
    goto L_089BFFDC;
L_089BFFDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089BFFECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-500));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BD50u>(ctx, &aot_mem) && ctx.pc == 0x089BFFECu) goto L_089BFFEC;
    return;
L_089BFFEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        (void)rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 2u, 0x089C0008u>(ctx, &aot_mem); return;
    }
    goto L_089BFFF8;
L_089BFFF8:
    ctx.gpr[31] = (0x089C0000u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0110(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0110_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_110(Runtime &runtime) {
    runtime.register_generated_unit(110u, 0x089BC000u, 16384u, &recomp_unit_0110, &recomp_unit_0110_entry);
    runtime.register_function(0x089BC004u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC00Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC014u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC02Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC050u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC060u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC074u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC07Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC094u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC09Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC0B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC0B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC0C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC0E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC0F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC110u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC118u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC12Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC134u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC140u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC15Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC17Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC190u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC198u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC1A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC1B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC1B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC1C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC1E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC1F4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC1FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC204u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC21Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC228u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC230u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC240u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC248u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC258u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC264u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC274u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC294u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC29Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC2B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC2C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC2C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC2D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC2E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC2E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC300u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC314u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC32Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC334u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC33Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC360u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC378u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC380u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC388u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC39Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC3A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC3D0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC3E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC3F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC3F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC400u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC410u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC418u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC420u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC440u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC448u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC450u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC458u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC464u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC470u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC47Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC4FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC510u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC57Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC598u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC5A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC5A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC5BCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC5C4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC5D4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC5E4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC5ECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC5F4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC608u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC610u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC618u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC628u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC64Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC654u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC65Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC670u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC680u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC68Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC6C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC6C4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC6D0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC6D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC6E4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC6F4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC708u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC710u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC728u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC730u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC738u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC750u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC758u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC760u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC76Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC774u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC7A4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC874u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC8BCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC8C4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC98Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC9A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC9C4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC9E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BC9F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA08u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA34u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA48u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA50u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA54u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA5Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA60u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA7Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA90u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCA98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCAA0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCAA4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCAACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCAD4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCAE8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCAF0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCAF4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCAFCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCB00u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCB1Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCB30u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCB38u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCB40u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCB44u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCB4Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCB74u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCB88u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCB90u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCB94u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCB9Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCBA0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCBBCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCBD0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCBD8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCBE0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCBE4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCBECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC14u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC28u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC30u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC34u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC3Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC40u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC5Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC70u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC78u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC80u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC84u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCC8Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCCB0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCCD0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCCD4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCCF8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD18u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD1Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD38u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD58u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD5Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD78u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCD9Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCDB0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCDC0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCDD0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCDDCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCDF4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE00u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE18u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE24u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE3Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE48u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE60u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE6Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE84u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCE90u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCEA8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCEB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCECCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCED8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCEF0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF00u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF10u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF20u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF2Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF44u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF50u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF68u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF74u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF8Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCF98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCFB0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCFBCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCFD4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCFE0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BCFF8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD004u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD01Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD028u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD03Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD044u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD09Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD0B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD0BCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD0C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD0ECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD120u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD128u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD140u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD150u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD160u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD16Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD178u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD184u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD188u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD190u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD194u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD1D0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD1DCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD1E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD200u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD210u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD230u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD23Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD24Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD258u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD268u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD270u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD27Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD28Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD294u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD2A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD2B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD2B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD2C4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD2D4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD2DCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD2E4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD2ECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD2F4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD30Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD314u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD31Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD32Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD334u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD35Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD36Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD38Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD39Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD3BCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD3CCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD3F4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD404u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD420u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD428u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD438u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD44Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD470u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD4A4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD4ACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD4C4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD4D4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD4E4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD4F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD4FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD508u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD50Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD514u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD518u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD558u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD564u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD574u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD57Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD584u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD598u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD5A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD5B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD5BCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD5CCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD5D4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD5E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD5F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD5F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD604u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD614u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD61Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD628u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD638u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD640u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD648u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD660u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD668u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD670u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD680u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD688u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD6B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD6C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD6E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD6F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD718u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD728u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD750u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD764u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD780u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD788u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD798u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD7ACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD7D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD824u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD8E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD8ECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD8F4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD8FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD97Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD980u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD988u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD9A4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD9B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD9D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BD9FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA20u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA30u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA3Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA48u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA60u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA68u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA70u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA7Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA84u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDA8Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDAB0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDAB8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDADCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDAE0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDB04u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDB10u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDB1Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDB80u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDB90u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDB98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDBA4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDBF8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDC48u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDC4Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDC80u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDC90u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDCA8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDCBCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDCC8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDCE0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDD34u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDDB0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDDCCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDDE0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDDECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDE04u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDE30u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDE80u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDE90u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDEA0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDEB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDEF0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDF1Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDF54u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFCCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFD4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFDCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFF4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BDFFCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE000u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE008u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE010u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE02Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE034u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE03Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE044u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE050u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE058u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE060u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE074u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE07Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE08Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE094u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE0A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE0B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE0C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE0E4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE0F4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE108u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE118u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE130u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE13Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE144u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE148u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE158u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE164u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE170u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE190u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE1B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE1DCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE1E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE1F4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE1FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE200u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE20Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE218u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE220u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE244u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE260u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE278u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE288u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE290u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE298u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE2A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE2A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE2B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE2C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE2C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE2D0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE2D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE2E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE2F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE2F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE300u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE308u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE318u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE320u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE328u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE330u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE338u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE348u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE350u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE358u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE360u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE368u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE378u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE380u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE388u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE390u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE398u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE3A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE3B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE3B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE3C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE3C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE3D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE3E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE3E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE3F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE3F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE408u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE410u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE418u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE420u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE428u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE438u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE440u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE448u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE450u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE458u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE468u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE470u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE478u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE480u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE488u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE498u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE4A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE4A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE4B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE4B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE4C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE4D0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE4D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE4E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE4E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE4F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE500u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE508u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE510u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE518u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE528u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE530u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE538u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE540u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE548u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE558u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE560u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE568u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE570u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE578u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE588u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE590u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE598u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE5A0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE5A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE5B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE5C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE5C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE5D0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE5D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE5E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE5F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE5F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE600u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE608u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE618u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE620u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE628u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE630u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE638u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE648u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE650u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE658u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE660u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE668u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE678u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE680u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE688u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE690u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE698u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE6A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE6B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE6B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE6C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE6C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE6D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE6E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE6E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE6F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE700u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE780u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE790u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE7ACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE7B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE7BCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE7CCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE7D0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE7E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE7F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE80Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE824u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE83Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE85Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE8B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE8BCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE8D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE8F4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE904u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE908u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE94Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE960u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE970u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE978u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE998u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE9B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE9CCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE9E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BE9FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEA18u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEA20u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEA3Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEA4Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEAACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEAB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEAD4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEAE0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEAF0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEB28u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEB88u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEBA8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEBE8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEBF0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC08u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC10u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC5Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC60u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC68u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC78u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC94u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEC9Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BECC0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BECE0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BECFCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED0Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED5Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED7Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BED8Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEDA0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEDB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEDBCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEDCCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEDF0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEE00u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEE1Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEE34u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEE48u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEE58u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEE90u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEE9Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEEB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEEE8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEEFCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEF00u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEF18u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEF1Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEF24u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEF54u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEF74u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEF8Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEFA0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEFC0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEFD4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BEFE8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF04Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF050u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF058u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF060u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF06Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF088u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF090u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF098u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF0ACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF0B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF0D0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF0D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF0F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF0F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF11Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF13Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF158u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF16Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF170u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF1B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF1C4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF1CCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF1D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF1F4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF200u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF208u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF224u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF234u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF244u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF24Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF254u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF268u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF284u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF294u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF2A4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF2ACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF2B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF2B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF2CCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF2DCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF328u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF34Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF354u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF35Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF384u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF38Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF3CCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF3E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF3E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF3ECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF410u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF428u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF47Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF488u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF498u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF49Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF4E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF5B0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF5DCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF5E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF5F8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF604u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF614u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF620u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF630u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF64Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF664u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF670u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF69Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF6A4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF6ACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF6B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF6C4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF6D0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF6DCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF6E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF6E8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF6FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF700u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF71Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF724u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF730u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF738u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF740u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF750u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF760u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF770u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF784u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF794u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF7A4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF7B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF7C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF7C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF7D0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF7D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF7E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF7ECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF7F0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF800u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF80Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF81Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF82Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF834u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF840u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF848u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF84Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF85Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF868u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF884u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF8B8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF8C0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF8C8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF8D8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF8ECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF8F4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF900u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF90Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF91Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF928u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF934u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF940u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF948u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF94Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF95Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF968u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF97Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF984u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF998u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF9A8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF9B4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF9C4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF9D4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF9E0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF9F4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BF9FCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFA10u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFA20u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFA2Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFA3Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFA4Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFA58u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFA6Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFA74u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFA88u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFA98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFAA4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFAB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFAC4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFAD4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFADCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFAE4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFAF8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFB00u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFB18u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFB28u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFB34u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFB44u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFB50u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFB68u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFB94u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFBC0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFBCCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFBD8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFBE8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFBF8u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC04u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC20u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC2Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC34u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC40u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC44u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC54u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC60u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC68u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC74u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC78u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC84u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFC9Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFCD4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFCECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFD1Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFD3Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFD68u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFD7Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFDF4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFE0Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFE44u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFE5Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFE78u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFE98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFEB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFEBCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFEC4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFED0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFEDCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFEE4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFEECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFEFCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF08u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF10u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF18u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF20u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF2Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF34u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF3Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF48u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF54u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF5Cu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF64u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF74u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF80u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF88u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF90u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFF98u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFFA4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFFACu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFFB4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFFC0u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFFCCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFFD4u, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFFDCu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFFECu, &recomp_unit_0110, "recomp_unit_0110");
    runtime.register_function(0x089BFFF8u, &recomp_unit_0110, "recomp_unit_0110");
}
} // namespace psprecomp
