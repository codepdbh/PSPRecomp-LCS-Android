#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0030[4092] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0,
    0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0,
    0, 0, 0, 24, 0, 25, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34,
    0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44,
    0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 59, 60, 0,
    61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 64, 0, 0, 0, 65, 0, 0, 0, 66,
    0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 74, 0, 0, 0, 0, 75,
    0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85,
    0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0,
    99, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 106, 0,
    0, 107, 0, 0, 0, 108, 109, 0, 110, 0, 0, 0, 111, 112, 0, 113, 0, 0, 0, 114, 115, 0, 116, 0, 0, 0, 117, 0, 118, 0, 119, 0,
    120, 0, 0, 0, 121, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 126, 127, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 131, 0, 132, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0,
    137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0,
    147, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0,
    0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 165, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0,
    171, 0, 0, 0, 172, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0,
    188, 0, 189, 0, 190, 191, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197,
    0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 226,
    0, 227, 0, 228, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 239,
    240, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 245, 246, 0, 247, 0, 0, 0, 248, 249, 0, 250, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 256, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266,
    0, 267, 268, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 280, 281, 0, 282, 0, 0,
    0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 0, 294, 0, 295, 296, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 301, 302, 0, 303,
    0, 0, 0, 304, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 311, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 324, 325, 0, 326, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 329, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 334, 0, 335, 0,
    0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0,
    0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 348, 349, 0, 350, 0, 0, 0, 351, 0, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 0, 0,
    357, 358, 0, 359, 0, 0, 0, 360, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0,
    366, 0, 0, 0, 0, 0, 0, 0, 367, 368, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0,
    0, 0, 384, 0, 385, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0,
    393, 0, 0, 0, 394, 0, 395, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 401, 0, 0, 0, 0, 402, 0,
    0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 408, 0,
    409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 414, 415, 0, 416, 0, 417, 0,
    0, 0, 0, 0, 418, 0, 419, 0, 0, 420, 421, 0, 422, 0, 0, 423, 424, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0,
    0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 430, 431, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0,
    0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 0, 443, 444, 0, 445, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0,
    0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0,
    0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 460, 461, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0,
    0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 470, 0,
    0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 475, 476, 0, 477,
    0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 481, 482, 0, 483, 0, 0, 484, 485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0,
    487, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 492, 0, 493, 0, 494, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 499, 0, 500, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 503, 0, 504, 505, 0,
    506, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0,
    0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 517, 518, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0,
    521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0,
    527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 532, 533,
    0, 534, 0, 0, 0, 535, 0, 0, 536, 0, 537, 0, 538, 0, 539, 0, 540, 0, 0, 541, 542, 0, 543, 0, 0, 544, 545, 0, 546, 0, 0, 0,
    0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 551, 552, 0, 553, 0, 554,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 558,
    0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 563,
    0, 564, 565, 0, 566, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0, 573,
    0, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 577, 578, 0, 579, 0, 0, 0, 0, 0, 0, 580, 0, 0,
    0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0,
    585, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0,
    591, 0, 592, 593, 0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 597, 0, 598, 0, 599, 0, 600, 0, 0, 601, 602, 0, 603, 0, 0, 604, 605, 0,
    606, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 611, 612,
    0, 613, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617,
    0, 0, 0, 618, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 622, 0, 0, 623, 0, 0, 624, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 629, 0, 630, 0, 631, 0,
    0, 632, 0, 633, 0, 634, 0, 635, 0, 636, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0, 641, 0, 0, 0, 0, 0, 0,
    642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0,
    0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 654, 0, 0,
    0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 659, 660, 0, 661, 0,
    0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 667, 0, 668, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 671, 0, 672, 0, 0, 0, 0, 673, 0,
    0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 679, 0,
    0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 684, 0, 685, 0,
    0, 0, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 690, 0, 0, 0, 0, 0, 0, 0, 0, 691,
    0, 692, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 695, 696, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0,
    0, 699, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 707, 0, 708, 0, 0, 709, 0, 0, 710, 0, 711, 0, 0,
    0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 715, 0, 716, 0, 717, 0, 718, 0, 0, 719, 0, 0,
    720, 0, 721, 0, 722, 0, 723, 0, 724, 0, 725, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 728, 0, 729, 0, 730, 0, 0,
    731, 0, 0, 0, 732, 0, 733, 0, 0, 0, 734, 0, 735, 0, 736, 0, 0, 0, 737, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0,
    0, 0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 744, 0, 745, 0, 746, 0, 0, 0, 0, 747,
    0, 0, 0, 0, 748, 0, 0, 0, 0, 749, 0, 0, 0, 0, 750, 0, 751, 752, 0, 753, 0, 0, 754, 0, 0, 755, 0, 756, 0, 757, 0, 758,
    0, 0, 0, 0, 0, 759, 0, 0, 0, 760, 761, 0, 762, 0, 0, 0, 763, 764, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 767, 0,
    0, 0, 0, 0, 768, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 770, 771, 0, 772, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    774, 0, 775, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 780, 0, 781, 0, 0, 782, 0, 0, 783, 0, 784, 0,
    0, 0, 0, 785, 0, 0, 0, 0, 786, 0, 0, 0, 787, 0, 0, 788, 0, 0, 0, 0, 0, 789, 0, 0, 790, 0, 0, 0, 791, 0, 0, 792,
    0, 0, 793, 0, 794, 0, 795, 0, 796, 0, 797, 0, 0, 798, 0, 799, 0, 800, 0, 801, 0, 802, 0, 803, 0, 804, 0, 0, 0, 0, 805, 0,
    0, 0, 0, 0, 0, 0, 806, 0, 807, 0, 808, 0, 0, 809, 0, 0, 0, 810, 0, 811, 0, 0, 0, 812, 0, 813, 0, 814, 0, 815, 0, 0,
    0, 0, 816, 0, 0, 0, 0, 817, 0, 0, 0, 0, 818, 0, 0, 0, 0, 819, 0, 0, 0, 0, 820, 0, 0, 0, 0, 821, 0, 822, 0, 823,
    0, 0, 0, 0, 824, 0, 0, 0, 0, 825, 0, 0, 0, 0, 826, 0, 0, 0, 0, 827, 0, 828, 829, 0, 830, 0, 0, 831, 0, 0, 832, 0,
    833, 0, 834, 0, 835, 0, 0, 0, 0, 0, 836, 0, 0, 837, 838, 0, 839, 0, 0, 840, 841, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 843,
    0, 844, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 846, 0, 0, 0, 0, 0, 0, 0, 847, 848, 0, 849, 0, 850, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 851, 0, 852, 0, 0, 0, 0, 0, 0, 0, 853, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 857, 0, 858, 0, 0, 859, 0, 0, 860, 0, 861, 0, 0, 0, 0, 862,
    0, 0, 0, 0, 863, 0, 0, 0, 864, 0, 0, 865, 0, 866, 0, 0, 867, 0, 868, 0, 869, 0, 870, 0, 871, 0, 872, 0, 0, 0, 0, 873,
    0, 0, 0, 0, 0, 0, 0, 874, 0, 875, 0, 876, 0, 0, 877, 0, 0, 0, 878, 0, 879, 0, 0, 0, 880, 0, 881, 0, 882, 0, 0, 0,
    0, 0, 0, 883, 0, 0, 0, 0, 884, 0, 0, 0, 0, 885, 0, 0, 0, 0, 886, 0, 0, 0, 0, 887, 0, 0, 0, 0, 888, 0, 0, 0,
    0, 889, 0, 890, 0, 0, 0, 0, 891, 0, 0, 0, 0, 892, 0, 0, 0, 0, 893, 0, 0, 0, 0, 894, 895, 0, 0, 0, 0, 0, 0, 0,
    0, 896, 0, 897, 0, 0, 0, 0, 0, 898, 0, 0, 0, 0, 899, 0, 0, 0, 0, 0, 0, 0, 900, 901, 0, 902, 0, 903,
};
void recomp_unit_0030_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0887C000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0030[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0887C000;
    case 2u: goto L_0887C020;
    case 3u: goto L_0887C02C;
    case 4u: goto L_0887C044;
    case 5u: goto L_0887C050;
    case 6u: goto L_0887C078;
    case 7u: goto L_0887C090;
    case 8u: goto L_0887C0E0;
    case 9u: goto L_0887C0EC;
    case 10u: goto L_0887C0F8;
    case 11u: goto L_0887C104;
    case 12u: goto L_0887C110;
    case 13u: goto L_0887C120;
    case 14u: goto L_0887C128;
    case 15u: goto L_0887C134;
    case 16u: goto L_0887C13C;
    case 17u: goto L_0887C144;
    case 18u: goto L_0887C154;
    case 19u: goto L_0887C180;
    case 20u: goto L_0887C1D0;
    case 21u: goto L_0887C1DC;
    case 22u: goto L_0887C1E8;
    case 23u: goto L_0887C1F4;
    case 24u: goto L_0887C20C;
    case 25u: goto L_0887C214;
    case 26u: goto L_0887C21C;
    case 27u: goto L_0887C22C;
    case 28u: goto L_0887C258;
    case 29u: goto L_0887C2B0;
    case 30u: goto L_0887C2BC;
    case 31u: goto L_0887C2C8;
    case 32u: goto L_0887C2D4;
    case 33u: goto L_0887C2F4;
    case 34u: goto L_0887C2FC;
    case 35u: goto L_0887C304;
    case 36u: goto L_0887C314;
    case 37u: goto L_0887C344;
    case 38u: goto L_0887C3A4;
    case 39u: goto L_0887C3B0;
    case 40u: goto L_0887C3BC;
    case 41u: goto L_0887C3C8;
    case 42u: goto L_0887C3EC;
    case 43u: goto L_0887C3F4;
    case 44u: goto L_0887C3FC;
    case 45u: goto L_0887C40C;
    case 46u: goto L_0887C440;
    case 47u: goto L_0887C4A0;
    case 48u: goto L_0887C4AC;
    case 49u: goto L_0887C4B8;
    case 50u: goto L_0887C4C4;
    case 51u: goto L_0887C4E0;
    case 52u: goto L_0887C4E8;
    case 53u: goto L_0887C4F0;
    case 54u: goto L_0887C500;
    case 55u: goto L_0887C530;
    case 56u: goto L_0887C540;
    case 57u: goto L_0887C554;
    case 58u: goto L_0887C56C;
    case 59u: goto L_0887C574;
    case 60u: goto L_0887C578;
    case 61u: goto L_0887C580;
    case 62u: goto L_0887C5CC;
    case 63u: goto L_0887C5D8;
    case 64u: goto L_0887C5DC;
    case 65u: goto L_0887C5EC;
    case 66u: goto L_0887C5FC;
    case 67u: goto L_0887C604;
    case 68u: goto L_0887C60C;
    case 69u: goto L_0887C61C;
    case 70u: goto L_0887C62C;
    case 71u: goto L_0887C634;
    case 72u: goto L_0887C640;
    case 73u: goto L_0887C664;
    case 74u: goto L_0887C668;
    case 75u: goto L_0887C67C;
    case 76u: goto L_0887C690;
    case 77u: goto L_0887C69C;
    case 78u: goto L_0887C6A4;
    case 79u: goto L_0887C6AC;
    case 80u: goto L_0887C6B8;
    case 81u: goto L_0887C6C4;
    case 82u: goto L_0887C6CC;
    case 83u: goto L_0887C6D8;
    case 84u: goto L_0887C6F4;
    case 85u: goto L_0887C6FC;
    case 86u: goto L_0887C710;
    case 87u: goto L_0887C744;
    case 88u: goto L_0887C750;
    case 89u: goto L_0887C75C;
    case 90u: goto L_0887C788;
    case 91u: goto L_0887C790;
    case 92u: goto L_0887C79C;
    case 93u: goto L_0887C7A4;
    case 94u: goto L_0887C7B4;
    case 95u: goto L_0887C7BC;
    case 96u: goto L_0887C7CC;
    case 97u: goto L_0887C7E4;
    case 98u: goto L_0887C7F8;
    case 99u: goto L_0887C800;
    case 100u: goto L_0887C804;
    case 101u: goto L_0887C80C;
    case 102u: goto L_0887C82C;
    case 103u: goto L_0887C838;
    case 104u: goto L_0887C864;
    case 105u: goto L_0887C86C;
    case 106u: goto L_0887C878;
    case 107u: goto L_0887C884;
    case 108u: goto L_0887C894;
    case 109u: goto L_0887C898;
    case 110u: goto L_0887C8A0;
    case 111u: goto L_0887C8B0;
    case 112u: goto L_0887C8B4;
    case 113u: goto L_0887C8BC;
    case 114u: goto L_0887C8CC;
    case 115u: goto L_0887C8D0;
    case 116u: goto L_0887C8D8;
    case 117u: goto L_0887C8E8;
    case 118u: goto L_0887C8F0;
    case 119u: goto L_0887C8F8;
    case 120u: goto L_0887C900;
    case 121u: goto L_0887C910;
    case 122u: goto L_0887C918;
    case 123u: goto L_0887C92C;
    case 124u: goto L_0887C944;
    case 125u: goto L_0887C958;
    case 126u: goto L_0887C960;
    case 127u: goto L_0887C964;
    case 128u: goto L_0887C974;
    case 129u: goto L_0887C9A0;
    case 130u: goto L_0887C9A8;
    case 131u: goto L_0887C9AC;
    case 132u: goto L_0887C9B4;
    case 133u: goto L_0887C9CC;
    case 134u: goto L_0887C9E0;
    case 135u: goto L_0887C9EC;
    case 136u: goto L_0887C9F8;
    case 137u: goto L_0887CA00;
    case 138u: goto L_0887CA2C;
    case 139u: goto L_0887CA34;
    case 140u: goto L_0887CA44;
    case 141u: goto L_0887CA4C;
    case 142u: goto L_0887CA54;
    case 143u: goto L_0887CA60;
    case 144u: goto L_0887CA68;
    case 145u: goto L_0887CA70;
    case 146u: goto L_0887CA78;
    case 147u: goto L_0887CA80;
    case 148u: goto L_0887CA9C;
    case 149u: goto L_0887CAA4;
    case 150u: goto L_0887CAB4;
    case 151u: goto L_0887CAC8;
    case 152u: goto L_0887CAE8;
    case 153u: goto L_0887CAF8;
    case 154u: goto L_0887CB10;
    case 155u: goto L_0887CB20;
    case 156u: goto L_0887CB2C;
    case 157u: goto L_0887CB38;
    case 158u: goto L_0887CB44;
    case 159u: goto L_0887CB50;
    case 160u: goto L_0887CB58;
    case 161u: goto L_0887CB68;
    case 162u: goto L_0887CB74;
    case 163u: goto L_0887CB90;
    case 164u: goto L_0887CBA4;
    case 165u: goto L_0887CBAC;
    case 166u: goto L_0887CBB0;
    case 167u: goto L_0887CBC0;
    case 168u: goto L_0887CBD0;
    case 169u: goto L_0887CBE4;
    case 170u: goto L_0887CBF4;
    case 171u: goto L_0887CC00;
    case 172u: goto L_0887CC10;
    case 173u: goto L_0887CC1C;
    case 174u: goto L_0887CC24;
    case 175u: goto L_0887CC2C;
    case 176u: goto L_0887CC40;
    case 177u: goto L_0887CC84;
    case 178u: goto L_0887CC8C;
    case 179u: goto L_0887CC94;
    case 180u: goto L_0887CC9C;
    case 181u: goto L_0887CCA8;
    case 182u: goto L_0887CCC0;
    case 183u: goto L_0887CCC8;
    case 184u: goto L_0887CCD4;
    case 185u: goto L_0887CCDC;
    case 186u: goto L_0887CCEC;
    case 187u: goto L_0887CCF4;
    case 188u: goto L_0887CD00;
    case 189u: goto L_0887CD08;
    case 190u: goto L_0887CD10;
    case 191u: goto L_0887CD14;
    case 192u: goto L_0887CD1C;
    case 193u: goto L_0887CD2C;
    case 194u: goto L_0887CD3C;
    case 195u: goto L_0887CD58;
    case 196u: goto L_0887CD6C;
    case 197u: goto L_0887CD7C;
    case 198u: goto L_0887CD94;
    case 199u: goto L_0887CDBC;
    case 200u: goto L_0887CDCC;
    case 201u: goto L_0887CDD4;
    case 202u: goto L_0887CDE4;
    case 203u: goto L_0887CE28;
    case 204u: goto L_0887CE30;
    case 205u: goto L_0887CF28;
    case 206u: goto L_0887CF2C;
    case 207u: goto L_0887CF3C;
    case 208u: goto L_0887CF6C;
    case 209u: goto L_0887CF8C;
    case 210u: goto L_0887CF94;
    case 211u: goto L_0887CFC8;
    case 212u: goto L_0887CFD4;
    case 213u: goto L_0887CFF0;
    case 214u: goto L_0887D008;
    case 215u: goto L_0887D028;
    case 216u: goto L_0887D164;
    case 217u: goto L_0887D16C;
    case 218u: goto L_0887D1A4;
    case 219u: goto L_0887D1AC;
    case 220u: goto L_0887D20C;
    case 221u: goto L_0887D218;
    case 222u: goto L_0887D220;
    case 223u: goto L_0887D230;
    case 224u: goto L_0887D25C;
    case 225u: goto L_0887D274;
    case 226u: goto L_0887D27C;
    case 227u: goto L_0887D284;
    case 228u: goto L_0887D28C;
    case 229u: goto L_0887D294;
    case 230u: goto L_0887D29C;
    case 231u: goto L_0887D2B0;
    case 232u: goto L_0887D2CC;
    case 233u: goto L_0887D2E4;
    case 234u: goto L_0887D2F8;
    case 235u: goto L_0887D324;
    case 236u: goto L_0887D344;
    case 237u: goto L_0887D35C;
    case 238u: goto L_0887D364;
    case 239u: goto L_0887D37C;
    case 240u: goto L_0887D380;
    case 241u: goto L_0887D38C;
    case 242u: goto L_0887D394;
    case 243u: goto L_0887D3AC;
    case 244u: goto L_0887D3B4;
    case 245u: goto L_0887D3C4;
    case 246u: goto L_0887D3C8;
    case 247u: goto L_0887D3D0;
    case 248u: goto L_0887D3E0;
    case 249u: goto L_0887D3E4;
    case 250u: goto L_0887D3EC;
    case 251u: goto L_0887D410;
    case 252u: goto L_0887D418;
    case 253u: goto L_0887D430;
    case 254u: goto L_0887D444;
    case 255u: goto L_0887D464;
    case 256u: goto L_0887D468;
    case 257u: goto L_0887D470;
    case 258u: goto L_0887D490;
    case 259u: goto L_0887D4A8;
    case 260u: goto L_0887D4CC;
    case 261u: goto L_0887D4DC;
    case 262u: goto L_0887D4E4;
    case 263u: goto L_0887D4EC;
    case 264u: goto L_0887D528;
    case 265u: goto L_0887D570;
    case 266u: goto L_0887D57C;
    case 267u: goto L_0887D584;
    case 268u: goto L_0887D588;
    case 269u: goto L_0887D590;
    case 270u: goto L_0887D5A4;
    case 271u: goto L_0887D5AC;
    case 272u: goto L_0887D5C0;
    case 273u: goto L_0887D5F4;
    case 274u: goto L_0887D608;
    case 275u: goto L_0887D620;
    case 276u: goto L_0887D62C;
    case 277u: goto L_0887D644;
    case 278u: goto L_0887D650;
    case 279u: goto L_0887D65C;
    case 280u: goto L_0887D668;
    case 281u: goto L_0887D66C;
    case 282u: goto L_0887D674;
    case 283u: goto L_0887D690;
    case 284u: goto L_0887D6AC;
    case 285u: goto L_0887D6C8;
    case 286u: goto L_0887D6E4;
    case 287u: goto L_0887D700;
    case 288u: goto L_0887D71C;
    case 289u: goto L_0887D724;
    case 290u: goto L_0887D72C;
    case 291u: goto L_0887D748;
    case 292u: goto L_0887D764;
    case 293u: goto L_0887D780;
    case 294u: goto L_0887D79C;
    case 295u: goto L_0887D7A4;
    case 296u: goto L_0887D7A8;
    case 297u: goto L_0887D7B0;
    case 298u: goto L_0887D7C0;
    case 299u: goto L_0887D7D8;
    case 300u: goto L_0887D7E0;
    case 301u: goto L_0887D7F0;
    case 302u: goto L_0887D7F4;
    case 303u: goto L_0887D7FC;
    case 304u: goto L_0887D80C;
    case 305u: goto L_0887D810;
    case 306u: goto L_0887D818;
    case 307u: goto L_0887D83C;
    case 308u: goto L_0887D844;
    case 309u: goto L_0887D85C;
    case 310u: goto L_0887D870;
    case 311u: goto L_0887D890;
    case 312u: goto L_0887D894;
    case 313u: goto L_0887D89C;
    case 314u: goto L_0887D8A4;
    case 315u: goto L_0887D8D8;
    case 316u: goto L_0887D8E0;
    case 317u: goto L_0887D910;
    case 318u: goto L_0887D920;
    case 319u: goto L_0887D928;
    case 320u: goto L_0887D930;
    case 321u: goto L_0887D95C;
    case 322u: goto L_0887D99C;
    case 323u: goto L_0887D9A8;
    case 324u: goto L_0887D9B0;
    case 325u: goto L_0887D9B4;
    case 326u: goto L_0887D9BC;
    case 327u: goto L_0887D9D0;
    case 328u: goto L_0887D9D8;
    case 329u: goto L_0887D9EC;
    case 330u: goto L_0887DA20;
    case 331u: goto L_0887DA34;
    case 332u: goto L_0887DA60;
    case 333u: goto L_0887DA6C;
    case 334u: goto L_0887DA70;
    case 335u: goto L_0887DA78;
    case 336u: goto L_0887DA94;
    case 337u: goto L_0887DAB0;
    case 338u: goto L_0887DACC;
    case 339u: goto L_0887DAE8;
    case 340u: goto L_0887DB04;
    case 341u: goto L_0887DB20;
    case 342u: goto L_0887DB28;
    case 343u: goto L_0887DB30;
    case 344u: goto L_0887DB4C;
    case 345u: goto L_0887DB68;
    case 346u: goto L_0887DB84;
    case 347u: goto L_0887DBA0;
    case 348u: goto L_0887DBA8;
    case 349u: goto L_0887DBAC;
    case 350u: goto L_0887DBB4;
    case 351u: goto L_0887DBC4;
    case 352u: goto L_0887DBD0;
    case 353u: goto L_0887DBD8;
    case 354u: goto L_0887DBE0;
    case 355u: goto L_0887DBE8;
    case 356u: goto L_0887DBF0;
    case 357u: goto L_0887DC00;
    case 358u: goto L_0887DC04;
    case 359u: goto L_0887DC0C;
    case 360u: goto L_0887DC1C;
    case 361u: goto L_0887DC20;
    case 362u: goto L_0887DC28;
    case 363u: goto L_0887DC4C;
    case 364u: goto L_0887DC54;
    case 365u: goto L_0887DC6C;
    case 366u: goto L_0887DC80;
    case 367u: goto L_0887DCA0;
    case 368u: goto L_0887DCA4;
    case 369u: goto L_0887DCAC;
    case 370u: goto L_0887DCB4;
    case 371u: goto L_0887DCE8;
    case 372u: goto L_0887DCF0;
    case 373u: goto L_0887DD24;
    case 374u: goto L_0887DD34;
    case 375u: goto L_0887DD3C;
    case 376u: goto L_0887DD44;
    case 377u: goto L_0887DD6C;
    case 378u: goto L_0887DDAC;
    case 379u: goto L_0887DDB8;
    case 380u: goto L_0887DDC0;
    case 381u: goto L_0887DDD0;
    case 382u: goto L_0887DDE4;
    case 383u: goto L_0887DDF0;
    case 384u: goto L_0887DE08;
    case 385u: goto L_0887DE10;
    case 386u: goto L_0887DE18;
    case 387u: goto L_0887DE24;
    case 388u: goto L_0887DE3C;
    case 389u: goto L_0887DE48;
    case 390u: goto L_0887DE50;
    case 391u: goto L_0887DE68;
    case 392u: goto L_0887DE70;
    case 393u: goto L_0887DE80;
    case 394u: goto L_0887DE90;
    case 395u: goto L_0887DE98;
    case 396u: goto L_0887DEA0;
    case 397u: goto L_0887DEAC;
    case 398u: goto L_0887DEC4;
    case 399u: goto L_0887DED0;
    case 400u: goto L_0887DED8;
    case 401u: goto L_0887DEE4;
    case 402u: goto L_0887DEF8;
    case 403u: goto L_0887DF10;
    case 404u: goto L_0887DF28;
    case 405u: goto L_0887DF40;
    case 406u: goto L_0887DF58;
    case 407u: goto L_0887DF70;
    case 408u: goto L_0887DF78;
    case 409u: goto L_0887DF80;
    case 410u: goto L_0887DF94;
    case 411u: goto L_0887DFAC;
    case 412u: goto L_0887DFC4;
    case 413u: goto L_0887DFDC;
    case 414u: goto L_0887DFE4;
    case 415u: goto L_0887DFE8;
    case 416u: goto L_0887DFF0;
    case 417u: goto L_0887DFF8;
    case 418u: goto L_0887E010;
    case 419u: goto L_0887E018;
    case 420u: goto L_0887E024;
    case 421u: goto L_0887E028;
    case 422u: goto L_0887E030;
    case 423u: goto L_0887E03C;
    case 424u: goto L_0887E040;
    case 425u: goto L_0887E048;
    case 426u: goto L_0887E06C;
    case 427u: goto L_0887E074;
    case 428u: goto L_0887E08C;
    case 429u: goto L_0887E0A0;
    case 430u: goto L_0887E0C0;
    case 431u: goto L_0887E0C4;
    case 432u: goto L_0887E0CC;
    case 433u: goto L_0887E0E8;
    case 434u: goto L_0887E104;
    case 435u: goto L_0887E10C;
    case 436u: goto L_0887E128;
    case 437u: goto L_0887E138;
    case 438u: goto L_0887E140;
    case 439u: goto L_0887E148;
    case 440u: goto L_0887E16C;
    case 441u: goto L_0887E1B4;
    case 442u: goto L_0887E1C0;
    case 443u: goto L_0887E1C8;
    case 444u: goto L_0887E1CC;
    case 445u: goto L_0887E1D4;
    case 446u: goto L_0887E1E8;
    case 447u: goto L_0887E1F0;
    case 448u: goto L_0887E204;
    case 449u: goto L_0887E214;
    case 450u: goto L_0887E224;
    case 451u: goto L_0887E230;
    case 452u: goto L_0887E23C;
    case 453u: goto L_0887E254;
    case 454u: goto L_0887E260;
    case 455u: goto L_0887E26C;
    case 456u: goto L_0887E278;
    case 457u: goto L_0887E290;
    case 458u: goto L_0887E29C;
    case 459u: goto L_0887E2A8;
    case 460u: goto L_0887E2B4;
    case 461u: goto L_0887E2B8;
    case 462u: goto L_0887E2C0;
    case 463u: goto L_0887E2DC;
    case 464u: goto L_0887E2F8;
    case 465u: goto L_0887E314;
    case 466u: goto L_0887E330;
    case 467u: goto L_0887E34C;
    case 468u: goto L_0887E368;
    case 469u: goto L_0887E370;
    case 470u: goto L_0887E378;
    case 471u: goto L_0887E394;
    case 472u: goto L_0887E3B0;
    case 473u: goto L_0887E3CC;
    case 474u: goto L_0887E3E8;
    case 475u: goto L_0887E3F0;
    case 476u: goto L_0887E3F4;
    case 477u: goto L_0887E3FC;
    case 478u: goto L_0887E40C;
    case 479u: goto L_0887E424;
    case 480u: goto L_0887E42C;
    case 481u: goto L_0887E438;
    case 482u: goto L_0887E43C;
    case 483u: goto L_0887E444;
    case 484u: goto L_0887E450;
    case 485u: goto L_0887E454;
    case 486u: goto L_0887E45C;
    case 487u: goto L_0887E480;
    case 488u: goto L_0887E488;
    case 489u: goto L_0887E4A0;
    case 490u: goto L_0887E4B4;
    case 491u: goto L_0887E4D4;
    case 492u: goto L_0887E4D8;
    case 493u: goto L_0887E4E0;
    case 494u: goto L_0887E4E8;
    case 495u: goto L_0887E51C;
    case 496u: goto L_0887E524;
    case 497u: goto L_0887E558;
    case 498u: goto L_0887E568;
    case 499u: goto L_0887E570;
    case 500u: goto L_0887E578;
    case 501u: goto L_0887E5A0;
    case 502u: goto L_0887E5E0;
    case 503u: goto L_0887E5EC;
    case 504u: goto L_0887E5F4;
    case 505u: goto L_0887E5F8;
    case 506u: goto L_0887E600;
    case 507u: goto L_0887E614;
    case 508u: goto L_0887E61C;
    case 509u: goto L_0887E630;
    case 510u: goto L_0887E640;
    case 511u: goto L_0887E654;
    case 512u: goto L_0887E660;
    case 513u: goto L_0887E66C;
    case 514u: goto L_0887E684;
    case 515u: goto L_0887E690;
    case 516u: goto L_0887E6B0;
    case 517u: goto L_0887E6BC;
    case 518u: goto L_0887E6C0;
    case 519u: goto L_0887E6C8;
    case 520u: goto L_0887E6E4;
    case 521u: goto L_0887E700;
    case 522u: goto L_0887E71C;
    case 523u: goto L_0887E738;
    case 524u: goto L_0887E754;
    case 525u: goto L_0887E770;
    case 526u: goto L_0887E778;
    case 527u: goto L_0887E780;
    case 528u: goto L_0887E79C;
    case 529u: goto L_0887E7B8;
    case 530u: goto L_0887E7D4;
    case 531u: goto L_0887E7F0;
    case 532u: goto L_0887E7F8;
    case 533u: goto L_0887E7FC;
    case 534u: goto L_0887E804;
    case 535u: goto L_0887E814;
    case 536u: goto L_0887E820;
    case 537u: goto L_0887E828;
    case 538u: goto L_0887E830;
    case 539u: goto L_0887E838;
    case 540u: goto L_0887E840;
    case 541u: goto L_0887E84C;
    case 542u: goto L_0887E850;
    case 543u: goto L_0887E858;
    case 544u: goto L_0887E864;
    case 545u: goto L_0887E868;
    case 546u: goto L_0887E870;
    case 547u: goto L_0887E894;
    case 548u: goto L_0887E89C;
    case 549u: goto L_0887E8B4;
    case 550u: goto L_0887E8C8;
    case 551u: goto L_0887E8E8;
    case 552u: goto L_0887E8EC;
    case 553u: goto L_0887E8F4;
    case 554u: goto L_0887E8FC;
    case 555u: goto L_0887E930;
    case 556u: goto L_0887E938;
    case 557u: goto L_0887E96C;
    case 558u: goto L_0887E97C;
    case 559u: goto L_0887E984;
    case 560u: goto L_0887E98C;
    case 561u: goto L_0887E9B0;
    case 562u: goto L_0887E9F0;
    case 563u: goto L_0887E9FC;
    case 564u: goto L_0887EA04;
    case 565u: goto L_0887EA08;
    case 566u: goto L_0887EA10;
    case 567u: goto L_0887EA24;
    case 568u: goto L_0887EA2C;
    case 569u: goto L_0887EA40;
    case 570u: goto L_0887EA50;
    case 571u: goto L_0887EA64;
    case 572u: goto L_0887EA70;
    case 573u: goto L_0887EA7C;
    case 574u: goto L_0887EA94;
    case 575u: goto L_0887EAA0;
    case 576u: goto L_0887EAC0;
    case 577u: goto L_0887EACC;
    case 578u: goto L_0887EAD0;
    case 579u: goto L_0887EAD8;
    case 580u: goto L_0887EAF4;
    case 581u: goto L_0887EB10;
    case 582u: goto L_0887EB2C;
    case 583u: goto L_0887EB48;
    case 584u: goto L_0887EB64;
    case 585u: goto L_0887EB80;
    case 586u: goto L_0887EB88;
    case 587u: goto L_0887EB90;
    case 588u: goto L_0887EBAC;
    case 589u: goto L_0887EBC8;
    case 590u: goto L_0887EBE4;
    case 591u: goto L_0887EC00;
    case 592u: goto L_0887EC08;
    case 593u: goto L_0887EC0C;
    case 594u: goto L_0887EC14;
    case 595u: goto L_0887EC24;
    case 596u: goto L_0887EC30;
    case 597u: goto L_0887EC38;
    case 598u: goto L_0887EC40;
    case 599u: goto L_0887EC48;
    case 600u: goto L_0887EC50;
    case 601u: goto L_0887EC5C;
    case 602u: goto L_0887EC60;
    case 603u: goto L_0887EC68;
    case 604u: goto L_0887EC74;
    case 605u: goto L_0887EC78;
    case 606u: goto L_0887EC80;
    case 607u: goto L_0887ECA4;
    case 608u: goto L_0887ECAC;
    case 609u: goto L_0887ECC4;
    case 610u: goto L_0887ECD8;
    case 611u: goto L_0887ECF8;
    case 612u: goto L_0887ECFC;
    case 613u: goto L_0887ED04;
    case 614u: goto L_0887ED0C;
    case 615u: goto L_0887ED40;
    case 616u: goto L_0887ED48;
    case 617u: goto L_0887ED7C;
    case 618u: goto L_0887ED8C;
    case 619u: goto L_0887ED94;
    case 620u: goto L_0887ED9C;
    case 621u: goto L_0887EDC0;
    case 622u: goto L_0887EE04;
    case 623u: goto L_0887EE10;
    case 624u: goto L_0887EE1C;
    case 625u: goto L_0887EE24;
    case 626u: goto L_0887EE38;
    case 627u: goto L_0887EE4C;
    case 628u: goto L_0887EE5C;
    case 629u: goto L_0887EE68;
    case 630u: goto L_0887EE70;
    case 631u: goto L_0887EE78;
    case 632u: goto L_0887EE84;
    case 633u: goto L_0887EE8C;
    case 634u: goto L_0887EE94;
    case 635u: goto L_0887EE9C;
    case 636u: goto L_0887EEA4;
    case 637u: goto L_0887EEAC;
    case 638u: goto L_0887EEB8;
    case 639u: goto L_0887EED0;
    case 640u: goto L_0887EEDC;
    case 641u: goto L_0887EEE4;
    case 642u: goto L_0887EF00;
    case 643u: goto L_0887EF14;
    case 644u: goto L_0887EF2C;
    case 645u: goto L_0887EF44;
    case 646u: goto L_0887EF5C;
    case 647u: goto L_0887EF74;
    case 648u: goto L_0887EF8C;
    case 649u: goto L_0887EF94;
    case 650u: goto L_0887EFA8;
    case 651u: goto L_0887EFC0;
    case 652u: goto L_0887EFD8;
    case 653u: goto L_0887EFF0;
    case 654u: goto L_0887EFF4;
    case 655u: goto L_0887F018;
    case 656u: goto L_0887F020;
    case 657u: goto L_0887F038;
    case 658u: goto L_0887F04C;
    case 659u: goto L_0887F06C;
    case 660u: goto L_0887F070;
    case 661u: goto L_0887F078;
    case 662u: goto L_0887F094;
    case 663u: goto L_0887F0B0;
    case 664u: goto L_0887F0B8;
    case 665u: goto L_0887F0D4;
    case 666u: goto L_0887F0E4;
    case 667u: goto L_0887F0EC;
    case 668u: goto L_0887F0F4;
    case 669u: goto L_0887F11C;
    case 670u: goto L_0887F150;
    case 671u: goto L_0887F15C;
    case 672u: goto L_0887F164;
    case 673u: goto L_0887F178;
    case 674u: goto L_0887F18C;
    case 675u: goto L_0887F19C;
    case 676u: goto L_0887F1B8;
    case 677u: goto L_0887F1C8;
    case 678u: goto L_0887F1E4;
    case 679u: goto L_0887F1F8;
    case 680u: goto L_0887F210;
    case 681u: goto L_0887F228;
    case 682u: goto L_0887F240;
    case 683u: goto L_0887F258;
    case 684u: goto L_0887F270;
    case 685u: goto L_0887F278;
    case 686u: goto L_0887F28C;
    case 687u: goto L_0887F2A4;
    case 688u: goto L_0887F2BC;
    case 689u: goto L_0887F2D4;
    case 690u: goto L_0887F2D8;
    case 691u: goto L_0887F2FC;
    case 692u: goto L_0887F304;
    case 693u: goto L_0887F31C;
    case 694u: goto L_0887F330;
    case 695u: goto L_0887F350;
    case 696u: goto L_0887F354;
    case 697u: goto L_0887F35C;
    case 698u: goto L_0887F370;
    case 699u: goto L_0887F384;
    case 700u: goto L_0887F38C;
    case 701u: goto L_0887F3A4;
    case 702u: goto L_0887F3B4;
    case 703u: goto L_0887F3BC;
    case 704u: goto L_0887F3C4;
    case 705u: goto L_0887F3E4;
    case 706u: goto L_0887F440;
    case 707u: goto L_0887F44C;
    case 708u: goto L_0887F454;
    case 709u: goto L_0887F460;
    case 710u: goto L_0887F46C;
    case 711u: goto L_0887F474;
    case 712u: goto L_0887F484;
    case 713u: goto L_0887F4B8;
    case 714u: goto L_0887F4C4;
    case 715u: goto L_0887F4D0;
    case 716u: goto L_0887F4D8;
    case 717u: goto L_0887F4E0;
    case 718u: goto L_0887F4E8;
    case 719u: goto L_0887F4F4;
    case 720u: goto L_0887F500;
    case 721u: goto L_0887F508;
    case 722u: goto L_0887F510;
    case 723u: goto L_0887F518;
    case 724u: goto L_0887F520;
    case 725u: goto L_0887F528;
    case 726u: goto L_0887F530;
    case 727u: goto L_0887F544;
    case 728u: goto L_0887F564;
    case 729u: goto L_0887F56C;
    case 730u: goto L_0887F574;
    case 731u: goto L_0887F580;
    case 732u: goto L_0887F590;
    case 733u: goto L_0887F598;
    case 734u: goto L_0887F5A8;
    case 735u: goto L_0887F5B0;
    case 736u: goto L_0887F5B8;
    case 737u: goto L_0887F5C8;
    case 738u: goto L_0887F5E0;
    case 739u: goto L_0887F5F4;
    case 740u: goto L_0887F608;
    case 741u: goto L_0887F61C;
    case 742u: goto L_0887F630;
    case 743u: goto L_0887F644;
    case 744u: goto L_0887F658;
    case 745u: goto L_0887F660;
    case 746u: goto L_0887F668;
    case 747u: goto L_0887F67C;
    case 748u: goto L_0887F690;
    case 749u: goto L_0887F6A4;
    case 750u: goto L_0887F6B8;
    case 751u: goto L_0887F6C0;
    case 752u: goto L_0887F6C4;
    case 753u: goto L_0887F6CC;
    case 754u: goto L_0887F6D8;
    case 755u: goto L_0887F6E4;
    case 756u: goto L_0887F6EC;
    case 757u: goto L_0887F6F4;
    case 758u: goto L_0887F6FC;
    case 759u: goto L_0887F714;
    case 760u: goto L_0887F724;
    case 761u: goto L_0887F728;
    case 762u: goto L_0887F730;
    case 763u: goto L_0887F740;
    case 764u: goto L_0887F744;
    case 765u: goto L_0887F74C;
    case 766u: goto L_0887F770;
    case 767u: goto L_0887F778;
    case 768u: goto L_0887F790;
    case 769u: goto L_0887F7A4;
    case 770u: goto L_0887F7C4;
    case 771u: goto L_0887F7C8;
    case 772u: goto L_0887F7D0;
    case 773u: goto L_0887F7D8;
    case 774u: goto L_0887F800;
    case 775u: goto L_0887F808;
    case 776u: goto L_0887F828;
    case 777u: goto L_0887F838;
    case 778u: goto L_0887F878;
    case 779u: goto L_0887F8C4;
    case 780u: goto L_0887F8D0;
    case 781u: goto L_0887F8D8;
    case 782u: goto L_0887F8E4;
    case 783u: goto L_0887F8F0;
    case 784u: goto L_0887F8F8;
    case 785u: goto L_0887F90C;
    case 786u: goto L_0887F920;
    case 787u: goto L_0887F930;
    case 788u: goto L_0887F93C;
    case 789u: goto L_0887F954;
    case 790u: goto L_0887F960;
    case 791u: goto L_0887F970;
    case 792u: goto L_0887F97C;
    case 793u: goto L_0887F988;
    case 794u: goto L_0887F990;
    case 795u: goto L_0887F998;
    case 796u: goto L_0887F9A0;
    case 797u: goto L_0887F9A8;
    case 798u: goto L_0887F9B4;
    case 799u: goto L_0887F9BC;
    case 800u: goto L_0887F9C4;
    case 801u: goto L_0887F9CC;
    case 802u: goto L_0887F9D4;
    case 803u: goto L_0887F9DC;
    case 804u: goto L_0887F9E4;
    case 805u: goto L_0887F9F8;
    case 806u: goto L_0887FA18;
    case 807u: goto L_0887FA20;
    case 808u: goto L_0887FA28;
    case 809u: goto L_0887FA34;
    case 810u: goto L_0887FA44;
    case 811u: goto L_0887FA4C;
    case 812u: goto L_0887FA5C;
    case 813u: goto L_0887FA64;
    case 814u: goto L_0887FA6C;
    case 815u: goto L_0887FA74;
    case 816u: goto L_0887FA88;
    case 817u: goto L_0887FA9C;
    case 818u: goto L_0887FAB0;
    case 819u: goto L_0887FAC4;
    case 820u: goto L_0887FAD8;
    case 821u: goto L_0887FAEC;
    case 822u: goto L_0887FAF4;
    case 823u: goto L_0887FAFC;
    case 824u: goto L_0887FB10;
    case 825u: goto L_0887FB24;
    case 826u: goto L_0887FB38;
    case 827u: goto L_0887FB4C;
    case 828u: goto L_0887FB54;
    case 829u: goto L_0887FB58;
    case 830u: goto L_0887FB60;
    case 831u: goto L_0887FB6C;
    case 832u: goto L_0887FB78;
    case 833u: goto L_0887FB80;
    case 834u: goto L_0887FB88;
    case 835u: goto L_0887FB90;
    case 836u: goto L_0887FBA8;
    case 837u: goto L_0887FBB4;
    case 838u: goto L_0887FBB8;
    case 839u: goto L_0887FBC0;
    case 840u: goto L_0887FBCC;
    case 841u: goto L_0887FBD0;
    case 842u: goto L_0887FBD8;
    case 843u: goto L_0887FBFC;
    case 844u: goto L_0887FC04;
    case 845u: goto L_0887FC1C;
    case 846u: goto L_0887FC30;
    case 847u: goto L_0887FC50;
    case 848u: goto L_0887FC54;
    case 849u: goto L_0887FC5C;
    case 850u: goto L_0887FC64;
    case 851u: goto L_0887FC8C;
    case 852u: goto L_0887FC94;
    case 853u: goto L_0887FCB4;
    case 854u: goto L_0887FCC4;
    case 855u: goto L_0887FCF0;
    case 856u: goto L_0887FD34;
    case 857u: goto L_0887FD40;
    case 858u: goto L_0887FD48;
    case 859u: goto L_0887FD54;
    case 860u: goto L_0887FD60;
    case 861u: goto L_0887FD68;
    case 862u: goto L_0887FD7C;
    case 863u: goto L_0887FD90;
    case 864u: goto L_0887FDA0;
    case 865u: goto L_0887FDAC;
    case 866u: goto L_0887FDB4;
    case 867u: goto L_0887FDC0;
    case 868u: goto L_0887FDC8;
    case 869u: goto L_0887FDD0;
    case 870u: goto L_0887FDD8;
    case 871u: goto L_0887FDE0;
    case 872u: goto L_0887FDE8;
    case 873u: goto L_0887FDFC;
    case 874u: goto L_0887FE1C;
    case 875u: goto L_0887FE24;
    case 876u: goto L_0887FE2C;
    case 877u: goto L_0887FE38;
    case 878u: goto L_0887FE48;
    case 879u: goto L_0887FE50;
    case 880u: goto L_0887FE60;
    case 881u: goto L_0887FE68;
    case 882u: goto L_0887FE70;
    case 883u: goto L_0887FE8C;
    case 884u: goto L_0887FEA0;
    case 885u: goto L_0887FEB4;
    case 886u: goto L_0887FEC8;
    case 887u: goto L_0887FEDC;
    case 888u: goto L_0887FEF0;
    case 889u: goto L_0887FF04;
    case 890u: goto L_0887FF0C;
    case 891u: goto L_0887FF20;
    case 892u: goto L_0887FF34;
    case 893u: goto L_0887FF48;
    case 894u: goto L_0887FF5C;
    case 895u: goto L_0887FF60;
    case 896u: goto L_0887FF84;
    case 897u: goto L_0887FF8C;
    case 898u: goto L_0887FFA4;
    case 899u: goto L_0887FFB8;
    case 900u: goto L_0887FFD8;
    case 901u: goto L_0887FFDC;
    case 902u: goto L_0887FFE4;
    case 903u: goto L_0887FFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0887C000:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[16]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_0887C044;
      }
      goto L_0887C020;
    }
L_0887C020:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0887C02Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x0887C02Cu) goto L_0887C02C;
    return;
L_0887C02C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
      if (branch_taken) {
          goto L_0887C050;
      }
      goto L_0887C044;
    }
L_0887C044:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    goto L_0887C050;
L_0887C050:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0887C078u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 149u, 0x0892D6B4u>(ctx, &aot_mem) && ctx.pc == 0x0887C078u) goto L_0887C078;
    return;
L_0887C078:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C090:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[22] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (0u | 16u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4912));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    goto L_0887C0E0;
L_0887C0E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887C144;
      }
      goto L_0887C0EC;
    }
L_0887C0EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0887C0F8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0887C0F8u) goto L_0887C0F8;
    return;
L_0887C0F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C13C;
      }
      goto L_0887C104;
    }
L_0887C104:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[21];
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
      if (branch_taken) {
          goto L_0887C128;
      }
      goto L_0887C110;
    }
L_0887C110:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[31] = (0x0887C120u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x0887C120u) goto L_0887C120;
    return;
L_0887C120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C144;
      }
      goto L_0887C128;
    }
L_0887C128:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[31] = (0x0887C134u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x0887C134u) goto L_0887C134;
    return;
L_0887C134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C144;
      }
      goto L_0887C13C;
    }
L_0887C13C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    goto L_0887C144;
L_0887C144:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0887C0E0;
      }
      goto L_0887C154;
    }
L_0887C154:
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
L_0887C180:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (2269u << 16u);
    ctx.gpr[20] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4912));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    goto L_0887C1D0;
L_0887C1D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0887C21C;
      }
      goto L_0887C1DC;
    }
L_0887C1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0887C1E8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0887C1E8u) goto L_0887C1E8;
    return;
L_0887C1E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C214;
      }
      goto L_0887C1F4;
    }
L_0887C1F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[6]);
    ctx.gpr[31] = (0x0887C20Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x0887C20Cu) goto L_0887C20C;
    return;
L_0887C20C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C21C;
      }
      goto L_0887C214;
    }
L_0887C214:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), 0u);
    goto L_0887C21C;
L_0887C21C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[23] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0887C1D0;
      }
      goto L_0887C22C;
    }
L_0887C22C:
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
L_0887C258:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    ctx.gpr[20] = (2269u << 16u);
    ctx.gpr[22] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4912));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    goto L_0887C2B0;
L_0887C2B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887C304;
      }
      goto L_0887C2BC;
    }
L_0887C2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0887C2C8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0887C2C8u) goto L_0887C2C8;
    return;
L_0887C2C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C2FC;
      }
      goto L_0887C2D4;
    }
L_0887C2D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887C2F4u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1046u, 0x08893734u>(ctx, &aot_mem) && ctx.pc == 0x0887C2F4u) goto L_0887C2F4;
    return;
L_0887C2F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C304;
      }
      goto L_0887C2FC;
    }
L_0887C2FC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), 0u);
    goto L_0887C304;
L_0887C304:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0887C2B0;
      }
      goto L_0887C314;
    }
L_0887C314:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C344:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    ctx.gpr[20] = (2269u << 16u);
    ctx.gpr[22] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4912));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    goto L_0887C3A4;
L_0887C3A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887C3FC;
      }
      goto L_0887C3B0;
    }
L_0887C3B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0887C3BCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0887C3BCu) goto L_0887C3BC;
    return;
L_0887C3BC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C3F4;
      }
      goto L_0887C3C8;
    }
L_0887C3C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0887C3ECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1104u, 0x08893B84u>(ctx, &aot_mem) && ctx.pc == 0x0887C3ECu) goto L_0887C3EC;
    return;
L_0887C3EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C3FC;
      }
      goto L_0887C3F4;
    }
L_0887C3F4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), 0u);
    goto L_0887C3FC;
L_0887C3FC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0887C3A4;
      }
      goto L_0887C40C;
    }
L_0887C40C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C440:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[18] = (ctx.gpr[6] << 16u);
    ctx.gpr[19] = (ctx.gpr[7] << 16u);
    ctx.gpr[21] = (2269u << 16u);
    ctx.gpr[23] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4912));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    goto L_0887C4A0;
L_0887C4A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887C4F0;
      }
      goto L_0887C4AC;
    }
L_0887C4AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0887C4B8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0887C4B8u) goto L_0887C4B8;
    return;
L_0887C4B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C4E8;
      }
      goto L_0887C4C4;
    }
L_0887C4C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887C4E0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1138u, 0x08893D90u>(ctx, &aot_mem) && ctx.pc == 0x0887C4E0u) goto L_0887C4E0;
    return;
L_0887C4E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C4F0;
      }
      goto L_0887C4E8;
    }
L_0887C4E8:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), 0u);
    goto L_0887C4F0;
L_0887C4F0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0887C4A0;
      }
      goto L_0887C500;
    }
L_0887C500:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C530:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4912));
    goto L_0887C540;
L_0887C540:
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0887C574;
      }
      goto L_0887C554;
    }
L_0887C554:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C540;
      }
      goto L_0887C56C;
    }
L_0887C56C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C578;
      }
      goto L_0887C574;
    }
L_0887C574:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_0887C578;
L_0887C578:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C580:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7024)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C5D8;
      }
      goto L_0887C5CC;
    }
L_0887C5CC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7024), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0887C5DC;
      }
      goto L_0887C5D8;
    }
L_0887C5D8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7024), 0u);
    goto L_0887C5DC;
L_0887C5DC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0887C5ECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0887C5ECu) goto L_0887C5EC;
    return;
L_0887C5EC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C668;
      }
      goto L_0887C5FC;
    }
L_0887C5FC:
    ctx.gpr[31] = (0x0887C604u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0887C604u) goto L_0887C604;
    return;
L_0887C604:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C668;
      }
      goto L_0887C60C;
    }
L_0887C60C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887C668;
      }
      goto L_0887C61C;
    }
L_0887C61C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887C668;
      }
      goto L_0887C62C;
    }
L_0887C62C:
    ctx.gpr[31] = (0x0887C634u);
    // nop
    goto L_0887C530;
L_0887C634:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0887C668;
      }
      goto L_0887C640;
    }
L_0887C640:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4912));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0887C664u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x0887C664u) goto L_0887C664;
    return;
L_0887C664:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0887C668;
L_0887C668:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2269u << 16u);
      if (branch_taken) {
          goto L_0887C710;
      }
      goto L_0887C67C;
    }
L_0887C67C:
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[20] = (0u | 6u);
    ctx.gpr[30] = (ctx.gpr[17] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4912));
    ctx.gpr[22] = (2229u << 16u);
    goto L_0887C690;
L_0887C690:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C6FC;
      }
      goto L_0887C69C;
    }
L_0887C69C:
    ctx.gpr[31] = (0x0887C6A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x0887C6A4u) goto L_0887C6A4;
    return;
L_0887C6A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C6FC;
      }
      goto L_0887C6AC;
    }
L_0887C6AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0887C6FC;
      }
      goto L_0887C6B8;
    }
L_0887C6B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887C6FC;
      }
      goto L_0887C6C4;
    }
L_0887C6C4:
    ctx.gpr[31] = (0x0887C6CCu);
    // nop
    goto L_0887C530;
L_0887C6CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0887C6FC;
      }
      goto L_0887C6D8;
    }
L_0887C6D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-15044)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[31] = (0x0887C6F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x0887C6F4u) goto L_0887C6F4;
    return;
L_0887C6F4:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0887C6FC;
L_0887C6FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887C690;
      }
      goto L_0887C710;
    }
L_0887C710:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C744:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C790;
      }
      goto L_0887C750;
    }
L_0887C750:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C790;
      }
      goto L_0887C75C;
    }
L_0887C75C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887C800;
      }
      goto L_0887C788;
    }
L_0887C788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887C804;
      }
      goto L_0887C790;
    }
L_0887C790:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887C7A4;
      }
      goto L_0887C79C;
    }
L_0887C79C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0887C800;
      }
      goto L_0887C7A4;
    }
L_0887C7A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
      if (branch_taken) {
          goto L_0887C800;
      }
      goto L_0887C7B4;
    }
L_0887C7B4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C800;
      }
      goto L_0887C7BC;
    }
L_0887C7BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C800;
      }
      goto L_0887C7CC;
    }
L_0887C7CC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887C800;
      }
      goto L_0887C7E4;
    }
L_0887C7E4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(756)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887C800;
      }
      goto L_0887C7F8;
    }
L_0887C7F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887C804;
      }
      goto L_0887C800;
    }
L_0887C800:
    ctx.gpr[2] = (0u | 0u);
    goto L_0887C804;
L_0887C804:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C80C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C86C;
      }
      goto L_0887C82C;
    }
L_0887C82C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C86C;
      }
      goto L_0887C838;
    }
L_0887C838:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887C960;
      }
      goto L_0887C864;
    }
L_0887C864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887C964;
      }
      goto L_0887C86C;
    }
L_0887C86C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0887C878u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x0887C878u) goto L_0887C878;
    return;
L_0887C878:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C898;
      }
      goto L_0887C884;
    }
L_0887C884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x0887C894u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x0887C894u) goto L_0887C894;
    return;
L_0887C894:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0887C898;
L_0887C898:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C8B4;
      }
      goto L_0887C8A0;
    }
L_0887C8A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 136u);
    ctx.gpr[31] = (0x0887C8B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x0887C8B0u) goto L_0887C8B0;
    return;
L_0887C8B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0887C8B4;
L_0887C8B4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C8D0;
      }
      goto L_0887C8BC;
    }
L_0887C8BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 137u);
    ctx.gpr[31] = (0x0887C8CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x0887C8CCu) goto L_0887C8CC;
    return;
L_0887C8CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0887C8D0;
L_0887C8D0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C8F0;
      }
      goto L_0887C8D8;
    }
L_0887C8D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C900;
      }
      goto L_0887C8E8;
    }
L_0887C8E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887C8F8;
      }
      goto L_0887C8F0;
    }
L_0887C8F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887C964;
      }
      goto L_0887C8F8;
    }
L_0887C8F8:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887C960;
      }
      goto L_0887C900;
    }
L_0887C900:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
      if (branch_taken) {
          goto L_0887C960;
      }
      goto L_0887C910;
    }
L_0887C910:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C960;
      }
      goto L_0887C918;
    }
L_0887C918:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C960;
      }
      goto L_0887C92C;
    }
L_0887C92C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887C960;
      }
      goto L_0887C944;
    }
L_0887C944:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(756)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887C960;
      }
      goto L_0887C958;
    }
L_0887C958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887C964;
      }
      goto L_0887C960;
    }
L_0887C960:
    ctx.gpr[2] = (0u | 0u);
    goto L_0887C964;
L_0887C964:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C974:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (15395u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887C9A8;
      }
      goto L_0887C9A0;
    }
L_0887C9A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887C9AC;
      }
      goto L_0887C9A8;
    }
L_0887C9A8:
    ctx.gpr[2] = (0u | 0u);
    goto L_0887C9AC;
L_0887C9AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C9B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887CAB4;
      }
      goto L_0887C9CC;
    }
L_0887C9CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[17] = (ctx.gpr[4] ^ 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_0887CA70;
      }
      goto L_0887C9E0;
    }
L_0887C9E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CA70;
      }
      goto L_0887C9EC;
    }
L_0887C9EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887CA68;
      }
      goto L_0887C9F8;
    }
L_0887C9F8:
    ctx.gpr[31] = (0x0887CA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 734u, 0x0889F854u>(ctx, &aot_mem) && ctx.pc == 0x0887CA00u) goto L_0887CA00;
    return;
L_0887CA00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(660)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887CA34;
      }
      goto L_0887CA2C;
    }
L_0887CA2C:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
    goto L_0887CA34;
L_0887CA34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887CA70;
      }
      goto L_0887CA44;
    }
L_0887CA44:
    ctx.gpr[31] = (0x0887CA4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 99u, 0x088A078Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CA4Cu) goto L_0887CA4C;
    return;
L_0887CA4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CA70;
      }
      goto L_0887CA54;
    }
L_0887CA54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0887CA60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 93u, 0x088A0730u>(ctx, &aot_mem) && ctx.pc == 0x0887CA60u) goto L_0887CA60;
    return;
L_0887CA60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CA70;
      }
      goto L_0887CA68;
    }
L_0887CA68:
    ctx.gpr[31] = (0x0887CA70u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 667u, 0x0889F3D8u>(ctx, &aot_mem) && ctx.pc == 0x0887CA70u) goto L_0887CA70;
    return;
L_0887CA70:
    ctx.gpr[31] = (0x0887CA78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 476u, 0x088C309Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CA78u) goto L_0887CA78;
    return;
L_0887CA78:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CA9C;
      }
      goto L_0887CA80;
    }
L_0887CA80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0887CA9Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887CA9Cu) goto L_0887CA9C;
    return;
L_0887CA9C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CAB4;
      }
      goto L_0887CAA4;
    }
L_0887CAA4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020), ctx.gpr[5]);
    goto L_0887CAB4;
L_0887CAB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CAC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887CD3C;
      }
      goto L_0887CAE8;
    }
L_0887CAE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887CD3C;
      }
      goto L_0887CAF8;
    }
L_0887CAF8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887CB20;
      }
      goto L_0887CB10;
    }
L_0887CB10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1800), ctx.gpr[4]);
    goto L_0887CB20;
L_0887CB20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC00;
      }
      goto L_0887CB2C;
    }
L_0887CB2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC00;
      }
      goto L_0887CB38;
    }
L_0887CB38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887CB68;
      }
      goto L_0887CB44;
    }
L_0887CB44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC00;
      }
      goto L_0887CB50;
    }
L_0887CB50:
    ctx.gpr[31] = (0x0887CB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x0887CB58u) goto L_0887CB58;
    return;
L_0887CB58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887CC00;
      }
      goto L_0887CB68;
    }
L_0887CB68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC00;
      }
      goto L_0887CB74;
    }
L_0887CB74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
        goto L_0887CBB0;
    }
    goto L_0887CB90;
L_0887CB90:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0887CBA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 418u, 0x088D5DA8u>(ctx, &aot_mem) && ctx.pc == 0x0887CBA4u) goto L_0887CBA4;
    return;
L_0887CBA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0887CBC0;
      }
      goto L_0887CBAC;
    }
L_0887CBAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    goto L_0887CBB0;
L_0887CBB0:
    ctx.gpr[6] = (32u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CBE4;
      }
      goto L_0887CBC0;
    }
L_0887CBC0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887CBD0u);
    ctx.gpr[5] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x0887CBD0u) goto L_0887CBD0;
    return;
L_0887CBD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887CC00;
      }
      goto L_0887CBE4;
    }
L_0887CBE4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887CBF4u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x0887CBF4u) goto L_0887CBF4;
    return;
L_0887CBF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_0887CC00;
L_0887CC00:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0887CC1C;
      }
      goto L_0887CC10;
    }
L_0887CC10:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CC1C;
    }
L_0887CC1C:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    goto L_0887CC24;
L_0887CC24:
    ctx.gpr[31] = (0x0887CC2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x0887CC2Cu) goto L_0887CC2C;
    return;
L_0887CC2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0887CC40u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CC40u) goto L_0887CC40;
    return;
L_0887CC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x0887CC84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 556u, 0x08886D10u>(ctx, &aot_mem) && ctx.pc == 0x0887CC84u) goto L_0887CC84;
    return;
L_0887CC84:
    ctx.gpr[31] = (0x0887CC8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x0887CC8Cu) goto L_0887CC8C;
    return;
L_0887CC8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CCD4;
      }
      goto L_0887CC94;
    }
L_0887CC94:
    ctx.gpr[31] = (0x0887CC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x0887CC9Cu) goto L_0887CC9C;
    return;
L_0887CC9C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_0887CCC0;
    }
    goto L_0887CCA8;
L_0887CCA8:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_0887CCC8;
      }
      goto L_0887CCC0;
    }
L_0887CCC0:
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    goto L_0887CCC8;
L_0887CCC8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0887CCD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x0887CCD4u) goto L_0887CCD4;
    return;
L_0887CCD4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CD2C;
      }
      goto L_0887CCDC;
    }
L_0887CCDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887CD1C;
      }
      goto L_0887CCEC;
    }
L_0887CCEC:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887CD1C;
      }
      goto L_0887CCF4;
    }
L_0887CCF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CD14;
      }
      goto L_0887CD00;
    }
L_0887CD00:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_0887CD14;
    }
    goto L_0887CD08;
L_0887CD08:
    ctx.gpr[31] = (0x0887CD10u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0887CD10u) goto L_0887CD10;
    return;
L_0887CD10:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_0887CD14;
L_0887CD14:
    ctx.gpr[31] = (0x0887CD1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CD1Cu) goto L_0887CD1C;
    return;
L_0887CD1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887CD2Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CD2Cu) goto L_0887CD2C;
    return;
L_0887CD2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020), ctx.gpr[5]);
    goto L_0887CD3C;
L_0887CD3C:
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
L_0887CD58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887CDBC;
      }
      goto L_0887CD6C;
    }
L_0887CD6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887CDBC;
      }
      goto L_0887CD7C;
    }
L_0887CD7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0887CD94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 197u, 0x089ED474u>(ctx, &aot_mem) && ctx.pc == 0x0887CD94u) goto L_0887CD94;
    return;
L_0887CD94:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17176)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17184), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-17176), ctx.gpr[4]);
    goto L_0887CDBC;
L_0887CDBC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CDCC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CE28;
      }
      goto L_0887CDD4;
    }
L_0887CDD4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_0887CE28;
      }
      goto L_0887CDE4;
    }
L_0887CDE4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (305u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11520));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(444), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3540)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(3540), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_0887CE28;
L_0887CE28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CE30:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7016), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[8] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-29312), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(-7012), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = ((ctx.gpr[5] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(-7012)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0887CF8C;
      }
      goto L_0887CF28;
    }
L_0887CF28:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5168));
    goto L_0887CF2C;
L_0887CF2C:
    ctx.gpr[5] = (ctx.gpr[7] << 5u);
    ctx.gpr[11] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[11]);
    goto L_0887CF3C;
L_0887CF3C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[6]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CF3C;
      }
      goto L_0887CF6C;
    }
L_0887CF6C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(-7012)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CF2C;
      }
      goto L_0887CF8C;
    }
L_0887CF8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CF94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(-7012)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2269u << 16u);
      if (branch_taken) {
          goto L_0887D008;
      }
      goto L_0887CFC8;
    }
L_0887CFC8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5168));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    goto L_0887CFD4;
L_0887CFD4:
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[31] = (0x0887CFF0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28BB8u>(ctx, &aot_mem) && ctx.pc == 0x0887CFF0u) goto L_0887CFF0;
    return;
L_0887CFF0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(-7012)));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CFD4;
      }
      goto L_0887D008;
    }
L_0887D008:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D028:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(-7010), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(-7008), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7004), ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(-7000), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6998), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(-7000))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_0887D1A4;
      }
      goto L_0887D164;
    }
L_0887D164:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13712));
    goto L_0887D16C;
L_0887D16C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[10] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (ctx.gpr[6] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(-7000))))));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887D16C;
      }
      goto L_0887D1A4;
    }
L_0887D1A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D1AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-250));
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(-232));
    ctx.gpr[19] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[21] < static_cast<std::uint32_t>(24) ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887D218;
      }
      goto L_0887D20C;
    }
L_0887D20C:
    ctx.gpr[23] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_0887D220;
      }
      goto L_0887D218;
    }
L_0887D218:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0887D220;
L_0887D220:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887D230u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B890u>(ctx, &aot_mem) && ctx.pc == 0x0887D230u) goto L_0887D230;
    return;
L_0887D230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887D29C;
      }
      goto L_0887D25C;
    }
L_0887D25C:
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[21]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1368)));
    jump_target = ctx.gpr[1];
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D29C;
      }
      goto L_0887D27C;
    }
L_0887D27C:
    ctx.gpr[31] = (0x0887D284u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0887C80C;
L_0887D284:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887D294;
      }
      goto L_0887D28C;
    }
L_0887D28C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 1u);
    goto L_0887D294;
L_0887D294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D29C;
      }
      goto L_0887D29C;
    }
L_0887D29C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0887D2CC;
      }
      goto L_0887D2B0;
    }
L_0887D2B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0887D2E4;
      }
      goto L_0887D2CC;
    }
L_0887D2CC:
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0887D2E4;
L_0887D2E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0887D2F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x0887D2F8u) goto L_0887D2F8;
    return;
L_0887D2F8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_0887D3EC;
      }
      goto L_0887D324;
    }
L_0887D324:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D380;
      }
      goto L_0887D344;
    }
L_0887D344:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D380;
      }
      goto L_0887D35C;
    }
L_0887D35C:
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0887D380;
    }
    goto L_0887D364;
L_0887D364:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D380;
      }
      goto L_0887D37C;
    }
L_0887D37C:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887D380;
L_0887D380:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D3EC;
      }
      goto L_0887D38C;
    }
L_0887D38C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D3EC;
      }
      goto L_0887D394;
    }
L_0887D394:
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[21]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1272)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D3AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0887D3EC;
      }
      goto L_0887D3B4;
    }
L_0887D3B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887D3C8;
      }
      goto L_0887D3C4;
    }
L_0887D3C4:
    ctx.gpr[18] = (0u | 1u);
    goto L_0887D3C8;
L_0887D3C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D3EC;
      }
      goto L_0887D3D0;
    }
L_0887D3D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D3E4;
      }
      goto L_0887D3E0;
    }
L_0887D3E0:
    ctx.gpr[18] = (0u | 1u);
    goto L_0887D3E4;
L_0887D3E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D3EC;
      }
      goto L_0887D3EC;
    }
L_0887D3EC:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887D418;
      }
      goto L_0887D410;
    }
L_0887D410:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0887D468;
      }
      goto L_0887D418;
    }
L_0887D418:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_0887D444;
      }
      goto L_0887D430;
    }
L_0887D430:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887D468;
      }
      goto L_0887D444;
    }
L_0887D444:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D468;
      }
      goto L_0887D464;
    }
L_0887D464:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887D468;
L_0887D468:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D4CC;
      }
      goto L_0887D470;
    }
L_0887D470:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D4CC;
      }
      goto L_0887D490;
    }
L_0887D490:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D4CC;
      }
      goto L_0887D4A8;
    }
L_0887D4A8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x0887D4CCu);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887D4CCu) goto L_0887D4CC;
    return;
L_0887D4CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D4EC;
      }
      goto L_0887D4DC;
    }
L_0887D4DC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D4EC;
      }
      goto L_0887D4E4;
    }
L_0887D4E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D4EC;
      }
      goto L_0887D4EC;
    }
L_0887D4EC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D528:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.gpr[19] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887D584;
      }
      goto L_0887D570;
    }
L_0887D570:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 259 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D584;
      }
      goto L_0887D57C;
    }
L_0887D57C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0887D588;
      }
      goto L_0887D584;
    }
L_0887D584:
    ctx.gpr[18] = (0u | 0u);
    goto L_0887D588;
L_0887D588:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D5AC;
      }
      goto L_0887D590;
    }
L_0887D590:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0887D5A4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0887D5A4u) goto L_0887D5A4;
    return;
L_0887D5A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D5C0;
      }
      goto L_0887D5AC;
    }
L_0887D5AC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0887D5C0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0887D5C0u) goto L_0887D5C0;
    return;
L_0887D5C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0887D5F4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0887D5F4u) goto L_0887D5F4;
    return;
L_0887D5F4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0887D608u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x0887D608u) goto L_0887D608;
    return;
L_0887D608:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D644;
      }
      goto L_0887D620;
    }
L_0887D620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D644;
      }
      goto L_0887D62C;
    }
L_0887D62C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D650;
      }
      goto L_0887D644;
    }
L_0887D644:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_0887D650;
L_0887D650:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0887D668;
      }
      goto L_0887D65C;
    }
L_0887D65C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0887D66C;
      }
      goto L_0887D668;
    }
L_0887D668:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_0887D66C;
L_0887D66C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0887D72C;
      }
      goto L_0887D674;
    }
L_0887D674:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D724;
      }
      goto L_0887D690;
    }
L_0887D690:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D724;
      }
      goto L_0887D6AC;
    }
L_0887D6AC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D724;
      }
      goto L_0887D6C8;
    }
L_0887D6C8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D724;
      }
      goto L_0887D6E4;
    }
L_0887D6E4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D724;
      }
      goto L_0887D700;
    }
L_0887D700:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D724;
      }
      goto L_0887D71C;
    }
L_0887D71C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887D7A8;
      }
      goto L_0887D724;
    }
L_0887D724:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887D7A8;
      }
      goto L_0887D72C;
    }
L_0887D72C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D7A4;
      }
      goto L_0887D748;
    }
L_0887D748:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D7A4;
      }
      goto L_0887D764;
    }
L_0887D764:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D7A4;
      }
      goto L_0887D780;
    }
L_0887D780:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D7A4;
      }
      goto L_0887D79C;
    }
L_0887D79C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887D7A8;
      }
      goto L_0887D7A4;
    }
L_0887D7A4:
    ctx.gpr[5] = (0u | 0u);
    goto L_0887D7A8;
L_0887D7A8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D818;
      }
      goto L_0887D7B0;
    }
L_0887D7B0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-238));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D818;
      }
      goto L_0887D7C0;
    }
L_0887D7C0:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1176)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D7D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0887D818;
      }
      goto L_0887D7E0;
    }
L_0887D7E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887D7F4;
      }
      goto L_0887D7F0;
    }
L_0887D7F0:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887D7F4;
L_0887D7F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D818;
      }
      goto L_0887D7FC;
    }
L_0887D7FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D810;
      }
      goto L_0887D80C;
    }
L_0887D80C:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887D810;
L_0887D810:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D818;
      }
      goto L_0887D818;
    }
L_0887D818:
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
          goto L_0887D844;
      }
      goto L_0887D83C;
    }
L_0887D83C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887D894;
      }
      goto L_0887D844;
    }
L_0887D844:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0887D870;
      }
      goto L_0887D85C;
    }
L_0887D85C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887D894;
      }
      goto L_0887D870;
    }
L_0887D870:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D894;
      }
      goto L_0887D890;
    }
L_0887D890:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887D894;
L_0887D894:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D910;
      }
      goto L_0887D89C;
    }
L_0887D89C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_0887D8E0;
      }
      goto L_0887D8A4;
    }
L_0887D8A4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887D8D8u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887D8D8u) goto L_0887D8D8;
    return;
L_0887D8D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D910;
      }
      goto L_0887D8E0;
    }
L_0887D8E0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.gpr[31] = (0x0887D910u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887D910u) goto L_0887D910;
    return;
L_0887D910:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D930;
      }
      goto L_0887D920;
    }
L_0887D920:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D930;
      }
      goto L_0887D928;
    }
L_0887D928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D930;
      }
      goto L_0887D930;
    }
L_0887D930:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D95C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.gpr[19] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 516 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887D9B0;
      }
      goto L_0887D99C;
    }
L_0887D99C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 519 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D9B0;
      }
      goto L_0887D9A8;
    }
L_0887D9A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0887D9B4;
      }
      goto L_0887D9B0;
    }
L_0887D9B0:
    ctx.gpr[18] = (0u | 0u);
    goto L_0887D9B4;
L_0887D9B4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D9D8;
      }
      goto L_0887D9BC;
    }
L_0887D9BC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0887D9D0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0887D9D0u) goto L_0887D9D0;
    return;
L_0887D9D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D9EC;
      }
      goto L_0887D9D8;
    }
L_0887D9D8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0887D9ECu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0887D9ECu) goto L_0887D9EC;
    return;
L_0887D9EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0887DA20u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0887DA20u) goto L_0887DA20;
    return;
L_0887DA20:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0887DA34u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x0887DA34u) goto L_0887DA34;
    return;
L_0887DA34:
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
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DA6C;
      }
      goto L_0887DA60;
    }
L_0887DA60:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0887DA70;
      }
      goto L_0887DA6C;
    }
L_0887DA6C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_0887DA70;
L_0887DA70:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0887DB30;
      }
      goto L_0887DA78;
    }
L_0887DA78:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DB28;
      }
      goto L_0887DA94;
    }
L_0887DA94:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DB28;
      }
      goto L_0887DAB0;
    }
L_0887DAB0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DB28;
      }
      goto L_0887DACC;
    }
L_0887DACC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DB28;
      }
      goto L_0887DAE8;
    }
L_0887DAE8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DB28;
      }
      goto L_0887DB04;
    }
L_0887DB04:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DB28;
      }
      goto L_0887DB20;
    }
L_0887DB20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887DBAC;
      }
      goto L_0887DB28;
    }
L_0887DB28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887DBAC;
      }
      goto L_0887DB30;
    }
L_0887DB30:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DBA8;
      }
      goto L_0887DB4C;
    }
L_0887DB4C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DBA8;
      }
      goto L_0887DB68;
    }
L_0887DB68:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DBA8;
      }
      goto L_0887DB84;
    }
L_0887DB84:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DBA8;
      }
      goto L_0887DBA0;
    }
L_0887DBA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887DBAC;
      }
      goto L_0887DBA8;
    }
L_0887DBA8:
    ctx.gpr[5] = (0u | 0u);
    goto L_0887DBAC;
L_0887DBAC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DC28;
      }
      goto L_0887DBB4;
    }
L_0887DBB4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DC28;
      }
      goto L_0887DBC4;
    }
L_0887DBC4:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887DBF0;
      }
      goto L_0887DBD0;
    }
L_0887DBD0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887DC0C;
      }
      goto L_0887DBD8;
    }
L_0887DBD8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0887DBF0;
      }
      goto L_0887DBE0;
    }
L_0887DBE0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0887DC0C;
      }
      goto L_0887DBE8;
    }
L_0887DBE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0887DC28;
      }
      goto L_0887DBF0;
    }
L_0887DBF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887DC04;
      }
      goto L_0887DC00;
    }
L_0887DC00:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887DC04;
L_0887DC04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DC28;
      }
      goto L_0887DC0C;
    }
L_0887DC0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DC20;
      }
      goto L_0887DC1C;
    }
L_0887DC1C:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887DC20;
L_0887DC20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DC28;
      }
      goto L_0887DC28;
    }
L_0887DC28:
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
          goto L_0887DC54;
      }
      goto L_0887DC4C;
    }
L_0887DC4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887DCA4;
      }
      goto L_0887DC54;
    }
L_0887DC54:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0887DC80;
      }
      goto L_0887DC6C;
    }
L_0887DC6C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887DCA4;
      }
      goto L_0887DC80;
    }
L_0887DC80:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DCA4;
      }
      goto L_0887DCA0;
    }
L_0887DCA0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887DCA4;
L_0887DCA4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DD24;
      }
      goto L_0887DCAC;
    }
L_0887DCAC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_0887DCF0;
      }
      goto L_0887DCB4;
    }
L_0887DCB4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887DCE8u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887DCE8u) goto L_0887DCE8;
    return;
L_0887DCE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DD24;
      }
      goto L_0887DCF0;
    }
L_0887DCF0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887DD24u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887DD24u) goto L_0887DD24;
    return;
L_0887DD24:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DD44;
      }
      goto L_0887DD34;
    }
L_0887DD34:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DD44;
      }
      goto L_0887DD3C;
    }
L_0887DD3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DD44;
      }
      goto L_0887DD44;
    }
L_0887DD44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887DD6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-259));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[21] = (2269u << 16u);
      if (branch_taken) {
          goto L_0887DDB8;
      }
      goto L_0887DDAC;
    }
L_0887DDAC:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0887DDC0;
      }
      goto L_0887DDB8;
    }
L_0887DDB8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0887DDC0;
L_0887DDC0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887DDD0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B890u>(ctx, &aot_mem) && ctx.pc == 0x0887DDD0u) goto L_0887DDD0;
    return;
L_0887DDD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887DDE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0887DDE4u) goto L_0887DDE4;
    return;
L_0887DDE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DE10;
      }
      goto L_0887DDF0;
    }
L_0887DDF0:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-241));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[17] < static_cast<std::uint32_t>(24) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2736));
      if (branch_taken) {
          goto L_0887DE18;
      }
      goto L_0887DE08;
    }
L_0887DE08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DE3C;
      }
      goto L_0887DE10;
    }
L_0887DE10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E148;
      }
      goto L_0887DE18;
    }
L_0887DE18:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DE3C;
      }
      goto L_0887DE24;
    }
L_0887DE24:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DE48;
      }
      goto L_0887DE3C;
    }
L_0887DE3C:
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0887DE48;
L_0887DE48:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DEA0;
      }
      goto L_0887DE50;
    }
L_0887DE50:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1088)));
    jump_target = ctx.gpr[1];
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887DE68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DEA0;
      }
      goto L_0887DE70;
    }
L_0887DE70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[31] = (0x0887DE80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    goto L_0887C744;
L_0887DE80:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_0887DE98;
      }
      goto L_0887DE90;
    }
L_0887DE90:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_0887DE98;
L_0887DE98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DEA0;
      }
      goto L_0887DEA0;
    }
L_0887DEA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0887DEC4;
      }
      goto L_0887DEAC;
    }
L_0887DEAC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0887DED0;
      }
      goto L_0887DEC4;
    }
L_0887DEC4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    goto L_0887DED0;
L_0887DED0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E048;
      }
      goto L_0887DED8;
    }
L_0887DED8:
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[18] = ctx.fpr[12] - ctx.fpr[15];
      if (branch_taken) {
          goto L_0887DF80;
      }
      goto L_0887DEE4;
    }
L_0887DEE4:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DF78;
      }
      goto L_0887DEF8;
    }
L_0887DEF8:
    ctx.fpr[18] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DF78;
      }
      goto L_0887DF10;
    }
L_0887DF10:
    ctx.fpr[18] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DF78;
      }
      goto L_0887DF28;
    }
L_0887DF28:
    ctx.fpr[18] = ctx.fpr[16] + ctx.fpr[13];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DF78;
      }
      goto L_0887DF40;
    }
L_0887DF40:
    ctx.fpr[18] = ctx.fpr[14] - ctx.fpr[17];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DF78;
      }
      goto L_0887DF58;
    }
L_0887DF58:
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DF78;
      }
      goto L_0887DF70;
    }
L_0887DF70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_0887DFE8;
      }
      goto L_0887DF78;
    }
L_0887DF78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0887DFE8;
      }
      goto L_0887DF80;
    }
L_0887DF80:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DFE4;
      }
      goto L_0887DF94;
    }
L_0887DF94:
    ctx.fpr[17] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DFE4;
      }
      goto L_0887DFAC;
    }
L_0887DFAC:
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DFE4;
      }
      goto L_0887DFC4;
    }
L_0887DFC4:
    ctx.fpr[17] = ctx.fpr[16] + ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DFE4;
      }
      goto L_0887DFDC;
    }
L_0887DFDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_0887DFE8;
      }
      goto L_0887DFE4;
    }
L_0887DFE4:
    ctx.gpr[8] = (0u | 0u);
    goto L_0887DFE8;
L_0887DFE8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E048;
      }
      goto L_0887DFF0;
    }
L_0887DFF0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E048;
      }
      goto L_0887DFF8;
    }
L_0887DFF8:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-992)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E048;
      }
      goto L_0887E018;
    }
L_0887E018:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E028;
      }
      goto L_0887E024;
    }
L_0887E024:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887E028;
L_0887E028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E048;
      }
      goto L_0887E030;
    }
L_0887E030:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E040;
      }
      goto L_0887E03C;
    }
L_0887E03C:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887E040;
L_0887E040:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E048;
      }
      goto L_0887E048;
    }
L_0887E048:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887E074;
      }
      goto L_0887E06C;
    }
L_0887E06C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887E0C4;
      }
      goto L_0887E074;
    }
L_0887E074:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_0887E0A0;
      }
      goto L_0887E08C;
    }
L_0887E08C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887E0C4;
      }
      goto L_0887E0A0;
    }
L_0887E0A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E0C4;
      }
      goto L_0887E0C0;
    }
L_0887E0C0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887E0C4;
L_0887E0C4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E128;
      }
      goto L_0887E0CC;
    }
L_0887E0CC:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[16];
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
      if (branch_taken) {
          goto L_0887E10C;
      }
      goto L_0887E0E8;
    }
L_0887E0E8:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x0887E104u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887E104u) goto L_0887E104;
    return;
L_0887E104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E128;
      }
      goto L_0887E10C;
    }
L_0887E10C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x0887E128u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887E128u) goto L_0887E128;
    return;
L_0887E128:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E148;
      }
      goto L_0887E138;
    }
L_0887E138:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E148;
      }
      goto L_0887E140;
    }
L_0887E140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E148;
      }
      goto L_0887E148;
    }
L_0887E148:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E16C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[19] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 265 ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887E1C8;
      }
      goto L_0887E1B4;
    }
L_0887E1B4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 268 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E1C8;
      }
      goto L_0887E1C0;
    }
L_0887E1C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E1CC;
      }
      goto L_0887E1C8;
    }
L_0887E1C8:
    ctx.gpr[18] = (0u | 0u);
    goto L_0887E1CC;
L_0887E1CC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E1F0;
      }
      goto L_0887E1D4;
    }
L_0887E1D4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0887E1E8u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0887E1E8u) goto L_0887E1E8;
    return;
L_0887E1E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E204;
      }
      goto L_0887E1F0;
    }
L_0887E1F0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0887E204u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0887E204u) goto L_0887E204;
    return;
L_0887E204:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[31] = (0x0887E214u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0887E214u) goto L_0887E214;
    return;
L_0887E214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887E224u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0887E224u) goto L_0887E224;
    return;
L_0887E224:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887E254;
      }
      goto L_0887E230;
    }
L_0887E230:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E254;
      }
      goto L_0887E23C;
    }
L_0887E23C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E260;
      }
      goto L_0887E254;
    }
L_0887E254:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    goto L_0887E260;
L_0887E260:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E290;
      }
      goto L_0887E26C;
    }
L_0887E26C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E290;
      }
      goto L_0887E278;
    }
L_0887E278:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E29C;
      }
      goto L_0887E290;
    }
L_0887E290:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    goto L_0887E29C;
L_0887E29C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0887E2B4;
      }
      goto L_0887E2A8;
    }
L_0887E2A8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0887E2B8;
      }
      goto L_0887E2B4;
    }
L_0887E2B4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_0887E2B8;
L_0887E2B8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887E378;
      }
      goto L_0887E2C0;
    }
L_0887E2C0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E370;
      }
      goto L_0887E2DC;
    }
L_0887E2DC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E370;
      }
      goto L_0887E2F8;
    }
L_0887E2F8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E370;
      }
      goto L_0887E314;
    }
L_0887E314:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E370;
      }
      goto L_0887E330;
    }
L_0887E330:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E370;
      }
      goto L_0887E34C;
    }
L_0887E34C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E370;
      }
      goto L_0887E368;
    }
L_0887E368:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E3F4;
      }
      goto L_0887E370;
    }
L_0887E370:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0887E3F4;
      }
      goto L_0887E378;
    }
L_0887E378:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E3F0;
      }
      goto L_0887E394;
    }
L_0887E394:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E3F0;
      }
      goto L_0887E3B0;
    }
L_0887E3B0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E3F0;
      }
      goto L_0887E3CC;
    }
L_0887E3CC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E3F0;
      }
      goto L_0887E3E8;
    }
L_0887E3E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E3F4;
      }
      goto L_0887E3F0;
    }
L_0887E3F0:
    ctx.gpr[6] = (0u | 0u);
    goto L_0887E3F4;
L_0887E3F4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E45C;
      }
      goto L_0887E3FC;
    }
L_0887E3FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-247));
    ctx.gpr[6] = (ctx.gpr[17] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E45C;
      }
      goto L_0887E40C;
    }
L_0887E40C:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-896)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E424:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E45C;
      }
      goto L_0887E42C;
    }
L_0887E42C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E43C;
      }
      goto L_0887E438;
    }
L_0887E438:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887E43C;
L_0887E43C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E45C;
      }
      goto L_0887E444;
    }
L_0887E444:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E454;
      }
      goto L_0887E450;
    }
L_0887E450:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887E454;
L_0887E454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E45C;
      }
      goto L_0887E45C;
    }
L_0887E45C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887E488;
      }
      goto L_0887E480;
    }
L_0887E480:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887E4D8;
      }
      goto L_0887E488;
    }
L_0887E488:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_0887E4B4;
      }
      goto L_0887E4A0;
    }
L_0887E4A0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887E4D8;
      }
      goto L_0887E4B4;
    }
L_0887E4B4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E4D8;
      }
      goto L_0887E4D4;
    }
L_0887E4D4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887E4D8;
L_0887E4D8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E558;
      }
      goto L_0887E4E0;
    }
L_0887E4E0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887E524;
      }
      goto L_0887E4E8;
    }
L_0887E4E8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887E51Cu);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887E51Cu) goto L_0887E51C;
    return;
L_0887E51C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E558;
      }
      goto L_0887E524;
    }
L_0887E524:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[6] = (49864u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887E558u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887E558u) goto L_0887E558;
    return;
L_0887E558:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E578;
      }
      goto L_0887E568;
    }
L_0887E568:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E578;
      }
      goto L_0887E570;
    }
L_0887E570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E578;
      }
      goto L_0887E578;
    }
L_0887E578:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E5A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[19] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 522 ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887E5F4;
      }
      goto L_0887E5E0;
    }
L_0887E5E0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 525 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E5F4;
      }
      goto L_0887E5EC;
    }
L_0887E5EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E5F8;
      }
      goto L_0887E5F4;
    }
L_0887E5F4:
    ctx.gpr[18] = (0u | 0u);
    goto L_0887E5F8;
L_0887E5F8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E61C;
      }
      goto L_0887E600;
    }
L_0887E600:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0887E614u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0887E614u) goto L_0887E614;
    return;
L_0887E614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E630;
      }
      goto L_0887E61C;
    }
L_0887E61C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0887E630u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0887E630u) goto L_0887E630;
    return;
L_0887E630:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0887E640u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0887E640u) goto L_0887E640;
    return;
L_0887E640:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887E654u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0887E654u) goto L_0887E654;
    return;
L_0887E654:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887E684;
      }
      goto L_0887E660;
    }
L_0887E660:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E684;
      }
      goto L_0887E66C;
    }
L_0887E66C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E690;
      }
      goto L_0887E684;
    }
L_0887E684:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    goto L_0887E690;
L_0887E690:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E6BC;
      }
      goto L_0887E6B0;
    }
L_0887E6B0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0887E6C0;
      }
      goto L_0887E6BC;
    }
L_0887E6BC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_0887E6C0;
L_0887E6C0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887E780;
      }
      goto L_0887E6C8;
    }
L_0887E6C8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E778;
      }
      goto L_0887E6E4;
    }
L_0887E6E4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E778;
      }
      goto L_0887E700;
    }
L_0887E700:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E778;
      }
      goto L_0887E71C;
    }
L_0887E71C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E778;
      }
      goto L_0887E738;
    }
L_0887E738:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E778;
      }
      goto L_0887E754;
    }
L_0887E754:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E778;
      }
      goto L_0887E770;
    }
L_0887E770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E7FC;
      }
      goto L_0887E778;
    }
L_0887E778:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0887E7FC;
      }
      goto L_0887E780;
    }
L_0887E780:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E7F8;
      }
      goto L_0887E79C;
    }
L_0887E79C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E7F8;
      }
      goto L_0887E7B8;
    }
L_0887E7B8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E7F8;
      }
      goto L_0887E7D4;
    }
L_0887E7D4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E7F8;
      }
      goto L_0887E7F0;
    }
L_0887E7F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E7FC;
      }
      goto L_0887E7F8;
    }
L_0887E7F8:
    ctx.gpr[6] = (0u | 0u);
    goto L_0887E7FC;
L_0887E7FC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E870;
      }
      goto L_0887E804;
    }
L_0887E804:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-519));
    ctx.gpr[6] = (ctx.gpr[17] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E870;
      }
      goto L_0887E814;
    }
L_0887E814:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887E840;
      }
      goto L_0887E820;
    }
L_0887E820:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887E858;
      }
      goto L_0887E828;
    }
L_0887E828:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0887E840;
      }
      goto L_0887E830;
    }
L_0887E830:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0887E858;
      }
      goto L_0887E838;
    }
L_0887E838:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E870;
      }
      goto L_0887E840;
    }
L_0887E840:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E850;
      }
      goto L_0887E84C;
    }
L_0887E84C:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887E850;
L_0887E850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E870;
      }
      goto L_0887E858;
    }
L_0887E858:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E868;
      }
      goto L_0887E864;
    }
L_0887E864:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887E868;
L_0887E868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E870;
      }
      goto L_0887E870;
    }
L_0887E870:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887E89C;
      }
      goto L_0887E894;
    }
L_0887E894:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887E8EC;
      }
      goto L_0887E89C;
    }
L_0887E89C:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_0887E8C8;
      }
      goto L_0887E8B4;
    }
L_0887E8B4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887E8EC;
      }
      goto L_0887E8C8;
    }
L_0887E8C8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E8EC;
      }
      goto L_0887E8E8;
    }
L_0887E8E8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887E8EC;
L_0887E8EC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E96C;
      }
      goto L_0887E8F4;
    }
L_0887E8F4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887E938;
      }
      goto L_0887E8FC;
    }
L_0887E8FC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887E930u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887E930u) goto L_0887E930;
    return;
L_0887E930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E96C;
      }
      goto L_0887E938;
    }
L_0887E938:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[6] = (49864u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887E96Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887E96Cu) goto L_0887E96C;
    return;
L_0887E96C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E98C;
      }
      goto L_0887E97C;
    }
L_0887E97C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E98C;
      }
      goto L_0887E984;
    }
L_0887E984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E98C;
      }
      goto L_0887E98C;
    }
L_0887E98C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E9B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[19] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1145 ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887EA04;
      }
      goto L_0887E9F0;
    }
L_0887E9F0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1148 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EA04;
      }
      goto L_0887E9FC;
    }
L_0887E9FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0887EA08;
      }
      goto L_0887EA04;
    }
L_0887EA04:
    ctx.gpr[18] = (0u | 0u);
    goto L_0887EA08;
L_0887EA08:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EA2C;
      }
      goto L_0887EA10;
    }
L_0887EA10:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0887EA24u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0887EA24u) goto L_0887EA24;
    return;
L_0887EA24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EA40;
      }
      goto L_0887EA2C;
    }
L_0887EA2C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0887EA40u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0887EA40u) goto L_0887EA40;
    return;
L_0887EA40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0887EA50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0887EA50u) goto L_0887EA50;
    return;
L_0887EA50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887EA64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x0887EA64u) goto L_0887EA64;
    return;
L_0887EA64:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887EA94;
      }
      goto L_0887EA70;
    }
L_0887EA70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EA94;
      }
      goto L_0887EA7C;
    }
L_0887EA7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EAA0;
      }
      goto L_0887EA94;
    }
L_0887EA94:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    goto L_0887EAA0;
L_0887EAA0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EACC;
      }
      goto L_0887EAC0;
    }
L_0887EAC0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0887EAD0;
      }
      goto L_0887EACC;
    }
L_0887EACC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_0887EAD0;
L_0887EAD0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887EB90;
      }
      goto L_0887EAD8;
    }
L_0887EAD8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EB88;
      }
      goto L_0887EAF4;
    }
L_0887EAF4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EB88;
      }
      goto L_0887EB10;
    }
L_0887EB10:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EB88;
      }
      goto L_0887EB2C;
    }
L_0887EB2C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EB88;
      }
      goto L_0887EB48;
    }
L_0887EB48:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EB88;
      }
      goto L_0887EB64;
    }
L_0887EB64:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EB88;
      }
      goto L_0887EB80;
    }
L_0887EB80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887EC0C;
      }
      goto L_0887EB88;
    }
L_0887EB88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0887EC0C;
      }
      goto L_0887EB90;
    }
L_0887EB90:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EC08;
      }
      goto L_0887EBAC;
    }
L_0887EBAC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EC08;
      }
      goto L_0887EBC8;
    }
L_0887EBC8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EC08;
      }
      goto L_0887EBE4;
    }
L_0887EBE4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EC08;
      }
      goto L_0887EC00;
    }
L_0887EC00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887EC0C;
      }
      goto L_0887EC08;
    }
L_0887EC08:
    ctx.gpr[6] = (0u | 0u);
    goto L_0887EC0C;
L_0887EC0C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EC80;
      }
      goto L_0887EC14;
    }
L_0887EC14:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1142));
    ctx.gpr[6] = (ctx.gpr[17] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EC80;
      }
      goto L_0887EC24;
    }
L_0887EC24:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887EC50;
      }
      goto L_0887EC30;
    }
L_0887EC30:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887EC68;
      }
      goto L_0887EC38;
    }
L_0887EC38:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0887EC50;
      }
      goto L_0887EC40;
    }
L_0887EC40:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0887EC68;
      }
      goto L_0887EC48;
    }
L_0887EC48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887EC80;
      }
      goto L_0887EC50;
    }
L_0887EC50:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887EC60;
      }
      goto L_0887EC5C;
    }
L_0887EC5C:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887EC60;
L_0887EC60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EC80;
      }
      goto L_0887EC68;
    }
L_0887EC68:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EC78;
      }
      goto L_0887EC74;
    }
L_0887EC74:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887EC78;
L_0887EC78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EC80;
      }
      goto L_0887EC80;
    }
L_0887EC80:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887ECAC;
      }
      goto L_0887ECA4;
    }
L_0887ECA4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887ECFC;
      }
      goto L_0887ECAC;
    }
L_0887ECAC:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_0887ECD8;
      }
      goto L_0887ECC4;
    }
L_0887ECC4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887ECFC;
      }
      goto L_0887ECD8;
    }
L_0887ECD8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ECFC;
      }
      goto L_0887ECF8;
    }
L_0887ECF8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887ECFC;
L_0887ECFC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ED7C;
      }
      goto L_0887ED04;
    }
L_0887ED04:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887ED48;
      }
      goto L_0887ED0C;
    }
L_0887ED0C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887ED40u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887ED40u) goto L_0887ED40;
    return;
L_0887ED40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ED7C;
      }
      goto L_0887ED48;
    }
L_0887ED48:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[6] = (49864u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887ED7Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887ED7Cu) goto L_0887ED7C;
    return;
L_0887ED7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ED9C;
      }
      goto L_0887ED8C;
    }
L_0887ED8C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ED9C;
      }
      goto L_0887ED94;
    }
L_0887ED94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ED9C;
      }
      goto L_0887ED9C;
    }
L_0887ED9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887EDC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[20] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 436 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887EE1C;
      }
      goto L_0887EE04;
    }
L_0887EE04:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 438 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EE1C;
      }
      goto L_0887EE10;
    }
L_0887EE10:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0887EE24;
      }
      goto L_0887EE1C;
    }
L_0887EE1C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0887EE24;
L_0887EE24:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887EE38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B890u>(ctx, &aot_mem) && ctx.pc == 0x0887EE38u) goto L_0887EE38;
    return;
L_0887EE38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887EE4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0887EE4Cu) goto L_0887EE4C;
    return;
L_0887EE4C:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 436 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887EE78;
      }
      goto L_0887EE5C;
    }
L_0887EE5C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 434 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 435 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887EEAC;
      }
      goto L_0887EE68;
    }
L_0887EE68:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EE8C;
      }
      goto L_0887EE70;
    }
L_0887EE70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EEAC;
      }
      goto L_0887EE78;
    }
L_0887EE78:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 437 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 438 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887EE70;
      }
      goto L_0887EE84;
    }
L_0887EE84:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EEAC;
      }
      goto L_0887EE8C;
    }
L_0887EE8C:
    ctx.gpr[31] = (0x0887EE94u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0887C974;
L_0887EE94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0887EEA4;
      }
      goto L_0887EE9C;
    }
L_0887EE9C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_0887EEA4;
L_0887EEA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EEAC;
      }
      goto L_0887EEAC;
    }
L_0887EEAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0887EED0;
      }
      goto L_0887EEB8;
    }
L_0887EEB8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0887EEDC;
      }
      goto L_0887EED0;
    }
L_0887EED0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_0887EEDC;
L_0887EEDC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887EFF4;
      }
      goto L_0887EEE4;
    }
L_0887EEE4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[18] = ctx.fpr[12] - ctx.fpr[15];
      if (branch_taken) {
          goto L_0887EF94;
      }
      goto L_0887EF00;
    }
L_0887EF00:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EFF4;
      }
      goto L_0887EF14;
    }
L_0887EF14:
    ctx.fpr[18] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EFF4;
      }
      goto L_0887EF2C;
    }
L_0887EF2C:
    ctx.fpr[18] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EFF4;
      }
      goto L_0887EF44;
    }
L_0887EF44:
    ctx.fpr[18] = ctx.fpr[16] + ctx.fpr[13];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EFF4;
      }
      goto L_0887EF5C;
    }
L_0887EF5C:
    ctx.fpr[18] = ctx.fpr[14] - ctx.fpr[17];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EFF4;
      }
      goto L_0887EF74;
    }
L_0887EF74:
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EFF4;
      }
      goto L_0887EF8C;
    }
L_0887EF8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887EFF4;
      }
      goto L_0887EF94;
    }
L_0887EF94:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EFF4;
      }
      goto L_0887EFA8;
    }
L_0887EFA8:
    ctx.fpr[17] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EFF4;
      }
      goto L_0887EFC0;
    }
L_0887EFC0:
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EFF4;
      }
      goto L_0887EFD8;
    }
L_0887EFD8:
    ctx.fpr[17] = ctx.fpr[16] + ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EFF4;
      }
      goto L_0887EFF0;
    }
L_0887EFF0:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887EFF4;
L_0887EFF4:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887F020;
      }
      goto L_0887F018;
    }
L_0887F018:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887F070;
      }
      goto L_0887F020;
    }
L_0887F020:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0887F04C;
      }
      goto L_0887F038;
    }
L_0887F038:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887F070;
      }
      goto L_0887F04C;
    }
L_0887F04C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F070;
      }
      goto L_0887F06C;
    }
L_0887F06C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887F070;
L_0887F070:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F0D4;
      }
      goto L_0887F078;
    }
L_0887F078:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[16];
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
      if (branch_taken) {
          goto L_0887F0B8;
      }
      goto L_0887F094;
    }
L_0887F094:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x0887F0B0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887F0B0u) goto L_0887F0B0;
    return;
L_0887F0B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F0D4;
      }
      goto L_0887F0B8;
    }
L_0887F0B8:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x0887F0D4u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887F0D4u) goto L_0887F0D4;
    return;
L_0887F0D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F0F4;
      }
      goto L_0887F0E4;
    }
L_0887F0E4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F0F4;
      }
      goto L_0887F0EC;
    }
L_0887F0EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F0F4;
      }
      goto L_0887F0F4;
    }
L_0887F0F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F11C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 1259u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887F15C;
      }
      goto L_0887F150;
    }
L_0887F150:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0887F164;
      }
      goto L_0887F15C;
    }
L_0887F15C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0887F164;
L_0887F164:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887F178u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B890u>(ctx, &aot_mem) && ctx.pc == 0x0887F178u) goto L_0887F178;
    return;
L_0887F178:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887F18Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x0887F18Cu) goto L_0887F18C;
    return;
L_0887F18C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0887F1B8;
      }
      goto L_0887F19C;
    }
L_0887F19C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = ctx.fpr[12] - ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0887F1C8;
      }
      goto L_0887F1B8;
    }
L_0887F1B8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = ctx.fpr[12] - ctx.fpr[15];
    goto L_0887F1C8;
L_0887F1C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F278;
      }
      goto L_0887F1E4;
    }
L_0887F1E4:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2D8;
      }
      goto L_0887F1F8;
    }
L_0887F1F8:
    ctx.fpr[19] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2D8;
      }
      goto L_0887F210;
    }
L_0887F210:
    ctx.fpr[19] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2D8;
      }
      goto L_0887F228;
    }
L_0887F228:
    ctx.fpr[19] = ctx.fpr[16] + ctx.fpr[13];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2D8;
      }
      goto L_0887F240;
    }
L_0887F240:
    ctx.fpr[19] = ctx.fpr[14] - ctx.fpr[18];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2D8;
      }
      goto L_0887F258;
    }
L_0887F258:
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[14];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2D8;
      }
      goto L_0887F270;
    }
L_0887F270:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0887F2D8;
      }
      goto L_0887F278;
    }
L_0887F278:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2D8;
      }
      goto L_0887F28C;
    }
L_0887F28C:
    ctx.fpr[18] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2D8;
      }
      goto L_0887F2A4;
    }
L_0887F2A4:
    ctx.fpr[18] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2D8;
      }
      goto L_0887F2BC;
    }
L_0887F2BC:
    ctx.fpr[18] = ctx.fpr[16] + ctx.fpr[13];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2D8;
      }
      goto L_0887F2D4;
    }
L_0887F2D4:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887F2D8;
L_0887F2D8:
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
          goto L_0887F304;
      }
      goto L_0887F2FC;
    }
L_0887F2FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887F354;
      }
      goto L_0887F304;
    }
L_0887F304:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0887F330;
      }
      goto L_0887F31C;
    }
L_0887F31C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887F354;
      }
      goto L_0887F330;
    }
L_0887F330:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F354;
      }
      goto L_0887F350;
    }
L_0887F350:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887F354;
L_0887F354:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F3A4;
      }
      goto L_0887F35C;
    }
L_0887F35C:
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[16];
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
      if (branch_taken) {
          goto L_0887F38C;
      }
      goto L_0887F370;
    }
L_0887F370:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0887F384u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887F384u) goto L_0887F384;
    return;
L_0887F384:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F3A4;
      }
      goto L_0887F38C;
    }
L_0887F38C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887F3A4u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887F3A4u) goto L_0887F3A4;
    return;
L_0887F3A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F3C4;
      }
      goto L_0887F3B4;
    }
L_0887F3B4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F3C4;
      }
      goto L_0887F3BC;
    }
L_0887F3BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F3C4;
      }
      goto L_0887F3C4;
    }
L_0887F3C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F3E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    ctx.gpr[20] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 417 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887F454;
      }
      goto L_0887F440;
    }
L_0887F440:
    ctx.gpr[6] = (0u | 87u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0887F460;
      }
      goto L_0887F44C;
    }
L_0887F44C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F46C;
      }
      goto L_0887F454;
    }
L_0887F454:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 422 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F46C;
      }
      goto L_0887F460;
    }
L_0887F460:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0887F474;
      }
      goto L_0887F46C;
    }
L_0887F46C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0887F474;
L_0887F474:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0887F484u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B890u>(ctx, &aot_mem) && ctx.pc == 0x0887F484u) goto L_0887F484;
    return;
L_0887F484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[21] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 414 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887F4E8;
      }
      goto L_0887F4B8;
    }
L_0887F4B8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 88 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 412 ? 1u : 0u);
        goto L_0887F4D8;
    }
    goto L_0887F4C4;
L_0887F4C4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 86 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F530;
      }
      goto L_0887F4D0;
    }
L_0887F4D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F530;
      }
      goto L_0887F4D8;
    }
L_0887F4D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F4D0;
      }
      goto L_0887F4E0;
    }
L_0887F4E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F530;
      }
      goto L_0887F4E8;
    }
L_0887F4E8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 419 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 422 ? 1u : 0u);
        goto L_0887F508;
    }
    goto L_0887F4F4;
L_0887F4F4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 417 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F4D0;
      }
      goto L_0887F500;
    }
L_0887F500:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F510;
      }
      goto L_0887F508;
    }
L_0887F508:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F530;
      }
      goto L_0887F510;
    }
L_0887F510:
    ctx.gpr[31] = (0x0887F518u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_0887C80C;
L_0887F518:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F528;
      }
      goto L_0887F520;
    }
L_0887F520:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_0887F528;
L_0887F528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F530;
      }
      goto L_0887F530;
    }
L_0887F530:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0887F574;
      }
      goto L_0887F544;
    }
L_0887F544:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0887F56C;
      }
      goto L_0887F564;
    }
L_0887F564:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0887F56C;
L_0887F56C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0887F580;
      }
      goto L_0887F574;
    }
L_0887F574:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    goto L_0887F580;
L_0887F580:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F598;
      }
      goto L_0887F590;
    }
L_0887F590:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0887F598;
L_0887F598:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F5B0;
      }
      goto L_0887F5A8;
    }
L_0887F5A8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0887F5B0;
L_0887F5B0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F74C;
      }
      goto L_0887F5B8;
    }
L_0887F5B8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0887F5C8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x0887F5C8u) goto L_0887F5C8;
    return;
L_0887F5C8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F668;
      }
      goto L_0887F5E0;
    }
L_0887F5E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F660;
      }
      goto L_0887F5F4;
    }
L_0887F5F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F660;
      }
      goto L_0887F608;
    }
L_0887F608:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F660;
      }
      goto L_0887F61C;
    }
L_0887F61C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F660;
      }
      goto L_0887F630;
    }
L_0887F630:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F660;
      }
      goto L_0887F644;
    }
L_0887F644:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F660;
      }
      goto L_0887F658;
    }
L_0887F658:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887F6C4;
      }
      goto L_0887F660;
    }
L_0887F660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887F6C4;
      }
      goto L_0887F668;
    }
L_0887F668:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F6C0;
      }
      goto L_0887F67C;
    }
L_0887F67C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F6C0;
      }
      goto L_0887F690;
    }
L_0887F690:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F6C0;
      }
      goto L_0887F6A4;
    }
L_0887F6A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F6C0;
      }
      goto L_0887F6B8;
    }
L_0887F6B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887F6C4;
      }
      goto L_0887F6C0;
    }
L_0887F6C0:
    ctx.gpr[5] = (0u | 0u);
    goto L_0887F6C4;
L_0887F6C4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F74C;
      }
      goto L_0887F6CC;
    }
L_0887F6CC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 88 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 412 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887F6EC;
      }
      goto L_0887F6D8;
    }
L_0887F6D8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 86 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F74C;
      }
      goto L_0887F6E4;
    }
L_0887F6E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0887F74C;
      }
      goto L_0887F6EC;
    }
L_0887F6EC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 422 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887F74C;
      }
      goto L_0887F6F4;
    }
L_0887F6F4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-412));
      if (branch_taken) {
          goto L_0887F74C;
      }
      goto L_0887F6FC;
    }
L_0887F6FC:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-808)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F714:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F728;
      }
      goto L_0887F724;
    }
L_0887F724:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887F728;
L_0887F728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F74C;
      }
      goto L_0887F730;
    }
L_0887F730:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F744;
      }
      goto L_0887F740;
    }
L_0887F740:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887F744;
L_0887F744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F74C;
      }
      goto L_0887F74C;
    }
L_0887F74C:
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
          goto L_0887F778;
      }
      goto L_0887F770;
    }
L_0887F770:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887F7C8;
      }
      goto L_0887F778;
    }
L_0887F778:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0887F7A4;
      }
      goto L_0887F790;
    }
L_0887F790:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887F7C8;
      }
      goto L_0887F7A4;
    }
L_0887F7A4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F7C8;
      }
      goto L_0887F7C4;
    }
L_0887F7C4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887F7C8;
L_0887F7C8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F828;
      }
      goto L_0887F7D0;
    }
L_0887F7D0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F808;
      }
      goto L_0887F7D8;
    }
L_0887F7D8:
    ctx.fpr[16] = ctx.fpr[24] + ctx.fpr[30];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x0887F800u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887F800u) goto L_0887F800;
    return;
L_0887F800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F828;
      }
      goto L_0887F808;
    }
L_0887F808:
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0887F828u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887F828u) goto L_0887F828;
    return;
L_0887F828:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F838;
      }
      goto L_0887F838;
    }
L_0887F838:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F878:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[20] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 427 ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887F8D8;
      }
      goto L_0887F8C4;
    }
L_0887F8C4:
    ctx.gpr[6] = (0u | 164u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0887F8E4;
      }
      goto L_0887F8D0;
    }
L_0887F8D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F8F0;
      }
      goto L_0887F8D8;
    }
L_0887F8D8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 432 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F8F0;
      }
      goto L_0887F8E4;
    }
L_0887F8E4:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0887F8F8;
      }
      goto L_0887F8F0;
    }
L_0887F8F0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0887F8F8;
L_0887F8F8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0887F90Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B890u>(ctx, &aot_mem) && ctx.pc == 0x0887F90Cu) goto L_0887F90C;
    return;
L_0887F90C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887F920u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0887F920u) goto L_0887F920;
    return;
L_0887F920:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F954;
      }
      goto L_0887F930;
    }
L_0887F930:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F954;
      }
      goto L_0887F93C;
    }
L_0887F93C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F960;
      }
      goto L_0887F954;
    }
L_0887F954:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    goto L_0887F960;
L_0887F960:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 424 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 429 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887F9A0;
      }
      goto L_0887F970;
    }
L_0887F970:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 165 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 422 ? 1u : 0u);
        goto L_0887F990;
    }
    goto L_0887F97C;
L_0887F97C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 163 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F9E4;
      }
      goto L_0887F988;
    }
L_0887F988:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F9E4;
      }
      goto L_0887F990;
    }
L_0887F990:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F988;
      }
      goto L_0887F998;
    }
L_0887F998:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F9E4;
      }
      goto L_0887F9A0;
    }
L_0887F9A0:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 432 ? 1u : 0u);
        goto L_0887F9BC;
    }
    goto L_0887F9A8;
L_0887F9A8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 427 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F988;
      }
      goto L_0887F9B4;
    }
L_0887F9B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F9C4;
      }
      goto L_0887F9BC;
    }
L_0887F9BC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F9E4;
      }
      goto L_0887F9C4;
    }
L_0887F9C4:
    ctx.gpr[31] = (0x0887F9CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0887C744;
L_0887F9CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0887F9DC;
      }
      goto L_0887F9D4;
    }
L_0887F9D4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_0887F9DC;
L_0887F9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F9E4;
      }
      goto L_0887F9E4;
    }
L_0887F9E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0887FA28;
      }
      goto L_0887F9F8;
    }
L_0887F9F8:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0887FA20;
      }
      goto L_0887FA18;
    }
L_0887FA18:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_0887FA20;
L_0887FA20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0887FA34;
      }
      goto L_0887FA28;
    }
L_0887FA28:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    goto L_0887FA34;
L_0887FA34:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FA4C;
      }
      goto L_0887FA44;
    }
L_0887FA44:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0887FA4C;
L_0887FA4C:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FA64;
      }
      goto L_0887FA5C;
    }
L_0887FA5C:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0887FA64;
L_0887FA64:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887FBD8;
      }
      goto L_0887FA6C;
    }
L_0887FA6C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887FAFC;
      }
      goto L_0887FA74;
    }
L_0887FA74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FAF4;
      }
      goto L_0887FA88;
    }
L_0887FA88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FAF4;
      }
      goto L_0887FA9C;
    }
L_0887FA9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FAF4;
      }
      goto L_0887FAB0;
    }
L_0887FAB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FAF4;
      }
      goto L_0887FAC4;
    }
L_0887FAC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FAF4;
      }
      goto L_0887FAD8;
    }
L_0887FAD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FAF4;
      }
      goto L_0887FAEC;
    }
L_0887FAEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887FB58;
      }
      goto L_0887FAF4;
    }
L_0887FAF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0887FB58;
      }
      goto L_0887FAFC;
    }
L_0887FAFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FB54;
      }
      goto L_0887FB10;
    }
L_0887FB10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FB54;
      }
      goto L_0887FB24;
    }
L_0887FB24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FB54;
      }
      goto L_0887FB38;
    }
L_0887FB38:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FB54;
      }
      goto L_0887FB4C;
    }
L_0887FB4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887FB58;
      }
      goto L_0887FB54;
    }
L_0887FB54:
    ctx.gpr[6] = (0u | 0u);
    goto L_0887FB58;
L_0887FB58:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FBD8;
      }
      goto L_0887FB60;
    }
L_0887FB60:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 165 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 422 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887FB80;
      }
      goto L_0887FB6C;
    }
L_0887FB6C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 163 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887FBD8;
      }
      goto L_0887FB78;
    }
L_0887FB78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887FBD8;
      }
      goto L_0887FB80;
    }
L_0887FB80:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 432 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887FBD8;
      }
      goto L_0887FB88;
    }
L_0887FB88:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-422));
      if (branch_taken) {
          goto L_0887FBD8;
      }
      goto L_0887FB90;
    }
L_0887FB90:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-768)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FBA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887FBB8;
      }
      goto L_0887FBB4;
    }
L_0887FBB4:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887FBB8;
L_0887FBB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FBD8;
      }
      goto L_0887FBC0;
    }
L_0887FBC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FBD0;
      }
      goto L_0887FBCC;
    }
L_0887FBCC:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887FBD0;
L_0887FBD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FBD8;
      }
      goto L_0887FBD8;
    }
L_0887FBD8:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887FC04;
      }
      goto L_0887FBFC;
    }
L_0887FBFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887FC54;
      }
      goto L_0887FC04;
    }
L_0887FC04:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0887FC30;
      }
      goto L_0887FC1C;
    }
L_0887FC1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887FC54;
      }
      goto L_0887FC30;
    }
L_0887FC30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FC54;
      }
      goto L_0887FC50;
    }
L_0887FC50:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887FC54;
L_0887FC54:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FCB4;
      }
      goto L_0887FC5C;
    }
L_0887FC5C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FC94;
      }
      goto L_0887FC64;
    }
L_0887FC64:
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[0];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[31] = (0x0887FC8Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887FC8Cu) goto L_0887FC8C;
    return;
L_0887FC8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FCB4;
      }
      goto L_0887FC94;
    }
L_0887FC94:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x0887FCB4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x0887FCB4u) goto L_0887FCB4;
    return;
L_0887FCB4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FCC4;
      }
      goto L_0887FCC4;
    }
L_0887FCC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FCF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[20] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 178 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887FD48;
      }
      goto L_0887FD34;
    }
L_0887FD34:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 177 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887FD60;
      }
      goto L_0887FD40;
    }
L_0887FD40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FD54;
      }
      goto L_0887FD48;
    }
L_0887FD48:
    ctx.gpr[6] = (0u | 433u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0887FD60;
      }
      goto L_0887FD54;
    }
L_0887FD54:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0887FD68;
      }
      goto L_0887FD60;
    }
L_0887FD60:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0887FD68;
L_0887FD68:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887FD7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B890u>(ctx, &aot_mem) && ctx.pc == 0x0887FD7Cu) goto L_0887FD7C;
    return;
L_0887FD7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887FD90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0887FD90u) goto L_0887FD90;
    return;
L_0887FD90:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 178 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887FDB4;
      }
      goto L_0887FDA0;
    }
L_0887FDA0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 176 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887FDE8;
      }
      goto L_0887FDAC;
    }
L_0887FDAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FDE8;
      }
      goto L_0887FDB4;
    }
L_0887FDB4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 432 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 434 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887FDE8;
      }
      goto L_0887FDC0;
    }
L_0887FDC0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FDE8;
      }
      goto L_0887FDC8;
    }
L_0887FDC8:
    ctx.gpr[31] = (0x0887FDD0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0887C974;
L_0887FDD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0887FDE0;
      }
      goto L_0887FDD8;
    }
L_0887FDD8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_0887FDE0;
L_0887FDE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FDE8;
      }
      goto L_0887FDE8;
    }
L_0887FDE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0887FE2C;
      }
      goto L_0887FDFC;
    }
L_0887FDFC:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0887FE24;
      }
      goto L_0887FE1C;
    }
L_0887FE1C:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_0887FE24;
L_0887FE24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0887FE38;
      }
      goto L_0887FE2C;
    }
L_0887FE2C:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_0887FE38;
L_0887FE38:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FE50;
      }
      goto L_0887FE48;
    }
L_0887FE48:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0887FE50;
L_0887FE50:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FE68;
      }
      goto L_0887FE60;
    }
L_0887FE60:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0887FE68;
L_0887FE68:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887FF60;
      }
      goto L_0887FE70;
    }
L_0887FE70:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FF0C;
      }
      goto L_0887FE8C;
    }
L_0887FE8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF60;
      }
      goto L_0887FEA0;
    }
L_0887FEA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF60;
      }
      goto L_0887FEB4;
    }
L_0887FEB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF60;
      }
      goto L_0887FEC8;
    }
L_0887FEC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF60;
      }
      goto L_0887FEDC;
    }
L_0887FEDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF60;
      }
      goto L_0887FEF0;
    }
L_0887FEF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF60;
      }
      goto L_0887FF04;
    }
L_0887FF04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887FF60;
      }
      goto L_0887FF0C;
    }
L_0887FF0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF60;
      }
      goto L_0887FF20;
    }
L_0887FF20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF60;
      }
      goto L_0887FF34;
    }
L_0887FF34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF60;
      }
      goto L_0887FF48;
    }
L_0887FF48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF60;
      }
      goto L_0887FF5C;
    }
L_0887FF5C:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887FF60;
L_0887FF60:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887FF8C;
      }
      goto L_0887FF84;
    }
L_0887FF84:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887FFDC;
      }
      goto L_0887FF8C;
    }
L_0887FF8C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0887FFB8;
      }
      goto L_0887FFA4;
    }
L_0887FFA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887FFDC;
      }
      goto L_0887FFB8;
    }
L_0887FFB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FFDC;
      }
      goto L_0887FFD8;
    }
L_0887FFD8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887FFDC;
L_0887FFDC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 4u, 0x0888003Cu>(ctx, &aot_mem); return;
      }
      goto L_0887FFE4;
    }
L_0887FFE4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 3u, 0x0888001Cu>(ctx, &aot_mem); return;
      }
      goto L_0887FFEC;
    }
L_0887FFEC:
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[0];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08880000u; return;
}

void recomp_unit_0030(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0030_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_30(Runtime &runtime) {
    runtime.register_generated_unit(30u, 0x0887C000u, 16384u, &recomp_unit_0030, &recomp_unit_0030_entry);
    runtime.register_function(0x0887C000u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C020u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C02Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C044u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C050u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C078u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C090u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C0E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C0ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C0F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C104u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C110u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C120u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C128u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C134u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C13Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C144u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C154u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C180u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C1D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C1DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C1E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C1F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C20Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C214u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C21Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C22Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C258u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C304u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C314u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C344u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C40Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C440u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C500u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C530u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C540u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C554u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C56Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C574u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C578u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C580u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C604u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C60Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C61Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C62Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C634u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C640u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C664u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C668u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C67Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C690u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C69Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C710u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C744u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C750u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C75Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C788u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C790u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C79Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C800u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C804u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C80Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C82Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C838u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C864u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C86Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C878u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C884u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C894u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C898u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C900u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C910u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C918u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C92Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C944u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C958u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C960u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C964u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C974u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA44u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB44u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCD4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CDBCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CDCCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CDD4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CDE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CE28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CE30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CFC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CFD4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CFF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D008u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D028u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D164u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D16Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D1A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D1ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D20Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D218u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D220u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D230u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D25Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D274u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D27Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D284u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D28Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D294u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D29Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D324u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D344u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D35Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D364u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D37Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D380u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D38Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D394u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D410u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D418u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D430u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D444u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D464u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D468u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D470u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D490u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D528u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D570u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D57Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D584u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D588u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D590u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D608u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D620u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D62Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D644u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D650u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D65Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D668u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D66Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D674u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D690u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D6ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D6C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D6E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D700u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D71Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D724u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D72Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D748u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D764u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D780u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D79Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D80Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D810u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D818u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D83Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D844u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D85Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D870u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D890u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D894u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D89Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D910u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D920u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D928u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D930u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D95Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D99Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DACCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD44u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE18u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DED0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DED8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E010u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E018u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E024u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E028u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E030u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E03Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E040u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E048u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E06Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E074u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E08Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E0A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E0C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E0C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E0CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E0E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E104u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E10Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E128u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E138u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E140u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E148u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E16Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E1B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E1C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E1C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E1CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E1D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E1E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E1F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E204u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E214u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E224u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E230u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E23Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E254u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E260u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E26Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E278u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E290u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E29Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E314u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E330u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E34Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E368u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E370u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E378u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E394u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E3B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E3CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E3E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E3F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E3F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E3FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E40Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E424u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E42Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E438u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E43Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E444u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E450u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E454u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E45Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E480u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E488u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E51Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E524u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E558u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E568u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E570u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E578u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E5A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E5E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E5ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E5F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E5F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E600u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E614u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E61Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E630u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E640u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E654u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E660u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E66Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E684u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E690u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E700u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E71Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E738u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E754u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E770u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E778u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E780u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E79Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E804u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E814u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E820u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E828u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E830u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E838u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E840u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E84Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E850u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E858u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E864u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E868u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E870u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E894u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E89Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E930u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E938u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E96Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E97Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E984u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E98Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EACCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EDC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EED0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF44u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F018u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F020u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F038u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F04Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F06Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F070u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F078u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F094u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F11Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F150u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F15Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F164u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F178u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F18Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F19Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F210u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F228u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F240u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F258u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F270u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F278u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F28Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F304u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F31Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F330u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F350u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F354u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F35Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F370u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F384u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F38Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F440u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F44Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F454u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F460u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F46Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F474u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F484u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F500u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F508u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F510u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F518u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F520u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F528u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F530u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F544u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F564u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F56Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F574u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F580u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F590u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F598u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F608u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F61Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F630u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F644u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F658u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F660u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F668u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F67Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F690u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F714u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F724u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F728u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F730u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F740u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F744u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F74Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F770u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F778u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F790u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F800u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F808u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F828u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F838u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F878u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F90Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F920u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F930u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F93Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F954u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F960u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F970u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F97Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F988u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F990u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F998u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA18u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA44u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBCCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFECu, &recomp_unit_0030, "recomp_unit_0030");
}
} // namespace psprecomp
